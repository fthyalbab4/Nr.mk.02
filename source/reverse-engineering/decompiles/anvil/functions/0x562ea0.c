// rea decompile_all
// name: FUN_00562ea0
// address: 0x562ea0
// body: available
// range: 0x562ea0-0x562eed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00562ea0(int param_1,int param_2)

{
  undefined1 auStack_20 [8];
  undefined1 local_18 [4];
  int iStack_14;
  int aiStack_10 [2];

  (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,local_18);
  (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,aiStack_10);
  FUN_00436aa0(aiStack_10[0] + param_1,param_2 + iStack_14,auStack_20);
  FUN_004ca564(*(undefined4 *)PTR_DAT_00689560,auStack_20);
  return;
}
