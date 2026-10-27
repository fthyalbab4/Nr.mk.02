// rea decompile_all
// name: FUN_004caae8
// address: 0x4caae8
// body: available
// range: 0x4caae8-0x4cac72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4cab02 (push 0x4cac73 followed by fs-segment stack chaining); handler 0x4cac73 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004caae8(void)

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
  puStack_30 = &LAB_004cac73;
  puStack_34 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_34;
  puVar5 = &local_8;
  local_10 = GetCurrentProcessId();
  local_c = 0;
  FUN_00417c88(L"Delphi%.8X",&local_10,0,puVar5);
  FUN_00408194(&DAT_0068f25c,local_8);
  pWVar2 = (LPCWSTR)FUN_00408220(DAT_0068f25c);
  DAT_0068f258 = GlobalAddAtomW(pWVar2);
  puVar5 = &local_14;
  local_24 = DAT_0068cc40;
  local_20 = 0;
  local_1c = GetCurrentThreadId();
  local_18 = 0;
  FUN_00417c88(&PTR_DAT_004cacb0,&local_24,1,puVar5);
  FUN_00408194(&DAT_0068f260,local_14);
  pWVar2 = (LPCWSTR)FUN_00408220(DAT_0068f260);
  DAT_0068f25a = GlobalAddAtomW(pWVar2);
  pWVar2 = (LPCWSTR)FUN_00408220(DAT_0068f260);
  DAT_0068f264 = RegisterWindowMessageW(pWVar2);
  DAT_0068f29c = FUN_0043980c(&DAT_0042e714,1);
  FUN_004ca600();
  DAT_0068f244 = FUN_004ca378(&DAT_004b61f4,1);
  uVar3 = FUN_004e83d0(&PTR_FUN_004dc680,1,0);
  *(undefined4 *)PTR_DAT_00689620 = uVar3;
  uVar3 = FUN_004e9a50(&PTR_FUN_004dd6c4,1,0);
  *(undefined4 *)PTR_DAT_0068917c = uVar3;
  FUN_004ec290(*(undefined4 *)PTR_DAT_0068917c,1);
  DAT_0068f2a0 = FUN_004ba2b8(&PTR_FUN_004b0df8,1,0);
  pHStackY_3c = (HMODULE)0x4cac2b;
  pHVar4 = GetModuleHandleW(L"USER32");
  FUN_004385d4(&DAT_004ac6b0,&LAB_004b7ed8,&LAB_004b7ec8);
  if (pHVar4 != (HMODULE)0x0) {
    DAT_00681838 = FUN_0040deb0();
    pHStackY_3c = pHVar4;
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = pHStackY_3c;
  puStack_34 = &LAB_004cac7a;
  thunk_FUN_004072d8(&local_14,pHStackY_3c,puVar1);
  thunk_FUN_004072d8(&local_8);
  return;
}
