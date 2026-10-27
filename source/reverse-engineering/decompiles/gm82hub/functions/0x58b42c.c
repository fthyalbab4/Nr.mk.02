// rea decompile_all
// name: FUN_0058b42c
// address: 0x58b42c
// body: available
// range: 0x58b42c-0x58b526 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058b42c(double *param_1,double *param_2,undefined4 param_3,double param_4,double param_5)

{
  double dVar1;
  int iVar2;
  float10 in_ST0;
  float10 in_ST1;
  float10 fVar3;

  if (param_5 == 0.0) {
    in_ST1 = in_ST0;
    if (param_4 <= 0.0) {
      if (0.0 <= param_4) {
        *(undefined4 *)param_1 = 0;
        *(undefined4 *)((int)param_1 + 4) = 0;
      }
      else {
        *(undefined4 *)param_1 = 0;
        *(undefined4 *)((int)param_1 + 4) = 0x40568000;
      }
    }
    else {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0x4070e000;
    }
  }
  else {
    FUN_0041025c();
    fVar3 = (in_ST0 * (float10)180.0) / _DAT_0058b530;
    dVar1 = (double)fVar3;
    if (0.0 < dVar1) {
      *param_1 = (double)(360.0 - (float)fVar3);
    }
    else {
      *param_1 = -dVar1;
    }
  }
  iVar2 = FUN_004102e4();
  *param_1 = *param_1 - (double)(iVar2 * 0x168);
  FUN_004048a8();
  *param_2 = (double)in_ST1;
  return;
}
