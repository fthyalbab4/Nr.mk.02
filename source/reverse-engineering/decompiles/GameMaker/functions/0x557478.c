// rea decompile_all
// name: FUN_00557478
// address: 0x557478
// body: available
// range: 0x557478-0x557588 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00557478(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puStack_14;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x74);
  *(undefined4 **)(param_1 + 0x1ac) = puVar1;
  *puVar1 = &LAB_00556548;
  puVar1[2] = FUN_00556558;
  puVar1[0x1c] = 0;
  if (param_2 == 0) {
    iVar6 = (**(code **)(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    piVar5 = puVar1 + 8;
    iVar7 = 0;
    do {
      iVar4 = iVar7 + 1;
      *piVar5 = iVar7 * 0x80 + iVar6;
      piVar5 = piVar5 + 1;
      iVar7 = iVar4;
    } while (iVar4 < 10);
    puVar1[1] = &LAB_005567d4;
    puVar1[3] = FUN_00556594;
    puVar1[4] = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0xd8);
    puStack_14 = puVar1 + 0x12;
    iVar4 = extraout_ECX;
    for (iVar7 = 0; iVar7 < *(int *)(param_1 + 0x24); iVar7 = iVar7 + 1) {
      iVar8 = *(int *)(iVar6 + 0xc);
      if (*(int *)(param_1 + 0xdc) != 0) {
        iVar4 = *(int *)(iVar6 + 0xc) * 3;
        iVar8 = iVar4;
      }
      uVar2 = FUN_0055af0c(*(undefined4 *)(iVar6 + 0x1c),*(undefined4 *)(iVar6 + 8),iVar4,iVar7,
                           iVar8);
      uVar3 = FUN_0055af0c(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0xc));
      uVar2 = (**(code **)(*(int *)(param_1 + 4) + 0x14))(param_1,1,1,iVar8,uVar3,uVar2);
      *puStack_14 = uVar2;
      puStack_14 = puStack_14 + 1;
      iVar6 = iVar6 + 0x54;
      iVar4 = extraout_ECX_00;
    }
    puVar1[1] = FUN_005567d8;
    puVar1[3] = FUN_005569c8;
    puVar1[4] = puVar1 + 0x12;
  }
  return;
}
