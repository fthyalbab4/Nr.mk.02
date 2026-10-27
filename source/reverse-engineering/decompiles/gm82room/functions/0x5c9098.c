// rea decompile_all
// name: FUN_005c9098
// address: 0x5c9098
// body: available
// range: 0x5c9098-0x5c913d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005c9098(int *param_1)

{
  int *piVar1;
  int iVar2;

  *(undefined4 *)(*param_1 + 0x14) = 0x65;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(int *)(*(int *)((int)param_1 + 0x1aa) + 0x50) != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3c;
    (**(code **)*param_1)();
  }
  iVar2 = 0;
  piVar1 = param_1 + 0x38;
  do {
    *(undefined1 *)piVar1 = 0;
    *(undefined1 *)(piVar1 + 4) = 1;
    *(undefined1 *)(piVar1 + 8) = 5;
    iVar2 = iVar2 + 1;
    piVar1 = (int *)((int)piVar1 + 1);
  } while (iVar2 < 0x10);
  param_1[0x44] = 0;
  param_1[9] = 0;
  *(undefined4 *)((int)param_1 + 0x122) = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined2 *)((int)param_1 + 0x119) = 1;
  *(undefined2 *)((int)param_1 + 0x11b) = 1;
  *(undefined4 *)((int)param_1 + 0x11d) = 0;
  *(undefined1 *)((int)param_1 + 0x121) = 0;
  *(undefined4 *)(*(int *)((int)param_1 + 0x1aa) + 0x50) = 1;
  return 1;
}
