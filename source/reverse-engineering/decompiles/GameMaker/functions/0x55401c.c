// rea decompile_all
// name: FUN_0055401c
// address: 0x55401c
// body: available
// range: 0x55401c-0x5541ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055401c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_28;
  int *piStack_24;
  int *piStack_18;

  iVar1 = param_1[0x73];
  uVar4 = FUN_00553edc(param_1,iVar1 + 0x20);
  if (param_1[0x1e] == 3) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x18) = uVar4;
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(*param_1 + 0x14) = 0x5e;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  else {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x5f;
    *(undefined4 *)(iVar1 + 0x18) = uVar4;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  iVar1 = param_1[0x1e];
  piVar5 = (int *)(**(code **)(param_1[1] + 8))(param_1,1,uVar4);
  iStack_28 = iStack_38;
  piStack_24 = param_1 + 8;
  piStack_18 = piVar5;
  for (local_34 = 0; local_34 < *(int *)(iVar1 + 0x78); local_34 = local_34 + 1) {
    iVar2 = *piStack_24;
    iVar6 = iStack_28 / iVar2;
    iStack_30 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = FUN_00553fd4(iVar1,local_34,iStack_30,iVar2 + -1);
        for (iVar8 = iStack_30 * iVar6; iVar8 < iStack_38; iVar8 = iVar8 + iStack_28) {
          iVar7 = 0;
          if (0 < iVar6) {
            do {
              puVar9 = (undefined1 *)(*piStack_18 + iVar8 + iVar7);
              iVar7 = iVar7 + 1;
              *puVar9 = uVar3;
            } while (iVar7 < iVar6);
          }
        }
        iStack_30 = iStack_30 + 1;
      } while (iStack_30 < iVar2);
    }
    piStack_18 = piStack_18 + 1;
    piStack_24 = piStack_24 + 1;
    iStack_28 = iVar6;
  }
  param_1[4] = (int)piVar5;
  param_1[5] = iStack_38;
  return;
}
