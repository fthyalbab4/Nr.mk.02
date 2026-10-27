// rea decompile_all
// name: FUN_004fba38
// address: 0x4fba38
// body: available
// range: 0x4fba38-0x4fbaa6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fba38(int param_1)

{
  int iVar1;

  iVar1 = param_1;
  if (*(char *)(param_1 + 0x2d1) == '\x03') {
    for (; (iVar1 != 0 && (*(int *)(iVar1 + 0x168) == 0)); iVar1 = *(int *)(iVar1 + 0x34)) {
    }
    if (iVar1 == 0) {
      FUN_0047b510(param_1);
      return;
    }
    FUN_004ec0f4(*(undefined4 *)PTR_DAT_0068917c,*(undefined4 *)(iVar1 + 0x168));
  }
  else if (*(char *)(param_1 + 0x2d1) == '\x06') {
    iVar1 = FUN_004df914(param_1,1);
    if (iVar1 == 0) {
      FUN_0047b510(param_1);
      return;
    }
    FUN_004e6874();
  }
  else {
    FUN_0047b510(param_1);
  }
  return;
}
