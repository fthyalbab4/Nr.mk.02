// rea decompile_all
// name: FUN_005b6378
// address: 0x5b6378
// body: available
// range: 0x5b6378-0x5b655d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b639d (push 0x5b655e followed by fs-segment stack chaining); handler 0x5b655e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b6378(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_EBX;
  undefined4 unaff_ESI;
  int *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_20 = &stack0xfffffffc;
  local_14 = 5;
  do {
    local_c = 0;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_005b655e;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  puVar2 = &stack0xfffffffc;
  local_8 = local_14;
  if (_ImgDelayDescr_Module_Handle_00000000 != 0) {
    if (_ImgDelayDescr_Module_Handle_00000000 == 0x1b) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      local_2c = 0x5b63bc;
      local_20 = &stack0xfffffffc;
      FUN_004e6874(param_1);
      puVar2 = local_20;
    }
    else {
      if ((_ImgDelayDescr_Module_Handle_00000000 == 0xd) ||
         ((_ImgDelayDescr_Module_Handle_00000000 == 0x20 &&
          (*(char *)(*(int *)(param_1 + 0x394) + 0x59) == '\0')))) {
        if (*(char *)(DAT_0084f048 + 0x59) != '\0') {
          *(undefined4 *)(param_1 + 0xc) = 1;
          local_2c = 0x5b63f2;
          local_20 = &stack0xfffffffc;
          FUN_004e6874(param_1);
          puVar2 = local_20;
          goto LAB_005b6543;
        }
        if (*(char *)(DAT_0084f04c + 0x59) != '\0') {
          *(undefined4 *)(param_1 + 0xc) = 2;
          local_2c = 0x5b6410;
          local_20 = &stack0xfffffffc;
          FUN_004e6874(param_1);
          puVar2 = local_20;
          goto LAB_005b6543;
        }
        if (*(char *)(DAT_0084f050 + 0x59) != '\0') {
          *(undefined4 *)(param_1 + 0xc) = 3;
          local_2c = 0x5b642e;
          local_20 = &stack0xfffffffc;
          FUN_004e6874(param_1);
          puVar2 = local_20;
          goto LAB_005b6543;
        }
      }
      uVar3 = *(char *)(*(int *)(param_1 + 0x394) + 0x59) == '\0';
      puVar2 = &stack0xfffffffc;
      if ((bool)uVar3) {
        local_2c = 0x5b644e;
        FUN_00408310(&local_c,_ImgDelayDescr_Module_Handle_00000000);
        local_2c = 0x5b6459;
        FUN_004154dc(local_c,&local_8);
        local_2c = local_8;
        local_30 = 0x5b6472;
        FUN_00408310(&local_14,*(undefined2 *)(DAT_0084f048 + 0x1dc));
        local_30 = 0x5b647d;
        FUN_004154dc(local_14,&local_10);
        iVar1 = local_2c;
        local_2c = 0x5b6486;
        FUN_0040891c(iVar1,local_10);
        if ((bool)uVar3) {
          *(undefined4 *)(param_1 + 0xc) = 1;
          local_2c = 0x5b6496;
          FUN_004e6874(param_1);
          puVar2 = local_20;
        }
        else {
          local_2c = 0x5b64a6;
          FUN_00408310(&stack0xffffffe4,_ImgDelayDescr_Module_Handle_00000000);
          local_2c = 0x5b64b1;
          FUN_004154dc(unaff_ESI,&stack0xffffffe8);
          local_30 = 0x5b64ca;
          local_2c = unaff_EBX;
          FUN_00408310(&local_24,*(undefined2 *)(DAT_0084f04c + 0x1dc));
          local_30 = 0x5b64d5;
          FUN_004154dc(local_24,&local_20);
          iVar1 = local_2c;
          local_2c = 0x5b64de;
          FUN_0040891c(iVar1,local_20);
          if ((bool)uVar3) {
            *(undefined4 *)(param_1 + 0xc) = 2;
            local_2c = 0x5b64ee;
            FUN_004e6874(param_1);
            puVar2 = local_20;
          }
          else {
            local_2c = 0x5b64fb;
            FUN_00408310(&local_2c,_ImgDelayDescr_Module_Handle_00000000);
            iVar1 = local_2c;
            local_2c = 0x5b6506;
            FUN_004154dc(iVar1,&local_28);
            local_2c = local_28;
            local_30 = 0x5b651f;
            FUN_00408310(&local_34,*(undefined2 *)(DAT_0084f050 + 0x1dc));
            local_30 = 0x5b652a;
            FUN_004154dc(local_34,&local_30);
            iVar1 = local_2c;
            local_2c = 0x5b6533;
            FUN_0040891c(iVar1,local_30);
            puVar2 = local_20;
            if ((bool)uVar3) {
              *(undefined4 *)(param_1 + 0xc) = 3;
              local_2c = 0x5b6543;
              FUN_004e6874(param_1);
              puVar2 = local_20;
            }
          }
        }
      }
    }
  }
LAB_005b6543:
  local_20 = puVar2;
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_005b6565;
  local_24 = (undefined1 *)0x5b655d;
  thunk_FUN_004072fc(&local_34,0xc,puVar2);
  return;
}
