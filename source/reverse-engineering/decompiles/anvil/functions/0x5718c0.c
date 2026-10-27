// rea decompile_all
// name: FUN_005718c0
// address: 0x5718c0
// body: available
// range: 0x5718c0-0x571a45 inclusive
// range: 0x571a50-0x571b1a inclusive
// range: 0x571b25-0x571bc4 inclusive
// range: 0x571bcf-0x571bd8 inclusive
// range: 0x571be3-0x571c15 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5718fd (push 0x571c16 followed by fs-segment stack chaining); handler 0x571c16 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57191f (push 0x571bd9 followed by fs-segment stack chaining); handler 0x571bd9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x571a2c (push 0x571a46 followed by fs-segment stack chaining); handler 0x571a46 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x571a5b (push 0x571b1b followed by fs-segment stack chaining); handler 0x571b1b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x571b30 (push 0x571bc5 followed by fs-segment stack chaining); handler 0x571bc5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005718c0(void)

{
  bool bVar1;
  char cVar2;
  void *pvObject;
  BOOL BVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  DWORD dwExpectedContentTypeFlags;
  undefined4 uVar5;
  DWORD dwExpectedFormatTypeFlags;
  DWORD dwFlags;
  undefined4 uVar6;
  DWORD *in_stack_fffffd34;
  DWORD *pdwContentType;
  DWORD *in_stack_fffffd3c;
  HCERTSTORE *in_stack_fffffd40;
  HCRYPTMSG *phMsg;
  void **ppvContext;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined4 uStack_2b4;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2ac;
  undefined4 uStack_2a8;
  undefined1 *puStack_2a4;
  undefined1 *puStack_2a0;
  undefined4 local_290;
  DWORD *local_28c;
  undefined4 local_288;
  DWORD *local_284;
  undefined4 local_280;
  undefined1 local_27c [592];
  HCRYPTMSG local_2c;
  HCERTSTORE local_28;
  void *local_24;
  DWORD local_20;
  DWORD local_1c;
  DWORD local_18;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_2a0 = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  ppvVar8 = (void **)&stack0xfffffffc;
  local_290 = 0;
  local_284 = (DWORD *)0x0;
  local_28c = (DWORD *)0x0;
  local_288 = 0;
  local_280 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_2a4 = &LAB_00571c16;
  uStack_2a8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2a8;
  puStack_2ac = (undefined1 *)0x571911;
  local_10 = FUN_00452b40(&DAT_00451994,1);
  puStack_2b0 = &LAB_00571bd9;
  uStack_2b4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2b4;
  puStack_2ac = &stack0xfffffffc;
  FUN_00452c28(local_10,0x80000001);
  ppvContext = (void **)0x57193b;
  cVar2 = FUN_00452d70(local_10,&PTR_DAT_00571c30,0);
  if (cVar2 != '\0') {
    ppvContext = (void **)0x571952;
    cVar2 = FUN_00452d70(local_10,L"Classes",0);
    if (cVar2 != '\0') {
      ppvContext = (void **)0x571969;
      cVar2 = FUN_00452d70(local_10,&PTR_DAT_00571c6c,0);
      if (cVar2 != '\0') {
        ppvContext = (void **)0x571980;
        cVar2 = FUN_00452d70(local_10,&PTR_DAT_00571c94,0);
        if (cVar2 != '\0') {
          ppvContext = (void **)0x571997;
          cVar2 = FUN_00452d70(local_10,L"jnode12",0);
          if (cVar2 != '\0') {
            FUN_004537a0(local_10,L"code",&local_280);
            FUN_0060716c(local_280,&local_c);
            FUN_00452bf8(local_10);
            ppvContext = (void **)0x5719d0;
            cVar2 = FUN_00416b0c(local_c);
            if (cVar2 != '\0') {
              ppvContext = &local_24;
              phMsg = &local_2c;
              in_stack_fffffd40 = &local_28;
              in_stack_fffffd3c = &local_20;
              pdwContentType = &local_1c;
              in_stack_fffffd34 = &local_18;
              dwFlags = 0;
              dwExpectedFormatTypeFlags = 0xe;
              dwExpectedContentTypeFlags = 0x7ffe;
              pvObject = (void *)FUN_00408220(local_c);
              BVar3 = CryptQueryObject(1,pvObject,dwExpectedContentTypeFlags,
                                       dwExpectedFormatTypeFlags,dwFlags,in_stack_fffffd34,
                                       pdwContentType,in_stack_fffffd3c,in_stack_fffffd40,phMsg,
                                       ppvContext);
              if (((char)BVar3 == '\0') || (local_1c != 10)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) {
                uVar5 = *in_FS_OFFSET;
                *in_FS_OFFSET = &stack0xfffffd40;
                FUN_00416ca0(local_c,0x20);
                *in_FS_OFFSET = uVar5;
                in_stack_fffffd40 = (HCERTSTORE *)*in_FS_OFFSET;
                *in_FS_OFFSET = &stack0xfffffd40;
                FUN_00404be0(local_27c,local_c,puVar7);
                FUN_0060716c(&PTR_DAT_00571ce8,&local_288);
                FUN_0041f2fc(local_288,&local_284);
                in_stack_fffffd3c = local_284;
                FUN_00607224(9,&local_28c);
                in_stack_fffffd34 = local_28c;
                FUN_0040875c(&local_8,3);
                FUN_004175c0(local_8);
                uVar6 = local_8;
                FUN_00607224(8,&local_290);
                uVar5 = local_290;
                FUN_0040875c(&local_c,3);
                FUN_00405410(local_27c,local_c);
                FUN_0040448c();
                FUN_00404ca4(local_27c);
                FUN_0040448c();
                *in_FS_OFFSET = uVar5;
                uVar5 = *in_FS_OFFSET;
                *in_FS_OFFSET = &stack0xfffffd28;
                FUN_00404be0(local_27c,local_c,uVar6);
                *PTR_DAT_00689350 = 2;
                FUN_004055c0(local_27c,2);
                FUN_0040448c();
                FUN_004055e8(local_27c,1);
                FUN_0040448c();
                iVar4 = FUN_004047b8(0x1038);
                if (-1 < iVar4 + 4) {
                  iVar4 = iVar4 + 5;
                  do {
                    local_12 = FUN_004047b8(0xffff);
                    FUN_004057a0(local_27c,&local_12);
                    FUN_0040448c();
                    iVar4 = iVar4 + -1;
                  } while (iVar4 != 0);
                }
                FUN_00404ca4(local_27c);
                FUN_0040448c();
                *in_FS_OFFSET = uVar5;
                ppvContext = ppvVar8;
              }
            }
          }
        }
      }
    }
  }
  *in_FS_OFFSET = in_stack_fffffd34;
  FUN_00405fdc(local_10,in_stack_fffffd34,in_stack_fffffd3c);
  *in_FS_OFFSET = in_stack_fffffd40;
  thunk_FUN_004072fc(&local_290,5,ppvContext);
  thunk_FUN_004072fc(&local_c,2);
  return;
}
