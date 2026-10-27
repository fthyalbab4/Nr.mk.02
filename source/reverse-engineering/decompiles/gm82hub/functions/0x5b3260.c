// rea decompile_all
// name: FUN_005b3260
// address: 0x5b3260
// body: available
// range: 0x5b3260-0x5b32d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b3260(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x59] = (int)puVar1;
  *puVar1 = &LAB_005b2dc4;
  if (param_1[0x30] == 1) {
    puVar1[1] = &LAB_005b2f7c;
    puVar1[2] = &LAB_005b3db0;
  }
  else if (param_1[0x30] == 2) {
    puVar1[1] = &LAB_005b30d0;
    puVar1[7] = &LAB_005b401c;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x30;
    (**(code **)*param_1)();
  }
  iVar2 = 0;
  puVar1 = puVar1 + 3;
  do {
    iVar2 = iVar2 + 1;
    *puVar1 = 0;
    puVar1[5] = 0;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  return;
}
