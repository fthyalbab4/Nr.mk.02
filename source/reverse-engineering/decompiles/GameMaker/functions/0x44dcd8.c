// rea decompile_all
// name: FUN_0044dcd8
// address: 0x44dcd8
// body: available
// range: 0x44dcd8-0x44dd3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044dcd8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;

  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = FUN_00448e88(&PTR_FUN_0044db30,1,0);
    *(int *)(param_1 + 0x14) = iVar1;
    *(int *)(iVar1 + 0x3c) = param_1;
    *(undefined1 **)(iVar1 + 0x38) = &LAB_0044dca0;
  }
  if ((char)param_3 == '\0') {
    if (param_2 != 0) {
      FUN_00448f68(param_2,*(undefined4 *)(param_1 + 0x14));
    }
  }
  else if (((byte)((char)param_3 - 1U) < 2) && (param_2 != 0)) {
    FUN_0044924c(param_2,*(undefined4 *)(param_1 + 0x14));
  }
  FUN_0044da1c(param_1,param_2,param_3);
  return;
}
