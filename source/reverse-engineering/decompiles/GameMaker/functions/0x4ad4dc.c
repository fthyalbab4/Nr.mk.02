// rea decompile_all
// name: FUN_004ad4dc
// address: 0x4ad4dc
// body: available
// range: 0x4ad4dc-0x4ad660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ad4fc (push 0x4ad661 followed by fs-segment stack chaining); handler 0x4ad661 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ad4dc(int *param_1,undefined4 param_2,int param_3,byte param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  HWND pHVar5;
  uint uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  int iVar8;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined4 local_60;
  undefined1 local_5c [40];
  undefined4 local_34;
  int local_30;
  undefined4 local_10;
  undefined1 local_a;
  undefined1 local_9;
  undefined4 local_8;

  puStack_70 = &stack0xfffffffc;
  local_60 = 0;
  puStack_74 = &LAB_004ad661;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  FUN_004aebe0(param_1[1]);
  if ((param_4 == 2) && (param_3 != 0)) {
    local_8 = *(undefined4 *)(param_3 + 0x10);
  }
  else {
    local_8 = 0;
  }
  local_9 = FUN_004ad044(param_1);
  local_a = FUN_004acf18(param_1);
  iVar3 = FUN_004ad0f0(param_1);
  if (iVar3 != 0) {
    uVar4 = FUN_004ad0f0(param_1);
    cVar2 = FUN_004acd04(uVar4,1);
    if (cVar2 != '\0') {
      uVar4 = FUN_004ad0f0(param_1);
      FUN_004aceec(uVar4,0);
      uVar4 = FUN_004ad0f0(param_1);
      FUN_004ad0b4(uVar4,0);
    }
  }
  local_34 = 4;
  local_30 = param_1[4];
  local_10 = 0;
  pHVar5 = (HWND)FUN_004ac860(param_1);
  SendMessageW(pHVar5,0x113f,0,(LPARAM)&local_34);
  iVar3 = param_1[1];
  FUN_004ae4c8(iVar3,param_1,local_5c);
  uVar6 = (uint)param_4;
  iVar3 = FUN_004ae4ec(iVar3,param_5,local_8,uVar6,local_5c);
  if (iVar3 == 0) {
    FUN_0040b75c(PTR_PTR_00782100,&local_60);
    FUN_0041beb8(&PTR_LAB_0042efc8,1,local_60);
    FUN_00406618();
  }
  iVar7 = FUN_004ad490(param_1);
  iVar7 = iVar7 + -1;
  if (-1 < iVar7) {
    do {
      uStack_78 = 0;
      iVar8 = iVar3;
      uVar4 = FUN_004ad3b4(param_1,iVar7);
      FUN_004ad4dc(uVar4,param_1,0,uVar6,iVar8);
      iVar7 = iVar7 + -1;
    } while (iVar7 != -1);
  }
  pHVar5 = (HWND)FUN_004ac860(param_1);
  SendMessageW(pHVar5,0x1101,0,param_1[4]);
  param_1[4] = iVar3;
  (**(code **)(*param_1 + 8))(param_1,param_1);
  FUN_004ad0b4(param_1,local_9);
  FUN_004acf20(param_1,local_a);
  puVar1 = puStack_70;
  *in_FS_OFFSET = uStack_78;
  puStack_70 = &LAB_004ad668;
  puStack_74 = (undefined1 *)0x4ad660;
  thunk_FUN_00406e5c(&local_60,uStack_78,puVar1);
  return;
}
