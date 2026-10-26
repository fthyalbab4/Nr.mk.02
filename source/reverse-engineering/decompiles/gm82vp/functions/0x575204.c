// rea decompile_all
// name: FUN_00575204
// address: 0x575204
// body: available
// range: 0x575204-0x575438 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x575226 (push 0x575439 followed by fs-segment stack chaining); handler 0x575439 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00575204(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  undefined4 *in_FS_OFFSET;
  bool bVar7;
  undefined4 local_34;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 **local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;

  local_1c = &stack0xfffffffc;
  iVar6 = 6;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = &LAB_00575439;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  if (-1 < (int)(*(undefined1 **)(param_1 + 0x18) + -1)) {
    iVar6 = 0;
    local_1c = *(undefined1 **)(param_1 + 0x18);
    do {
      local_28 = (undefined4 **)0x575255;
      FUN_00408194(*(int *)(*(int *)(param_1 + 0x14) + iVar6 * 4) + 0x60,0);
      iVar6 = iVar6 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != (undefined1 *)0x0);
  }
  if (*(int *)(param_1 + 8) == 2) {
    local_28 = (undefined4 **)0x575276;
    piVar3 = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
    local_28 = (undefined4 **)0x575282;
    FUN_004081e8(&local_8,0);
    local_28 = (undefined4 **)0x575288;
    puVar4 = (undefined1 *)(**(code **)*param_2)();
    if (-1 < (int)(puVar4 + -1)) {
      iVar6 = 0;
      local_1c = puVar4;
      do {
        cVar1 = *(char *)(param_2[1] + iVar6);
        if (cVar1 == '\r') {
          local_28 = (undefined4 **)0x5752b1;
          (**(code **)(*piVar3 + 0x38))(piVar3,local_8);
          local_28 = (undefined4 **)0x5752bb;
          FUN_004081e8(&local_8,0);
        }
        else if (cVar1 != '\n') {
          local_28 = (undefined4 **)0x5752cd;
          FUN_00408310(&local_20,cVar1);
          local_28 = (undefined4 **)0x5752d8;
          FUN_004085b8(&local_8,local_20);
        }
        iVar6 = iVar6 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != (undefined1 *)0x0);
    }
    iVar6 = -1;
    do {
      iVar6 = iVar6 + 1;
      local_28 = (undefined4 **)0x5752eb;
      iVar5 = (**(code **)(*piVar3 + 0x14))();
      if (iVar5 <= iVar6) break;
      local_28 = (undefined4 **)0x5752ff;
      (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_24);
      local_28 = (undefined4 **)0x57530c;
      iVar5 = FUN_00408d44(L"#define",local_24);
    } while (iVar5 != 1);
    while( true ) {
      local_28 = (undefined4 **)0x575402;
      iVar5 = (**(code **)(*piVar3 + 0x14))();
      if (iVar5 <= iVar6) break;
      local_28 = &local_28;
      local_2c = (undefined *)0x575324;
      (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_2c);
      puVar2 = local_2c;
      local_2c = (undefined *)0x575336;
      FUN_00408984(puVar2,8,100000);
      local_2c = (undefined *)0x575341;
      FUN_00415c04(local_28,&local_c);
      local_2c = (undefined *)0x57534b;
      FUN_004081e8(&stack0xfffffff0,0);
      while( true ) {
        iVar6 = iVar6 + 1;
        local_2c = (undefined *)0x5753a9;
        iVar5 = (**(code **)(*piVar3 + 0x14))();
        if (iVar5 <= iVar6) break;
        local_28 = (undefined4 **)0x57535a;
        (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_30);
        local_28 = (undefined4 **)0x575367;
        iVar5 = FUN_00408d44(L"#define",local_30);
        if (iVar5 == 1) break;
        if (unaff_EBX != 0) {
          local_2c = &DAT_00575470;
          local_30 = &LAB_00575480;
          local_34 = 0x57538a;
          FUN_0040875c(&stack0xfffffff0,3);
        }
        local_28 = (undefined4 ***)0x575396;
        (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_34);
        local_2c = (undefined *)0x5753a1;
        FUN_004085b8(&stack0xfffffff0,local_34);
      }
      puVar4 = *(undefined1 **)(param_1 + 0x18);
      if (-1 < (int)(puVar4 + -1)) {
        bVar7 = puVar4 == (undefined1 *)0x0;
        iVar5 = 0;
        local_1c = puVar4;
        do {
          local_28 = (undefined4 **)0x5753da;
          FUN_0040891c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar5 * 4) + 8),local_c);
          if (bVar7) {
            local_28 = (undefined4 **)0x5753f3;
            FUN_00408194(*(int *)(*(int *)(param_1 + 0x14) + iVar5 * 4) + 0x60,unaff_EBX);
          }
          iVar5 = iVar5 + 1;
          local_1c = local_1c + -1;
          bVar7 = local_1c == (undefined1 *)0x0;
        } while (!bVar7);
      }
    }
    local_28 = (undefined4 **)0x575411;
    FUN_00405fdc(piVar3);
  }
  puVar4 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00575440;
  local_20 = (undefined1 *)0x57542b;
  thunk_FUN_004072fc(&local_34,6,puVar4);
  local_20 = (undefined1 *)0x575438;
  thunk_FUN_004072fc(&stack0xfffffff0,3);
  return;
}
