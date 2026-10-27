// rea decompile_all
// name: FUN_004a0b94
// address: 0x4a0b94
// body: available
// range: 0x4a0b94-0x4a0cb3 inclusive
// range: 0x4a0cf7-0x4a0d28 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a0bbb (push 0x4a0d29 followed by fs-segment stack chaining); handler 0x4a0d29 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a0bd8 (push 0x4a0cf0 followed by fs-segment stack chaining); handler 0x4a0cf0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a0c2a (push 0x4a0cc5 followed by fs-segment stack chaining); handler 0x4a0cc5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a0c43 (push 0x4a0cb4 followed by fs-segment stack chaining); handler 0x4a0cb4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a0b94(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_50;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  puStack_24 = (undefined1 *)0x4a0bb0;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_28 = &LAB_004a0d29;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_34 = (undefined1 *)0x4a0bc5;
  puStack_24 = &stack0xfffffffc;
  BVar2 = OpenClipboard((HWND)0x0);
  if (BVar2 != 0) {
    puStack_34 = &LAB_004a0cf0;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    FUN_004081e8(&local_c,local_8);
    iVar3 = local_c;
    if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
      iVar3 = FUN_00407488(&local_c,local_c);
    }
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
    }
    uStack_44 = 0x4a0c1c;
    hMem = GlobalAlloc(0x2002,iVar5 * 2 + 2);
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    pvVar4 = GlobalLock(hMem);
    uStack_50 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_50;
    FUN_004081e8(&local_10,local_8);
    iVar3 = local_10;
    if ((local_10 != 0) && (*(short *)(local_10 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_10,local_10);
    }
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
    }
    uVar6 = FUN_00408220(local_8);
    FUN_00404514(uVar6,pvVar4,iVar5 * 2 + 2);
    EmptyClipboard();
    SetClipboardData(0xd,hMem);
    *in_FS_OFFSET = uStack_50;
    uStack_50 = 0x4a0cb3;
    GlobalUnlock(hMem);
    return;
  }
  FUN_0041be80(&LAB_004109ac,1,PTR_LAB_006889b0);
  FUN_00406ab4();
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004a0d30;
  puStack_28 = (undefined1 *)0x4a0d28;
  thunk_FUN_004072fc(&local_10,3,puVar1);
  return;
}
