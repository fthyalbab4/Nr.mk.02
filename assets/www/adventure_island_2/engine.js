// Engine.js - Core NES graphics, palette and rendering system for Adventure Island II

class NESGraphicsEngine {
    constructor(canvasId) {
        this.canvas = typeof document !== 'undefined' ? document.getElementById(canvasId) : null;
        this.ctx = this.canvas ? this.canvas.getContext('2d') : null;
        this.width = 256;
        this.height = 240;

        if (this.ctx) {
            this.imgData = this.ctx.createImageData(this.width, this.height);
            this.buf = new ArrayBuffer(this.imgData.data.length);
            this.buf8 = new Uint8ClampedArray(this.buf);
            this.data32 = new Uint32Array(this.buf);
        }

        // Default NES System Master Palette (RGB values)
        this.nesPaletteRGB = [
            [0x66,0x66,0x66], [0x00,0x2A,0x88], [0x14,0x12,0xA7], [0x3B,0x00,0xA4],
            [0x5C,0x00,0x7E], [0x6E,0x00,0x40], [0x6C,0x06,0x00], [0x56,0x1D,0x00],
            [0x33,0x35,0x00], [0x0B,0x48,0x00], [0x00,0x52,0x00], [0x00,0x4F,0x08],
            [0x00,0x40,0x4D], [0x00,0x00,0x00], [0x00,0x00,0x00], [0x00,0x00,0x00],

            [0xAD,0xAD,0xAD], [0x15,0x5F,0xD9], [0x42,0x40,0xFF], [0x75,0x27,0xFE],
            [0xA0,0x1A,0xCC], [0xB7,0x1E,0x7B], [0xB5,0x31,0x20], [0x99,0x4E,0x00],
            [0x6B,0x6D,0x00], [0x26,0x87,0x00], [0x00,0x93,0x00], [0x00,0x8F,0x32],
            [0x00,0x7C,0x8D], [0x00,0x00,0x00], [0x00,0x00,0x00], [0x00,0x00,0x00],

            [0xFF,0xFF,0xFF], [0x64,0xB0,0xFF], [0x92,0x90,0xFF], [0xC6,0x76,0xFF],
            [0xF3,0x6A,0xFF], [0xFE,0x6E,0xCC], [0xFE,0x81,0x70], [0xEA,0x9E,0x22],
            [0xBC,0xBE,0x00], [0x78,0xE2,0x00], [0x48,0xEE,0x3B], [0x3B,0xEA,0x88],
            [0x3B,0xCD,0xE5], [0x4D,0x4D,0x4D], [0x00,0x00,0x00], [0x00,0x00,0x00],

            [0xFF,0xFF,0xFF], [0xC0,0xE0,0xFF], [0xD3,0xD2,0xFF], [0xE8,0xC8,0xFF],
            [0xFA,0xC2,0xFF], [0xFF,0xC4,0xEA], [0xFF,0xCC,0xC5], [0xF7,0xD8,0xA5],
            [0xE4,0xE5,0x94], [0xC9,0xF4,0x94], [0xB5,0xF9,0xAC], [0xB0,0xF8,0xCD],
            [0xB0,0xF0,0xF4], [0xB8,0xB8,0xB8], [0x00,0x00,0x00], [0x00,0x00,0x00]
        ];

        // Active Palette Tables (4 background palettes, 4 sprite palettes)
        this.bgPalettes = [
            [0x0f, 0x19, 0x29, 0x39], // Sky / Sea
            [0x0f, 0x07, 0x17, 0x27], // Ground / Palm Trees
            [0x0f, 0x02, 0x12, 0x22], // Rocks / Cave
            [0x0f, 0x09, 0x19, 0x29]  // Cloud / Ice
        ];

        this.sprPalettes = [
            [0x0f, 0x16, 0x27, 0x30], // Master Higgins / Ax
            [0x0f, 0x11, 0x21, 0x31], // Blue Camptosaurus
            [0x0f, 0x16, 0x26, 0x36], // Red Pterodactyl
            [0x0f, 0x0f, 0x10, 0x30]  // Items / Enemies
        ];

        this.chrData = null;
        this.scrollX = 0;
        this.scrollY = 0;
    }

    setCHRData(chrBytes) {
        this.chrData = chrBytes;
    }

    clear(colorIndex = 0x0f) {
        if (!this.data32) return;
        const rgb = this.nesPaletteRGB[colorIndex & 0x3f];
        const val = (255 << 24) | (rgb[2] << 16) | (rgb[1] << 8) | rgb[0];
        this.data32.fill(val);
    }

    drawPixel(x, y, nesColorIdx) {
        if (x < 0 || x >= 256 || y < 0 || y >= 240 || !this.data32) return;
        const rgb = this.nesPaletteRGB[nesColorIdx & 0x3f];
        const pixelPos = y * 256 + x;
        this.data32[pixelPos] = (255 << 24) | (rgb[2] << 16) | (rgb[1] << 8) | rgb[0];
    }

    drawTile(tileIndex, screenX, screenY, paletteIdx = 0, isSprite = false, flipX = false, flipY = false) {
        if (!this.chrData) return;
        const tileOffset = tileIndex * 16;
        const palette = isSprite ? this.sprPalettes[paletteIdx] : this.bgPalettes[paletteIdx];

        for (let py = 0; py < 8; py++) {
            const dy = flipY ? 7 - py : py;
            const plane0 = this.chrData[tileOffset + dy];
            const plane1 = this.chrData[tileOffset + dy + 8];

            for (let px = 0; px < 8; px++) {
                const dx = flipX ? px : 7 - px;
                const bit0 = (plane0 >> dx) & 1;
                const bit1 = (plane1 >> dx) & 1;
                const colorNum = (bit1 << 1) | bit0;

                if (colorNum > 0 || !isSprite) {
                    const drawX = screenX + px;
                    const drawY = screenY + py;
                    const nesColor = palette[colorNum];
                    this.drawPixel(drawX, drawY, nesColor);
                }
            }
        }
    }

    renderBuffer() {
        if (!this.ctx) return;
        this.imgData.data.set(this.buf8);
        this.ctx.putImageData(this.imgData, 0, 0);
    }
}

if (typeof module !== 'undefined') {
    module.exports = { NESGraphicsEngine };
}
