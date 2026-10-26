// rea decompile_all
// name: FUN_00404e14
// address: 0x404e14
// body: available
// range: 0x404e14-0x404e82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00404e14(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;

  uVar1 = param_3 >> 2;
  do {
    if (uVar1 == 0) {
LAB_00404e44:
      param_3 = param_3 & 3;
      if (((param_3 != 0) && ((char)*param_1 == (char)*param_2)) &&
         ((param_3 == 1 ||
          ((*(char *)((int)param_1 + 1) == *(char *)((int)param_2 + 1) &&
           ((param_3 == 2 || (*(char *)((int)param_1 + 2) == *(char *)((int)param_2 + 2))))))))) {
        return (int *)0x0;
      }
      return param_1;
    }
    if (*param_1 != *param_2) {
      return param_1;
    }
    if (uVar1 == 1) {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      goto LAB_00404e44;
    }
    if (param_1[1] != param_2[1]) {
      return param_1;
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    uVar1 = uVar1 - 2;
  } while( true );
}
