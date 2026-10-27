// rea decompile_all
// name: FUN_005fc6c8
// address: 0x5fc6c8
// body: available
// range: 0x5fc6c8-0x5fc88c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fc6f7 (push 0x5fc88d followed by fs-segment stack chaining); handler 0x5fc88d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fc6c8(undefined4 param_1,int param_2,undefined4 param_3,double param_4,double param_5)

{
  undefined1 *puVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar11;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  double local_14;
  int local_c;
  undefined4 local_8;

  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  puStack_40 = (undefined1 *)0x5fc6ec;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_44 = &LAB_005fc88d;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_40 = &stack0xfffffffc;
  FUN_005fc04c();
  local_20 = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
  FUN_005fc090(local_8,param_3,&local_20);
  if (local_c < 0) {
    local_c = FUN_0057fbb4(DAT_00688644,&DAT_005fc8ac);
  }
  if (DAT_00688650 == 1) {
    iVar7 = (**(code **)(*local_20 + 0x14))();
    local_24 = iVar7 * local_c >> 1;
    if (local_24 < 0) {
      local_24 = local_24 + (uint)((iVar7 * local_c & 1U) != 0);
    }
    param_4 = param_4 - (double)local_24;
  }
  if (DAT_00688650 == 2) {
    local_24 = (**(code **)(*local_20 + 0x14))();
    local_24 = local_24 * local_c;
    param_4 = param_4 - (double)local_24;
  }
  iVar7 = (**(code **)(*local_20 + 0x14))();
  if (-1 < iVar7 + -1) {
    iVar10 = 0;
    do {
      local_14 = 0.0;
      local_1c = 0;
      uStack_18 = 0;
      fVar11 = in_ST0;
      fVar2 = in_ST1;
      fVar3 = in_ST2;
      fVar4 = in_ST3;
      fVar5 = in_ST4;
      fVar6 = in_ST5;
      if (DAT_0068864c == 1) {
        (**(code **)(*local_20 + 0xc))(local_20,iVar10,&local_28);
        uVar8 = FUN_0057fae0(DAT_00688644,local_28);
        local_24 = (int)uVar8 >> 1;
        if (local_24 < 0) {
          local_24 = local_24 + (uint)((uVar8 & 1) != 0);
        }
        local_24 = -local_24;
        local_14 = (double)local_24;
        fVar11 = in_ST0;
        fVar2 = in_ST1;
        fVar3 = in_ST2;
        fVar4 = in_ST3;
        fVar5 = in_ST4;
        fVar6 = in_ST5;
      }
      in_ST5 = in_ST6;
      in_ST4 = fVar6;
      in_ST3 = fVar5;
      in_ST2 = fVar4;
      in_ST1 = fVar3;
      in_ST0 = fVar2;
      if (DAT_0068864c == 2) {
        (**(code **)(*local_20 + 0xc))(local_20,iVar10,&local_2c);
        local_24 = FUN_0057fae0(DAT_00688644,local_2c);
        local_24 = -local_24;
        local_14 = (double)local_24;
      }
      dVar13 = param_5 + local_14;
      dVar12 = param_4 + (double)CONCAT44(uStack_18,local_1c);
      in_ST6 = in_ST5;
      FUN_005661dc();
      (**(code **)(*local_20 + 0xc))(local_20,iVar10,&local_30,(double)fVar11,dVar12,dVar13);
      uVar14 = local_30;
      uVar9 = FUN_005661d0();
      FUN_0057edc8(DAT_00688644,uVar14,uVar9);
      param_4 = (double)local_c + param_4;
      iVar10 = iVar10 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00405fdc(local_20);
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_005fc894;
  puStack_44 = (undefined1 *)0x5fc884;
  thunk_FUN_004072fc(&local_30,3,puVar1);
  puStack_44 = (undefined1 *)0x5fc88c;
  thunk_FUN_004072d8(&local_8);
  return;
}
