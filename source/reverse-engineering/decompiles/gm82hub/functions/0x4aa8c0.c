// rea decompile_all
// name: FUN_004aa8c0
// address: 0x4aa8c0
// body: available
// range: 0x4aa8c0-0x4aa9b1 inclusive
// range: 0x4aa9b9-0x4aa9ce inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4aa8dd (push 0x4aa9f9 followed by fs-segment stack chaining); handler 0x4aa9f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4aa909 (push 0x4aa9cf followed by fs-segment stack chaining); handler 0x4aa9cf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4aa973 (push 0x4aa9b2 followed by fs-segment stack chaining); handler 0x4aa9b2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aa8c0(void)

{
  char cVar1;
  HMODULE pHVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puVar5;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  WCHAR local_24 [10];
  undefined4 local_10;
  HMODULE local_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = 0;
  local_8 = 0;
  puStack_38 = &LAB_004aa9f9;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_24[0] = L'\0';
  puStack_44 = (undefined1 *)0x4aa8ef;
  GetKeyboardLayoutNameW(local_24);
  local_10 = FUN_00452b40(&DAT_00451994,1);
  puStack_44 = &LAB_004aa9cf;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_4c = (undefined1 *)0x4aa919;
  FUN_00452c28(local_10,0x80000002);
  puStack_4c = (undefined1 *)0x4aa929;
  FUN_004083a4(&local_2c,local_24,10);
  puStack_4c = (undefined1 *)0x4aa939;
  FUN_00408678(&local_28,L"\\SYSTEM\\CurrentControlSet\\Control\\Keyboard Layouts\\",local_2c);
  puStack_4c = (undefined1 *)0x4aa944;
  cVar1 = FUN_00452ea4(local_10,local_28);
  if (cVar1 != '\0') {
    puStack_4c = (undefined1 *)0x4aa958;
    FUN_004537a0(local_10,&PTR_DAT_004aaa88,&local_8);
    puStack_4c = (undefined1 *)0x4aa965;
    pHVar2 = (HMODULE)FUN_0041f278(local_8,0x8000);
    puStack_50 = &LAB_004aa9b2;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    puStack_4c = &stack0xfffffffc;
    local_c = pHVar2;
    pcVar3 = (code *)FUN_0040deb0();
    iVar4 = (*pcVar3)();
    PTR_FUN_00681824._0_1_ = (*(ushort *)(iVar4 + 0x28) & 1) == 1;
    *in_FS_OFFSET = pHVar2;
    uStack_54 = 0x4aa9b9;
    FreeLibrary(local_c);
    return;
  }
  *in_FS_OFFSET = uStack_48;
  puStack_44 = (undefined1 *)0x4aa9ce;
  FUN_00405fdc(local_10,uStack_48,puVar5);
  return;
}
