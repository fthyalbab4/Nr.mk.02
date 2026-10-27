// rea decompile_all
// name: FUN_006884c8
// address: 0x6884c8
// body: available
// range: 0x6884c8-0x68891d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6884dd (push 0x68891e followed by fs-segment stack chaining); handler 0x68891e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006884c8(undefined4 param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0068891e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar3 = FUN_00514e78(&PTR_LAB_00682de8,1,0);
  if (*PTR_DAT_0078258c == '\0') {
    FUN_004aa354(*(undefined4 *)(iVar3 + 0x3d8),*(undefined4 *)(iVar3 + 0x5f0));
  }
  if (*PTR_DAT_0078258c == '\0') {
    FUN_004aa354(*(undefined4 *)(iVar3 + 0x3d4),*(undefined4 *)(iVar3 + 0x5f0));
  }
  FUN_004ee5c0(*(undefined4 *)(iVar3 + 0x3e4),*PTR_DAT_0078258c);
  FUN_004ee5c0(*(undefined4 *)(iVar3 + 1000),*PTR_DAT_0078258c);
  *(int *)(iVar3 + 0x144) = iVar3;
  *(code **)(iVar3 + 0x140) = FUN_00690ac4;
  FUN_004f5ff8(*(undefined4 *)(iVar3 + 0x3c0),1);
  uVar4 = FUN_00693134(param_1);
  *(undefined4 *)(iVar3 + 0x61c) = uVar4;
  *(undefined4 *)(iVar3 + 0x165c) = 0x3f800000;
  FUN_00409ce0(iVar3 + 0x16a4,&DAT_00682d2c);
  FUN_00409ce0(iVar3 + 0x16a8,&DAT_00682d60);
  FUN_00409ce0(iVar3 + 0x16a0,&DAT_00682cf8);
  *(undefined1 *)(iVar3 + 0x162f) = 1;
  *(undefined1 *)(iVar3 + 0x1630) = 1;
  *(undefined1 *)(iVar3 + 0x162d) = 1;
  *(undefined1 *)(iVar3 + 0x162e) = 1;
  *(undefined1 *)(iVar3 + 0x1631) = 0;
  *(undefined1 *)(iVar3 + 0x1633) = 1;
  *(undefined1 *)(iVar3 + 0x1634) = 1;
  *(undefined1 *)(iVar3 + 0x1632) = 1;
  *(undefined *)(iVar3 + 0x162c) = *PTR_DAT_00782318;
  *(undefined1 *)(iVar3 + 0x1635) = 0;
  *(undefined4 *)(iVar3 + 0x630) = param_1;
  uVar4 = FUN_006577b8(&DAT_006564cc,1);
  *(undefined4 *)(iVar3 + 0x620) = uVar4;
  FUN_00657994(uVar4,*(undefined4 *)(iVar3 + 0x61c));
  FUN_00692f24(param_1,&local_8);
  FUN_00407eb8(iVar3 + 0x624,local_8);
  *(undefined1 *)(iVar3 + 0x628) = 0;
  iVar5 = FUN_004047b0(0x50);
  DAT_0077f3a4 = -iVar5;
  *(undefined4 *)(iVar3 + 0x62c) = 0;
  *(undefined4 *)(iVar3 + 0x1684) = 0;
  FUN_00689a88(iVar3);
  FUN_0068a1e0(iVar3);
  FUN_0068b68c(iVar3);
  FUN_0068d180(iVar3);
  FUN_0068da90(iVar3);
  *(undefined4 *)(iVar3 + 0x1694) = 0x20;
  *(undefined4 *)(iVar3 + 0x1698) = 0x20;
  *(undefined4 *)(iVar3 + 0x169c) = 0;
  FUN_006912b0(iVar3);
  FUN_00690d44(iVar3);
  *(undefined4 *)(iVar3 + 0x2b8) = 2;
  *(undefined4 *)(iVar3 + 0x1638) = 0xffffff9c;
  *(undefined4 *)(iVar3 + 0x163c) = 0xffffff9c;
  *(undefined1 *)(iVar3 + 0x165a) = 0;
  *(undefined4 *)(iVar3 + 0x1650) = 0;
  *(undefined4 *)(iVar3 + 0x1654) = 0;
  *(undefined1 *)(iVar3 + 0x1661) = 1;
  *(undefined1 *)(iVar3 + 0x1688) = 0;
  FUN_006902e4(iVar3);
  *(undefined1 *)(iVar3 + 0x1658) = 0;
  if ((*PTR_DAT_00781618 != '\0') && (*(char *)(*(int *)(iVar3 + 0x61c) + 0x300) != '\0')) {
    FUN_004edce0(iVar3,*(undefined4 *)(*(int *)(iVar3 + 0x61c) + 0x304));
    FUN_004edd14(iVar3,*(undefined4 *)(*(int *)(iVar3 + 0x61c) + 0x308));
    *(undefined1 *)(iVar3 + 0x162c) = *(undefined1 *)(*(int *)(iVar3 + 0x61c) + 0x30c);
    *(undefined1 *)(iVar3 + 0x162f) = *(undefined1 *)(*(int *)(iVar3 + 0x61c) + 0x30d);
    *(undefined1 *)(iVar3 + 0x1630) = *(undefined1 *)(*(int *)(iVar3 + 0x61c) + 0x30e);
    *(undefined1 *)(iVar3 + 0x162d) = *(undefined1 *)(*(int *)(iVar3 + 0x61c) + 0x30f);
    *(undefined1 *)(iVar3 + 0x162e) = *(undefined1 *)(*(int *)(iVar3 + 0x61c) + 0x310);
    *(undefined1 *)(iVar3 + 0x1631) = *(undefined1 *)(*(int *)(iVar3 + 0x61c) + 0x311);
    uVar1 = *(undefined1 *)(*(int *)(iVar3 + 0x61c) + 0x312);
    *(undefined1 *)(iVar3 + 0x1658) = uVar1;
    (**(code **)(**(int **)(iVar3 + 0x468) + 0xf0))(*(int **)(iVar3 + 0x468),uVar1);
    uVar1 = *(undefined1 *)(*(int *)(iVar3 + 0x61c) + 0x313);
    *(undefined1 *)(iVar3 + 0x1659) = uVar1;
    (**(code **)(**(int **)(iVar3 + 0x48c) + 0xf0))(*(int **)(iVar3 + 0x48c),uVar1);
    FUN_004ab574(*(undefined4 *)(iVar3 + 0x38c),*(undefined4 *)(*(int *)(iVar3 + 0x61c) + 0x314));
    *(undefined4 *)(iVar3 + 0x1650) = *(undefined4 *)(*(int *)(iVar3 + 0x61c) + 0x318);
    *(undefined4 *)(iVar3 + 0x1654) = *(undefined4 *)(*(int *)(iVar3 + 0x61c) + 0x31c);
    if (*(char *)(*(int *)(iVar3 + 0x61c) + 800) == '\0') {
      FUN_005178c8(iVar3,0);
    }
    else {
      FUN_005178c8(iVar3,2);
    }
  }
  if (*(char *)(iVar3 + 0x29a) == '\0') {
    iVar7 = (*(int *)(*(int *)PTR_DAT_00781a58 + 0x48) -
            *(int *)(*(int *)(*(int *)PTR_DAT_00781a58 + 0x430) + 0x40)) + -0x1e;
    iVar6 = (*(int *)(*(int *)PTR_DAT_00781a58 + 0x4c) -
            *(int *)(*(int *)(*(int *)PTR_DAT_00781a58 + 0x430) + 0x44)) + -0x1e;
    iVar5 = FUN_00515a48(iVar3,PTR_DAT_00781a58);
    if (iVar7 < iVar5 + *(int *)(iVar3 + 0x48)) {
      iVar5 = FUN_00515a48(iVar3);
      FUN_004edce0(iVar3,(iVar7 - iVar5) + -0x14);
    }
    iVar5 = FUN_00515a68(iVar3);
    if (iVar6 < iVar5 + *(int *)(iVar3 + 0x4c)) {
      iVar5 = FUN_00515a68(iVar3);
      FUN_004edd14(iVar3,(iVar6 - iVar5) + -0x50);
    }
  }
  FUN_006dfbf0(*(undefined4 *)PTR_DAT_00781a58,iVar3);
  FUN_00690994(iVar3,0);
  FUN_00691508(iVar3,1);
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00688925;
  puStack_1c = (undefined1 *)0x68891d;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar2);
  return;
}
