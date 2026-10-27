// rea decompile_all
// name: FUN_0048048c
// address: 0x48048c
// body: available
// range: 0x48048c-0x480697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4804b3 (push 0x480698 followed by fs-segment stack chaining); handler 0x480698 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048048c(int param_1,LPWSTR param_2,undefined4 param_3,HGLOBAL param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 uVar5;
  BOOL BVar6;
  SIZE_T dwBytes;
  HGLOBAL pvVar7;
  PDEVMODEW pDevModeOutput;
  LONG LVar8;
  int iVar9;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar10;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  LPWSTR local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int local_10;
  undefined4 local_c;
  LPWSTR local_8;

  puStack_3c = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_40 = &LAB_00480698;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_c = param_3;
  local_8 = param_2;
  FUN_00480258(param_1,0);
  pvVar7 = *(HGLOBAL *)(param_1 + 0x2c);
  if (param_4 != pvVar7) {
    if (pvVar7 != (HGLOBAL)0x0) {
      GlobalUnlock(pvVar7);
      GlobalFree(*(HGLOBAL *)(param_1 + 0x2c));
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(HGLOBAL *)(param_1 + 0x2c) = param_4;
  }
  if (*(HGLOBAL *)(param_1 + 0x2c) != (HGLOBAL)0x0) {
    pvVar3 = GlobalLock(*(HGLOBAL *)(param_1 + 0x2c));
    *(LPVOID *)(param_1 + 0x28) = pvVar3;
    FUN_00480450(param_1,*(undefined4 *)((int)pvVar3 + 0x48));
  }
  FUN_00480fb4(param_1);
  if (*(HANDLE *)(param_1 + 0x24) != (HANDLE)0x0) {
    ClosePrinter(*(HANDLE *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN_00480128(param_1,0);
  local_10 = -1;
  local_14 = (int *)FUN_00480b08(param_1);
  iVar4 = (**(code **)(*local_14 + 0x14))();
  if (-1 < iVar4 + -1) {
    iVar9 = 0;
    do {
      uVar5 = (**(code **)(*local_14 + 0x18))(local_14,iVar9,*local_14,param_5);
      cVar2 = FUN_0047fcb8(uVar5,local_c,local_8);
      if (cVar2 != '\0') {
        iVar4 = (**(code **)(*local_14 + 0x18))(local_14,iVar9);
        FUN_00408350(iVar4 + 0xc,param_5);
        local_10 = iVar9;
        break;
      }
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_10 == -1) {
    local_10 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))();
    uVar5 = FUN_0047fc58(&DAT_0047faf8,1,local_c,param_5,local_8);
    puVar10 = &local_18;
    FUN_0040b9d0(PTR_LAB_00688a9c,&local_1c);
    local_2c = local_8;
    local_28 = 10;
    local_24 = param_5;
    local_20 = 10;
    FUN_00417c88(local_1c,&local_2c,1,puVar10);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x3c))(*(int **)(param_1 + 0x10),local_18,uVar5);
  }
  *(int *)(param_1 + 0x14) = local_10;
  BVar6 = OpenPrinterW(local_8,(LPHANDLE)(param_1 + 0x24),(LPPRINTER_DEFAULTSW)0x0);
  if (BVar6 != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      dwBytes = DocumentPropertiesW((HWND)0x0,*(HANDLE *)(param_1 + 0x24),local_8,(PDEVMODEW)0x0,
                                    (PDEVMODEW)0x0,0);
      pvVar7 = GlobalAlloc(0x42,dwBytes);
      *(HGLOBAL *)(param_1 + 0x2c) = pvVar7;
      if (pvVar7 != (HGLOBAL)0x0) {
        pDevModeOutput = GlobalLock(pvVar7);
        *(PDEVMODEW *)(param_1 + 0x28) = pDevModeOutput;
        LVar8 = DocumentPropertiesW((HWND)0x0,*(HANDLE *)(param_1 + 0x24),local_8,pDevModeOutput,
                                    pDevModeOutput,2);
        if (LVar8 < 0) {
          GlobalUnlock(*(HGLOBAL *)(param_1 + 0x2c));
          GlobalFree(*(HGLOBAL *)(param_1 + 0x2c));
          *(undefined4 *)(param_1 + 0x2c) = 0;
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
      }
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_00480450(param_1,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48));
    }
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0048069f;
  puStack_40 = (undefined1 *)0x480697;
  thunk_FUN_004072fc(&local_1c,2,puVar1);
  return;
}
