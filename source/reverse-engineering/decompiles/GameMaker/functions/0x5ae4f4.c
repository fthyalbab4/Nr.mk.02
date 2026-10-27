// rea decompile_all
// name: FUN_005ae4f4
// address: 0x5ae4f4
// body: available
// range: 0x5ae4f4-0x5ae5c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005ae4f4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;

  local_18 = -1;
  local_14 = -1;
  iVar4 = *(int *)(param_1 + 0xc);
  if (-1 < iVar4 + -1) {
    iVar1 = 0;
    do {
      if (param_2 == *(int *)(*(int *)(param_1 + 8) + iVar1 * 4)) {
        local_14 = iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (-1 < local_14) {
    local_18 = -1;
    iVar5 = -1;
    iVar4 = *(int *)(param_1 + 0xc);
    iVar1 = iVar4 + -1;
    if (-1 < iVar1) {
      iVar2 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 8) + iVar2 * 4) == param_3) {
          iVar5 = iVar2;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
        iVar1 = 0;
      } while (iVar4 != 0);
    }
    if (iVar5 < 0) {
      uVar3 = FUN_005a5048(&DAT_005a4c6c,CONCAT31((int3)((uint)iVar1 >> 8),1));
      FUN_005a50c8(uVar3,*(undefined4 *)(*(int *)(param_1 + 4) + local_14 * 4));
      FUN_005ae290(param_1,param_2,param_2);
      local_18 = FUN_005ae1dc(param_1,param_3);
      FUN_005a50c8(*(undefined4 *)(*(int *)(param_1 + 4) + local_18 * 4),uVar3);
      FUN_00405a7c(uVar3);
    }
  }
  return local_18;
}
