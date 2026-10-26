// rea decompile_all
// name: FUN_005b5ed8
// address: 0x5b5ed8
// body: available
// range: 0x5b5ed8-0x5b5fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b5ed8(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;

  iVar5 = *(int *)(DAT_0084f044 + 0x390);
  FUN_004d43a8(iVar5);
  uVar1 = (**(code **)(*param_1 + 0x30))();
  FUN_004d3994(iVar5,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x24))();
  FUN_004d39d0(iVar5,uVar1);
  iVar2 = (**(code **)(*param_1 + 0x24))();
  iVar2 = FUN_004632a8(param_1,iVar2 + -1);
  *(bool *)(iVar5 + 0x45) = *(ushort *)(iVar2 + 2) < 0x100;
  iVar2 = (**(code **)(*param_1 + 0x24))();
  piVar3 = (int *)FUN_00463124(param_1);
  uVar1 = (**(code **)(*piVar3 + 0x18))(piVar3,0,iVar2 + -1);
  FUN_004d3ccc(iVar5,param_1,uVar1);
  iVar2 = (**(code **)(*param_2 + 0x24))();
  piVar3 = (int *)FUN_00463124(param_2);
  uVar1 = (**(code **)(*piVar3 + 0x18))(piVar3,0,iVar2 + -1);
  FUN_004d3ccc(iVar5,param_2,uVar1);
  iVar2 = (**(code **)(*param_3 + 0x24))();
  piVar3 = (int *)FUN_00463124(param_3);
  uVar1 = (**(code **)(*piVar3 + 0x18))(piVar3,0,iVar2 + -1);
  FUN_004d3ccc(iVar5,param_3,uVar1);
  iVar5 = 3;
  puVar4 = &DAT_0084f048;
  do {
    FUN_005b5744(*puVar4,*(undefined4 *)(DAT_0084f044 + 0x390));
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}
