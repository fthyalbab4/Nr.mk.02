// rea decompile_all
// name: FUN_005acbe8
// address: 0x5acbe8
// body: available
// range: 0x5acbe8-0x5acc9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005acbe8(int *param_1)

{
  int *piVar1;
  int iVar2;

  *(undefined4 *)(*param_1 + 0x14) = 0x66;
  (**(code **)(*param_1 + 4))(param_1,1);
  if (*(int *)(param_1[0x6e] + 0xc) != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x3d;
    (**(code **)*param_1)();
  }
  iVar2 = 0;
  piVar1 = param_1 + 0x39;
  do {
    *(undefined1 *)piVar1 = 0;
    *(undefined1 *)(piVar1 + 4) = 1;
    *(undefined1 *)(piVar1 + 8) = 5;
    iVar2 = iVar2 + 1;
    piVar1 = (int *)((int)piVar1 + 1);
  } while (iVar2 < 0x10);
  param_1[0x45] = 0;
  param_1[10] = 0;
  param_1[0x4b] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(undefined1 *)((int)param_1 + 0x11d) = 1;
  *(undefined1 *)((int)param_1 + 0x11e) = 0;
  *(undefined2 *)(param_1 + 0x48) = 1;
  *(undefined2 *)((int)param_1 + 0x122) = 1;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1[0x6e] + 0xc) = 1;
  return 1;
}
