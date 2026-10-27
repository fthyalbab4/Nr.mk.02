// rea decompile_all
// name: FUN_00504fc4
// address: 0x504fc4
// body: available
// range: 0x504fc4-0x505125 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x504fe5 (push 0x505126 followed by fs-segment stack chaining); handler 0x505126 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00504fc4(int param_1,HWND param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPARAM lParam;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  int cx;
  int cy;
  UINT uFlags;
  undefined4 *puVar7;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  tagRECT local_1c;
  undefined4 local_c;
  HWND local_8;

  puStack_3c = &stack0xfffffffc;
  local_20 = 0;
  local_24 = 0;
  puStack_40 = &LAB_00505126;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_c = 0;
  local_8 = param_2;
  if (param_3 == 1) {
    if (*(int *)(*(int *)PTR_DAT_0068917c + 0x44) == 0) {
      puStack_3c = &stack0xfffffffc;
      uVar2 = FUN_004e9938(*(undefined4 *)PTR_DAT_00689620,0,0);
    }
    else {
      puStack_3c = &stack0xfffffffc;
      uVar2 = FUN_004c45dc(*(int *)(*(int *)PTR_DAT_0068917c + 0x44));
      uVar2 = FUN_004e9938(*(undefined4 *)PTR_DAT_00689620,uVar2,0);
    }
    GetWindowRect(local_8,&local_1c);
    uFlags = 5;
    cy = 0;
    cx = 0;
    iVar3 = FUN_004e8264(uVar2);
    uVar6 = iVar3 - (local_1c.bottom - local_1c.top);
    iVar3 = (int)uVar6 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((uVar6 & 1) != 0);
    }
    iVar4 = FUN_004e8280(uVar2);
    iVar3 = iVar3 + iVar4;
    iVar4 = FUN_004e8298(uVar2);
    uVar6 = iVar4 - (local_1c.right - local_1c.left);
    iVar4 = (int)uVar6 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar6 & 1) != 0);
    }
    iVar5 = FUN_004e824c(uVar2);
    SetWindowPos(local_8,(HWND)0x0,iVar4 + iVar5,iVar3,cx,cy,uFlags);
    puVar1 = puStack_3c;
    if (*(int *)(param_1 + 4) != 0) {
      lParam = FUN_00408220(*(undefined4 *)(param_1 + 4));
      SendMessageW(local_8,0x467,1,lParam);
      puVar1 = puStack_3c;
    }
  }
  else if ((param_3 == 4) || (puVar1 = &stack0xfffffffc, param_3 == 3)) {
    puVar7 = &local_20;
    FUN_0040b9d0(PTR_LAB_00689584,&local_24,param_3,puVar7);
    local_2c = param_5;
    local_28 = 10;
    FUN_00417c88(local_24,&local_2c,0,puVar7);
    FUN_004a1768(local_20,1,4,0,0xffffffff,0xffffffff,0);
    local_c = 1;
    puVar1 = puStack_3c;
  }
  puStack_3c = puVar1;
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0050512d;
  puStack_40 = (undefined1 *)0x505125;
  thunk_FUN_004072fc(&local_24,2,puVar1);
  return;
}
