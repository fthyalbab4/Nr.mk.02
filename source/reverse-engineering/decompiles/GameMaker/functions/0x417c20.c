// rea decompile_all
// name: FUN_00417c20
// address: 0x417c20
// body: available
// range: 0x417c20-0x417c64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00417c20(int param_1,undefined4 param_2,uint param_3)

{
  undefined2 auStack_50 [32];
  undefined1 *local_10;
  undefined1 local_c;

  if (0x1f < param_3) {
    param_3 = 0x1f;
  }
  FUN_004176bc(auStack_50,param_2,param_3);
  auStack_50[param_3] = 0;
  local_c = 10;
  local_10 = (undefined1 *)auStack_50;
  FUN_004154ec((&PTR_PTR_00773c1c)[param_1],&local_10,0);
  return;
}
