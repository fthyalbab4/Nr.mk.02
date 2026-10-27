// rea decompile_all
// name: FUN_0061e504
// address: 0x61e504
// body: available
// range: 0x61e504-0x61e6e6 inclusive
// range: 0x61e6f6-0x61e7ba inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61e522 (push 0x61e7bb followed by fs-segment stack chaining); handler 0x61e7bb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61e6cd (push 0x61e6e7 followed by fs-segment stack chaining); handler 0x61e6e7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061e504(void)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  BOOL BVar4;
  int iVar5;
  int unaff_EDI;
  DWORD *in_FS_OFFSET;
  undefined4 local_2b8;
  undefined4 local_2b4;
  HCRYPTMSG local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  HCRYPTMSG local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  HCRYPTMSG local_298;
  undefined1 local_294 [572];
  undefined4 uStackY_58;
  DWORD DVar6;
  DWORD DVar7;
  HCRYPTMSG pvVar8;
  DWORD *pDVar9;
  DWORD *pdwMsgAndCertEncodingType;
  DWORD *pDVar10;
  undefined1 **pdwFormatType;
  HCERTSTORE *ppvVar11;
  HCRYPTMSG *ppvVar12;
  undefined1 **ppvContext;
  void **ppvContext_00;
  undefined1 *puVar13;
  HCERTSTORE local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_20 = &stack0xfffffffc;
  puVar13 = &stack0xfffffffc;
  local_10 = 0x56;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0061e7bb;
  local_28 = (HCERTSTORE)*in_FS_OFFSET;
  *in_FS_OFFSET = (DWORD)&local_28;
  bVar1 = true;
  FUN_0060716c(&DAT_0061e7dc,&local_298);
  FUN_0060716c(L"{jj~{n{",&local_2a0);
  FUN_0041f2fc(local_2a0,&local_29c);
  FUN_00408678(&local_8,local_29c,local_298);
  FUN_0060716c(&DAT_0061e7dc,&local_2a4);
  FUN_0060716c(L"{jj~{n{",&local_2ac);
  FUN_0041f2fc(local_2ac,&local_2a8);
  FUN_00408678(&local_c,local_2a8,local_2a4);
  cVar2 = FUN_00416b0c(local_c);
  if (cVar2 != '\0') {
    ppvContext = &local_24;
    ppvVar12 = (HCRYPTMSG *)&stack0xffffffd4;
    ppvVar11 = &local_28;
    pdwFormatType = &local_20;
    pDVar10 = (DWORD *)&stack0xffffffe4;
    pDVar9 = (DWORD *)&stack0xffffffe8;
    pvVar8 = (HCRYPTMSG)0x0;
    DVar7 = 0xe;
    DVar6 = 0x7ffe;
    pvVar3 = (void *)FUN_00408220(local_c);
    uStackY_58 = 0x61e5f2;
    BVar4 = CryptQueryObject(1,pvVar3,DVar6,DVar7,(DWORD)pvVar8,pDVar9,pDVar10,
                             (DWORD *)pdwFormatType,ppvVar11,ppvVar12,ppvContext);
    if ((BVar4 == 0) || (unaff_EDI != 10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  if ((bVar1) && (cVar2 = FUN_00416b0c(local_8), cVar2 != '\0')) {
    ppvContext_00 = (void **)&stack0xffffffc4;
    ppvVar12 = (HCRYPTMSG *)&stack0xffffffbc;
    ppvVar11 = (HCERTSTORE *)&stack0xffffffc0;
    pDVar10 = (DWORD *)&stack0xffffffc8;
    pDVar9 = (DWORD *)&stack0xffffffcc;
    pdwMsgAndCertEncodingType = (DWORD *)&stack0xffffffd0;
    pvVar8 = (HCRYPTMSG)0x0;
    DVar7 = 0xe;
    DVar6 = 0x7ffe;
    pvVar3 = (void *)FUN_00408220(local_8);
    uStackY_58 = 0x61e64b;
    BVar4 = CryptQueryObject(1,pvVar3,DVar6,DVar7,(DWORD)pvVar8,pdwMsgAndCertEncodingType,pDVar9,
                             pDVar10,ppvVar11,ppvVar12,ppvContext_00);
    if ((BVar4 == 0) || (ppvVar11 != (HCERTSTORE *)0xa)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  if (!bVar1) {
    FUN_0060716c(&DAT_0061e838,&local_2b0);
    FUN_0060716c(L"{jj~{n{",&local_2b8);
    FUN_0041f2fc(local_2b8,&local_2b4);
    FUN_00408678(&local_10,local_2b4,local_2b0);
    cVar2 = FUN_00416b0c(local_10);
    if (cVar2 != '\0') {
      DVar6 = *in_FS_OFFSET;
      *in_FS_OFFSET = (DWORD)&stack0xffffffcc;
      FUN_00416ca0(local_10,0x20);
      *in_FS_OFFSET = DVar6;
      FUN_00404be0(local_294,local_10,puVar13);
      *PTR_DAT_00689350 = 2;
      FUN_004055c0(local_294,2);
      FUN_0040448c();
      iVar5 = FUN_004047b8(0x117c7);
      FUN_004055e8(local_294,iVar5 + 0x86);
      FUN_0040448c();
      iVar5 = FUN_004047b8(0x1c3);
      if (-1 < iVar5 + 4) {
        iVar5 = iVar5 + 5;
        do {
          FUN_004047b8(0xffff);
          FUN_004047b8();
          FUN_004057a0(local_294,&stack0xffffffec);
          FUN_0040448c();
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_00404ca4(local_294);
      FUN_0040448c();
    }
  }
  puVar13 = local_20;
  *in_FS_OFFSET = (DWORD)local_28;
  local_20 = &LAB_0061e7c2;
  local_24 = (undefined1 *)0x61e7ad;
  thunk_FUN_004072fc(&local_2b8,9,puVar13);
  local_24 = (undefined1 *)0x61e7ba;
  thunk_FUN_004072fc(&local_10,3);
  return;
}
