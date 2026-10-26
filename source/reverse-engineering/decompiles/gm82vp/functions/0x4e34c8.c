// rea decompile_all
// name: FUN_004e34c8
// address: 0x4e34c8
// body: available
// range: 0x4e34c8-0x4e36db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e34e5 (push 0x4e36dc followed by fs-segment stack chaining); handler 0x4e36dc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e34c8(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  HMENU pHVar4;
  HWND pHVar5;
  HMENU pHVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  HWND hWndInsertAfter;
  int cx;
  undefined4 uVar8;
  int cy;
  undefined4 *puVar9;
  UINT uFlags;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_004e36dc;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if ((param_2 != 0) && (iVar3 = FUN_004e872c(DAT_0068f2ec), puVar1 = puStack_24, -1 < iVar3 + -1))
  {
    iVar7 = 0;
    local_8 = iVar3;
    do {
      iVar3 = FUN_004e8718(DAT_0068f2ec,iVar7);
      if ((param_2 == *(int *)(iVar3 + 0x2b4)) &&
         (iVar3 = FUN_004e8718(DAT_0068f2ec,iVar7), param_1 != iVar3)) {
        local_10 = *(undefined4 *)(param_2 + 8);
        local_c = 0x11;
        puVar9 = &local_10;
        uVar8 = 0;
        FUN_0040b9d0(PTR_LAB_00688be0,&local_14);
        FUN_0041bd88(&LAB_0042dc24,1,local_14,uVar8,puVar9);
        FUN_00406ab4();
      }
      iVar7 = iVar7 + 1;
      local_8 = local_8 + -1;
      puVar1 = puStack_24;
    } while (local_8 != 0);
  }
  puStack_24 = puVar1;
  if (*(int *)(param_1 + 0x2b4) != 0) {
    FUN_004ab0a0(*(int *)(param_1 + 0x2b4),0);
  }
  if (((*(byte *)(param_1 + 0x1c) & 8) != 0) ||
     ((param_2 != 0 && ((*(byte *)(param_2 + 0x1c) & 8) != 0)))) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x2b4) = param_2;
  if ((param_2 == 0) ||
     ((FUN_00446174(param_2,param_1), (*(byte *)(param_1 + 0x1c) & 0x10) == 0 &&
      (*(char *)(param_1 + 0x299) == '\x03')))) {
    cVar2 = FUN_004c4988(param_1);
    if (cVar2 != '\0') {
      pHVar4 = (HMENU)0x0;
      pHVar5 = (HWND)FUN_004c45dc(param_1);
      SetMenu(pHVar5,pHVar4);
    }
  }
  else if (((*(char *)(*(int *)(param_1 + 0x2b4) + 100) == '\0') &&
           (*(char *)(param_1 + 0x29e) != '\x01')) || ((*(byte *)(param_1 + 0x1c) & 0x10) != 0)) {
    cVar2 = FUN_004c4988(param_1);
    if (cVar2 != '\0') {
      pHVar4 = (HMENU)(**(code **)(**(int **)(param_1 + 0x2b4) + 0x38))();
      pHVar5 = (HWND)FUN_004c45dc(param_1);
      pHVar6 = GetMenu(pHVar5);
      if (pHVar4 != pHVar6) {
        pHVar4 = (HMENU)(**(code **)(**(int **)(param_1 + 0x2b4) + 0x38))();
        pHVar5 = (HWND)FUN_004c45dc(param_1);
        SetMenu(pHVar5,pHVar4);
      }
      uVar8 = FUN_004c45dc(param_1);
      FUN_004ab0a0(param_2,uVar8);
    }
  }
  else if ((*(char *)(param_1 + 0x29e) != '\x01') && (cVar2 = FUN_004c4988(param_1), cVar2 != '\0'))
  {
    pHVar4 = (HMENU)0x0;
    pHVar5 = (HWND)FUN_004c45dc(param_1);
    SetMenu(pHVar5,pHVar4);
  }
  if (*(char *)(param_1 + 0x29d) != '\0') {
    FUN_004e4e64(param_1,1);
  }
  FUN_004e3400(param_1);
  if (((*(int *)(param_1 + 700) != 0) && ((*(byte *)(param_1 + 0x1c) & 0x10) != 0)) &&
     (*(int *)(param_1 + 0x34) != 0)) {
    uFlags = 0x37;
    cy = 0;
    cx = 0;
    iVar7 = 0;
    iVar3 = 0;
    hWndInsertAfter = (HWND)0x0;
    pHVar5 = (HWND)FUN_004c45dc(param_1);
    SetWindowPos(pHVar5,hWndInsertAfter,iVar3,iVar7,cx,cy,uFlags);
    FUN_004bcb48(param_1,0x85,0,0);
    FUN_004bcb48(param_1,0xf,0,0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004e36e3;
  puStack_28 = (undefined1 *)0x4e36db;
  thunk_FUN_004072d8(&local_14,uStack_2c,puVar1);
  return;
}
