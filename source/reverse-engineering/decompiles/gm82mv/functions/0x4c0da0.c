// rea decompile_all
// name: FUN_004c0da0
// address: 0x4c0da0
// body: available
// range: 0x4c0da0-0x4c0e78 inclusive
// range: 0x4c0e80-0x4c0e83 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c0e42 (push 0x4c0e79 followed by fs-segment stack chaining); handler 0x4c0e79 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c0da0(int *param_1,HWND param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puVar1;

  puVar1 = &stack0xfffffffc;
  if ((param_1[0xd] == 0) && (param_2 != (HWND)param_1[0x75])) {
    if ((param_1[0x96] == 0) || ((param_1[0x75] == 0 || (param_2 == (HWND)0x0)))) {
      FUN_004c6490(param_1,1);
      uStackY_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_18;
      (**(code **)(*param_1 + 0xc0))();
      param_1[0x75] = (int)param_2;
      FUN_004c0cac(param_1);
      *in_FS_OFFSET = uStackY_18;
      FUN_004c6490(param_1,0,puVar1);
      return;
    }
    param_1[0x75] = (int)param_2;
    uStackY_18 = 0x4c0dfb;
    SetParent((HWND)param_1[0x96],param_2);
    if ((4 < *(int *)PTR_DAT_00688cd4) && (*(int *)PTR_DAT_0068966c == 2)) {
      FUN_004bcb48(param_1,0x127,0x30003);
    }
    FUN_004c0cac(param_1);
  }
  return;
}
