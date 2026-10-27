// rea decompile_all
// name: FUN_00615d20
// address: 0x615d20
// body: available
// range: 0x615d20-0x615d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00615d20(undefined4 param_1,int *param_2)

{
  if ((*param_2 == 0x3f2) && (**(int **)param_2[0xb] == 5)) {
    *param_2 = 5;
    FUN_00409360(param_2 + 4,*(int *)param_2[0xb] + 0x10,&DAT_00615f70);
    FUN_00572d74(param_1,*(undefined4 *)(*(int *)param_2[0xb] + 0x30),param_2[1],param_2 + 4);
    FUN_00409dfc(param_2[0xb],&DAT_00616078,1,0);
    FUN_004095cc(param_2[0xb],&DAT_00616078);
    param_2[10] = 0;
  }
  return;
}
