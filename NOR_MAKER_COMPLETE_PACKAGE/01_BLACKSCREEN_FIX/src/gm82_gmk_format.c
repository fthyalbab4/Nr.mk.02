#include "gm82_int_read.h"
#include "gm82_gmk_format.h"
#include <string.h>

gm82_gmk_probe_result gm82_gmk_probe(const uint8_t *data, size_t size) {
    gm82_gmk_probe_result r;
    memset(&r, 0, sizeof(r));
    r.status = GM82_GMK_PARSE_INVALID;
    r.error_code = "buffer_too_small";

    if (!data || size < 12) return r;

    int32_t magic = gm82_read_i32le(data);
    int32_t version = gm82_read_i32le(data + 4);
    int32_t app_id = gm82_read_i32le(data + 8);

    r.magic = magic;
    r.version = version;
    r.app_id = app_id;
    r.header_bytes = 12;

    if (magic != 1234321) {
        r.error_code = "bad_magic";
        return r;
    }
    if (version < 400 || version > 820) {
        r.error_code = "unsupported_version";
        return r;
    }

    if (version >= 810) r.format_kind = GM82_GMK_FORMAT_GM81;
    else if (version >= 700) r.format_kind = GM82_GMK_FORMAT_GM7_GM8;
    else if (version >= 500) r.format_kind = GM82_GMK_FORMAT_GM5_GM6;
    else r.format_kind = GM82_GMK_FORMAT_GM4;

    r.status = GM82_GMK_PARSE_PARTIAL;   /* header ok, full decode still required */
    r.error_code = NULL;
    return r;
}
