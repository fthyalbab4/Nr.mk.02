// rea decompile_all
// name: FUN_0064fbfc
// address: 0x64fbfc
// body: available
// range: 0x64fbfc-0x64fc73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064fbfc(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_0064fba8(param_1);
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    FUN_00407eb8(param_1 + 8,*(undefined4 *)(param_2 + 8));
    FUN_00407eb8(param_1 + 0x10,*(undefined4 *)(param_2 + 0x10));
    if (*(int *)(param_2 + 0x2c) != 0) {
      uVar1 = FUN_00405a4c(&LAB_00433630,1);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      FUN_0043ff0c(uVar1,*(undefined4 *)(param_2 + 0x2c));
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  }
  return;
}
