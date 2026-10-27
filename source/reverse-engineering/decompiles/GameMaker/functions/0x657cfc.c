// rea decompile_all
// name: FUN_00657cfc
// address: 0x657cfc
// body: available
// range: 0x657cfc-0x658345 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x657d22 (push 0x658346 followed by fs-segment stack chaining); handler 0x658346 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00657cfc(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_10;
  int local_c;
  undefined1 local_5;

  puStack_38 = &stack0xfffffffc;
  local_28 = 0;
  local_20 = 0;
  local_24 = 0;
  local_1c = 0;
  puStack_3c = &LAB_00658346;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_5 = 0;
  FUN_00657820(param_1);
  local_c = FUN_0052f024(param_2);
  if ((499 < local_c) && (local_c < 0x21e)) {
    FUN_0052f060(param_2,&local_1c);
    FUN_00407eb8(param_1 + 4,local_1c);
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    if (0x207 < local_c) {
      uVar2 = FUN_0052f114(param_2);
      *(undefined1 *)(param_1 + 0x1c) = uVar2;
    }
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x1d) = uVar2;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar4 = FUN_0052f024(param_2);
    *(bool *)(param_1 + 0x24) = (uVar4 & 1) != 0;
    *(bool *)(param_1 + 0x129) = (uVar4 & 2) == 0;
    FUN_0052f060(param_2,&local_24);
    FUN_00415dd0(local_24,&local_20);
    FUN_00407eb8(param_1 + 0x2ec,local_20);
    iVar5 = FUN_0052f024(param_2);
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      local_10 = iVar5;
      do {
        local_14 = (undefined1 *)(param_1 + 0x28 + iVar6 * 0x20);
        uVar2 = FUN_0052f114(param_2);
        *local_14 = uVar2;
        uVar2 = FUN_0052f114(param_2);
        local_14[1] = uVar2;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_14 + 4) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_14 + 8) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_14 + 0xc) = uVar3;
        uVar2 = FUN_0052f114(param_2);
        local_14[0x10] = uVar2;
        uVar2 = FUN_0052f114(param_2);
        local_14[0x11] = uVar2;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_14 + 0x14) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_14 + 0x18) = uVar3;
        if (0x207 < local_c) {
          uVar2 = FUN_0052f114(param_2);
          local_14[0x1c] = uVar2;
        }
        iVar6 = iVar6 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x128) = uVar2;
    iVar5 = FUN_0052f024(param_2);
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      local_10 = iVar5;
      do {
        local_18 = (undefined1 *)(param_1 + 300 + iVar6 * 0x38);
        uVar2 = FUN_0052f114(param_2);
        *local_18 = uVar2;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 4) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 8) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 0xc) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 0x10) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 0x14) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 0x18) = uVar3;
        if (local_c < 0x21c) {
          *(undefined4 *)(local_18 + 0x1c) = *(undefined4 *)(local_18 + 0xc);
        }
        else {
          uVar3 = FUN_0052f024(param_2);
          *(undefined4 *)(local_18 + 0x1c) = uVar3;
        }
        if (local_c < 0x21c) {
          *(undefined4 *)(local_18 + 0x20) = *(undefined4 *)(local_18 + 0x10);
        }
        else {
          uVar3 = FUN_0052f024(param_2);
          *(undefined4 *)(local_18 + 0x20) = uVar3;
        }
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 0x24) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 0x28) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 0x2c) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 0x30) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(local_18 + 0x34) = uVar3;
        iVar6 = iVar6 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x2f0) = uVar3;
    FUN_00409be0(param_1 + 0x2f4,&DAT_00656418,1,uVar3);
    if (-1 < *(int *)(param_1 + 0x2f0) + -1) {
      iVar5 = 0;
      local_10 = *(int *)(param_1 + 0x2f0);
      do {
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2f4) + iVar5 * 0x18) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2f4) + 4 + iVar5 * 0x18) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2f4) + 8 + iVar5 * 0x18) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2f4) + 0xc + iVar5 * 0x18) = uVar3;
        FUN_0052f060(param_2,&local_28);
        FUN_00407eb8(*(int *)(param_1 + 0x2f4) + 0x10 + iVar5 * 0x18,local_28);
        uVar2 = FUN_0052f114(param_2);
        *(undefined1 *)(*(int *)(param_1 + 0x2f4) + 0x14 + iVar5 * 0x18) = uVar2;
        iVar5 = iVar5 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x2f8) = uVar3;
    FUN_00409be0(param_1 + 0x2fc,&DAT_00656448,1,uVar3);
    if (-1 < *(int *)(param_1 + 0x2f8) + -1) {
      iVar5 = 0;
      local_10 = *(int *)(param_1 + 0x2f8);
      do {
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2fc) + iVar5 * 0x28) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 4 + iVar5 * 0x28) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 8 + iVar5 * 0x28) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0xc + iVar5 * 0x28) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x10 + iVar5 * 0x28) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x14 + iVar5 * 0x28) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x18 + iVar5 * 0x28) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x1c + iVar5 * 0x28) = uVar3;
        uVar3 = FUN_0052f024(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x20 + iVar5 * 0x28) = uVar3;
        if (local_c < 0x208) {
          *(undefined1 *)(*(int *)(param_1 + 0x2fc) + 0x24 + iVar5 * 0x28) = 0;
        }
        else {
          uVar2 = FUN_0052f114(param_2);
          *(undefined1 *)(*(int *)(param_1 + 0x2fc) + 0x24 + iVar5 * 0x28) = uVar2;
        }
        iVar5 = iVar5 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x300) = uVar2;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x304) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x308) = uVar3;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x30c) = uVar2;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x30d) = uVar2;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x30e) = uVar2;
    if (local_c < 0x208) {
      FUN_0052f114(param_2);
    }
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x30f) = uVar2;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x310) = uVar2;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x311) = uVar2;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x312) = uVar2;
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0x313) = uVar2;
    if (local_c < 0x208) {
      FUN_0052f114(param_2);
    }
    if (local_c < 0x21d) {
      FUN_0052f024(param_2);
    }
    if (local_c < 0x21d) {
      FUN_0052f024(param_2);
    }
    if (local_c < 0x21d) {
      FUN_0052f024(param_2);
    }
    if (local_c < 0x21d) {
      FUN_0052f024(param_2);
    }
    if ((0x207 < local_c) && (local_c < 0x21d)) {
      FUN_0052f024(param_2);
    }
    if ((0x207 < local_c) && (local_c < 0x21d)) {
      FUN_0052f024(param_2);
    }
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x314) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x318) = uVar3;
    uVar3 = FUN_0052f024(param_2);
    *(undefined4 *)(param_1 + 0x31c) = uVar3;
    local_5 = 1;
    FUN_00657b48(param_1);
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0065834d;
  puStack_3c = (undefined1 *)0x658345;
  thunk_FUN_00406e80(&local_28,4,puVar1);
  return;
}
