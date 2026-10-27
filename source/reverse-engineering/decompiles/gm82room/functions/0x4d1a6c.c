// rea decompile_all
// name: FUN_004d1a6c
// address: 0x4d1a6c
// body: available
// range: 0x4d1a6c-0x4d1a88 inclusive
// range: 0x4d1b8a-0x4d1df4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d1a6c(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;

  *param_3 = 0x17;
  switch(param_2 & 0xff) {
  default:
    *(undefined4 *)(param_3 + 4) = 0;
    iVar1 = 0;
    break;
  case 2:
  case 3:
  case 4:
    *(undefined4 *)(param_3 + 4) = 1;
    iVar1 = 2;
    break;
  case 5:
  case 6:
  case 7:
    *(undefined4 *)(param_3 + 4) = 2;
    iVar1 = 5;
    break;
  case 8:
  case 9:
  case 10:
    *(undefined4 *)(param_3 + 4) = 3;
    iVar1 = 8;
    break;
  case 0xb:
  case 0xc:
  case 0xd:
    *(undefined4 *)(param_3 + 4) = 4;
    iVar1 = 0xb;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
    *(undefined4 *)(param_3 + 4) = 5;
    iVar1 = 0xe;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
    *(undefined4 *)(param_3 + 4) = 6;
    iVar1 = 0x11;
    break;
  case 0x14:
  case 0x15:
    *(undefined4 *)(param_3 + 4) = 7;
    iVar1 = 0x14;
    break;
  case 0x16:
  case 0x17:
    *(undefined4 *)(param_3 + 4) = 8;
    iVar1 = 0x16;
    break;
  case 0x18:
  case 0x19:
    *(undefined4 *)(param_3 + 4) = 9;
    iVar1 = 0x18;
    break;
  case 0x1a:
  case 0x1b:
    *(undefined4 *)(param_3 + 4) = 10;
    iVar1 = 0x1a;
    break;
  case 0x1c:
  case 0x1d:
    *(undefined4 *)(param_3 + 4) = 0xb;
    iVar1 = 0x1c;
    break;
  case 0x1e:
  case 0x1f:
    *(undefined4 *)(param_3 + 4) = 0xc;
    iVar1 = 0x1e;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
    *(undefined4 *)(param_3 + 4) = 0xd;
    iVar1 = 0x20;
    break;
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
    *(undefined4 *)(param_3 + 4) = 0xe;
    iVar1 = 0x24;
    break;
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
    *(undefined4 *)(param_3 + 4) = 0xf;
    iVar1 = 0x28;
    break;
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    *(undefined4 *)(param_3 + 4) = 0x10;
    iVar1 = 0x2c;
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
    *(undefined4 *)(param_3 + 4) = 0x11;
    iVar1 = 0x30;
    break;
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    *(undefined4 *)(param_3 + 4) = 0x12;
    iVar1 = 0x34;
    break;
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
    *(undefined4 *)(param_3 + 4) = 0x13;
    iVar1 = 0x38;
    break;
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
    *(undefined4 *)(param_3 + 4) = 0x14;
    iVar1 = 0x3c;
    break;
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
    *(undefined4 *)(param_3 + 4) = 0x15;
    iVar1 = 0x40;
    break;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
    *(undefined4 *)(param_3 + 4) = 0x16;
    iVar1 = 0x44;
    break;
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
    *(undefined4 *)(param_3 + 4) = 0x17;
    iVar1 = 0x48;
    break;
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
    *(undefined4 *)(param_3 + 4) = 0x18;
    iVar1 = 0x4c;
    break;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
    *(undefined4 *)(param_3 + 4) = 0x19;
    iVar1 = 0x50;
    break;
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
    *(undefined4 *)(param_3 + 4) = 0x1a;
    iVar1 = 0x54;
    break;
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
    *(undefined4 *)(param_3 + 4) = 0x1b;
    iVar1 = 0x58;
    break;
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    *(undefined4 *)(param_3 + 4) = 0x1c;
    iVar1 = 0x5c;
    break;
  case 0x60:
    *(undefined4 *)(param_3 + 4) = 0x1d;
    iVar1 = 0x60;
    break;
  case 0x61:
    *(undefined4 *)(param_3 + 4) = 0x1e;
    iVar1 = 0x61;
    break;
  case 0x62:
    *(undefined4 *)(param_3 + 4) = 0x1f;
    iVar1 = 0x62;
    break;
  case 99:
    *(undefined4 *)(param_3 + 4) = 0x20;
    iVar1 = 99;
    break;
  case 100:
    *(undefined4 *)(param_3 + 4) = 0x21;
    iVar1 = 100;
    break;
  case 0x65:
    *(undefined4 *)(param_3 + 4) = 0x22;
    iVar1 = 0x65;
    break;
  case 0x66:
    *(undefined4 *)(param_3 + 4) = 0x23;
    iVar1 = 0x66;
    break;
  case 0x67:
    *(undefined4 *)(param_3 + 4) = 0x24;
    iVar1 = 0x67;
    break;
  case 0x68:
    *(undefined4 *)(param_3 + 4) = 0x25;
    iVar1 = 0x68;
  }
  *(uint *)(param_3 + 8) = ((param_2 & 0x7f) - iVar1) + 1;
  return;
}
