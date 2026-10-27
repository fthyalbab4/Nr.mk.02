// rea decompile_all
// name: FUN_00415ae8
// address: 0x415ae8
// body: available
// range: 0x415ae8-0x415b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x415b06 (push 0x415b6c followed by fs-segment stack chaining); handler 0x415b6c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415ae8(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  DWORD cchLength;
  undefined4 uVar3;
  LPWSTR lpsz;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;

  puStack_14 = (undefined1 *)0x415afb;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_00415b6c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = local_8;
  puStack_14 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_14 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_14 = &stack0xfffffffc;
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  cchLength = 0;
  if (iVar2 != 0) {
    cchLength = *(DWORD *)(iVar2 + -4);
  }
  uVar3 = FUN_00407f44(local_8);
  FUN_00407ff4(param_2,uVar3,cchLength);
  if (0 < (int)cchLength) {
    lpsz = (LPWSTR)FUN_00407f44(*param_2);
    CharLowerBuffW(lpsz,cchLength);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00415b73;
  puStack_18 = (undefined1 *)0x415b6b;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar1);
  return;
}
