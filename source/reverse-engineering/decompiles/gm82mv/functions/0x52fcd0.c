// rea decompile_all
// name: FUN_0052fcd0
// address: 0x52fcd0
// body: available
// range: 0x52fcd0-0x52fd36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0052fcd0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;

  piVar1 = (int *)param_1[0x14];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
    param_1[0x14] = (int)piVar1;
    piVar1[5] = (int)param_1;
    piVar1[4] = *(int *)(*param_1 + 0x10);
    (**(code **)(*param_1 + 0x28))();
    uVar2 = FUN_00462594();
    (**(code **)(*piVar1 + 0x3c))(piVar1,uVar2);
    uVar2 = (**(code **)(*param_1 + 0x24))();
    (**(code **)(*(int *)param_1[0x14] + 0x38))((int *)param_1[0x14],uVar2);
    uVar2 = (**(code **)(*param_1 + 0x30))();
    (**(code **)(*(int *)param_1[0x14] + 0x44))((int *)param_1[0x14],uVar2);
  }
  return piVar1;
}
