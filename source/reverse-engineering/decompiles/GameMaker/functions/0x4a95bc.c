// rea decompile_all
// name: FUN_004a95bc
// address: 0x4a95bc
// body: available
// range: 0x4a95bc-0x4a962a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a95bc(int param_1,int param_2)

{
  undefined4 uVar1;

  if (*(int *)(param_1 + 0x27c) != 0) {
    FUN_00508208(*(int *)(param_1 + 0x27c),*(undefined4 *)(param_1 + 0x278));
  }
  *(int *)(param_1 + 0x27c) = param_2;
  if (param_2 != 0) {
    FUN_0050824c(param_2,*(undefined4 *)(param_1 + 0x278));
    FUN_00448f68(*(undefined4 *)(param_1 + 0x27c),param_1);
    uVar1 = FUN_00506bcc(*(undefined4 *)(param_1 + 0x27c));
    FUN_004efb90(param_1,0x1303,0,uVar1);
    return;
  }
  FUN_004efb90(param_1,0x1303,0,0);
  return;
}
