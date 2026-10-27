// rea decompile_all
// name: FUN_0065d460
// address: 0x65d460
// body: available
// range: 0x65d460-0x65d53d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065d460(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;

  *param_4 = 0;
  param_4[2] = 0;
  param_4[3] = 0;
  local_c = 0;
  iVar3 = param_6;
  if (param_2 < param_6) {
    iVar3 = param_2;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (param_2 <= param_6) {
    param_2 = param_6;
  }
  iVar1 = *(int *)(param_1 + 4) + -1;
  if (iVar1 < param_2) {
    param_2 = iVar1;
  }
  if (iVar3 <= param_2) {
    local_10 = (param_2 - iVar3) + 1;
    do {
      iVar1 = param_5;
      if (param_3 < param_5) {
        iVar1 = param_3;
      }
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      iVar2 = param_5;
      if (param_5 < param_3) {
        iVar2 = param_3;
      }
      iVar4 = *(int *)(param_1 + 8) + -1;
      if (iVar4 < iVar2) {
        iVar2 = iVar4;
      }
      if (iVar1 <= iVar2) {
        iVar2 = (iVar2 - iVar1) + 1;
        do {
          if (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) + iVar1 * 0x18) == 0) {
            local_c = local_c + 1;
            *(double *)(param_4 + 2) =
                 *(double *)(param_4 + 2) +
                 *(double *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) + 8 + iVar1 * 0x18);
          }
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar3 = iVar3 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (0 < local_c) {
    *(double *)(param_4 + 2) = *(double *)(param_4 + 2) / (double)local_c;
  }
  return;
}
