// rea decompile_all
// name: FUN_0072cc1c
// address: 0x72cc1c
// body: available
// range: 0x72cc1c-0x72ccef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072cc1c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  int local_18;

  bVar7 = 0;
  *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(param_2 + 0x134);
  FUN_0072b4c8(param_1,*(undefined4 *)(param_2 + 0x130));
  *(undefined1 *)(param_1 + 0x12d) = *(undefined1 *)(param_2 + 0x12d);
  *(undefined1 *)(param_1 + 300) = *(undefined1 *)(param_2 + 300);
  FUN_0072b074(param_1);
  FUN_00726f94(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(*(int *)(param_2 + 0x138) + 8));
  local_18 = *(int *)(*(int *)(param_1 + 0x138) + 8);
  if (-1 < local_18 + -1) {
    iVar4 = 0;
    do {
      uVar3 = *(undefined4 *)(param_2 + 0x138);
      piVar1 = (int *)FUN_007272d8(uVar3,iVar4);
      uVar2 = (**(code **)(*piVar1 + 8))(*piVar1,1,param_1);
      FUN_00726f80(*(undefined4 *)(param_1 + 0x138),iVar4,uVar2);
      uVar3 = FUN_007272d8(uVar3,iVar4);
      piVar1 = (int *)FUN_007272d8(*(undefined4 *)(param_1 + 0x138),iVar4);
      (**(code **)(*piVar1 + 4))(piVar1,uVar3);
      iVar4 = iVar4 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  puVar5 = (undefined4 *)(param_2 + 0x28);
  puVar6 = (undefined4 *)(param_1 + 0x28);
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  return;
}
