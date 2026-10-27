// rea decompile_all
// name: FUN_00459fc0
// address: 0x459fc0
// body: available
// range: 0x459fc0-0x45a05a inclusive
// range: 0x45a08a-0x45a08d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x459ff9 (push 0x45a05b followed by fs-segment stack chaining); handler 0x45a05b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459fc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;

  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar1 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  param_2[1] = param_2[1] + -1;
  if (param_2[1] == 0) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 4) == param_2) {
      *(undefined4 *)(param_1 + 4) = *param_2;
    }
    else {
      do {
        puVar3 = puVar2;
        puVar2 = (undefined4 *)*puVar3;
      } while (puVar2 != param_2);
      *puVar3 = *param_2;
    }
  }
  *in_FS_OFFSET = uVar1;
  uStackY_28 = 0x45a05a;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}
