// rea decompile_all
// name: FUN_006072a8
// address: 0x6072a8
// body: available
// range: 0x6072a8-0x6073c0 inclusive
// range: 0x6073d0-0x6074d5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6072f1 (push 0x6074d6 followed by fs-segment stack chaining); handler 0x6074d6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6073a7 (push 0x6073c1 followed by fs-segment stack chaining); handler 0x6073c1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006072a8(void)

{
  bool bVar1;
  char cVar2;
  void *pvObject;
  BOOL BVar3;
  undefined4 *in_FS_OFFSET;
  DWORD dwExpectedContentTypeFlags;
  DWORD dwExpectedFormatTypeFlags;
  DWORD dwFlags;
  DWORD *in_stack_fffffd3c;
  DWORD *pdwContentType;
  DWORD *in_stack_fffffd44;
  HCERTSTORE *phCertStore;
  undefined4 uVar4;
  HCRYPTMSG *phMsg;
  void **ppvContext;
  undefined1 *puVar5;
  undefined4 uStack_2ac;
  undefined1 *puStack_2a8;
  undefined1 *puStack_2a4;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined1 local_27c [592];
  HCRYPTMSG local_2c;
  HCERTSTORE local_28;
  void *local_24;
  DWORD local_20;
  DWORD local_1c;
  DWORD local_18;
  undefined4 local_14;
  DWORD *local_10;
  DWORD *local_c;
  undefined4 local_8;

  puStack_2a4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  local_294 = 0;
  local_288 = 0;
  local_290 = 0;
  local_28c = 0;
  local_280 = 0;
  local_284 = 0;
  local_8 = 0;
  local_c = (DWORD *)0x0;
  local_10 = (DWORD *)0x0;
  local_14 = 0;
  puStack_2a8 = &LAB_006074d6;
  uStack_2ac = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2ac;
  FUN_0060716c(&DAT_006074f4,&local_14);
  FUN_0060716c(L"{jj~{n{",&local_284);
  FUN_0041f2fc(local_284,&local_280);
  FUN_00408678(&local_8,local_280,local_14);
  cVar2 = FUN_00416b0c(local_8);
  if (cVar2 == '\0') {
    DAT_00688658 = 0x10118;
  }
  else {
    ppvContext = &local_24;
    phMsg = &local_2c;
    phCertStore = &local_28;
    in_stack_fffffd44 = &local_20;
    pdwContentType = &local_1c;
    in_stack_fffffd3c = &local_18;
    dwFlags = 0;
    dwExpectedFormatTypeFlags = 0xe;
    dwExpectedContentTypeFlags = 0x7ffe;
    pvObject = (void *)FUN_00408220(local_8);
    BVar3 = CryptQueryObject(1,pvObject,dwExpectedContentTypeFlags,dwExpectedFormatTypeFlags,dwFlags
                             ,in_stack_fffffd3c,pdwContentType,in_stack_fffffd44,phCertStore,phMsg,
                             ppvContext);
    DAT_00688658 = 65000;
    if ((BVar3 == 0) || (local_1c != 10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      DAT_00688658 = 0x10118;
    }
    else {
      uVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xfffffd48;
      FUN_00416ca0(local_8,0x20);
      *in_FS_OFFSET = uVar4;
      FUN_00404be0(local_27c,local_8,puVar5);
      FUN_0060716c(&PTR_DAT_00607550,&local_28c);
      FUN_0041f2fc(local_28c,&local_288);
      FUN_00607224(9,&local_290);
      FUN_0040875c(&local_10,3);
      FUN_004175c0(local_10);
      FUN_00607224(8,&local_c);
      in_stack_fffffd3c = local_c;
      in_stack_fffffd44 = local_10;
      FUN_0040875c(&local_294,3);
      FUN_00405410(local_27c,local_294);
      FUN_0040448c();
      FUN_00404ca4(local_27c);
      FUN_0040448c();
    }
  }
  DAT_00688654 = DAT_00688654 + 1;
  FUN_0061e44c(local_14);
  *in_FS_OFFSET = in_stack_fffffd3c;
  thunk_FUN_004072fc(&local_294,6,in_stack_fffffd44,&LAB_006074dd);
  thunk_FUN_004072fc(&local_14,4);
  return;
}
