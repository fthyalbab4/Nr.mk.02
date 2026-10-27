// rea decompile_all
// name: FUN_0041bb50
// address: 0x41bb50
// body: available
// range: 0x41bb50-0x41bcfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41bb76 (push 0x41bcfc followed by fs-segment stack chaining); handler 0x41bcfc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041bb50(undefined4 *param_1,LPCVOID param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  HINSTANCE hInstance;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *in_FS_OFFSET;
  UINT uID;
  WCHAR *lpBuffer;
  undefined4 uStack_680;
  undefined1 *puStack_67c;
  undefined1 *puStack_678;
  undefined4 local_668;
  undefined4 local_664;
  undefined1 local_660;
  undefined1 *local_65c;
  undefined1 local_658;
  int local_654;
  undefined1 local_650;
  undefined *local_64c;
  undefined1 local_648;
  undefined *local_644;
  undefined1 local_640;
  _MEMORY_BASIC_INFORMATION local_63c;
  WCHAR local_620 [256];
  WCHAR local_420 [261];
  undefined1 local_216 [522];
  int local_c;
  undefined4 local_8;

  puStack_678 = &stack0xfffffffc;
  local_668 = 0;
  puStack_67c = &LAB_0041bcfc;
  uStack_680 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_680;
  local_8 = param_3;
  VirtualQuery(param_2,&local_63c,0x1c);
  if (local_63c.State == 0x1000) {
    DVar3 = GetModuleFileNameW(local_63c.AllocationBase,local_420,0x105);
    if (DVar3 != 0) {
      local_c = (int)param_2 - (int)local_63c.AllocationBase;
      uVar5 = extraout_var;
      goto LAB_0041bbdc;
    }
  }
  GetModuleFileNameW(DAT_00785c40,local_420,0x105);
  local_c = func_0x0041bb44(param_2);
  uVar5 = extraout_var_00;
LAB_0041bbdc:
  iVar4 = FUN_0041dc54(local_420,CONCAT22(uVar5,0x5c));
  FUN_00417754(local_216,iVar4 + 2,0x104);
  puVar6 = &DAT_0041bd10;
  puVar7 = &DAT_0041bd10;
  cVar2 = FUN_00405c98(param_1,&PTR_LAB_00410b4c);
  if (cVar2 != '\0') {
    puVar6 = (undefined *)FUN_00407f44(param_1[1]);
    iVar4 = FUN_00417670(puVar6);
    if ((iVar4 != 0) && (*(short *)(puVar6 + iVar4 * 2 + -2) != 0x2e)) {
      puVar7 = &DAT_0041bd14;
    }
  }
  iVar4 = 0x100;
  lpBuffer = local_620;
  uID = *(UINT *)(PTR_PTR_007828ac + 4);
  hInstance = (HINSTANCE)FUN_00409dc8(DAT_00785c40);
  LoadStringW(hInstance,uID,lpBuffer,iVar4);
  FUN_00405954(*param_1,&local_668);
  local_664 = local_668;
  local_660 = 0x11;
  local_65c = local_216;
  local_658 = 10;
  local_654 = local_c;
  local_650 = 5;
  local_648 = 10;
  local_640 = 10;
  local_64c = puVar6;
  local_644 = puVar7;
  FUN_00417d08(local_8,param_4,local_620,4,&local_664);
  FUN_00417670(local_8);
  puVar1 = puStack_678;
  *in_FS_OFFSET = uStack_680;
  puStack_678 = &LAB_0041bd03;
  puStack_67c = (undefined1 *)0x41bcfb;
  thunk_FUN_00406e5c(&local_668,uStack_680,puVar1);
  return;
}
