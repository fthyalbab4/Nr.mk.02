// rea decompile_all
// name: FUN_00728788
// address: 0x728788
// body: available
// range: 0x728788-0x7289e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7287b5 (push 0x7289e6 followed by fs-segment stack chaining); handler 0x7289e6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00728788(int param_1,undefined4 *param_2,undefined4 param_3,uint *param_4,uint *param_5,
                 int param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;

  puStack_3c = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  puStack_40 = &LAB_007289e6;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  param_2[3] = param_3;
  param_2[4] = param_6;
  local_c = param_3;
  local_8 = param_1;
  do {
    if ((int)param_2[4] < 1) {
      local_10 = param_6;
      goto LAB_007289cb;
    }
    uVar2 = FUN_0043f234(param_2[0xf]);
    if ((((int)*param_5 >> 0x1f == extraout_EDX && *param_5 == uVar2) && (0 < (int)param_2[4])) &&
       (param_2[1] == 0)) {
      (**(code **)(*(int *)param_2[0xf] + 0xc))((int *)param_2[0xf],&local_1c,4);
      uVar2 = FUN_00726894(local_1c);
      uVar6 = uVar2 == (*param_4 ^ 0xffffffff);
      if (!(bool)uVar6) {
        local_10 = -1;
        FUN_0040b75c(PTR_PTR_007825b8,&local_20);
        FUN_0072b474(*(undefined4 *)(local_8 + 0xc),&PTR_LAB_0072301c,local_20);
        goto LAB_007289cb;
      }
      (**(code **)(*(int *)param_2[0xf] + 0xc))((int *)param_2[0xf],param_5,4);
      (**(code **)(*(int *)param_2[0xf] + 0xc))((int *)param_2[0xf],local_18,4);
      FUN_004080b0(&local_24,local_18,4);
      FUN_00408640(local_24,L"IDAT");
      if (!(bool)uVar6) {
        FUN_0040b75c(PTR_PTR_007821b8,&local_28);
        FUN_0072b474(*(undefined4 *)(local_8 + 0xc),&PTR_LAB_0072315c,local_28);
        local_10 = -1;
        goto LAB_007289cb;
      }
      uVar2 = FUN_007267f4(0xffffffff,local_18,4);
      *param_4 = uVar2;
      iVar3 = FUN_0043f234(param_2[0xf]);
      iVar4 = FUN_00726894(*param_5);
      *param_5 = iVar3 + iVar4;
    }
    if (param_2[1] == 0) {
      uVar2 = FUN_0043f234(param_2[0xf]);
      iVar3 = extraout_EDX_00 + (uint)(0xffff0000 < uVar2);
      iVar4 = (int)*param_5 >> 0x1f;
      if (iVar4 == iVar3) {
        if (*param_5 < uVar2 + 0xffff) goto LAB_00728913;
LAB_0072892f:
        uVar5 = (**(code **)(*(int *)param_2[0xf] + 0xc))((int *)param_2[0xf],param_2[0xe],0xffff);
        param_2[1] = uVar5;
      }
      else {
        if (iVar3 <= iVar4) goto LAB_0072892f;
LAB_00728913:
        iVar3 = FUN_0043f234(param_2[0xf],uVar2 + 0xffff);
        uVar5 = (**(code **)(*(int *)param_2[0xf] + 0xc))
                          ((int *)param_2[0xf],param_2[0xe],*param_5 - iVar3);
        param_2[1] = uVar5;
      }
      uVar2 = FUN_007267f4(*param_4,param_2[0xe],param_2[1]);
      *param_4 = uVar2;
      if (param_2[1] == 0) {
        local_10 = param_6 - param_2[4];
        goto LAB_007289cb;
      }
      *param_2 = param_2[0xe];
    }
    local_14 = FUN_0046967c(param_2,0);
  } while (-1 < local_14);
  local_10 = -1;
  FUN_0040b75c(PTR_PTR_00782514,&local_2c);
  FUN_004082dc(&local_2c,(&PTR_DAT_0077f634)[local_14]);
  FUN_0072b474(*(undefined4 *)(local_8 + 0xc),&PTR_LAB_0072320c,local_2c);
LAB_007289cb:
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_007289ed;
  puStack_40 = (undefined1 *)0x7289e5;
  thunk_FUN_00406e80(&local_2c,4,puVar1);
  return;
}
