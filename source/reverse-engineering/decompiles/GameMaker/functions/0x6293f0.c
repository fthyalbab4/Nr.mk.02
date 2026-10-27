// rea decompile_all
// name: FUN_006293f0
// address: 0x6293f0
// body: available
// range: 0x6293f0-0x6295aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62940e (push 0x6295ab followed by fs-segment stack chaining); handler 0x6295ab lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006293f0(int param_1,int param_2)

{
  wchar_t *pwVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwStack_3c;
  undefined *puStack_38;
  wchar_t *pwStack_34;
  undefined *puStack_30;
  undefined *local_20;
  wchar_t *local_1c;
  undefined *local_18;
  undefined4 local_14;
  wchar_t *local_10;
  wchar_t *local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (wchar_t *)0x0;
  local_10 = (wchar_t *)0x0;
  local_14 = 0;
  local_18 = (undefined *)0x0;
  local_1c = (wchar_t *)0x0;
  local_20 = (undefined *)0x0;
  pwStack_34 = (wchar_t *)&LAB_006295ab;
  puStack_38 = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_38;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00406d88(L"Assertion failure",
                 L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdSSLOpenSSL.pas",0x6b8);
    puVar2 = puStack_30;
  }
  puStack_30 = puVar2;
  if (*(int *)(param_1 + 0x14) == 0) {
    FUN_00406d88(L"Assertion failure",
                 L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdSSLOpenSSL.pas",0x6b9);
  }
  pwStack_3c = *(wchar_t **)(*(int *)(param_1 + 0x14) + 0x24);
  iVar4 = (**(code **)PTR_DAT_00781a74)();
  *(int *)(param_1 + 0xc) = iVar4;
  if (iVar4 != 0) {
    iVar4 = FUN_00623b38(iVar4,param_1,pwStack_3c);
    if (iVar4 < 1) {
      FUN_0040b75c(PTR_PTR_007825c0,&local_c);
      pwStack_3c = local_c;
      FUN_0062024c(&PTR_LAB_006275cc,*(undefined4 *)(param_1 + 0xc),iVar4);
    }
    else {
      if (param_2 < 0) {
        thunk_FUN_00404478();
      }
      (**(code **)PTR_DAT_00781a70)();
      iVar4 = (**(code **)PTR_DAT_00781aa0)();
      pwVar1 = local_c;
      if (iVar4 < 1) {
        local_c =
        L"䖋僴캋压ꄌ瘬b柨ｭ棿陴b쎋迨\x06贀\xf055㟨\x1a＀\xf075ꁨ抖栀隴b쎋珨\x06贀\xec55诨\x19＀\xec75ꁨ抖栀雠b쎋埨\x06\xe800ᩮ"
        ;
        FUN_0040b75c(PTR_PTR_007825f0,&local_10,pwVar1);
        local_c = local_10;
        local_10 = L"瑨抖謀\xe8c3ڏ";
        FUN_0062024c(&PTR_LAB_00627684,*(undefined4 *)(param_1 + 0xc),iVar4);
      }
      local_10 = L"Cipher: name = ";
      local_14 = 0x6294f1;
      uVar5 = FUN_00629b80(param_1);
      local_14 = 0x6294f9;
      FUN_0062af30(uVar5,&local_14);
      local_18 = &DAT_006296a0;
      local_1c = L"description = ";
      local_20 = (undefined *)0x62950d;
      uVar5 = FUN_00629b80(param_1);
      local_20 = (undefined *)0x629515;
      FUN_0062aea0(uVar5,&local_18);
      local_20 = local_18;
      FUN_00629b80(param_1);
      uVar5 = FUN_0062af9c();
      FUN_0041666c(uVar5,&local_1c);
      puStack_30 = &DAT_006296a0;
      pwStack_34 = L"version = ";
      puStack_38 = (undefined *)0x62954a;
      uVar5 = FUN_00629b80(param_1);
      puStack_38 = (undefined *)0x629552;
      FUN_0062afc8(uVar5,&local_20);
      puStack_38 = local_20;
      pwStack_3c = L"; ";
      FUN_00408480(&local_8,0xc);
      uVar5 = *(undefined4 *)(param_1 + 4);
      cVar3 = FUN_00405c98(uVar5,&PTR_FUN_00626054);
      if (cVar3 != '\0') {
        piVar6 = (int *)FUN_00405cbc(uVar5,&PTR_FUN_00626054);
        (**(code **)(*piVar6 + 100))(piVar6,local_8);
      }
    }
  }
  pwVar1 = pwStack_34;
  *in_FS_OFFSET = pwStack_3c;
  pwStack_34 = L"幟譛工Ã";
  puStack_38 = (undefined *)0x6295aa;
  thunk_FUN_00406e80(&local_20,7,pwVar1);
  return;
}
