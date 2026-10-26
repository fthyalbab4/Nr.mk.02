// rea decompile_all
// name: FUN_004462bc
// address: 0x4462bc
// body: available
// range: 0x4462bc-0x44631e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004462bc(int *param_1,int param_2)

{
  FUN_00406268(param_2,param_1);
  if (*(int *)(param_2 + 4) != 0) {
    FUN_00446320(*(int *)(param_2 + 4),param_2);
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,0,*(undefined4 *)(param_2 + 8));
  FUN_00446208(param_1,param_2);
  FUN_00446af4(param_2,1);
  if ((*(byte *)(param_1 + 7) & 0x10) != 0) {
    FUN_00446aa4(param_2,1,1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  return;
}
