// rea decompile_all
// name: FUN_00535f8c
// address: 0x535f8c
// body: available
// range: 0x535f8c-0x5360a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00535f8c(int param_1,double *param_2,double *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;

  local_30 = 0;
  uStack_2c = 0x4197d784;
  local_20 = 0;
  uStack_1c = 0xc197d784;
  local_28 = 0;
  uStack_24 = 0x4197d784;
  local_18 = 0;
  uStack_14 = 0xc197d784;
  iVar1 = *(int *)(param_1 + 8);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      if (*(double *)(*(int *)(param_1 + 4) + iVar2 * 0x18) < (double)CONCAT44(uStack_2c,local_30))
      {
        local_30 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 0x18);
        uStack_2c = *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar2 * 0x18);
      }
      if ((double)CONCAT44(uStack_1c,local_20) < *(double *)(*(int *)(param_1 + 4) + iVar2 * 0x18))
      {
        local_20 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 0x18);
        uStack_1c = *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar2 * 0x18);
      }
      if (*(double *)(*(int *)(param_1 + 4) + 8 + iVar2 * 0x18) <
          (double)CONCAT44(uStack_24,local_28)) {
        local_28 = *(undefined4 *)(*(int *)(param_1 + 4) + 8 + iVar2 * 0x18);
        uStack_24 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + iVar2 * 0x18);
      }
      if ((double)CONCAT44(uStack_14,local_18) <
          *(double *)(*(int *)(param_1 + 4) + 8 + iVar2 * 0x18)) {
        local_18 = *(undefined4 *)(*(int *)(param_1 + 4) + 8 + iVar2 * 0x18);
        uStack_14 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + iVar2 * 0x18);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *param_2 = ((double)CONCAT44(uStack_2c,local_30) + (double)CONCAT44(uStack_1c,local_20)) / 2.0;
  *param_3 = ((double)CONCAT44(uStack_24,local_28) + (double)CONCAT44(uStack_14,local_18)) / 2.0;
  return;
}
