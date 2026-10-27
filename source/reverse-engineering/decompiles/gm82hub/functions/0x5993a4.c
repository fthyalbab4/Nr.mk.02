// rea decompile_all
// name: FUN_005993a4
// address: 0x5993a4
// body: available
// range: 0x5993a4-0x599429 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005993a4(int *param_1,uint param_2,int param_3,code *param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if ((*(uint *)(*(int *)(param_8 + -4) + 0x2b4) & param_2) == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = *(int *)(*(int *)(param_8 + -4) + 0x2b0);
  }
  param_1[1] = 0;
  if (-1 < param_3 + -1) {
    iVar3 = 0;
    iVar2 = param_3;
    do {
      iVar1 = (*param_4)(param_5,iVar3);
      param_1[1] = param_1[1] + iVar1 + *param_1;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[6] = param_3;
  param_1[7] = param_7;
  param_1[8] = param_6;
  param_1[10] = (int)param_4;
  param_1[0xb] = param_5;
  return;
}
