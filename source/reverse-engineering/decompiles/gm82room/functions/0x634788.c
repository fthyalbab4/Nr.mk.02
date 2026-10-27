// rea decompile_all
// name: FUN_00634788
// address: 0x634788
// body: available
// range: 0x634788-0x634846 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00634788(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  int local_10;
  int local_c;

  *param_4 = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  if ((param_3 != 0) && (-1 < param_3 + -1)) {
    pdVar3 = (double *)(param_6 + 8);
    local_10 = param_3;
    do {
      iVar1 = 0;
      local_c = 0;
      if (-1 < param_3 + -1) {
        pdVar2 = (double *)(param_6 + 8);
        iVar4 = param_3;
        do {
          if (*pdVar2 < *pdVar3) {
            iVar1 = iVar1 + 1;
          }
          if (*pdVar2 <= *pdVar3) {
            local_c = local_c + 1;
          }
          pdVar2 = pdVar2 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (((float)iVar1 < (float)param_3 / 2.0) && ((float)param_3 / 2.0 <= (float)local_c)) {
        FUN_00409360(param_4,pdVar3 + -1,&DAT_00615f70);
        return;
      }
      pdVar3 = pdVar3 + 3;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}
