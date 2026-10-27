// rea decompile_all
// name: FUN_004f6f20
// address: 0x4f6f20
// body: available
// range: 0x4f6f20-0x4f71d8 inclusive
// range: 0x4f71f9-0x4f726b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f6f42 (push 0x4f726c followed by fs-segment stack chaining); handler 0x4f726c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f719e (push 0x4f71d9 followed by fs-segment stack chaining); handler 0x4f71d9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f6f20(int param_1,int *param_2)

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
  local_20 = &LAB_004f726c;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  uVar9 = 1;
  local_28 = (undefined1 *)0x4f6f52;
  FUN_004f5eb8(param_1);
  local_28 = (undefined1 *)0x4f6f61;
  (**(code **)(*param_2 + 0xc))(param_2,&stack0xfffffff0,8);
  local_28 = (undefined1 *)0x4f6f73;
  FUN_00404d9c(&stack0xfffffff0,&DAT_00681d28,8);
  if ((bool)uVar9) {
    bVar2 = false;
    local_28 = (undefined1 *)0x4f6faf;
    FUN_004f1dd8(*(undefined4 *)(param_1 + 0x138),10);
    uVar10 = 0;
    do {
      uVar11 = uVar10 + 1;
      uVar1 = *(uint *)(*(int *)(param_1 + 0x138) + 8);
      if (uVar1 < uVar11) {
        local_28 = (undefined1 *)0x4f6fcb;
        FUN_004f1dd8(*(int *)(param_1 + 0x138),uVar1 + 10);
      }
      local_28 = (undefined1 *)0x4f6fda;
      iVar7 = (**(code **)(*param_2 + 0xc))(param_2,&local_1c,4);
      if (iVar7 == 0) {
        local_28 = (undefined1 *)0x4f6ff0;
        FUN_004f1dd8(*(undefined4 *)(param_1 + 0x138),uVar10);
        local_28 = (undefined1 *)0x4f6ffd;
        FUN_0040b9d0(PTR_LAB_006896ac,&local_28);
        puVar3 = local_28;
        local_28 = (undefined1 *)0x4f700e;
        FUN_004f62b8(param_1,&LAB_004eddbc,puVar3);
      }
      local_28 = (undefined1 *)0x4f7016;
      local_1c = (undefined1 *)FUN_004f16d8(local_1c);
      local_28 = (undefined1 *)0x4f7028;
      (**(code **)(*param_2 + 0xc))(param_2,&local_20,4);
      uVar9 = uVar11 == 1;
      if ((bool)uVar9) {
        local_28 = (undefined1 *)0x4f703e;
        FUN_0040838c(&local_2c,&local_20,4);
        local_28 = (undefined1 *)0x4f704b;
        FUN_0040891c(local_2c,L"IHDR");
        if (!(bool)uVar9) {
          local_28 = (undefined1 *)0x4f705f;
          FUN_004f1dd8(*(undefined4 *)(param_1 + 0x138),uVar10);
          local_28 = (undefined1 *)0x4f706c;
          FUN_0040b9d0(PTR_LAB_00689408,&local_30);
          local_28 = (undefined1 *)0x4f707d;
          FUN_004f62b8(param_1,&LAB_004ee240,local_30);
          goto LAB_004f7251;
        }
      }
      uVar9 = !bVar2;
      if ((bool)uVar9) {
LAB_004f70a7:
        local_28 = (undefined1 *)0x4f70b7;
        FUN_0040838c(&local_38,&local_20,4);
        local_28 = (undefined1 *)0x4f70c4;
        FUN_0040891c(local_38,L"cHRM");
        uVar8 = extraout_var_00;
        if ((bool)uVar9) goto LAB_004f70c6;
        local_28 = (undefined1 *)0x4f70ef;
        FUN_0040838c(&local_3c,&local_20,4);
        local_28 = (undefined1 *)0x4f70fc;
        FUN_0040891c(local_3c,L"IDAT");
        if ((bool)uVar9) {
          bVar2 = true;
        }
        local_28 = (undefined1 *)0x4f710d;
        uVar5 = FUN_004f1850(param_1,local_20);
        local_28 = (undefined1 *)0x4f7121;
        FUN_004f1dc4(*(undefined4 *)(param_1 + 0x138),uVar10,uVar5);
        local_28 = (undefined1 *)0x4f7133;
        piVar6 = (int *)FUN_004f211c(*(undefined4 *)(param_1 + 0x138),uVar10);
        if ((undefined **)*piVar6 == &PTR_LAB_004ef940 && ((uint)local_20 & 0x20) == 0) {
          local_28 = (undefined1 *)0x4f715e;
          FUN_0040838c(&local_40,&local_20,4);
          if (local_40 != 0) {
            local_28 = (undefined1 *)0x4f7175;
            FUN_004f1dd8(*(undefined4 *)(param_1 + 0x138),uVar11);
            local_28 = (undefined1 *)0x4f7182;
            FUN_0040b9d0(PTR_LAB_00688d98,&local_44);
            local_28 = (undefined1 *)0x4f7193;
            FUN_004f62b8(param_1,&LAB_004ee384,local_44);
          }
        }
        local_2c = &LAB_004f71d9;
        local_30 = *in_FS_OFFSET;
        *in_FS_OFFSET = &local_30;
        local_34 = local_1c;
        local_38 = 0x4f71b7;
        local_28 = &stack0xfffffffc;
        piVar6 = (int *)FUN_004f211c(*(undefined4 *)(param_1 + 0x138),uVar10);
        local_38 = 0x4f71c1;
        cVar4 = (**(code **)(*piVar6 + 0xc))(piVar6,param_2,local_20);
        if (cVar4 == '\0') {
          *in_FS_OFFSET = local_30;
          break;
        }
        uVar9 = 1;
        *in_FS_OFFSET = local_30;
      }
      else {
        local_28 = (undefined1 *)0x4f7098;
        FUN_0040838c(&local_34,&local_20,4);
        local_28 = (undefined1 *)0x4f70a5;
        FUN_0040891c(local_34,L"IDAT");
        uVar8 = extraout_var;
        if (!(bool)uVar9) goto LAB_004f70a7;
LAB_004f70c6:
        uVar9 = local_1c + 4 == (undefined1 *)0x0;
        local_28 = (undefined1 *)0x4f70da;
        (**(code **)(*param_2 + 0x14))(param_2,local_1c + 4,CONCAT22(uVar8,1));
        uVar11 = uVar10;
      }
      local_28 = (undefined1 *)0x4f7209;
      FUN_0040838c(&local_48,&local_20,4);
      local_28 = (undefined1 *)0x4f7216;
      FUN_0040891c(local_48,L"IEND");
      uVar10 = uVar11;
    } while (!(bool)uVar9);
    local_28 = (undefined1 *)0x4f722d;
    FUN_004f1dd8(*(undefined4 *)(param_1 + 0x138),uVar11);
    if (!bVar2) {
      local_28 = (undefined1 *)0x4f7240;
      FUN_0040b9d0(PTR_LAB_00688ea8,&local_4c);
      local_28 = (undefined1 *)0x4f7251;
      FUN_004f62b8(param_1,&LAB_004ee594,local_4c);
    }
  }
  else {
    local_28 = (undefined1 *)0x4f6f82;
    FUN_0040b9d0(PTR_LAB_006891c4,&local_24);
    local_28 = (undefined1 *)0x4f6f93;
    FUN_004f62b8(param_1,&LAB_004ee194,local_24);
  }
LAB_004f7251:
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_004f7273;
  local_20 = (undefined1 *)0x4f726b;
  thunk_FUN_004072fc(&local_4c,0xb,puVar3);
  return;
}
