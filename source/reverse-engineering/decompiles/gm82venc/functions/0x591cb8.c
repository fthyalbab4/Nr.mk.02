// rea decompile_all
// name: FUN_00591cb8
// address: 0x591cb8
// body: available
// range: 0x591cb8-0x591d15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00591cb8(int param_1,int param_2)

{
  char cVar1;
  int local_10;
  int local_c;

  FUN_004bd8f4(param_1,param_2);
  cVar1 = FUN_00592154(param_1);
  if (cVar1 != '\0') {
    FUN_00592358(param_1,&local_10,&local_c);
    *(int *)(param_1 + 0x2b0) = local_10;
    if ((local_10 != local_c) && (*(int *)(param_1 + 0x2b4) < (int)*(short *)(param_2 + 8))) {
      *(int *)(param_1 + 0x2b0) = local_c;
    }
    FUN_00592654(param_1);
  }
  return;
}
