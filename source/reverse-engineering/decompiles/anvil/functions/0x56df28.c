// rea decompile_all
// name: FUN_0056df28
// address: 0x56df28
// body: available
// range: 0x56df28-0x56e01d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056df28(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;

  FUN_0050bce8(param_2,0x1b8);
  FUN_0050bce8(param_2,*(undefined4 *)(param_1 + 8));
  local_18 = *(int *)(param_1 + 8);
  if (-1 < local_18 + -1) {
    local_1c = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + local_1c * 0x28);
      FUN_0050bce8(param_2,*puVar1);
      FUN_0056de90(param_2,puVar1 + 2);
      uVar2 = FUN_00409c34(puVar1[8]);
      FUN_0050bce8(param_2,uVar2);
      local_14 = FUN_00409c34(puVar1[8]);
      if (-1 < local_14 + -1) {
        iVar4 = 0;
        do {
          uVar2 = FUN_00409c34(*(undefined4 *)(puVar1[8] + iVar4 * 4));
          FUN_0050bce8(param_2,uVar2);
          iVar3 = FUN_00409c34(*(undefined4 *)(puVar1[8] + iVar4 * 4));
          if (-1 < iVar3 + -1) {
            iVar5 = 0;
            do {
              FUN_0056de90(param_2,*(int *)(puVar1[8] + iVar4 * 4) + iVar5 * 0x18);
              iVar5 = iVar5 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar4 = iVar4 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      local_1c = local_1c + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}
