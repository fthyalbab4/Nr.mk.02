// rea decompile_all
// name: FUN_00554a90
// address: 0x554a90
// body: available
// range: 0x554a90-0x554b21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00554a90(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x73] = (int)puVar2;
  *puVar2 = FUN_005549a4;
  puVar2[2] = &DAT_00554a7c;
  puVar2[3] = &LAB_00554a80;
  puVar2[0x11] = 0;
  puVar2[0xd] = 0;
  if (4 < param_1[0x1e]) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x37;
    *(undefined4 *)(iVar1 + 0x18) = 4;
    (**(code **)*param_1)();
  }
  if (0x100 < param_1[0x18]) {
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x39;
    *(undefined4 *)(iVar1 + 0x18) = 0x100;
    (**(code **)*param_1)();
  }
  FUN_0055401c(param_1);
  FUN_005541d0(param_1);
  if (param_1[0x16] == 2) {
    FUN_00554964(param_1);
  }
  return;
}
