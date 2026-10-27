// rea decompile_all
// name: FUN_005fc8b0
// address: 0x5fc8b0
// body: available
// range: 0x5fc8b0-0x5fcb9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fc8de (push 0x5fcb9d followed by fs-segment stack chaining); handler 0x5fcb9d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005fc8b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,double param_10,double param_11)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 in_ST1;
  float10 fVar9;
  float10 in_ST2;
  float10 fVar10;
  float10 in_ST3;
  float10 fVar11;
  float10 fVar12;
  float10 in_ST4;
  float10 fVar13;
  float10 in_ST5;
  float10 fVar14;
  float10 in_ST6;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  undefined4 uVar21;
  undefined2 uVar22;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int iStack_48;
  int local_44;
  int *local_40;
  double local_3c;
  double local_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  double local_24;
  double local_1c;
  double local_14;
  undefined4 local_8;

  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  puStack_68 = (undefined1 *)0x5fc8d3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_6c = &LAB_005fcb9d;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  puStack_68 = &stack0xfffffffc;
  FUN_005fc04c();
  local_40 = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
  FUN_005fc090(local_8,param_3,&local_40);
  fVar14 = in_ST6;
  FUN_00404874();
  local_14 = (double)in_ST0;
  FUN_00404864();
  local_1c = (double)in_ST1;
  if (param_2 < 0) {
    param_2 = FUN_0057fbb4(DAT_00688644,&DAT_005fcbcc);
  }
  local_34 = (double)param_2 * local_14 * (double)CONCAT44(param_7,param_6);
  local_3c = (double)param_2 * local_1c * (double)CONCAT44(param_7,param_6);
  fVar6 = in_ST3;
  fVar9 = in_ST5;
  local_44 = param_2;
  if (DAT_00688650 == 1) {
    local_44 = (**(code **)(*local_40 + 0x14))();
    fVar6 = ((float10)local_44 * (float10)local_3c) / (float10)2.0;
    in_ST6 = in_ST4;
    local_4c = FUN_004048b8();
    param_10 = param_10 - (double)CONCAT44(extraout_EDX,local_4c);
    in_ST4 = in_ST2;
    local_44 = (**(code **)(*local_40 + 0x14))();
    in_ST2 = ((float10)local_44 * (float10)local_34) / (float10)2.0;
    local_4c = FUN_004048b8();
    param_11 = param_11 - (double)CONCAT44(extraout_EDX_00,local_4c);
    fVar9 = in_ST3;
    fVar14 = in_ST5;
    iStack_48 = extraout_EDX_00;
  }
  fVar7 = fVar6;
  fVar11 = fVar9;
  if (DAT_00688650 == 2) {
    local_44 = (**(code **)(*local_40 + 0x14))();
    fVar7 = (float10)local_44 * (float10)local_3c;
    in_ST6 = in_ST4;
    local_4c = FUN_004048b8();
    param_10 = param_10 - (double)CONCAT44(extraout_EDX_01,local_4c);
    in_ST4 = in_ST2;
    local_44 = (**(code **)(*local_40 + 0x14))();
    in_ST2 = (float10)local_44 * (float10)local_34;
    local_4c = FUN_004048b8();
    param_11 = param_11 - (double)CONCAT44(extraout_EDX_02,local_4c);
    fVar11 = fVar6;
    fVar14 = fVar9;
    iStack_48 = extraout_EDX_02;
  }
  iVar2 = (**(code **)(*local_40 + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      local_24 = 0.0;
      local_2c = 0;
      uStack_28 = 0;
      fVar6 = in_ST2;
      fVar9 = fVar7;
      fVar10 = in_ST4;
      fVar12 = fVar11;
      fVar13 = in_ST6;
      if (DAT_0068864c == 1) {
        (**(code **)(*local_40 + 0xc))(local_40,iVar5,&local_50);
        local_44 = FUN_0057fae0(DAT_00688644,local_50);
        fVar6 = ((float10)local_44 * (float10)(double)CONCAT44(param_9,param_8)) / (float10)2.0;
        iVar3 = FUN_004048b8();
        local_4c = -iVar3;
        iStack_48 = -(extraout_EDX_03 + (uint)(iVar3 != 0));
        local_24 = (double)CONCAT44(iStack_48,local_4c);
        fVar9 = in_ST2;
        fVar10 = fVar7;
        fVar12 = in_ST4;
        fVar13 = fVar11;
        fVar14 = in_ST6;
      }
      fVar8 = fVar6;
      in_ST2 = fVar9;
      fVar7 = fVar10;
      in_ST4 = fVar12;
      fVar11 = fVar13;
      in_ST6 = fVar14;
      if (DAT_0068864c == 2) {
        (**(code **)(*local_40 + 0xc))(local_40,iVar5,&local_54);
        local_44 = FUN_0057fae0(DAT_00688644,local_54);
        fVar8 = (float10)local_44 * (float10)(double)CONCAT44(param_9,param_8);
        iVar3 = FUN_004048b8();
        local_4c = -iVar3;
        iStack_48 = -(extraout_EDX_04 + (uint)(iVar3 != 0));
        local_24 = (double)CONCAT44(iStack_48,local_4c);
        in_ST2 = fVar6;
        fVar7 = fVar9;
        in_ST4 = fVar10;
        fVar11 = fVar12;
        in_ST6 = fVar13;
      }
      dVar20 = local_14 * (double)CONCAT44(uStack_28,local_2c) + local_1c * local_24 + param_11;
      uVar21 = SUB84(dVar20,0);
      uVar22 = (undefined2)((ulonglong)dVar20 >> 0x20);
      dVar20 = local_1c * (double)CONCAT44(uStack_28,local_2c) + (param_10 - local_14 * local_24);
      fVar14 = in_ST6;
      uVar4 = param_4;
      uVar15 = param_5;
      uVar16 = param_6;
      uVar17 = param_7;
      uVar18 = param_8;
      uVar19 = param_9;
      FUN_005661dc();
      (**(code **)(*local_40 + 0xc))
                (local_40,iVar5,&local_58,(double)fVar8,uVar4,uVar15,uVar16,uVar17,uVar18,uVar19,
                 dVar20,uVar21,uVar22);
      uVar22 = (undefined2)local_58;
      uVar4 = FUN_005661d0();
      FUN_0057f098(DAT_00688644,uVar22,uVar4);
      param_11 = param_11 + local_34;
      param_10 = param_10 + local_3c;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00405fdc(local_40);
  puVar1 = puStack_68;
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_005fcba4;
  puStack_6c = (undefined1 *)0x5fcb94;
  thunk_FUN_004072fc(&local_58,3,puVar1);
  puStack_6c = (undefined1 *)0x5fcb9c;
  thunk_FUN_004072d8(&local_8);
  return;
}
