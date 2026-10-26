// rea decompile_all
// name: FUN_005d04b0
// address: 0x5d04b0
// body: available
// range: 0x5d04b0-0x5d079e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d04d6 (push 0x5d079f followed by fs-segment stack chaining); handler 0x5d079f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005d0542) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d04b0(void)

{
  char cVar1;
  void *pvObject;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  DWORD dwExpectedContentTypeFlags;
  DWORD dwExpectedFormatTypeFlags;
  DWORD dwFlags;
  DWORD *pdwMsgAndCertEncodingType;
  DWORD *pdwContentType;
  DWORD *pdwFormatType;
  wchar_t *pwVar3;
  HCERTSTORE *phCertStore;
  wchar_t *pwVar4;
  HCRYPTMSG *phMsg;
  undefined *puVar5;
  void **ppvContext;
  undefined4 uVar6;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  HCRYPTMSG local_2c;
  HCERTSTORE local_28;
  void *local_24;
  DWORD local_20;
  DWORD local_1c;
  DWORD local_18;
  double local_14;
  undefined4 local_c;
  int local_8;

  puStack_44 = &stack0xfffffffc;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_48 = &LAB_005d079f;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  FUN_005b59dc();
  OpenSSL_add_all_ciphers();
  OpenSSL_add_all_digests();
  ERR_load_crypto_strings();
  FUN_00404728(0,&local_c);
  ppvContext = &local_24;
  phMsg = &local_2c;
  phCertStore = &local_28;
  pdwFormatType = &local_20;
  pdwContentType = &local_1c;
  pdwMsgAndCertEncodingType = &local_18;
  dwFlags = 0;
  dwExpectedFormatTypeFlags = 0xe;
  dwExpectedContentTypeFlags = 0x7ffe;
  pvObject = (void *)FUN_00407f44(local_c);
  CryptQueryObject(1,pvObject,dwExpectedContentTypeFlags,dwExpectedFormatTypeFlags,dwFlags,
                   pdwMsgAndCertEncodingType,pdwContentType,pdwFormatType,phCertStore,phMsg,
                   ppvContext);
  DAT_00789b90 = RSA_new();
  BN_dec2bn();
  FUN_005ce368(*(undefined4 *)PTR_PTR_00781a54,PTR_DAT_0077d6b8,&local_30);
  FUN_00407670(local_30);
  BN_hex2bn();
  FUN_005cee90(0x1c,&local_34);
  puVar5 = &DAT_005d07bc;
  pwVar4 = L"GameMaker8.2";
  pwVar3 = L"\\license.plist";
  uVar6 = local_34;
  FUN_00408480(&DAT_00789b8c,4);
  FUN_0041735c(DAT_00789b8c,&local_38);
  cVar1 = FUN_00416e88(local_38);
  if (cVar1 == '\0') {
    FUN_0041735c(DAT_00789b8c,&local_3c);
    FUN_0041760c(local_3c);
  }
  DAT_00789b84 = FUN_005d179c(&PTR_LAB_005cd120,1,0,pwVar3,pwVar4,puVar5,uVar6);
  DAT_00789b88 = FUN_005d235c(&LAB_005cda40,1);
  cVar1 = FUN_00416e40(DAT_00789b8c);
  if (cVar1 != '\0') {
    FUN_005cf3e4(DAT_00789b8c);
    cVar1 = FUN_005d0e3c();
    if (cVar1 == '\0') {
      DAT_00789b84 = FUN_005d179c(&PTR_LAB_005cd120,1,0);
      DAT_00789b88 = FUN_005d235c(&LAB_005cda40,1);
    }
  }
  FUN_004199b0();
  local_14 = (double)in_ST0;
  FUN_005cfab8();
  _DAT_00789b7c = (double)((float10)local_14 - in_ST1);
  if ((1.0 < _DAT_00789b7c) && (cVar1 = FUN_005d0e3c(), cVar1 != '\0')) {
    FUN_005d0330();
    FUN_005cfab8();
    _DAT_00789b7c = (double)((float10)local_14 - in_ST2);
    if (32.0 < _DAT_00789b7c) {
      FUN_00407f0c(&local_8,0);
      piVar2 = (int *)FUN_00452480(&DAT_004512d4,1);
      FUN_00452568(piVar2,0x80000001);
      cVar1 = FUN_004526b0(piVar2,L"\\Software\\Game Maker",1);
      if (cVar1 != '\0') {
        cVar1 = FUN_00453668(piVar2,L"lfile");
        if (cVar1 != '\0') {
          FUN_004530e0(piVar2,L"lfile",&local_8);
        }
        FUN_00452538(piVar2);
      }
      (**(code **)(*piVar2 + -4))(piVar2,1);
      if (local_8 != 0) {
        FUN_005cfbd0(local_8);
        FUN_005cfab8();
        _DAT_00789b7c = (double)((float10)local_14 - in_ST3);
      }
      if (32.0 < _DAT_00789b7c) {
        FUN_005d1ba4(DAT_00789b84);
        FUN_005d2b2c(DAT_00789b88);
        DAT_0077d6b4 = 1;
      }
    }
  }
  *in_FS_OFFSET = pwVar3;
  thunk_FUN_00406e80(&local_3c,3,puVar5,&LAB_005d07a6);
  FUN_00406e5c(&local_30);
  thunk_FUN_00406e80(&local_c,2);
  return;
}
