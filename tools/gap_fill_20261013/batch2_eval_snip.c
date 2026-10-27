if (strcmp(id, "esign") == 0) {
            *out = gml_esign(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "invlerp") == 0) {
            *out = gml_invlerp(arg, nargs >= 2 ? args[1] : 1, nargs >= 3 ? args[2] : 0); return true;
        }
        if (strcmp(id, "gauss") == 0) {
            *out = gml_gauss(arg, nargs >= 2 ? args[1] : 1); return true;
        }
        if (strcmp(id, "angle_wrap") == 0) {
            *out = gml_angle_wrap(arg); return true;
        }
        if (strcmp(id, "angle_normalize") == 0) {
            *out = gml_angle_normalize(arg); return true;
        }
        if (strcmp(id, "arcsin") == 0) {
            *out = gml_arcsin(arg); return true;
        }
        if (strcmp(id, "arccos") == 0) {
            *out = gml_arccos(arg); return true;
        }
        if (strcmp(id, "is_equal") == 0) {
            *out = gml_is_equal(arg, nargs >= 2 ? args[1] : 0); return true;
        }
        if (strcmp(id, "random_color") == 0) {
            *out = gml_random_color(); return true;
        }
        if (strcmp(id, "object_is_child_of") == 0) {
            *out = gml_object_is_child_of(arg, nargs >= 2 ? args[1] : -1); return true;
        }
        if (strcmp(id, "string_width") == 0) {
            const char *s = (p->str_mask & 1) ? p->str_args[0] : "";
            *out = gml_string_width(s); return true;
        }
        if (strcmp(id, "string_height") == 0) {
            const char *s = (p->str_mask & 1) ? p->str_args[0] : "";
            *out = gml_string_height(s); return true;
        }
        if (strcmp(id, "string_letters") == 0) {
            const char *s = (p->str_mask & 1) ? p->str_args[0] : "";
            *out = gml_string_letters(s); return true;
        }
        if (strcmp(id, "string_pad") == 0) {
            *out = gml_string_pad(arg, nargs >= 2 ? args[1] : 1); return true;
        }
        if (strcmp(id, "string_trim") == 0) {
            const char *s = (p->str_mask & 1) ? p->str_args[0] : "";
            *out = gml_string_trim(s); return true;
        }
