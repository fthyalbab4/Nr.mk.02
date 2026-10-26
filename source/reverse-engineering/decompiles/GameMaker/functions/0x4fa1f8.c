// rea decompile_all
// name: FUN_004fa1f8
// address: 0x4fa1f8
// body: available
// range: 0x4fa1f8-0x4fa248 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004fa1f8(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;

  cVar1 = FUN_005069fc(param_1);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x7a) == '\0')) {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_004fa160(param_1);
    ImageList_EndDrag();
    bVar3 = iVar2 != 0;
    *(undefined1 *)(param_1 + 0x7a) = 0;
    FUN_004fa02c(param_1,0xffffffff);
    FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,*(undefined2 *)(param_1 + 0x8c));
  }
  return bVar3;
}
