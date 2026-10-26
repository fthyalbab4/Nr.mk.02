// rea decompile_all
// name: FUN_0056f7bc
// address: 0x56f7bc
// body: available
// range: 0x56f7bc-0x56f834 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056f7bc(int param_1,undefined4 *param_2)

{
  undefined1 auStack_18 [16];

  if ((*(uint *)(param_1 + 0x2b4) & 0x410) == 0x10) {
    FUN_00571648(param_1,auStack_18);
    *(undefined4 *)(param_1 + 0x278) = *param_2;
    *(undefined4 *)(param_1 + 0x27c) = param_2[1];
    if ((*(byte *)(param_1 + 0x2b5) & 0x10) != 0) {
      *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x284) + -1;
    }
    FUN_0056e648(param_1,param_2);
    FUN_0056fa0c(param_1,auStack_18);
  }
  else {
    FUN_0056f840(param_1,*param_2,param_2[1],1,1);
  }
  return;
}
