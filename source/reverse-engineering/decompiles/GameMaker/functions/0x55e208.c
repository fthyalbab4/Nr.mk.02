// rea decompile_all
// name: FUN_0055e208
// address: 0x55e208
// body: available
// range: 0x55e208-0x55e2cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055e208(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iStack_14;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x68);
  *(undefined4 **)(param_1 + 0x154) = puVar1;
  *puVar1 = FUN_0055db18;
  if (param_2 == 0) {
    iVar4 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar6 = puVar1 + 6;
    iVar7 = 0;
    do {
      iVar5 = iVar7 + 1;
      *piVar6 = iVar7 * 0x80 + iVar4;
      piVar6 = piVar6 + 1;
      iVar7 = iVar5;
    } while (iVar5 < 10);
    puVar1[0x10] = 0;
  }
  else {
    iStack_14 = 0;
    iVar7 = *(int *)(param_1 + 0x40);
    puVar1 = puVar1 + 0x10;
    for (; iStack_14 < *(int *)(param_1 + 0x38); iStack_14 = iStack_14 + 1) {
      uVar2 = FUN_0055af0c(*(undefined4 *)(iVar7 + 0x1c),*(undefined4 *)(iVar7 + 8));
      uVar3 = FUN_0055af0c(*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar7 + 0xc));
      uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x14))
                        (param_1,1,0,*(undefined4 *)(iVar7 + 0xc),uVar3,uVar2);
      *puVar1 = uVar2;
      puVar1 = puVar1 + 1;
      iVar7 = iVar7 + 0x54;
    }
  }
  return;
}
