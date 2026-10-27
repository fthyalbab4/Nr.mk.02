// rea decompile_all
// name: FUN_0048526c
// address: 0x48526c
// body: available
// range: 0x48526c-0x48533a inclusive
// range: 0x485377-0x485394 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48528a (push 0x485395 followed by fs-segment stack chaining); handler 0x485395 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4852bf (push 0x48533b followed by fs-segment stack chaining); handler 0x48533b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048526c(int param_1)

{
  HGDIOBJ pvVar1;
  LPCWSTR lpString;
  int c;
  undefined4 *in_FS_OFFSET;
  tagSIZE *psizl;
  undefined4 uVar2;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c;
  tagSIZE local_18;
  HDC local_10;
  int local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_8 = 0;
  puStack_30 = &LAB_00485395;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_c = param_1;
  if (((*(byte *)(param_1 + 0x1c) & 2) == 0) && (*(char *)(param_1 + 0x271) != '\0')) {
    local_10 = GetDC((HWND)0x0);
    uVar2 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffc0;
    pvVar1 = (HGDIOBJ)FUN_0045b10c(*(undefined4 *)(local_c + 100));
    pvVar1 = SelectObject(local_10,pvVar1);
    FUN_004ee6a0(local_c,&local_8);
    FUN_004ee6a0(local_c,&local_1c);
    c = 0;
    if (local_1c != 0) {
      c = *(int *)(local_1c + -4);
    }
    psizl = &local_18;
    lpString = (LPCWSTR)FUN_00407f44(local_8);
    GetTextExtentPoint32W(local_10,lpString,c,psizl);
    SelectObject(local_10,pvVar1);
    *in_FS_OFFSET = uVar2;
    ReleaseDC((HWND)0x0,local_10);
    return;
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0048539c;
  puStack_30 = (undefined1 *)0x48538c;
  thunk_FUN_00406e5c(&local_1c,uStack_34,&stack0xfffffffc);
  puStack_30 = (undefined1 *)0x485394;
  thunk_FUN_00406e5c(&local_8);
  return;
}
