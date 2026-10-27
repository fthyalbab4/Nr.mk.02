// rea decompile_all
// name: FUN_004bffc8
// address: 0x4bffc8
// body: available
// range: 0x4bffc8-0x4c006b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_004bffc8(int *param_1)

{
  char cVar1;
  byte bVar2;

  bVar2 = 0;
  if ((*(char *)((int)param_1 + 0x1b2) != '\0') &&
     (bVar2 = DAT_007785ce, *(char *)((int)param_1 + 0x1c6) == '\x01')) {
    bVar2 = DAT_007785cc;
  }
  cVar1 = (**(code **)(*param_1 + 0x5c))();
  if (((cVar1 != '\0') || ((char)param_1[0x71] != '\0')) &&
     (((int *)param_1[0x73] == (int *)0x0 ||
      (cVar1 = (**(code **)(*(int *)param_1[0x73] + 0x5c))(), cVar1 != '\0')))) {
    bVar2 = bVar2 | DAT_007785d0;
  }
  if ((*(char *)((int)param_1 + 0x59) == '\0') && ((*(byte *)(param_1 + 7) & 0x10) == 0)) {
    bVar2 = bVar2 | DAT_007785d2;
  }
  if (((char)param_1[0x6e] != '\0') || ((char)param_1[0x71] != '\0')) {
    bVar2 = bVar2 | DAT_007785d4;
  }
  if (*(char *)((int)param_1 + 0x1c5) != '\0') {
    bVar2 = bVar2 | DAT_007785d6;
  }
  if (*(char *)((int)param_1 + 0x1b9) != '\0') {
    bVar2 = bVar2 | DAT_007785da;
  }
  return bVar2;
}
