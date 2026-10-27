// rea decompile_all
// name: FUN_004dfdd8
// address: 0x4dfdd8
// body: available
// range: 0x4dfdd8-0x4dfe32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004dfdd8(void)

{
  short sVar1;
  HWND pHVar2;
  BOOL BVar3;
  uint code;
  int iVar4;
  int in_stack_00000004;
  tagSCROLLINFO *ptVar5;
  tagSCROLLINFO local_20;

  local_20.cbSize = 0x1c;
  local_20.fMask = 0x10;
  code = (uint)(*(char *)(*(int *)(in_stack_00000004 + -4) + 0x18) == '\x01');
  sVar1 = *(short *)(*(int *)(in_stack_00000004 + -8) + 6);
  ptVar5 = &local_20;
  pHVar2 = (HWND)FUN_004c45dc(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 4));
  BVar3 = FlatSB_GetScrollInfo(pHVar2,code,ptVar5);
  iVar4 = (int)sVar1;
  if (BVar3 != 0) {
    iVar4 = local_20.nTrackPos;
  }
  return iVar4;
}
