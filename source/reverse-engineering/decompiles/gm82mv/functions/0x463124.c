// rea decompile_all
// name: FUN_00463124
// address: 0x463124
// body: available
// range: 0x463124-0x463168 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00463124(int *param_1)

{
  int iVar1;

  if (param_1[0xb] == 0) {
    FUN_004635c0(param_1);
    if (param_1[0xb] == 0) {
      iVar1 = FUN_00461b34(&LAB_00461868,1,param_1);
      param_1[0xb] = iVar1;
      *(int **)(iVar1 + 0xc) = param_1;
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*param_1 + 0x10);
      *(int **)(iVar1 + 0x14) = param_1;
      *(code **)(iVar1 + 0x10) = FUN_00462a88;
    }
  }
  return param_1[0xb];
}
