// rea decompile_all
// name: FUN_004fdc6c
// address: 0x4fdc6c
// body: available
// range: 0x4fdc6c-0x4fddf6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fdc86 (push 0x4fddf7 followed by fs-segment stack chaining); handler 0x4fddf7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fdc6c(void)

{
  undefined1 *puVar1;
  LPCWSTR pWVar2;
  undefined4 uVar3;
  HMODULE pHVar4;
  undefined4 *in_FS_OFFSET;
  HMODULE pHStackY_3c;
  undefined4 *puVar5;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined1 local_20;
  DWORD local_1c;
  undefined1 local_18;
  undefined4 local_14;
  DWORD local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_14 = 0;
  local_8 = 0;
  puStack_30 = &LAB_004fddf7;
  puStack_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_34;
  puVar5 = &local_8;
  local_10 = GetCurrentProcessId();
  local_c = 0;
  FUN_00417d4c(L"Delphi%.8X",&local_10,0,puVar5);
  FUN_00407eb8(&DAT_00788260,local_8);
  pWVar2 = (LPCWSTR)FUN_00407f44(DAT_00788260);
  DAT_0078825c = GlobalAddAtomW(pWVar2);
  puVar5 = &local_14;
  local_24 = DAT_00785c40;
  local_20 = 0;
  local_1c = GetCurrentThreadId();
  local_18 = 0;
  FUN_00417d4c(L"ControlOfs%.8X%.8X",&local_24,1,puVar5);
  FUN_00407eb8(&DAT_00788264,local_14);
  pWVar2 = (LPCWSTR)FUN_00407f44(DAT_00788264);
  DAT_0078825e = GlobalAddAtomW(pWVar2);
  pWVar2 = (LPCWSTR)FUN_00407f44(DAT_00788264);
  DAT_00788268 = RegisterWindowMessageW(pWVar2);
  DAT_007882a0 = FUN_0043b990(&LAB_0042fb58,1);
  FUN_004fd714();
  DAT_00788248 = FUN_004fd48c(&DAT_004e9238,1);
  uVar3 = FUN_0051c344(&PTR_FUN_005104cc,1,0);
  *(undefined4 *)PTR_DAT_007828e0 = uVar3;
  uVar3 = FUN_0051da60(&PTR_FUN_00511510,1,0);
  *(undefined4 *)PTR_DAT_00782280 = uVar3;
  FUN_005202a0(*(undefined4 *)PTR_DAT_00782280,1);
  DAT_007882a4 = FUN_004ed300(&PTR_FUN_004e3e3c,1,0);
  pHStackY_3c = (HMODULE)0x4fddaf;
  pHVar4 = GetModuleHandleW(L"USER32");
  FUN_0043a758(&DAT_004df600,&LAB_004eaf1c,&LAB_004eaf0c);
  if (pHVar4 != (HMODULE)0x0) {
    DAT_00778aa0 = FUN_0040dcb4();
    pHStackY_3c = pHVar4;
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = pHStackY_3c;
  puStack_34 = &LAB_004fddfe;
  thunk_FUN_00406e5c(&local_14,pHStackY_3c,puVar1);
  thunk_FUN_00406e5c(&local_8);
  return;
}
