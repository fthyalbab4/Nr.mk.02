// rea decompile_all
// name: FUN_00678d58
// address: 0x678d58
// body: available
// range: 0x678d58-0x678de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x678d7c (push 0x678de4 followed by fs-segment stack chaining); handler 0x678de4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00678d58(int param_1,LPRECT param_2,UINT *param_3,int param_4)

{
  undefined1 *puVar1;
  HDC hdc;
  int iVar2;
  LPCWSTR lpchText;
  int cchText;
  undefined4 *in_FS_OFFSET;
  UINT format;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;

  puStack_24 = (undefined1 *)0x678d71;
  thunk_FUN_00407660(param_4);
  puStack_28 = &LAB_00678de4;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  hdc = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
  iVar2 = param_4;
  if ((param_4 != 0) && (*(short *)(param_4 + -10) != 2)) {
    iVar2 = FUN_00407048(&param_4,param_4);
  }
  cchText = 0;
  if (iVar2 != 0) {
    cchText = *(int *)(iVar2 + -4);
  }
  format = *param_3;
  lpchText = (LPCWSTR)FUN_00407f44(param_4);
  DrawTextW(hdc,lpchText,cchText,param_2,format);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00678deb;
  puStack_28 = (undefined1 *)0x678de3;
  thunk_FUN_00406e5c(&param_4,uStack_2c,puVar1);
  return;
}
