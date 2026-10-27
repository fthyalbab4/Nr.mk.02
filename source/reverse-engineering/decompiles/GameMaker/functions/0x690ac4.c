// rea decompile_all
// name: FUN_00690ac4
// address: 0x690ac4
// body: available
// range: 0x690ac4-0x690d01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x690aed (push 0x690d02 followed by fs-segment stack chaining); handler 0x690d02 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00690c6e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00690ac4(int param_1,undefined4 param_2,undefined2 param_3,undefined1 *param_4,int *param_5
                 ,int param_6)

{
  undefined1 *puVar1;
  HWND hWndTo;
  void *pvObject;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  DWORD dwExpectedContentTypeFlags;
  DWORD dwExpectedFormatTypeFlags;
  DWORD dwFlags;
  DWORD *pdwMsgAndCertEncodingType;
  DWORD *pdwContentType;
  DWORD *pdwFormatType;
  HCERTSTORE *phCertStore;
  tagPOINT *lpPoints;
  HCRYPTMSG *phMsg;
  UINT cPoints;
  void **ppvContext;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  HCRYPTMSG local_40;
  HCERTSTORE local_3c;
  void *local_38;
  DWORD local_34;
  DWORD local_30;
  DWORD local_2c;
  tagPOINT local_28;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  undefined2 local_a;
  undefined4 local_8;

  puStack_54 = &stack0xfffffffc;
  local_8 = 0;
  local_28.x = *param_5;
  local_28.y = param_5[1];
  puStack_58 = &LAB_00690d02;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  cPoints = 1;
  lpPoints = &local_28;
  local_14 = local_28.x;
  local_10 = local_28.y;
  local_a = param_3;
  hWndTo = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x3b8));
  MapWindowPoints((HWND)0x0,hWndTo,lpPoints,cPoints);
  local_18 = (float)(*(int *)(param_1 + 0x1650) + local_28.x) / *(float *)(param_1 + 0x165c);
  local_1c = (float)(*(int *)(param_1 + 0x1654) + local_28.y) / *(float *)(param_1 + 0x165c);
  if (param_6 < 0) {
    *(float *)(param_1 + 0x165c) = *(float *)(param_1 + 0x165c) / 1.25;
  }
  else {
    *(float *)(param_1 + 0x165c) = *(float *)(param_1 + 0x165c) * 1.25;
  }
  if (32.0 < *(float *)(param_1 + 0x165c)) {
    *(undefined4 *)(param_1 + 0x165c) = 0x42000000;
  }
  if ((float10)*(float *)(param_1 + 0x165c) < _DAT_00690d1c) {
    *(undefined4 *)(param_1 + 0x165c) = 0x3d4ccccd;
  }
  if ((1.0 < *(float *)(param_1 + 0x165c)) &&
     ((float10)*(float *)(param_1 + 0x165c) < _DAT_00690d2c)) {
    *(undefined4 *)(param_1 + 0x165c) = 0x3f800000;
  }
  if ((*(float *)(param_1 + 0x165c) < 1.0) &&
     (_DAT_00690d38 < (float10)*(float *)(param_1 + 0x165c))) {
    *(undefined4 *)(param_1 + 0x165c) = 0x3f800000;
  }
  if (0x210 < DAT_0077f3a4 * 4) {
    FUN_00404728(0,&local_8);
    ppvContext = &local_38;
    phMsg = &local_40;
    phCertStore = &local_3c;
    pdwFormatType = &local_34;
    pdwContentType = &local_30;
    pdwMsgAndCertEncodingType = &local_2c;
    dwFlags = 0;
    dwExpectedFormatTypeFlags = 0xe;
    dwExpectedContentTypeFlags = 0x7ffe;
    pvObject = (void *)FUN_00407f44(local_8);
    CryptQueryObject(1,pvObject,dwExpectedContentTypeFlags,dwExpectedFormatTypeFlags,dwFlags,
                     pdwMsgAndCertEncodingType,pdwContentType,pdwFormatType,phCertStore,phMsg,
                     ppvContext);
    DAT_0077f3a4 = DAT_0077f3a4 * -4;
  }
  iVar2 = FUN_00404878();
  *(int *)(param_1 + 0x1650) = iVar2 - local_28.x;
  iVar2 = FUN_00404878();
  *(int *)(param_1 + 0x1654) = iVar2 - local_28.y;
  DAT_0077f3a4 = DAT_0077f3a4 + 1;
  if ((*(char *)(param_1 + 0x1688) == '\0') &&
     (FUN_006902e4(param_1), *(int *)(param_1 + 0x61c) != 0)) {
    FUN_00691508(param_1,0);
    FUN_0068f9f8(param_1);
  }
  puVar1 = puStack_54;
  *param_4 = 1;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_00690d09;
  puStack_58 = (undefined1 *)0x690d01;
  thunk_FUN_00406e5c(&local_8,uStack_5c,puVar1);
  return;
}
