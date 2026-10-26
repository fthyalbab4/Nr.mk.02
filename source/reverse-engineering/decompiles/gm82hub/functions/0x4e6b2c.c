// rea decompile_all
// name: FUN_004e6b2c
// address: 0x4e6b2c
// body: available
// range: 0x4e6b2c-0x4e6ce1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e6b4d (push 0x4e6d4b followed by fs-segment stack chaining); handler 0x4e6d4b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e6b73 (push 0x4e6d2c followed by fs-segment stack chaining); handler 0x4e6d2c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e6bb4 (push 0x4e6d02 followed by fs-segment stack chaining); handler 0x4e6d02 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e6bcd (push 0x4e6ce2 followed by fs-segment stack chaining); handler 0x4e6ce2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e6b2c(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  BITMAPINFO *lpbmi;
  void *pvVar5;
  HDC pHVar6;
  undefined4 *in_FS_OFFSET;
  int iVar7;
  int iVar8;
  int xSrc;
  int ySrc;
  int nNumber;
  int nNumber_00;
  void *lpBits;
  UINT iUsage;
  DWORD rop;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;

  puStack_38 = (undefined1 *)0x4e6b3d;
  local_8 = param_1;
  FUN_00480fc8();
  puStack_38 = (undefined1 *)0x4e6b42;
  FUN_004802f8();
  puStack_3c = &LAB_004e6d4b;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x4e6b58;
  puStack_38 = &stack0xfffffffc;
  local_c = (int *)FUN_004e6a14(local_8);
  puStack_44 = (undefined1 *)0x4e6b63;
  FUN_004e3248(local_8);
  puStack_44 = (undefined1 *)0x4e6b68;
  FUN_0045c4fc();
  puStack_48 = &LAB_004e6d2c;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_50 = (undefined1 *)0x4e6b7b;
  puStack_44 = &stack0xfffffffc;
  uVar2 = FUN_00480fc8();
  puStack_50 = (undefined1 *)0x4e6b84;
  uVar3 = FUN_004806a8(uVar2);
  puStack_50 = (undefined1 *)0x4e6b8f;
  uVar4 = (**(code **)(*local_c + 0x70))();
  puStack_50 = (undefined1 *)0x4e6b9e;
  FUN_0045e79c(uVar4,&local_10,&local_14);
  puStack_50 = (undefined1 *)0x4e6ba6;
  lpbmi = (BITMAPINFO *)FUN_0040430c(local_10);
  puStack_54 = &LAB_004e6d02;
  uStack_58 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_58;
  puStack_5c = (undefined1 *)0x4e6bbf;
  puStack_50 = &stack0xfffffffc;
  pvVar5 = (void *)FUN_0040430c(local_14);
  puStack_60 = &LAB_004e6ce2;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  puStack_5c = &stack0xfffffffc;
  FUN_0045e858(uVar4,0,lpbmi,pvVar5);
  nNumber = (lpbmi->bmiHeader).biWidth;
  nNumber_00 = (lpbmi->bmiHeader).biHeight;
  if (*(char *)(local_8 + 0x2a3) == '\x01') {
    iVar7 = FUN_004e36ec(local_8);
    iVar8 = 0x58;
    pHVar6 = (HDC)FUN_0045d4ec(uVar3);
    iVar8 = GetDeviceCaps(pHVar6,iVar8);
    local_18 = MulDiv(nNumber,iVar8,iVar7);
    iVar7 = FUN_004e36ec(local_8);
    iVar8 = 0x5a;
    pHVar6 = (HDC)FUN_0045d4ec(uVar3);
    iVar8 = GetDeviceCaps(pHVar6,iVar8);
    local_1c = MulDiv(nNumber_00,iVar8,iVar7);
  }
  else {
    local_1c = nNumber_00;
    local_18 = nNumber;
    if (*(char *)(local_8 + 0x2a3) == '\x02') {
      iVar7 = nNumber_00;
      iVar8 = FUN_00480994(uVar2);
      local_18 = MulDiv(nNumber,iVar8,iVar7);
      iVar7 = FUN_004809b0(uVar2);
      if (local_18 < iVar7) {
        local_1c = FUN_00480994(uVar2);
      }
      else {
        local_18 = FUN_004809b0(uVar2);
        iVar7 = nNumber;
        iVar8 = FUN_004809b0(uVar2);
        local_1c = MulDiv(nNumber_00,iVar8,iVar7);
      }
    }
  }
  rop = 0xcc0020;
  iUsage = 0;
  ySrc = 0;
  xSrc = 0;
  iVar8 = 0;
  iVar7 = 0;
  lpBits = pvVar5;
  FUN_004806a8(uVar2);
  pHVar6 = (HDC)FUN_0045d4ec();
  StretchDIBits(pHVar6,iVar7,iVar8,local_18,local_1c,xSrc,ySrc,nNumber,nNumber_00,lpBits,lpbmi,
                iUsage,rop);
  puVar1 = puStack_5c;
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_004e6ce9;
  puStack_60 = (undefined1 *)0x4e6ce1;
  FUN_00404340(pvVar5,local_14,puVar1);
  return;
}
