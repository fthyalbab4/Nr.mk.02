#ifndef GM82_EXTERNAL_H
#define GM82_EXTERNAL_H

/* Isolated DLL/SO bridge extracted from PR#378. */

#ifdef __cplusplus
extern "C" {
#endif

double gml_external_define(const char *dll, const char *name, double calltype, double restype, double argcount);
double gml_external_call(double id, double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7);
double gml_external_free(const char *dll);

#ifdef __cplusplus
}
#endif

#endif
