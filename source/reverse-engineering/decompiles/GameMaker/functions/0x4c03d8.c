// rea decompile_all
// name: FUN_004c03d8
// address: 0x4c03d8
// body: available
// range: 0x4c03d8-0x4c044e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c03d8(int *param_1,int param_2)

{
  undefined4 uVar1;

  if (param_2 != 0) {
    if (param_2 != param_1[0x6f]) {
      FUN_00448f68(param_2,param_1);
    }
    uVar1 = FUN_004dbdf0(param_2);
    FUN_004ed6b4(param_1,uVar1);
    FUN_004ee6d8(param_1,*(undefined4 *)(param_2 + 0x34));
    FUN_004c0238(param_1,*(undefined1 *)(param_2 + 0x38));
    (**(code **)(*param_1 + 0x74))(param_1,*(undefined1 *)(param_2 + 0x39));
    FUN_00407eb8(param_1 + 0x20,*(undefined4 *)(param_2 + 0x58));
    FUN_004c02d0(param_1,*(undefined4 *)(param_2 + 0x40));
    FUN_004ee5c0(param_1,*(undefined1 *)(param_2 + 0x3e));
  }
  param_1[0x6f] = param_2;
  return;
}
