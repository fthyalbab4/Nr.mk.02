#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);

    gm82_decoded_sound sounds[2];
    memset(sounds, 0, sizeof(sounds));
    snprintf(sounds[0].name, sizeof(sounds[0].name), "snd_jump");
    snprintf(sounds[1].name, sizeof(sounds[1].name), "snd_coin");
    gm82_decoded_sound_list sound_list = {sounds, 2};

    gm82_decoded_font fonts[2];
    memset(fonts, 0, sizeof(fonts));
    snprintf(fonts[0].name, sizeof(fonts[0].name), "fnt_ui");
    snprintf(fonts[0].font_name, sizeof(fonts[0].font_name), "Arial");
    snprintf(fonts[1].name, sizeof(fonts[1].name), "fnt_title");
    snprintf(fonts[1].font_name, sizeof(fonts[1].font_name), "Verdana");
    gm82_decoded_font_list font_list = {fonts, 2};

    gm82_runtime_bind_resources(&rt, &sound_list, &font_list);
    assert(gml_sound_find("snd_jump") == 0.0);
    assert(gml_sound_find("snd_coin") == 1.0);
    assert(gml_sound_find("missing_sound") == -1.0);
    assert(gml_font_find("fnt_ui") == 0.0);
    assert(gml_font_find("fnt_title") == 1.0);
    assert(gml_font_find("missing_font") == -1.0);

    gm82_runtime_cleanup(&rt);
    puts("RESOURCE_NAME_LOOKUP_PASS");
    return 0;
}
