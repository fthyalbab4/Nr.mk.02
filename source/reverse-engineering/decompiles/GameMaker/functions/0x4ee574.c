// rea decompile_all
// name: FUN_004ee574
// address: 0x4ee574
// body: available
// range: 0x4ee574-0x4ee5be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ee574(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x34)) {
    if (param_1 == param_2) {
      FUN_0041bfec(&PTR_LAB_0042f068,1,PTR_PTR_007823dc);
      FUN_00406618();
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_004f3048(*(int *)(param_1 + 0x34),param_1);
    }
    if (param_2 != 0) {
      FUN_004f2f28(param_2,param_1);
      FUN_004edaf4(param_1);
    }
  }
  return;
}
