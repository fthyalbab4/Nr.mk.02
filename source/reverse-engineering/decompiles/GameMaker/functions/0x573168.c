// rea decompile_all
// name: FUN_00573168
// address: 0x573168
// body: available
// range: 0x573168-0x5731ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00573168(int param_1)

{
  int *piVar1;

  if (*(int *)(param_1 + 0x2cc) == 0) {
    piVar1 = (int *)FUN_004830f0(&PTR_LAB_00572a5c,1,param_1);
    FUN_004ee5c0(piVar1,0);
    (**(code **)(*piVar1 + 0x78))(piVar1,param_1);
    piVar1[0x35] = param_1;
    piVar1[0x34] = (int)&LAB_005734a8;
    FUN_004836ec(piVar1,1);
    FUN_0048375c(piVar1,0xb);
    *(int **)(param_1 + 0x2cc) = piVar1;
  }
  return *(undefined4 *)(param_1 + 0x2cc);
}
