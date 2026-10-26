// rea decompile_all
// name: FUN_005c6748
// address: 0x5c6748
// body: available
// range: 0x5c6748-0x5c6954 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c6771 (push 0x5c6955 followed by fs-segment stack chaining); handler 0x5c6955 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6748(int *param_1,byte param_2,undefined4 param_3,byte param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  int *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  int *local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  int local_14;
  int local_10;

  local_20 = (undefined4 *)&stack0xfffffffc;
  iVar2 = 7;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_005c6955;
  local_28 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x5c678a;
  (**(code **)(*param_1 + 0x10))(param_1,(&DAT_0077d6a0)[param_2],param_4);
  if (param_4 != 0) {
    local_2c = 0x5c679e;
    FUN_005c5f58(param_1,&stack0xffffffe8);
    local_2c = 0x5c67a6;
    iVar2 = (**(code **)(*unaff_EBX + 0x14))();
    if (iVar2 == 0) {
      if (param_2 == 0) {
        local_2c = 0x5c6817;
        local_2c = FUN_0040b140(&local_2c);
        local_30 = (undefined4 *)0x5c6825;
        (**(code **)(*_ImgDelayDescr_Module_Handle_00000000 + 0x20))
                  (_ImgDelayDescr_Module_Handle_00000000,&local_34);
        local_30 = (undefined4 *)0x5c6835;
        FUN_0040b184(&local_30,local_34,&DAT_005c6964);
        local_34 = (int *)0x5c6843;
        FUN_005c8524(param_1,&local_38);
        local_34 = local_38;
        iVar2 = *local_38;
        local_38 = (int *)0x5c684c;
        (**(code **)(iVar2 + 0x7c))();
        local_2c = 0x5c6851;
        FUN_0040b250();
      }
      else if (param_2 == 1) {
        local_2c = 0x5c67cd;
        local_2c = FUN_0040b140(&stack0xffffffe4);
        local_30 = (undefined4 *)0x5c67db;
        (**(code **)(*_ImgDelayDescr_Module_Handle_00000000 + 0x20))
                  (_ImgDelayDescr_Module_Handle_00000000,&local_24);
        local_30 = (undefined4 *)0x5c67eb;
        FUN_0040b184(&local_20,local_24,&DAT_005c6964);
        local_30 = local_20;
        local_34 = (int *)0x5c67f9;
        FUN_005c8524(param_1,&local_28);
        local_34 = local_28;
        local_38 = (int *)0x5c6805;
        (**(code **)(*local_28 + 0x80))();
        local_2c = 0x5c680a;
        FUN_0040b250();
      }
      else if (param_2 == 2) {
        local_2c = 0;
        local_30 = &local_3c;
        local_34 = (int *)0x5c6864;
        FUN_00429418(&local_40,param_5);
        local_34 = (int *)0x5c6871;
        FUN_005cab80(param_1[7],local_40,2);
        local_34 = (int *)0x5c687c;
        FUN_0040b158(0,local_3c);
        local_34 = (int *)0x5c6886;
        FUN_005c5f58(param_1,&local_44);
        local_34 = (int *)0x5c6893;
        (**(code **)(*local_44 + 0x18))(local_44,_ImgDelayDescr_Module_Handle_00000000);
      }
    }
  }
  if (param_1[0xb] != 0) {
    local_2c = 0x5c68a1;
    local_14 = FUN_00409a18(param_1[0xb]);
    if (-1 < local_14 + -1) {
      local_10 = 0;
      do {
        iVar2 = *(int *)(param_1[0xb] + local_10 * 4);
        if (*(short *)(iVar2 + 0x42) != 0) {
          local_2c = param_5;
          local_30 = (undefined4 *)(uint)param_4;
          local_34 = (int *)0x5c68d9;
          (**(code **)(iVar2 + 0x40))(*(undefined4 *)(iVar2 + 0x44),param_2,0);
        }
        local_10 = local_10 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = (undefined4 *)&LAB_005c695c;
  local_24 = (undefined1 *)0x5c68f6;
  FUN_0040b140(&local_44,local_28,puVar1);
  local_24 = (undefined1 *)0x5c68fe;
  thunk_FUN_00406e5c(&local_40);
  local_24 = (undefined1 *)0x5c6906;
  FUN_0040b140(&local_3c);
  local_24 = (undefined1 *)0x5c690e;
  FUN_0040b140(&local_38);
  local_24 = (undefined1 *)0x5c6916;
  FUN_0040b140(&local_34);
  local_24 = (undefined1 *)0x5c6929;
  FUN_00408e44(&local_30,&DAT_005c0018,2);
  local_24 = (undefined1 *)0x5c6931;
  FUN_0040b140(&local_28);
  local_24 = (undefined1 *)0x5c6939;
  FUN_0040b140(&local_24);
  local_24 = (undefined1 *)0x5c694c;
  FUN_00408e44(&local_20,&DAT_005c0018,2);
  local_24 = (undefined1 *)0x5c6954;
  FUN_0040b140(&stack0xffffffe8);
  return;
}
