// rea decompile_all
// name: FUN_00526790
// address: 0x526790
// body: available
// range: 0x526790-0x526814 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00526790(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 local_14 [16];

  (**(code **)(*param_2 + 0x44))(param_2,*(undefined4 *)(param_3 + 0x38));
  (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(param_3 + 0x34));
  iVar1 = FUN_00462a64(param_2);
  FUN_0045bc24(*(undefined4 *)(iVar1 + 0x48),0xff00ff);
  uVar2 = (**(code **)(*param_2 + 0x24))();
  puVar5 = local_14;
  uVar3 = (**(code **)(*param_2 + 0x30))();
  FUN_00438c38(0,0,uVar3,puVar5,uVar2);
  puVar5 = local_14;
  piVar4 = (int *)FUN_00462a64(param_2);
  (**(code **)(*piVar4 + 0x4c))(piVar4,puVar5);
  uVar6 = 0;
  uVar3 = 1;
  uVar2 = FUN_00462a64(param_2);
  FUN_005077bc(param_3,uVar2,0,uVar3,param_4,uVar6);
  return;
}
