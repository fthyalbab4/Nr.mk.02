// rea decompile_all
// name: FUN_0060a060
// address: 0x60a060
// body: available
// range: 0x60a060-0x60a594 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x60a080 (push 0x60a595 followed by fs-segment stack chaining); handler 0x60a595 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060a060(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar11;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar12;
  float10 in_ST6;
  float10 fVar13;
  float10 in_ST7;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_5;

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_18 = 0;
  puStack_30 = &LAB_0060a595;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_5 = 0;
  FUN_006094b8(param_1);
  iVar7 = FUN_0050bbe0(param_2);
  if (iVar7 == 0x21c) {
    FUN_0050bc1c(param_2,&local_18);
    FUN_00408194(param_1 + 4,local_18);
    uVar8 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar8;
    uVar8 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar8;
    uVar8 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 8) = uVar8;
    uVar6 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x14) = uVar6;
    uVar8 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x18) = uVar8;
    uVar9 = FUN_0050bbe0(param_2);
    *(bool *)(param_1 + 0x1c) = (uVar9 & 1) != 0;
    *(bool *)(param_1 + 0x41) = (uVar9 & 2) == 0;
    FUN_0050bc1c(param_2,&local_1c);
    FUN_00408194(param_1 + 100,local_1c);
    iVar7 = FUN_0050bbe0(param_2);
    if (-1 < iVar7 + -1) {
      iVar10 = 0;
      fVar11 = in_ST6;
      in_ST6 = in_ST7;
      local_c = iVar7;
      do {
        local_10 = *(int *)(param_1 + 0x20 + iVar10 * 4);
        uVar6 = FUN_0050bcd0(param_2);
        *(undefined1 *)(local_10 + 4) = uVar6;
        uVar6 = FUN_0050bcd0(param_2);
        *(undefined1 *)(local_10 + 5) = uVar6;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_10 + 8) = uVar8;
        FUN_0050bbf4(param_2);
        *(double *)(local_10 + 0x10) = (double)in_ST0;
        in_ST0 = in_ST6;
        FUN_0050bbf4(param_2);
        *(double *)(local_10 + 0x18) = (double)in_ST1;
        fVar13 = in_ST6;
        uVar6 = FUN_0050bcd0(param_2);
        *(undefined1 *)(local_10 + 0x20) = uVar6;
        uVar6 = FUN_0050bcd0(param_2);
        *(undefined1 *)(local_10 + 0x21) = uVar6;
        in_ST1 = in_ST6;
        FUN_0050bbf4(param_2);
        *(double *)(local_10 + 0x38) = (double)in_ST2;
        in_ST2 = fVar13;
        FUN_0050bbf4(param_2);
        *(double *)(local_10 + 0x40) = (double)in_ST3;
        in_ST3 = fVar13;
        FUN_0050bbf4(param_2);
        *(double *)(local_10 + 0x28) = (double)in_ST4;
        in_ST4 = fVar13;
        FUN_0050bbf4(param_2);
        *(double *)(local_10 + 0x30) = (double)in_ST5;
        in_ST6 = fVar13;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_10 + 0x48) = uVar8;
        in_ST5 = fVar13;
        FUN_0050bbf4(param_2);
        *(double *)(local_10 + 0x50) = (double)fVar11;
        iVar10 = iVar10 + 1;
        local_c = local_c + -1;
        fVar11 = in_ST6;
        in_ST7 = in_ST6;
      } while (local_c != 0);
    }
    uVar6 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x40) = uVar6;
    iVar7 = FUN_0050bbe0(param_2);
    if (-1 < iVar7 + -1) {
      iVar10 = 0;
      fVar11 = in_ST0;
      fVar13 = in_ST1;
      fVar12 = in_ST2;
      fVar2 = in_ST3;
      fVar3 = in_ST4;
      fVar4 = in_ST5;
      fVar5 = in_ST6;
      local_c = iVar7;
      do {
        in_ST6 = in_ST7;
        in_ST5 = fVar5;
        in_ST4 = fVar4;
        in_ST3 = fVar3;
        in_ST2 = fVar2;
        in_ST1 = fVar12;
        in_ST0 = fVar13;
        local_14 = *(int *)(param_1 + 0x44 + iVar10 * 4);
        uVar6 = FUN_0050bcd0(param_2);
        *(undefined1 *)(local_14 + 4) = uVar6;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 8) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0xc) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x10) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x14) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x18) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x1c) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x20) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x24) = uVar8;
        FUN_0050bbf4(param_2);
        *(double *)(local_14 + 0x28) = (double)fVar11;
        in_ST7 = in_ST6;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x30) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x34) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x38) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x3c) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_14 + 0x40) = uVar8;
        iVar10 = iVar10 + 1;
        local_c = local_c + -1;
        fVar11 = in_ST0;
        fVar13 = in_ST1;
        fVar12 = in_ST2;
        fVar2 = in_ST3;
        fVar3 = in_ST4;
        fVar4 = in_ST5;
        fVar5 = in_ST6;
      } while (local_c != 0);
    }
    uVar8 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x68) = uVar8;
    FUN_00409dfc(param_1 + 0x6c,&DAT_006080a4,1,uVar8);
    if (-1 < *(int *)(param_1 + 0x68) + -1) {
      iVar7 = 0;
      local_c = *(int *)(param_1 + 0x68);
      do {
        uVar8 = FUN_0060d2cc(&DAT_0060b63c,1,0,0,0,0,0,0);
        *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar7 * 4) = uVar8;
        FUN_0060db08(*(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar7 * 4),param_2);
        iVar7 = iVar7 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    uVar8 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x70) = uVar8;
    FUN_00409dfc(param_1 + 0x74,&DAT_006080d4,1,uVar8);
    if (-1 < *(int *)(param_1 + 0x70) + -1) {
      iVar7 = 0;
      local_c = *(int *)(param_1 + 0x70);
      do {
        uVar8 = FUN_0060d2cc(&DAT_0060b63c,1,0,0,0,0,0,0);
        *(undefined4 *)(*(int *)(param_1 + 0x74) + iVar7 * 4) = uVar8;
        FUN_0060db08(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar7 * 4),param_2);
        iVar7 = iVar7 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    uVar8 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x88) = uVar8;
    FUN_00409dfc(param_1 + 0x8c,&DAT_00608224,1,uVar8);
    if (-1 < *(int *)(param_1 + 0x88) + -1) {
      iVar7 = 0;
      local_c = *(int *)(param_1 + 0x88);
      do {
        FUN_0050bbf4(param_2);
        *(double *)(*(int *)(param_1 + 0x8c) + iVar7 * 0x60) = (double)in_ST0;
        in_ST0 = in_ST6;
        fVar11 = in_ST7;
        FUN_0050bbf4(param_2);
        *(double *)(*(int *)(param_1 + 0x8c) + 8 + iVar7 * 0x60) = (double)in_ST1;
        fVar13 = fVar11;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x10 + iVar7 * 0x60) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x14 + iVar7 * 0x60) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18 + iVar7 * 0x60) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x1c + iVar7 * 0x60) = uVar8;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x20 + iVar7 * 0x60) = uVar8;
        in_ST1 = in_ST7;
        FUN_0050bbf4(param_2);
        *(double *)(*(int *)(param_1 + 0x8c) + 0x28 + iVar7 * 0x60) = (double)in_ST2;
        fVar12 = fVar13;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x30 + iVar7 * 0x60) = uVar8;
        in_ST2 = fVar11;
        FUN_0050bbf4(param_2);
        *(double *)(*(int *)(param_1 + 0x8c) + 0x38 + iVar7 * 0x60) = (double)in_ST3;
        in_ST3 = fVar13;
        fVar11 = fVar12;
        FUN_0050bbf4(param_2);
        *(double *)(*(int *)(param_1 + 0x8c) + 0x40 + iVar7 * 0x60) = (double)in_ST4;
        in_ST6 = fVar11;
        uVar8 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x48 + iVar7 * 0x60) = uVar8;
        in_ST4 = fVar12;
        FUN_0050bbf4(param_2);
        *(double *)(*(int *)(param_1 + 0x8c) + 0x50 + iVar7 * 0x60) = (double)in_ST5;
        in_ST7 = in_ST6;
        uVar6 = FUN_0050bcd0(param_2);
        *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x58 + iVar7 * 0x60) = uVar6;
        iVar7 = iVar7 + 1;
        local_c = local_c + -1;
        in_ST5 = fVar11;
      } while (local_c != 0);
    }
    FUN_00609080(param_1);
    FUN_00609218(param_1);
    local_5 = 1;
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0060a59c;
  puStack_30 = (undefined1 *)0x60a594;
  thunk_FUN_004072fc(&local_1c,2,puVar1);
  return;
}
