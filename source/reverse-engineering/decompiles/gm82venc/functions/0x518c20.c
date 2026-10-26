// rea decompile_all
// name: FUN_00518c20
// address: 0x518c20
// body: available
// range: 0x518c20-0x518d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00518c20(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_18;
  int local_14;

  iVar2 = FUN_0050bbe0(param_2);
  if (iVar2 == 800) {
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 4) = uVar3;
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    FUN_00409dfc(param_1 + 0xc,&DAT_00517a94,1,*(undefined4 *)(param_1 + 4));
    local_14 = *(int *)(param_1 + 4);
    if (-1 < local_14 + -1) {
      iVar2 = 0;
      do {
        FUN_00409dfc(*(int *)(param_1 + 0xc) + iVar2 * 4,&DAT_00517a60,1,
                     *(undefined4 *)(param_1 + 8));
        iVar2 = iVar2 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    local_14 = *(int *)(param_1 + 8);
    if (-1 < local_14 + -1) {
      local_18 = 0;
      do {
        iVar2 = *(int *)(param_1 + 4);
        if (-1 < iVar2 + -1) {
          iVar4 = 0;
          do {
            uVar1 = FUN_0050bcd0(param_2);
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + iVar4 * 4) + local_18) = uVar1;
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_18 = local_18 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  return 0;
}
