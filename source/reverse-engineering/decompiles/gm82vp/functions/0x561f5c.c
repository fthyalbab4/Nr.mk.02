// rea decompile_all
// name: FUN_00561f5c
// address: 0x561f5c
// body: available
// range: 0x561f5c-0x561fd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00561f5c(int param_1)

{
  int iVar1;

  DAT_006863dc = param_1;
  if (DAT_006863d8 == 0) {
    DAT_006863d8 = FUN_00405fac(&DAT_00561c10,1);
  }
  iVar1 = DAT_006863dc;
  *(int *)(DAT_006863dc + 0xb4) = DAT_006863d8;
  *(code **)(iVar1 + 0xb0) = FUN_0056364c;
  iVar1 = DAT_006863dc;
  *(int *)(DAT_006863dc + 0x31c) = DAT_006863d8;
  *(undefined1 **)(iVar1 + 0x318) = &LAB_00563504;
  iVar1 = DAT_006863dc;
  *(int *)(DAT_006863dc + 0xec) = DAT_006863d8;
  *(undefined1 **)(iVar1 + 0xe8) = &LAB_0056362c;
  FUN_00561dd0();
  return;
}
