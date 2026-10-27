// rea decompile_all
// name: FUN_004c1e5c
// address: 0x4c1e5c
// body: available
// range: 0x4c1e5c-0x4c1eef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c1e7f (push 0x4c1ef0 followed by fs-segment stack chaining); handler 0x4c1ef0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1e5c(HDC param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_1c [12];
  int local_10;
  int *local_c;
  HDC local_8;

  local_c = param_2;
  local_8 = param_1;
  local_10 = SaveDC(param_1);
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  ExcludeClipRect(local_8,*local_c + 2,local_c[1] + 2,local_c[2] + -2,local_c[3] + -2);
  uVar1 = FUN_004d08e8();
  FUN_004d0e90(uVar1,2,local_1c);
  piVar2 = local_c;
  uVar1 = FUN_004d08e8();
  FUN_004d0b88(uVar1,local_8,local_1c,piVar2);
  *in_FS_OFFSET = uVar3;
  RestoreDC(local_8,local_10);
  return;
}
