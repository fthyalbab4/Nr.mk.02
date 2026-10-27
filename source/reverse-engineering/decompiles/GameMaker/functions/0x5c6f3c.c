// rea decompile_all
// name: FUN_005c6f3c
// address: 0x5c6f3c
// body: available
// range: 0x5c6f3c-0x5c71d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c6f64 (push 0x5c71d3 followed by fs-segment stack chaining); handler 0x5c71d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6f3c(int *param_1,byte param_2,undefined4 param_3,byte param_4,undefined4 ****param_5)

{
  int iVar1;
  undefined4 ***pppuVar2;
  undefined1 *puVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  int *unaff_ESI;
  int *in_FS_OFFSET;
  int *local_50;
  int *local_4c;
  int *local_48;
  undefined4 local_44;
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined4 ***local_28;
  int **local_24;
  int *local_20;
  undefined1 *local_1c;
  int local_10;

  local_1c = &stack0xfffffffc;
  iVar5 = 9;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  local_20 = (int *)&LAB_005c71d3;
  local_24 = (int **)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  local_28 = (undefined4 ****)0x5c6f7d;
  (**(code **)(*param_1 + 0x10))(param_1,(&DAT_0077d6a4)[param_2],param_4);
  if (param_4 != 0) {
    local_28 = (undefined4 ***)0x5c6f91;
    FUN_005c6acc(param_1,&stack0xffffffe8);
    local_28 = (undefined4 ****)0x5c6f99;
    iVar5 = (**(code **)(*unaff_ESI + 0x14))();
    if (iVar5 == 0) {
      if (param_2 == 0) {
        local_28 = &local_28;
        local_2c = (int *)0x5c7010;
        local_2c = (int *)FUN_0040b140(&local_2c);
        local_30 = (int *)param_1[8];
        local_34 = (int *)0x5c701a;
        (**(code **)(*local_30 + 0x20))();
        local_34 = (int *)0x5c701f;
        FUN_0040b250();
        local_34 = local_2c;
        local_38 = 0x5c7028;
        (**(code **)(*local_2c + 0x10))();
        local_38 = 0x5c702d;
        FUN_0040b250();
        pppuVar2 = local_28;
        local_38 = 0x5c7038;
        ppppuVar4 = (undefined4 ****)FUN_004256a8(param_5);
        if (ppppuVar4 < pppuVar2) {
          local_38 = 0x5c706e;
          local_38 = FUN_0040b140(&local_38);
          local_3c = (int *)0x5c7077;
          local_3c = (int *)FUN_0040b140(&local_3c);
          local_40 = (int *)0x5c7080;
          local_40 = (int *)FUN_004256a8(param_5);
          local_44 = 0x5c7089;
          local_44 = FUN_0040b140(&local_40);
          local_48 = (int *)param_1[8];
          local_4c = (int *)0x5c7093;
          (**(code **)(*local_48 + 0x20))();
          local_4c = (int *)0x5c7098;
          FUN_0040b250();
          local_4c = local_40;
          local_50 = (int *)0x5c70a1;
          (**(code **)(*local_40 + 0xc))();
          local_50 = (int *)0x5c70a6;
          FUN_0040b250();
          local_50 = local_3c;
          (**(code **)(*_ImgDelayDescr_Module_Handle_00000000 + 0x20))
                    (_ImgDelayDescr_Module_Handle_00000000,&local_44);
          (**(code **)(*(int *)param_1[8] + 0x48))();
          local_44 = 0x5c70c9;
          FUN_0040b250();
        }
        else {
          local_38 = 0x5c7044;
          local_38 = FUN_0040b140(&local_30);
          local_3c = (int *)0x5c7052;
          (**(code **)(*_ImgDelayDescr_Module_Handle_00000000 + 0x20))
                    (_ImgDelayDescr_Module_Handle_00000000,&local_34);
          local_3c = local_34;
          local_40 = (int *)param_1[8];
          local_44 = 0x5c705f;
          (**(code **)(*local_40 + 0x54))();
          local_44 = 0x5c7064;
          FUN_0040b250();
        }
        local_44 = 0x5c70db;
        FUN_0040b184(&local_48,_ImgDelayDescr_Module_Handle_00000000,&LAB_005c71e4);
        local_44 = 0x5c70e8;
        (**(code **)(*local_48 + 0xf4))(local_48,param_1);
      }
      else if (param_2 == 1) {
        local_28 = (undefined4 ***)0x5c6fc0;
        local_28 = (undefined4 ***)FUN_0040b140(&local_1c);
        local_2c = (int *)0x5c6fce;
        (**(code **)(*_ImgDelayDescr_Module_Handle_00000000 + 0x20))
                  (_ImgDelayDescr_Module_Handle_00000000,&local_20);
        local_2c = local_20;
        local_30 = (int *)param_1[8];
        local_34 = (int *)0x5c6fdb;
        (**(code **)(*local_30 + 0x50))();
        local_34 = (int *)0x5c6fe0;
        FUN_0040b250();
        local_34 = (int *)0x5c6ff2;
        FUN_0040b184(&local_24,_ImgDelayDescr_Module_Handle_00000000,&LAB_005c71e4);
        local_34 = (int *)0x5c6fff;
        (*(code *)(*local_24)[0x3d])(local_24,0);
      }
      else if (param_2 == 2) {
        local_24 = &local_4c;
        local_2c = (int *)0x5c70f9;
        FUN_00429418(&local_50,param_5);
        local_2c = (int *)0x5c7106;
        FUN_005c6ccc(param_1,local_50,0xffffffff);
        local_2c = (int *)0x5c7111;
        FUN_0040b158(0,local_4c);
      }
    }
  }
  if (param_1[0xb] != 0) {
    local_28 = (undefined4 ****)0x5c711f;
    iVar5 = FUN_00409a18(param_1[0xb]);
    if (-1 < iVar5 + -1) {
      local_10 = 0;
      do {
        iVar1 = *(int *)(param_1[0xb] + local_10 * 4);
        if (*(short *)(iVar1 + 0x3a) != 0) {
          local_28 = param_5;
          local_2c = (int *)(uint)param_4;
          local_30 = (int *)0x5c7157;
          (**(code **)(iVar1 + 0x38))(*(undefined4 *)(iVar1 + 0x3c),param_2,0);
        }
        local_10 = local_10 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  puVar3 = local_1c;
  *in_FS_OFFSET = (int)local_24;
  local_1c = &LAB_005c71da;
  local_20 = (int *)0x5c7174;
  thunk_FUN_00406e5c(&local_50,local_24,puVar3);
  local_20 = (int *)0x5c717c;
  FUN_0040b140(&local_4c);
  local_20 = (int *)0x5c7184;
  FUN_0040b140(&local_48);
  local_20 = (int *)0x5c718c;
  FUN_0040b140(&local_44);
  local_20 = (int *)0x5c7194;
  FUN_0040b140(&local_40);
  local_20 = (int *)0x5c71a7;
  FUN_00408e44(&local_3c,&DAT_005bff7c,4);
  local_20 = (int *)0x5c71af;
  FUN_0040b140(&local_2c);
  local_20 = (int *)0x5c71b7;
  FUN_0040b140(&local_24);
  local_20 = (int *)0x5c71ca;
  FUN_00408e44(&local_20,&DAT_005bff7c,2);
  local_20 = (int *)0x5c71d2;
  FUN_0040b140(&stack0xffffffe8);
  return;
}
