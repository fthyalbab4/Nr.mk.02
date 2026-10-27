// rea decompile_all
// name: FUN_00629714
// address: 0x629714
// body: available
// range: 0x629714-0x6298f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x629733 (push 0x6298f4 followed by fs-segment stack chaining); handler 0x6298f4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629714(int param_1,int param_2)

{
  undefined *puVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_3c;
  undefined1 *puStack_38;
  wchar_t *pwStack_34;
  undefined *local_24;
  wchar_t *local_20;
  wchar_t *local_1c;
  undefined *local_18;
  undefined *local_14;
  wchar_t *local_10;
  undefined *local_c;
  undefined4 local_8;

  pwStack_34 = (wchar_t *)&stack0xfffffffc;
  local_8 = 0;
  local_c = (undefined *)0x0;
  local_10 = (wchar_t *)0x0;
  local_14 = (undefined *)0x0;
  local_18 = (undefined *)0x0;
  local_1c = (wchar_t *)0x0;
  local_20 = (wchar_t *)0x0;
  local_24 = (undefined *)0x0;
  puStack_38 = &LAB_006298f4;
  puStack_3c = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  pwVar2 = (wchar_t *)&stack0xfffffffc;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00406d88(L"Assertion failure",
                 L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdSSLOpenSSL.pas",0x6d4);
    pwVar2 = pwStack_34;
  }
  pwStack_34 = pwVar2;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00406d88(L"Assertion failure",
                 L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdSSLOpenSSL.pas",0x6d5);
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x24);
  iVar4 = (**(code **)PTR_DAT_00781a74)();
  *(int *)(param_1 + 0xc) = iVar4;
  if (iVar4 != 0) {
    iVar4 = FUN_00623b38(iVar4,param_1,uVar5);
    if (iVar4 < 1) {
      FUN_0040b75c(PTR_PTR_007825c0,&local_c);
      FUN_0062024c(&PTR_LAB_006275cc,*(undefined4 *)(param_1 + 0xc),iVar4,local_c);
    }
    if (param_2 < 0) {
      thunk_FUN_00404478();
    }
    iVar4 = (**(code **)PTR_DAT_00781a70)();
    if (iVar4 < 1) {
      FUN_0040b75c(PTR_PTR_007825bc,&local_10);
      FUN_0062024c(&PTR_LAB_00627520,*(undefined4 *)(param_1 + 0xc),iVar4,local_10);
    }
    iVar4 = (**(code **)PTR_DAT_00781790)();
    puVar1 = local_c;
    if (iVar4 < 1) {
      local_c = (undefined *)0x629818;
      FUN_0040b75c(PTR_PTR_00782358,&local_14,puVar1);
      local_c = local_14;
      local_10 = L"뱨抙謀\xe8c3͉";
      FUN_0062024c(&PTR_LAB_00627734,*(undefined4 *)(param_1 + 0xc),iVar4);
    }
    local_10 = L"Cipher: name = ";
    local_14 = (undefined *)0x629837;
    uVar5 = FUN_00629b80(param_1);
    local_14 = (undefined *)0x62983f;
    FUN_0062af30(uVar5,&local_18);
    local_14 = local_18;
    local_18 = &DAT_006299e8;
    local_1c = L"description = ";
    local_20 = L"喍\xe8e8ᙅ";
    uVar5 = FUN_00629b80(param_1);
    local_20 = L"痿棨駨b⡨抚謀\xe8c3̑";
    FUN_0062aea0(uVar5,&local_1c);
    local_20 = local_1c;
    local_24 = &DAT_006299e8;
    FUN_00629b80(param_1);
    uVar5 = FUN_0062af9c();
    FUN_0041666c(uVar5,&local_20);
    pwStack_34 = L"version = ";
    puStack_38 = (undefined1 *)0x629890;
    uVar5 = FUN_00629b80(param_1);
    puStack_38 = (undefined1 *)0x629898;
    FUN_0062afc8(uVar5,&local_24);
    puStack_38 = local_24;
    puStack_3c = &DAT_006299e8;
    FUN_00408480(&local_8,0xc);
    uVar5 = *(undefined4 *)(param_1 + 4);
    cVar3 = FUN_00405c98(uVar5,&PTR_FUN_00625b5c);
    if (cVar3 != '\0') {
      piVar6 = (int *)FUN_00405cbc(uVar5,&PTR_FUN_00625b5c);
      (**(code **)(*piVar6 + 0x104))(piVar6,local_8);
    }
  }
  pwVar2 = pwStack_34;
  *in_FS_OFFSET = puStack_3c;
  pwStack_34 = L"幟譛工Ã뀀Ȅ＀\xffff㟿";
  puStack_38 = (undefined1 *)0x6298f3;
  thunk_FUN_00406e80(&local_24,8,pwVar2);
  return;
}
