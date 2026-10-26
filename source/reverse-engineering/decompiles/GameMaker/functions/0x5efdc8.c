// rea decompile_all
// name: FUN_005efdc8
// address: 0x5efdc8
// body: available
// range: 0x5efdc8-0x5eff87 inclusive
// range: 0x5eff8f-0x5effac inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5efdee (push 0x5effad followed by fs-segment stack chaining); handler 0x5effad lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5eff0e (push 0x5eff88 followed by fs-segment stack chaining); handler 0x5eff88 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005efdc8(int *param_1,undefined4 param_2,byte param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  int *piStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_48 = &stack0xfffffffc;
  local_38 = 0;
  local_8 = 0;
  puStack_4c = &LAB_005effad;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_c = param_2;
  if (*PTR_DAT_0078252c == '\0') {
    if (param_3 == 0) {
      piStack_54 = (int *)0x5efe18;
      puStack_48 = &stack0xfffffffc;
      FUN_0040810c(&local_8,param_2,0);
      piStack_54 = (int *)0x5efe20;
      piStack_54 = (int *)FUN_00407670(local_8);
      puStack_58 = (undefined4 *)0x5efe2a;
      local_10 = (**(code **)PTR_DAT_00781708)();
      puStack_58 = (undefined4 *)0x2;
      uStack_5c = 0x20;
      puStack_60 = &local_10;
      puStack_64 = (undefined1 *)0x5efe3e;
      puVar2 = (undefined4 *)(**(code **)PTR_DAT_007824b0)();
      if (puVar2 == (undefined4 *)0x0) {
        piStack_54 = (int *)0x5efe4e;
        FUN_005f4444(param_1,0xffffffff);
      }
      else {
        piStack_54 = (int *)0x5efe5c;
        FUN_00408044(param_4,*puVar2);
      }
    }
    else if (param_3 == 1) {
      piStack_54 = (int *)0x5efe6e;
      puStack_48 = &stack0xfffffffc;
      FUN_0040b75c(PTR_PTR_007824a8,&local_38);
      piStack_54 = (int *)0x5efe7d;
      FUN_005df5ec(&PTR_LAB_005ee834,1,local_38);
      piStack_54 = (int *)0x5efe82;
      FUN_00406618();
    }
    else {
      piStack_54 = (int *)0x5efe8e;
      puStack_48 = &stack0xfffffffc;
      FUN_005f3db8(param_1);
    }
    puVar1 = puStack_48;
    *in_FS_OFFSET = uStack_50;
    puStack_48 = &LAB_005effb4;
    puStack_4c = (undefined1 *)0x5effa4;
    thunk_FUN_00406e5c(&local_38,uStack_50,puVar1);
    puStack_4c = (undefined1 *)0x5effac;
    FUN_00406e5c(&local_8);
    return;
  }
  puVar1 = &stack0xfffffffc;
  if (1 < param_3) {
    piStack_54 = (int *)0x5efea0;
    FUN_005f3db8(param_1);
    puVar1 = puStack_48;
  }
  puStack_48 = puVar1;
  piStack_54 = (int *)0x5efeaf;
  FUN_00404f08(&local_34,0x20,0);
  local_30 = *(undefined4 *)(PTR_DAT_007821e0 + (uint)param_3 * 4);
  local_2c = 1;
  local_34 = 2;
  local_14 = 0;
  piStack_54 = &local_14;
  puStack_58 = &local_34;
  uStack_5c = 0;
  puStack_60 = (undefined4 *)0x5efee3;
  puStack_60 = (undefined4 *)FUN_00407f44(local_c);
  puStack_64 = (undefined1 *)0x5efeed;
  iVar3 = (**(code **)PTR_DAT_00782518)();
  if (iVar3 != 0) {
    puStack_64 = (undefined1 *)0x5efefa;
    uVar4 = FUN_005ece50(iVar3);
    puStack_64 = (undefined1 *)0x5eff03;
    (**(code **)(*param_1 + 0x4c))(param_1,uVar4);
  }
  puStack_68 = &LAB_005eff88;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  puStack_64 = &stack0xfffffffc;
  FUN_00408244(param_4,0x401);
  uVar11 = 4;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0x401;
  uVar5 = FUN_00407f44(*param_4);
  uVar4 = *(undefined4 *)(local_14 + 0x10);
  uVar7 = *(undefined4 *)(local_14 + 0x18);
  iVar3 = (**(code **)PTR_DAT_00781e80)();
  if (iVar3 != 0) {
    uVar6 = FUN_005ece50(iVar3);
    (**(code **)(*param_1 + 0x4c))
              (param_1,uVar6,*param_1,uVar7,uVar4,uVar5,uVar8,uVar9,uVar10,uVar11);
  }
  uVar4 = FUN_00407f44(*param_4);
  FUN_00408074(param_4,uVar4);
  *in_FS_OFFSET = uVar7;
  (**(code **)PTR_DAT_00781eb4)(*(code **)PTR_DAT_00781eb4,uVar7,uVar5,local_14,0x5eff8f);
  return;
}
