// rea decompile_all
// name: FUN_004ef5d0
// address: 0x4ef5d0
// body: available
// range: 0x4ef5d0-0x4ef7a5 inclusive
// range: 0x4ef7ad-0x4ef7b9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ef6f2 (push 0x4ef7a6 followed by fs-segment stack chaining); handler 0x4ef7a6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004ef5d0(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  char cVar2;
  HWND pHVar3;
  undefined4 uVar4;
  uint uVar5;
  LONG *pLVar6;
  LONG *pLVar7;
  LONG *in_FS_OFFSET;
  byte bVar8;
  LONG aLStackY_181c [1517];
  tagPOINT *ptVar9;
  LONG LVar10;
  HWND hWndTo;
  undefined1 *puVar11;
  UINT UVar12;
  LONG local_40;
  LONG local_30;
  LONG local_2c;
  tagPOINT local_28;
  LONG aLStack_20 [2];
  tagPOINT local_18;
  int local_10;
  byte local_9;
  undefined4 local_8;

  bVar8 = 0;
  local_8 = param_3;
  if ((param_2 == 0) || (param_2 == -1)) {
    iVar1 = *(int *)(param_1 + 0x90);
    if (((iVar1 == 0) || (*(char *)(iVar1 + 0x1eb) == '\0')) || (*(int *)(iVar1 + 0x1c8) == 0)) {
      local_28.x = *(LONG *)(param_1 + 0x40);
      local_28.y = *(LONG *)(param_1 + 0x44);
      if (*(int *)(param_1 + 0x34) != 0) {
        FUN_004ee09c(*(int *)(param_1 + 0x34),&local_28,&stack0xffffffd0);
        local_28.x = local_30;
        local_28.y = local_2c;
      }
    }
    else {
      (**(code **)(**(int **)(iVar1 + 0x1c8) + 0x14))(*(int **)(iVar1 + 0x1c8),param_1,&local_28);
      UVar12 = 2;
      ptVar9 = &local_28;
      hWndTo = (HWND)0x0;
      pHVar3 = (HWND)FUN_004f76a8(*(undefined4 *)(param_1 + 0x90));
      MapWindowPoints(pHVar3,hWndTo,ptVar9,UVar12);
    }
    FUN_004ee62c(param_1);
    uVar4 = FUN_004ee640(param_1);
    FUN_0040c280(local_28.x,local_28.y,uVar4);
    local_28.x = local_40;
    aLStack_20[(uint)bVar8 * -2 + -1] = *(LONG *)(&stack0xffffffc4 + (uint)bVar8 * -8);
    aLStack_20[(uint)bVar8 * -2 + (uint)bVar8 * -2] =
         *(LONG *)(&stack0xffffffc8 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    (aLStack_20 + (uint)bVar8 * -2 + (uint)bVar8 * -2)[(uint)bVar8 * -2 + 1] =
         *(LONG *)((int)(&stack0xffffffc8 + (uint)bVar8 * -8 + (uint)bVar8 * -8) +
                  ((uint)bVar8 * -2 + 1) * 4);
    local_9 = FUN_004ef7bc(param_1,&local_28);
    goto LAB_004ef7ad;
  }
  FUN_004efc14(param_1);
  if (*(int *)(param_1 + 0x90) == 0) {
LAB_004ef6c7:
    local_9 = 1;
  }
  else {
    cVar2 = FUN_00405d08(*(undefined4 *)(param_1 + 0x90),param_2,param_1);
    if (cVar2 != '\0') goto LAB_004ef6c7;
    local_9 = 0;
  }
  if (local_9 != 0) {
    local_10 = FUN_004eb7c4(&PTR_FUN_004e03c0,1,param_1);
    puVar11 = &LAB_004ef7a6;
    *in_FS_OFFSET = (LONG)&stack0xffffffa8;
    if (*(int *)(param_1 + 0x90) == 0) {
      pHVar3 = (HWND)0x0;
    }
    else {
      pHVar3 = (HWND)FUN_004f76a8();
    }
    FUN_004edf30(param_1,&local_28);
    if (pHVar3 != (HWND)0x0) {
      MapWindowPoints(pHVar3,(HWND)0x0,&local_28,2);
    }
    *(int *)(local_10 + 0x14) = param_2;
    *(undefined1 *)(local_10 + 0x5c) = param_4;
    *(undefined4 *)(local_10 + 0x60) = local_8;
    pLVar6 = (LONG *)(local_10 + 0x50 + (uint)bVar8 * -8);
    *(LONG *)(local_10 + 0x4c) = local_28.x;
    pLVar7 = pLVar6 + (uint)bVar8 * -2 + 1;
    *pLVar6 = aLStack_20[(uint)bVar8 * -2 + -1];
    *pLVar7 = aLStack_20[(uint)bVar8 * -2 + (uint)bVar8 * -2];
    pLVar7[(uint)bVar8 * -2 + 1] =
         (aLStack_20 + (uint)bVar8 * -2 + (uint)bVar8 * -2)[(uint)bVar8 * -2 + 1];
    local_18.x = local_28.x;
    local_18.y = local_28.y;
    UVar12 = 1;
    ptVar9 = &local_18;
    pHVar3 = (HWND)FUN_004f76a8(param_2);
    MapWindowPoints((HWND)0x0,pHVar3,ptVar9,UVar12);
    local_28.x = local_18.x;
    local_28.y = local_18.y;
    LVar10 = local_18.y;
    FUN_00405d08(param_2,local_10,local_18.x);
    *in_FS_OFFSET = LVar10;
    uVar5 = FUN_00405a7c(local_10,LVar10,puVar11);
    return uVar5;
  }
LAB_004ef7ad:
  return (uint)local_9;
}
