// rea decompile_all
// name: FUN_004096a0
// address: 0x4096a0
// body: available
// range: 0x4096a0-0x409a01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4096c2 (push 0x409a02 followed by fs-segment stack chaining); handler 0x409a02 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004098b7) */

void FUN_004096a0(int param_1,int *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int extraout_EDX;
  uint uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  bool bVar9;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  bool local_15;
  uint local_14;
  uint local_10;
  int local_8;

  puStack_28 = (undefined1 *)0x4096b7;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_2c = &LAB_00409a02;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar8 = 1;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &stack0xfffffffc;
  if (local_8 == 0) {
    *param_2 = 1;
    puStack_28 = &stack0xfffffffc;
  }
  else {
    for (; iVar3 = FUN_00407058(&local_8), *(short *)(iVar3 + -2 + iVar8 * 2) == 0x20;
        iVar8 = iVar8 + 1) {
    }
    local_15 = false;
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    if (*(short *)(iVar3 + -2 + iVar8 * 2) == 0x2d) {
      local_15 = true;
      iVar8 = iVar8 + 1;
    }
    else {
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar3 = FUN_00407048(&local_8,local_8);
      }
      if (*(short *)(iVar3 + -2 + iVar8 * 2) == 0x2b) {
        iVar8 = iVar8 + 1;
      }
    }
    bVar1 = true;
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    if (*(short *)(iVar3 + -2 + iVar8 * 2) == 0x24) {
      bVar9 = true;
    }
    else {
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar3 = FUN_00407048(&local_8,local_8);
      }
      uVar6 = *(ushort *)(iVar3 + -2 + iVar8 * 2);
      if ((ushort)(*(short *)(iVar3 + -2 + iVar8 * 2) - 0x61U) < 0x1a) {
        uVar6 = *(ushort *)(iVar3 + -2 + iVar8 * 2) & 0xffdf;
      }
      bVar9 = uVar6 == 0x58;
    }
    if (bVar9) {
      bVar9 = true;
    }
    else {
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar3 = FUN_00407048(&local_8,local_8);
      }
      if (*(short *)(iVar3 + -2 + iVar8 * 2) == 0x30) {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar3 = FUN_00407048(&local_8,local_8);
        }
        uVar6 = *(ushort *)(iVar3 + iVar8 * 2);
        if ((ushort)(*(short *)(iVar3 + iVar8 * 2) - 0x61U) < 0x1a) {
          uVar6 = *(ushort *)(iVar3 + iVar8 * 2) & 0xffdf;
        }
        bVar9 = uVar6 == 0x58;
      }
      else {
        bVar9 = false;
      }
    }
    if (bVar9) {
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar3 = FUN_00407048(&local_8,local_8);
      }
      if (*(short *)(iVar3 + -2 + iVar8 * 2) == 0x30) {
        iVar8 = iVar8 + 1;
      }
      do {
        iVar8 = iVar8 + 1;
        uVar6 = *(ushort *)(local_8 + -2 + iVar8 * 2);
        if ((ushort)(uVar6 - 0x30) < 10) {
          uVar7 = uVar6 - 0x30;
        }
        else if ((ushort)(uVar6 - 0x41) < 6) {
          uVar7 = uVar6 - 0x37;
        }
        else {
          if (5 < (ushort)(uVar6 - 0x61)) goto LAB_004099af;
          uVar7 = uVar6 - 0x57;
        }
        if (((local_10 != 0) && ((int)local_10 < 0)) ||
           ((local_10 != 0xfffffff && (0xfffffff < (int)local_10)))) goto LAB_004099af;
        uVar5 = local_14 >> 0x1c;
        uVar4 = local_14 * 0x10;
        local_14 = uVar4 + uVar7;
        local_10 = (local_10 << 4 | uVar5) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar4,uVar7);
        bVar1 = false;
      } while( true );
    }
    while ((ushort)(*(short *)(local_8 + -2 + iVar8 * 2) - 0x30U) < 10) {
      uVar7 = *(ushort *)(local_8 + -2 + iVar8 * 2) - 0x30;
      if ((local_10 != 0) && ((int)local_10 < 0)) break;
      if (local_10 == 0xccccccc) {
        if (0xcccccccc < local_14) break;
      }
      else if (0xccccccc < (int)local_10) break;
      uVar5 = FUN_0040946c(local_14,local_10);
      local_14 = uVar7 + uVar5;
      local_10 = ((int)uVar7 >> 0x1f) + extraout_EDX + (uint)CARRY4(uVar7,uVar5);
      iVar8 = iVar8 + 1;
      bVar1 = false;
    }
    if (local_15 != false) {
      bVar9 = local_14 != 0;
      local_14 = -local_14;
      local_10 = -(local_10 + bVar9);
    }
    if ((local_10 != 0 || local_14 != 0) && (0x7fffffff < local_10 != local_15)) {
      iVar8 = iVar8 + -1;
    }
LAB_004099af:
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    if (*(short *)(iVar3 + -2 + iVar8 * 2) != 0) {
      bVar1 = true;
    }
    if (bVar1) {
      *param_2 = iVar8;
    }
    else {
      *param_2 = 0;
    }
  }
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00409a09;
  puStack_2c = (undefined1 *)0x409a01;
  thunk_FUN_00406e5c(&local_8,uStack_30,puVar2);
  return;
}
