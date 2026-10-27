// rea decompile_all
// name: FUN_0047cdf4
// address: 0x47cdf4
// body: available
// range: 0x47cdf4-0x47ce6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47ce12 (push 0x47ce6b followed by fs-segment stack chaining); handler 0x47ce6b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047cdf4(undefined4 param_1,HDC param_2,int param_3,UINT param_4,LPRECT param_5)

{
  undefined1 *puVar1;
  int iVar2;
  LPCWSTR lpchText;
  int cchText;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x47ce07;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_18 = &LAB_0047ce6b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = local_8;
  puStack_14 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_14 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_14 = &stack0xfffffffc;
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  cchText = 0;
  if (iVar2 != 0) {
    cchText = *(int *)(iVar2 + -4);
  }
  lpchText = (LPCWSTR)FUN_00407f44(local_8);
  DrawTextW(param_2,lpchText,cchText,param_5,param_4);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0047ce72;
  puStack_18 = (undefined1 *)0x47ce6a;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
