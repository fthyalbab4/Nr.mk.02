        if (gm82_gm82core_try_stub(id, out)) return true;
        if (strcmp(id, "color_blend") == 0) { *out = gml_color_blend(arg, nargs>=2?args[1]:0, nargs>=3?args[2]:0.5); return true; }
        if (strcmp(id, "color_get_luminance") == 0) { *out = gml_color_get_luminance(arg); return true; }
        if (strcmp(id, "gauss_range") == 0) { *out = gml_gauss_range(arg, nargs>=2?args[1]:1); return true; }
        if (strcmp(id, "envelerp") == 0) { *out = gml_envelerp(arg, nargs>=2?args[1]:1, nargs>=3?args[2]:0); return true; }
        if (strcmp(id, "make_color_hsv_standard") == 0) { *out = gml_make_color_hsv_standard(arg, nargs>=2?args[1]:1, nargs>=3?args[2]:1); return true; }
        if (strcmp(id, "merge_color_corrected") == 0) { *out = gml_merge_color_corrected(arg, nargs>=2?args[1]:0, nargs>=3?args[2]:0.5); return true; }
        if (strcmp(id, "irandom_fresh") == 0) { *out = gml_irandom_fresh(arg); return true; }
        if (strcmp(id, "is_undefined") == 0) { *out = gml_is_undefined(arg); return true; }
        if (strcmp(id, "outside_room") == 0) { *out = gml_outside_room(); return true; }
        if (strcmp(id, "position_free") == 0) { *out = gml_position_free(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "collision_check_fast") == 0) { *out = gml_collision_check_fast(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "path_ease") == 0) { *out = gml_path_ease(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "object_other_is_child_of") == 0) { *out = gml_object_other_is_child_of(arg); return true; }
        if (strcmp(id, "instance_create_moving_ext") == 0) { *out = gml_instance_create_moving_ext(args[0],args[1],args[2],args[3],args[4], nargs>=6?args[5]:0, nargs>=7?args[6]:270); return true; }
        if (strcmp(id, "instance_some") == 0) { *out = gml_instance_some(arg); return true; }
        if (strcmp(id, "filename_remove_ext") == 0) { *out = gml_filename_remove_ext((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "string_ord_at") == 0) { *out = gml_string_ord_at((p->str_mask&1)?p->str_args[0]:"", nargs>=2?args[1]:1); return true; }
        if (strcmp(id, "string_hexdigits") == 0) { *out = gml_string_hexdigits((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "string_number") == 0) { *out = gml_string_number((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "string_copy_end") == 0) { *out = gml_string_copy_end((p->str_mask&1)?p->str_args[0]:"", nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "string_delete_end") == 0) { *out = gml_string_delete_end((p->str_mask&1)?p->str_args[0]:"", nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "string_truncate") == 0) { *out = gml_string_truncate((p->str_mask&1)?p->str_args[0]:"", nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "string_magnitude") == 0) { *out = gml_string_magnitude(arg); return true; }
        if (strcmp(id, "str_cat") == 0) { *out = gml_str_cat((p->str_mask&1)?p->str_args[0]:"", (p->str_mask&2)?p->str_args[1]:""); return true; }
        if (strcmp(id, "str_sep") == 0) { *out = gml_str_sep((p->str_mask&1)?p->str_args[0]:"", (p->str_mask&2)?p->str_args[1]:"", (p->str_mask&4)?p->str_args[2]:""); return true; }
        if (strcmp(id, "string_better") == 0) { *out = gml_string_better(arg); return true; }
        if (strcmp(id, "directory_previous") == 0) { *out = gml_directory_previous((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "pick") == 0) { *out = gml_pick(arg); return true; }
        if (strcmp(id, "unpick") == 0) { *out = gml_unpick(arg); return true; }
        if (strcmp(id, "date_get_timestamp") == 0) { *out = gml_date_get_timestamp(); return true; }
