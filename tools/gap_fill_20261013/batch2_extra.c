/* --- source/unpacked/gm82core batch2: math/strings helpers (clean-room) --- */
double gml_esign(double val, double defv) {
    if (val > 0) return 1.0;
    if (val < 0) return -1.0;
    return defv;
}
double gml_invlerp(double a, double b, double v) {
    if (b == a) return 0.0;
    return (v - a) / (b - a);
}
double gml_gauss(double mean, double deviation) {
    double u1 = ((double)rand() + 1.0) / ((double)RAND_MAX + 2.0);
    double u2 = ((double)rand() + 1.0) / ((double)RAND_MAX + 2.0);
    double z = sqrt(-2.0 * log(u1)) * cos(2.0 * 3.14159265358979323846 * u2);
    return mean + z * deviation;
}
double gml_angle_wrap(double ang) {
    while (ang >= 360.0) ang -= 360.0;
    while (ang < 0.0) ang += 360.0;
    return ang;
}
double gml_angle_normalize(double ang) {
    ang = gml_angle_wrap(ang);
    if (ang > 180.0) ang -= 360.0;
    return ang;
}
double gml_arcsin(double x) {
    if (x < -1) x = -1; if (x > 1) x = 1;
    return asin(x) * 180.0 / 3.14159265358979323846;
}
double gml_arccos(double x) {
    if (x < -1) x = -1; if (x > 1) x = 1;
    return acos(x) * 180.0 / 3.14159265358979323846;
}
double gml_is_equal(double a, double b) {
    double d = a - b;
    if (d < 0) d = -d;
    return d <= 0.0000001 ? 1.0 : 0.0;
}
double gml_random_color(void) {
    int r = rand() % 256, g = rand() % 256, b = rand() % 256;
    return (double)((r & 255) | ((g & 255) << 8) | ((b & 255) << 16));
}
double gml_object_is_child_of(double child, double parent) {
    return ((int32_t)child == (int32_t)parent) ? 1.0 : 0.0;
}
double gml_string_width(const char *s) {
    if (!s) return 0;
    return (double)(strlen(s) * 8);
}
double gml_string_height(const char *s) {
    if (!s) return 0;
    int lines = 1;
    for (const char *p = s; *p; p++) if (*p == '\n') lines++;
    return (double)(lines * 16);
}
double gml_string_letters(const char *s) {
    static char out[2048];
    size_t j = 0;
    if (!s) { out[0]=0; gm82_gml_set_last_string(out); return 0; }
    for (size_t i = 0; s[i] && j + 1 < sizeof(out); i++) {
        unsigned char c = (unsigned char)s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            out[j++] = (char)c;
    }
    out[j] = 0;
    gm82_gml_set_last_string(out);
    return (double)j;
}
double gml_string_pad(double number, double digits) {
    static char out[64];
    int dig = (int)digits;
    if (dig < 1) dig = 1;
    if (dig > 32) dig = 32;
    int neg = number < 0;
    long v = (long)(neg ? -number : number);
    char tmp[40];
    snprintf(tmp, sizeof(tmp), "%ld", v);
    int len = (int)strlen(tmp);
    int i = 0;
    if (neg) out[i++] = '-';
    while (len + (neg?0:0) < dig && i + 1 < (int)sizeof(out)) {
        out[i++] = '0';
        dig--;
    }
    snprintf(out + i, sizeof(out) - (size_t)i, "%s", tmp);
    gm82_gml_set_last_string(out);
    return (double)strlen(out);
}
double gml_string_trim(const char *s) {
    static char out[4096];
    if (!s) { out[0]=0; gm82_gml_set_last_string(out); return 0; }
    while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r') s++;
    size_t n = strlen(s);
    while (n > 0 && (s[n-1]==' '||s[n-1]=='\t'||s[n-1]=='\n'||s[n-1]=='\r')) n--;
    if (n >= sizeof(out)) n = sizeof(out) - 1;
    memcpy(out, s, n);
    out[n] = 0;
    gm82_gml_set_last_string(out);
    return (double)n;
}
