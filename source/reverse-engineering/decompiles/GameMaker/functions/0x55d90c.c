// rea decompile_all
// name: FUN_0055d90c
// address: 0x55d90c
// body: available
// range: 0x55d90c-0x55da22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055d90c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iStack_20;
  int iStack_1c;
  undefined4 *puStack_18;
  undefined4 *puStack_14;

  iVar5 = *(int *)(param_1 + 0x150);
  iVar2 = *(int *)(param_1 + 0xe8);
  puStack_18 = (undefined4 *)
               (*(code *)**(undefined4 **)(param_1 + 4))
                         (param_1,1,*(int *)(param_1 + 0x38) * iVar2 * 0x14);
  iStack_20 = 0;
  iStack_1c = *(int *)(param_1 + 0x40);
  puStack_14 = (undefined4 *)(iVar5 + 8);
  for (; iStack_20 < *(int *)(param_1 + 0x38); iStack_20 = iStack_20 + 1) {
    puVar4 = (undefined4 *)
             (**(code **)(*(int *)(param_1 + 4) + 8))
                       (param_1,1,
                        (*(int *)(iStack_1c + 0x1c) * 8 * *(int *)(param_1 + 0xe4)) /
                        *(int *)(iStack_1c + 8),iVar2 * 3);
    FUN_0054e1e4();
    iVar5 = 0;
    puVar6 = puVar4;
    puVar7 = puStack_18;
    if (0 < iVar2) {
      do {
        *puVar7 = puVar4[iVar5 + iVar2 * 2];
        iVar1 = iVar5 + iVar2 * 4;
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 1;
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puStack_18[iVar1] = uVar3;
      } while (iVar5 < iVar2);
    }
    *puStack_14 = puStack_18 + iVar2;
    puStack_18 = puStack_18 + iVar2 * 5;
    puStack_14 = puStack_14 + 1;
    iStack_1c = iStack_1c + 0x54;
  }
  return;
}
