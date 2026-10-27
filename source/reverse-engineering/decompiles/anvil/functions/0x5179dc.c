// rea decompile_all
// name: FUN_005179dc
// address: 0x5179dc
// body: available
// range: 0x5179dc-0x517a5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005179dc(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;

  FUN_00436ad0(*(int *)(param_1 + 4) + -1,*(int *)(param_1 + 8) + -1,0,param_3,0);
  local_14 = *(int *)(param_1 + 8);
  if (-1 < local_14 + -1) {
    iVar2 = 0;
    do {
      iVar3 = *(int *)(param_1 + 4);
      if (-1 < iVar3 + -1) {
        iVar1 = 0;
        do {
          if (param_2 < (int)(uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 +
                                            (*(int *)(param_1 + 4) * iVar2 + iVar1) * 4)) {
            if (iVar1 < *param_3) {
              *param_3 = iVar1;
            }
            if (param_3[2] < iVar1) {
              param_3[2] = iVar1;
            }
            if (iVar2 < param_3[1]) {
              param_3[1] = iVar2;
            }
            if (param_3[3] < iVar2) {
              param_3[3] = iVar2;
            }
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar2 = iVar2 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}
