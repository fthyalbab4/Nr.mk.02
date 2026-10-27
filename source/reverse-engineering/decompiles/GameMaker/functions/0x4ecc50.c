// rea decompile_all
// name: FUN_004ecc50
// address: 0x4ecc50
// body: available
// range: 0x4ecc50-0x4ecce0 inclusive
// range: 0x4ecce8-0x4ecd02 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ecc90 (push 0x4ecce1 followed by fs-segment stack chaining); handler 0x4ecce1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ecc50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;

  if (*(int *)(param_1 + 0x58) == 0) {
    FUN_0045ceb0(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x5c) == 0) {
      iVar1 = FUN_0043bb30(DAT_007882a0);
      uStackY_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_1c;
      if (3 < *(int *)(iVar1 + 8)) {
        FUN_004ecaa8();
      }
      uVar2 = (**(code **)(**(int **)(param_1 + 0x58) + 0x58))
                        (*(int **)(param_1 + 0x58),param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      FUN_0043ae88(iVar1,param_1);
      *in_FS_OFFSET = uStackY_1c;
      uStackY_1c = 0x4ecce0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_007882a0 + 8));
      return;
    }
    FUN_0045ceb4(param_1,*(undefined4 *)(param_1 + 0x5c));
    FUN_004ecd50(param_1);
  }
  return;
}
