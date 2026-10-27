// rea decompile_all
// name: FUN_0072c0dc
// address: 0x72c0dc
// body: available
// range: 0x72c0dc-0x72c394 inclusive
// range: 0x72c3b5-0x72c427 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72c0fe (push 0x72c428 followed by fs-segment stack chaining); handler 0x72c428 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72c35a (push 0x72c395 followed by fs-segment stack chaining); handler 0x72c395 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072c0dc(int param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar9;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  uint uVar10;
  uint uVar11;

  local_1c = &stack0xfffffffc;
  iVar7 = 9;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  local_20 = &LAB_0072c428;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  uVar9 = 1;
  local_28 = (undefined1 *)0x72c10e;
  FUN_0072b074(param_1);
  local_28 = (undefined1 *)0x72c11d;
  (**(code **)(*param_2 + 0xc))(param_2,&stack0xfffffff0,8);
  local_28 = (undefined1 *)0x72c12f;
  FUN_00404e14(&stack0xfffffff0,&DAT_0077f75c,8);
  if ((bool)uVar9) {
    bVar2 = false;
    local_28 = (undefined1 *)0x72c16b;
    FUN_00726f94(*(undefined4 *)(param_1 + 0x138),10);
    uVar10 = 0;
    do {
      uVar11 = uVar10 + 1;
      uVar1 = *(uint *)(*(int *)(param_1 + 0x138) + 8);
      if (uVar1 < uVar11) {
        local_28 = (undefined1 *)0x72c187;
        FUN_00726f94(*(int *)(param_1 + 0x138),uVar1 + 10);
      }
      local_28 = (undefined1 *)0x72c196;
      iVar7 = (**(code **)(*param_2 + 0xc))(param_2,&local_1c,4);
      if (iVar7 == 0) {
        local_28 = (undefined1 *)0x72c1ac;
        FUN_00726f94(*(undefined4 *)(param_1 + 0x138),uVar10);
        local_28 = (undefined1 *)0x72c1b9;
        FUN_0040b75c(PTR_PTR_00782994,&local_28);
        puVar3 = local_28;
        local_28 = (undefined1 *)0x72c1ca;
        FUN_0072b474(param_1,&PTR_LAB_00722f78,puVar3);
      }
      local_28 = (undefined1 *)0x72c1d2;
      local_1c = (undefined1 *)FUN_00726894(local_1c);
      local_28 = (undefined1 *)0x72c1e4;
      (**(code **)(*param_2 + 0xc))(param_2,&local_20,4);
      uVar9 = uVar11 == 1;
      if ((bool)uVar9) {
        local_28 = (undefined1 *)0x72c1fa;
        FUN_004080b0(&local_2c,&local_20,4);
        local_28 = (undefined1 *)0x72c207;
        FUN_00408640(local_2c,L"IHDR");
        if (!(bool)uVar9) {
          local_28 = (undefined1 *)0x72c21b;
          FUN_00726f94(*(undefined4 *)(param_1 + 0x138),uVar10);
          local_28 = (undefined1 *)0x72c228;
          FUN_0040b75c(PTR_PTR_00782628,&local_30);
          local_28 = (undefined1 *)0x72c239;
          FUN_0072b474(param_1,&PTR_LAB_007233fc,local_30);
          goto LAB_0072c40d;
        }
      }
      uVar9 = !bVar2;
      if ((bool)uVar9) {
LAB_0072c263:
        local_28 = (undefined1 *)0x72c273;
        FUN_004080b0(&local_38,&local_20,4);
        local_28 = (undefined1 *)0x72c280;
        FUN_00408640(local_38,L"cHRM");
        uVar8 = extraout_var_00;
        if ((bool)uVar9) goto LAB_0072c282;
        local_28 = (undefined1 *)0x72c2ab;
        FUN_004080b0(&local_3c,&local_20,4);
        local_28 = (undefined1 *)0x72c2b8;
        FUN_00408640(local_3c,L"IDAT");
        if ((bool)uVar9) {
          bVar2 = true;
        }
        local_28 = (undefined1 *)0x72c2c9;
        uVar5 = FUN_00726a0c(param_1,local_20);
        local_28 = (undefined1 *)0x72c2dd;
        FUN_00726f80(*(undefined4 *)(param_1 + 0x138),uVar10,uVar5);
        local_28 = (undefined1 *)0x72c2ef;
        piVar6 = (int *)FUN_007272d8(*(undefined4 *)(param_1 + 0x138),uVar10);
        if ((undefined **)*piVar6 == &PTR_LAB_00724afc && ((uint)local_20 & 0x20) == 0) {
          local_28 = (undefined1 *)0x72c31a;
          FUN_004080b0(&local_40,&local_20,4);
          if (local_40 != 0) {
            local_28 = (undefined1 *)0x72c331;
            FUN_00726f94(*(undefined4 *)(param_1 + 0x138),uVar11);
            local_28 = (undefined1 *)0x72c33e;
            FUN_0040b75c(PTR_PTR_00781d0c,&local_44);
            local_28 = (undefined1 *)0x72c34f;
            FUN_0072b474(param_1,&PTR_LAB_00723540,local_44);
          }
        }
        local_2c = &LAB_0072c395;
        local_30 = *in_FS_OFFSET;
        *in_FS_OFFSET = &local_30;
        local_34 = local_1c;
        local_38 = 0x72c373;
        local_28 = &stack0xfffffffc;
        piVar6 = (int *)FUN_007272d8(*(undefined4 *)(param_1 + 0x138),uVar10);
        local_38 = 0x72c37d;
        cVar4 = (**(code **)(*piVar6 + 0xc))(piVar6,param_2,local_20);
        if (cVar4 == '\0') {
          *in_FS_OFFSET = local_30;
          break;
        }
        uVar9 = 1;
        *in_FS_OFFSET = local_30;
      }
      else {
        local_28 = (undefined1 *)0x72c254;
        FUN_004080b0(&local_34,&local_20,4);
        local_28 = (undefined1 *)0x72c261;
        FUN_00408640(local_34,L"IDAT");
        uVar8 = extraout_var;
        if (!(bool)uVar9) goto LAB_0072c263;
LAB_0072c282:
        uVar9 = local_1c + 4 == (undefined1 *)0x0;
        local_28 = (undefined1 *)0x72c296;
        (**(code **)(*param_2 + 0x14))(param_2,local_1c + 4,CONCAT22(uVar8,1));
        uVar11 = uVar10;
      }
      local_28 = (undefined1 *)0x72c3c5;
      FUN_004080b0(&local_48,&local_20,4);
      local_28 = (undefined1 *)0x72c3d2;
      FUN_00408640(local_48,L"IEND");
      uVar10 = uVar11;
    } while (!(bool)uVar9);
    local_28 = (undefined1 *)0x72c3e9;
    FUN_00726f94(*(undefined4 *)(param_1 + 0x138),uVar11);
    if (!bVar2) {
      local_28 = (undefined1 *)0x72c3fc;
      FUN_0040b75c(PTR_PTR_00781e98,&local_4c);
      local_28 = (undefined1 *)0x72c40d;
      FUN_0072b474(param_1,&PTR_LAB_00723750,local_4c);
    }
  }
  else {
    local_28 = (undefined1 *)0x72c13e;
    FUN_0040b75c(PTR_PTR_007822f0,&local_24);
    local_28 = (undefined1 *)0x72c14f;
    FUN_0072b474(param_1,&PTR_LAB_00723350,local_24);
  }
LAB_0072c40d:
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0072c42f;
  local_20 = (undefined1 *)0x72c427;
  thunk_FUN_00406e80(&local_4c,0xb,puVar3);
  return;
}
