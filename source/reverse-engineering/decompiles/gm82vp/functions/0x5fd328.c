// rea decompile_all
// name: FUN_005fd328
// address: 0x5fd328
// body: available
// range: 0x5fd328-0x5fd3bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fd328(void)

{
  char cVar1;
  undefined4 *in_stack_00000004;

  *in_stack_00000004 = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  *(undefined4 *)PTR_DAT_00688f38 = 3;
  cVar1 = FUN_004102e4();
  if (cVar1 == '\x02') {
    *(undefined4 *)PTR_DAT_00688a78 = 2;
  }
  else if (cVar1 == '\x04') {
    *(undefined4 *)PTR_DAT_00688a78 = 4;
  }
  else if (cVar1 == '\b') {
    *(undefined4 *)PTR_DAT_00688a78 = 8;
  }
  else {
    *(undefined4 *)PTR_DAT_00688a78 = 0;
  }
  if (*(int *)PTR_DAT_00688a78 != 0) {
    *(undefined4 *)PTR_DAT_00688f38 = 1;
  }
  DAT_00850ea4 = 1;
  return;
}
