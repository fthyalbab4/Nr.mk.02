// rea decompile_all
// name: FUN_00609958
// address: 0x609958
// body: available
// range: 0x609958-0x60a046 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x60997b (push 0x60a047 followed by fs-segment stack chaining); handler 0x60a047 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00609958(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar8;
  float10 in_ST6;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_5;

  puStack_4c = &stack0xfffffffc;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  puStack_50 = &LAB_0060a047;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  local_5 = 0;
  FUN_006094b8(param_1);
  local_c = FUN_0050bbe0(param_2);
  if (((local_c == 0x21d) || (local_c == 0x32a)) || (local_c == 0x32b)) {
    FUN_0050bc1c(param_2,&local_30);
    FUN_00408194(param_1 + 4,local_30);
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 8) = uVar4;
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x14) = uVar2;
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    uVar5 = FUN_0050bbe0(param_2);
    *(bool *)(param_1 + 0x1c) = (uVar5 & 1) != 0;
    *(bool *)(param_1 + 0x41) = (uVar5 & 2) == 0;
    FUN_0050bc1c(param_2,&local_34);
    FUN_00408194(param_1 + 100,local_34);
    iVar6 = FUN_0050bbe0(param_2);
    if (-1 < iVar6 + -1) {
      iVar7 = 0;
      local_24 = iVar6;
      do {
        local_28 = *(int *)(param_1 + 0x20 + iVar7 * 4);
        uVar2 = FUN_0050bcd0(param_2);
        *(undefined1 *)(local_28 + 4) = uVar2;
        uVar2 = FUN_0050bcd0(param_2);
        *(undefined1 *)(local_28 + 5) = uVar2;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_28 + 8) = uVar4;
        local_38 = FUN_0050bbe0(param_2);
        *(double *)(local_28 + 0x10) = (double)(int)local_38;
        local_38 = FUN_0050bbe0(param_2);
        *(double *)(local_28 + 0x18) = (double)(int)local_38;
        uVar2 = FUN_0050bcd0(param_2);
        *(undefined1 *)(local_28 + 0x20) = uVar2;
        uVar2 = FUN_0050bcd0(param_2);
        *(undefined1 *)(local_28 + 0x21) = uVar2;
        local_38 = FUN_0050bbe0(param_2);
        *(double *)(local_28 + 0x28) = (double)(int)local_38;
        local_38 = FUN_0050bbe0(param_2);
        *(double *)(local_28 + 0x30) = (double)(int)local_38;
        *(undefined4 *)(local_28 + 0x48) = 0xffffff;
        *(undefined4 *)(local_28 + 0x50) = 0;
        *(undefined4 *)(local_28 + 0x54) = 0x3ff00000;
        cVar3 = FUN_0050bcd0(param_2);
        if (cVar3 != '\0') {
          local_20 = FUN_005701d8(*(undefined4 *)(local_28 + 8));
          if (local_20 != 0) {
            iVar6 = FUN_0056f88c(local_20);
            if (0 < iVar6) {
              local_38 = FUN_0056f88c(local_20);
              *(double *)(local_28 + 0x38) = (double)*(int *)(param_1 + 0xc) / (double)(int)local_38
              ;
              in_ST6 = in_ST5;
            }
          }
          if (local_20 != 0) {
            iVar6 = FUN_0056f894(local_20);
            if (0 < iVar6) {
              local_38 = FUN_0056f894(local_20);
              *(double *)(local_28 + 0x40) =
                   (double)*(int *)(param_1 + 0x10) / (double)(int)local_38;
              in_ST6 = in_ST5;
            }
          }
        }
        iVar7 = iVar7 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    uVar2 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x40) = uVar2;
    iVar6 = FUN_0050bbe0(param_2);
    if (-1 < iVar6 + -1) {
      iVar7 = 0;
      local_24 = iVar6;
      do {
        local_2c = *(int *)(param_1 + 0x44 + iVar7 * 4);
        uVar2 = FUN_0050bcd0(param_2);
        *(undefined1 *)(local_2c + 4) = uVar2;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 8) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0xc) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x10) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x14) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x18) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x1c) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x20) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x24) = uVar4;
        *(undefined4 *)(local_2c + 0x28) = 0;
        *(undefined4 *)(local_2c + 0x2c) = 0;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x30) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x34) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x38) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x3c) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(local_2c + 0x40) = uVar4;
        iVar7 = iVar7 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    FUN_00409dfc(param_1 + 0x6c,&DAT_006080a4,1);
    if (-1 < *(int *)(param_1 + 0x68) + -1) {
      iVar6 = 0;
      local_24 = *(int *)(param_1 + 0x68);
      do {
        local_10 = FUN_0050bbe0(param_2);
        local_14 = FUN_0050bbe0(param_2);
        local_18 = FUN_0050bbe0(param_2);
        local_1c = FUN_0050bbe0(param_2);
        fVar8 = in_ST6;
        uVar4 = FUN_0060d2cc(&DAT_0060b63c,1,local_1c,local_18,(double)local_14,(double)local_10);
        *(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar6 * 4) = uVar4;
        FUN_0050bc1c(param_2,&local_3c);
        FUN_00408194(*(int *)(*(int *)(param_1 + 0x6c) + iVar6 * 4) + 0x16c,local_3c);
        if (0x329 < local_c) {
          in_ST0 = in_ST2;
          in_ST1 = in_ST3;
          in_ST2 = in_ST4;
          in_ST3 = in_ST5;
          in_ST4 = in_ST6;
          in_ST5 = fVar8;
          FUN_0050bbf4(param_2);
          in_ST6 = in_ST5;
          FUN_0060d034(*(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar6 * 4));
          FUN_0050bbf4(param_2);
          FUN_0060d05c(*(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar6 * 4));
          local_1c = FUN_0050bbe0(param_2);
          *(uint *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar6 * 4) + 0x40) = local_1c & 0xffffff;
          local_38 = local_1c >> 0x18;
          *(double *)(*(int *)(*(int *)(param_1 + 0x6c) + iVar6 * 4) + 0x38) =
               (double)((float)local_38 / 255.0);
          if (0x32a < local_c) {
            in_ST0 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            FUN_0050bbf4(param_2);
            FUN_0060d084(*(undefined4 *)(*(int *)(param_1 + 0x6c) + iVar6 * 4));
          }
        }
        iVar6 = iVar6 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    FUN_00409dfc(param_1 + 0x8c,&DAT_00608224,1);
    if (-1 < *(int *)(param_1 + 0x88) + -1) {
      iVar6 = 0;
      local_24 = *(int *)(param_1 + 0x88);
      do {
        local_38 = FUN_0050bbe0(param_2);
        *(double *)(*(int *)(param_1 + 0x8c) + iVar6 * 0x60) = (double)(int)local_38;
        local_38 = FUN_0050bbe0(param_2);
        *(double *)(*(int *)(param_1 + 0x8c) + 8 + iVar6 * 0x60) = (double)(int)local_38;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x10 + iVar6 * 0x60) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x14 + iVar6 * 0x60) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x18 + iVar6 * 0x60) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x1c + iVar6 * 0x60) = uVar4;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x20 + iVar6 * 0x60) = uVar4;
        local_38 = FUN_0050bbe0(param_2);
        *(double *)(*(int *)(param_1 + 0x8c) + 0x28 + iVar6 * 0x60) = (double)(int)local_38;
        fVar8 = in_ST6;
        uVar4 = FUN_0050bbe0(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x30 + iVar6 * 0x60) = uVar4;
        if (local_c < 0x32a) {
          iVar7 = *(int *)(param_1 + 0x8c);
          *(undefined4 *)(iVar7 + 0x38 + iVar6 * 0x60) = 0;
          *(undefined4 *)(iVar7 + 0x3c + iVar6 * 0x60) = 0x3ff00000;
          iVar7 = *(int *)(param_1 + 0x8c);
          *(undefined4 *)(iVar7 + 0x40 + iVar6 * 0x60) = 0;
          *(undefined4 *)(iVar7 + 0x44 + iVar6 * 0x60) = 0x3ff00000;
          *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x48 + iVar6 * 0x60) = 0xffffff;
          iVar7 = *(int *)(param_1 + 0x8c);
          *(undefined4 *)(iVar7 + 0x50 + iVar6 * 0x60) = 0;
          *(undefined4 *)(iVar7 + 0x54 + iVar6 * 0x60) = 0x3ff00000;
        }
        else {
          FUN_0050bbf4(param_2);
          *(double *)(*(int *)(param_1 + 0x8c) + 0x38 + iVar6 * 0x60) = (double)in_ST0;
          in_ST0 = in_ST2;
          in_ST2 = in_ST4;
          in_ST4 = in_ST6;
          in_ST6 = fVar8;
          FUN_0050bbf4(param_2);
          *(double *)(*(int *)(param_1 + 0x8c) + 0x40 + iVar6 * 0x60) = (double)in_ST1;
          local_1c = FUN_0050bbe0(param_2);
          *(uint *)(*(int *)(param_1 + 0x8c) + 0x48 + iVar6 * 0x60) = local_1c & 0xffffff;
          local_38 = local_1c >> 0x18;
          *(double *)(*(int *)(param_1 + 0x8c) + 0x50 + iVar6 * 0x60) =
               (double)((float)local_38 / 255.0);
          in_ST1 = in_ST3;
          in_ST3 = in_ST5;
          in_ST5 = fVar8;
        }
        *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x58 + iVar6 * 0x60) = 1;
        iVar6 = iVar6 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    FUN_00609080(param_1);
    FUN_00609218(param_1);
    local_5 = 1;
  }
  puVar1 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_0060a04e;
  puStack_50 = (undefined1 *)0x60a039;
  thunk_FUN_004072d8(&local_3c,uStack_54,puVar1);
  puStack_50 = (undefined1 *)0x60a046;
  thunk_FUN_004072fc(&local_34,2);
  return;
}
