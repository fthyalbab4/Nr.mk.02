// rea decompile_all
// name: FUN_005da424
// address: 0x5da424
// body: available
// range: 0x5da424-0x5da45b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HRESULT FUN_005da424(void)

{
  int iVar1;
  HRESULT HVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  HOLEMENU in_stack_0000000c;
  HWND in_stack_00000010;

  iVar1 = FUN_005d84c8(in_stack_00000004);
  HVar2 = 0;
  if (iVar1 != 0) {
    FUN_004de830(iVar1,in_stack_00000008);
    HVar2 = OleSetMenuDescriptor
                      (in_stack_0000000c,*(HWND *)(iVar1 + 0x3c),in_stack_00000010,
                       (LPOLEINPLACEFRAME)0x0,(LPOLEINPLACEACTIVEOBJECT)0x0);
  }
  return HVar2;
}
