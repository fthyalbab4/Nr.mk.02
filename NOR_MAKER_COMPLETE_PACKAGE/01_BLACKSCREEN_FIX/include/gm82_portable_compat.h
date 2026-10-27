#ifndef GM82_PORTABLE_COMPAT_H
#define GM82_PORTABLE_COMPAT_H

/* Ported from MahmoudMMorsy/NM.Maker.0..1.0
 * (NorMaker-0_extracted/.../gm82_portable_compat.h)
 * Small portable helpers — not full Windows DLL parity.
 */

#ifdef __cplusplus
extern "C" {
#endif

int gm82_portable_dllcheck(void);
double gm82_portable_color_reverse(double color);
double gm82_portable_color_inverse(double color);
int gm82_portable_token_start(const char *text, const char *separator);
const char *gm82_portable_token_next(void);
void gm82_portable_token_reset(void);

/* Pure math helpers claimed in NM GAPS as present — thin ports */
double gml_smoothstep(double edge0, double edge1, double x);
double gml_lerproach(double a, double b, double t);

#ifdef __cplusplus
}
#endif
#endif
