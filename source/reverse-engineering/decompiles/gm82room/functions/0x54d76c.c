// rea decompile_all
// name: FUN_0054d76c
// address: 0x54d76c
// body: available
// range: 0x54d76c-0x54d9f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54d78d (push 0x54d9f1 followed by fs-segment stack chaining); handler 0x54d9f1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054d76c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 unaff_EBX;
  uint uVar8;
  int iVar9;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined1 *local_2c;
  int *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined2 uVar7;

  local_20 = &stack0xfffffffc;
  local_10 = 6;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0054d9f1;
  local_28 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (undefined1 *)0x54d79d;
  local_8 = param_1;
  FUN_00439168(param_1,100);
  iVar9 = *(int *)(local_8 + 0x14);
  local_2c = (undefined1 *)0x54d7aa;
  cVar2 = FUN_005513cc(iVar9);
  if (cVar2 != '\0') {
    local_2c = (undefined1 *)0x54d7bd;
    piVar4 = (int *)FUN_00550148(iVar9,CONCAT22(extraout_var,1));
    uVar7 = (undefined2)((uint)extraout_EDX >> 0x10);
    uVar6 = extraout_EDX;
    if (piVar4 != (int *)0x0) {
      for (; uVar7 = (undefined2)((uint)uVar6 >> 0x10), piVar4[3] != 0; piVar4 = piVar4 + 5) {
        if (*piVar4 == 0) {
          if (*(char *)(iVar9 + 4) == '\0') {
            local_2c = (undefined1 *)0x54d7e8;
            FUN_00551120(iVar9,piVar4[4]);
          }
          *(undefined1 *)(local_8 + 0x22) = 0;
        }
        else {
          local_2c = (undefined1 *)0x54d7fd;
          FUN_00551120(iVar9,*piVar4);
          *(undefined1 *)(local_8 + 0x22) = 1;
        }
        local_2c = (undefined1 *)0x54d811;
        uVar6 = FUN_00551120(iVar9,piVar4[3]);
        local_2c = (undefined1 *)0x54d820;
        FUN_00407590(&local_c,uVar6,0);
        local_28 = (int *)0x54d828;
        uVar6 = FUN_00407dd0(&stack0xffffffe4);
        local_28 = (int *)0x54d832;
        cVar2 = FUN_00534b38(local_c,uVar6);
        local_28 = (int *)0x54d840;
        uStack_30._3_1_ = cVar2;
        FUN_0040840c(&local_10,unaff_EDI);
        if (uStack_30._3_1_ == '\0') {
          local_28 = (int *)0x54d851;
          FUN_004083c0(&local_10,local_c);
        }
        local_2c = (undefined1 *)0x0;
        uStack_30 = local_10;
        local_34 = 0;
        local_38 = 0x54d86e;
        local_28 = piVar4;
        local_24 = (undefined1 *)FUN_0054cd6c(&PTR_LAB_005472e4,1,*(undefined4 *)(local_8 + 0x14));
        local_28 = (int *)0x54d87c;
        FUN_00438d04(local_8,local_24);
        local_28 = (int *)0x54d887;
        FUN_0054d25c(local_24,&local_38);
        local_28 = (int *)0x54d892;
        FUN_00415934(local_38,&local_34);
        local_28 = (int *)0x54d8a3;
        (**(code **)(**(int **)(local_8 + 0x28) + 0x3c))
                  (*(int **)(local_8 + 0x28),local_34,local_24);
        uVar6 = extraout_EDX_00;
      }
    }
    local_2c = (undefined1 *)0x54d8bb;
    iVar5 = FUN_00550148(iVar9,CONCAT22(uVar7,0xd));
    uVar7 = extraout_var_00;
    if (iVar5 != 0) {
      if (*(char *)(iVar9 + 0x65) == '\x01') {
        uStack_30 = 0x54d8d3;
        local_2c = &stack0xfffffffc;
        FUN_0054d50c();
        uVar7 = extraout_var_01;
      }
      else {
        uVar7 = 0;
        if (*(char *)(iVar9 + 0x65) == '\x02') {
          uStack_30 = 0x54d8dc;
          local_2c = &stack0xfffffffc;
          FUN_0054d63c();
          uVar7 = extraout_var_02;
        }
      }
    }
    local_2c = (undefined1 *)0x54d8e8;
    piVar4 = (int *)FUN_00550148(iVar9,CONCAT22(uVar7,0xb));
    local_28 = piVar4;
    if (piVar4 != (int *)0x0) {
      for (; (short)piVar4[1] != 0; piVar4 = piVar4 + 2) {
        local_2c = (undefined1 *)0x54d911;
        FUN_00407590(&local_c,(uint)*(ushort *)(piVar4 + 1) + (int)local_28,0);
        local_28 = (int *)0x54d919;
        uVar6 = FUN_00407dd0(&local_20);
        local_28 = (int *)0x54d923;
        uVar3 = FUN_00534b38(local_c,uVar6);
        uStack_30._0_3_ = CONCAT12(uVar3,(undefined2)uStack_30);
        local_28 = (int *)0x54d931;
        FUN_0040840c(&stack0xffffffec,local_20);
        if (uStack_30._2_1_ == '\0') {
          local_28 = (int *)0x54d942;
          FUN_004083c0(&stack0xffffffec,local_c);
        }
        local_28 = (int *)0x54d94d;
        FUN_00415934(unaff_EBX,&stack0xffffffe8);
        local_28 = (int *)0x54d95b;
        iVar9 = (**(code **)(**(int **)(local_8 + 0x28) + 0x54))
                          (*(int **)(local_8 + 0x28),unaff_ESI);
        if (-1 < iVar9) {
          local_2c = (undefined1 *)0x54d96e;
          uVar6 = (**(code **)(**(int **)(local_8 + 0x28) + 0x18))(*(int **)(local_8 + 0x28),iVar9);
          local_2c = (undefined1 *)0x54d975;
          FUN_0054d294(uVar6,2);
        }
        for (uVar8 = (uint)*(ushort *)((int)piVar4 + 6); uVar8 != 0; uVar8 = uVar8 - 1) {
          piVar4 = piVar4 + 2;
        }
      }
    }
    iVar9 = *(int *)(local_8 + 8);
    if (-1 < iVar9 + -1) {
      iVar5 = 0;
      do {
        local_2c = (undefined1 *)0x54d9a9;
        uVar6 = FUN_0054da1c(local_8,iVar5);
        local_2c = (undefined1 *)0x54d9b0;
        FUN_0054d290(uVar6,iVar5);
        iVar5 = iVar5 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  puVar1 = local_20;
  *in_FS_OFFSET = (int)local_28;
  local_20 = &LAB_0054d9f8;
  local_24 = (undefined1 *)0x54d9ce;
  thunk_FUN_004072fc(&local_38,2,puVar1);
  local_24 = (undefined1 *)0x54d9db;
  FUN_00407de8(&local_20,2);
  local_24 = (undefined1 *)0x54d9e8;
  thunk_FUN_004072fc(&stack0xffffffe8,3);
  local_24 = (undefined1 *)0x54d9f0;
  FUN_004072d8(&local_c);
  return;
}
