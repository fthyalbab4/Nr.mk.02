// rea decompile_all
// name: FUN_0067236c
// address: 0x67236c
// body: available
// range: 0x67236c-0x672404 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0067236c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined **ppuVar4;

  if (*(int *)(param_1 + 0x2c) != 0) goto LAB_006723fe;
  iVar1 = FUN_00672408(param_1);
  if (iVar1 == 0) {
LAB_006723d5:
    ppuVar4 = &PTR_FUN_0066c650;
    FUN_00672408(param_1);
    uVar2 = FUN_00671654();
    uVar2 = FUN_00672ba8(&PTR_FUN_0066ad44,1,uVar2,ppuVar4);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  else {
    FUN_00672408(param_1);
    iVar1 = FUN_00671654();
    if (iVar1 == 0) goto LAB_006723d5;
    FUN_00672408(param_1);
    uVar2 = FUN_00671654();
    uVar3 = FUN_00405d08(uVar2);
    iVar1 = FUN_00405d08(uVar2);
    FUN_00672408(param_1);
    uVar2 = FUN_00671654();
    uVar2 = (**(code **)(iVar1 + 0x28))(iVar1,1,uVar2,uVar3);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  *(int *)(*(int *)(param_1 + 0x2c) + 0x20) = param_1;
LAB_006723fe:
  return *(undefined4 *)(param_1 + 0x2c);
}
