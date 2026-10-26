// rea decompile_all
// name: FUN_00406f1c
// address: 0x406f1c
// body: available
// range: 0x406f1c-0x406f5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x406f3e with no resolved callee; its no-return basis is unknown.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406f1c(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;

  iVar3 = *param_1;
  param_1 = param_1 + 1;
  do {
    iVar1 = param_1[2];
    if (iVar1 == 0) {
      FUN_00406e64(param_1[1],*param_1);
    }
    else if (iVar1 == 1) {
      FUN_00406eb8();
    }
    else {
      if (iVar1 != 2) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_00406f08();
    }
    param_1 = param_1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
