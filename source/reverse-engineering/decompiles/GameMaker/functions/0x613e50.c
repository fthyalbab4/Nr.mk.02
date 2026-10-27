// rea decompile_all
// name: FUN_00613e50
// address: 0x613e50
// body: available
// range: 0x613e50-0x614247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613e70 (push 0x614248 followed by fs-segment stack chaining); handler 0x614248 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00613e50(int param_1,int param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int iVar6;
  int extraout_ECX_08;
  uint uVar7;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  uint uVar9;
  uint extraout_EDX_05;
  uint extraout_EDX_06;
  int extraout_EDX_07;
  int extraout_EDX_08;
  uint extraout_EDX_09;
  uint extraout_EDX_10;
  uint extraout_EDX_11;
  int extraout_EDX_12;
  int extraout_EDX_13;
  uint extraout_EDX_14;
  uint extraout_EDX_15;
  uint extraout_EDX_16;
  int extraout_EDX_17;
  int extraout_EDX_18;
  uint uVar10;
  undefined4 *in_FS_OFFSET;
  bool bVar11;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  uint local_1c;
  uint local_14;
  int local_10;
  int local_8;

  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  puStack_34 = &LAB_00614248;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  FUN_00409be0(&local_8,&DAT_004108f8,1,4);
  cVar1 = *(char *)(param_1 + 0xbb);
  local_10 = 0;
  uVar10 = 0;
  local_1c = FUN_00409a18(param_2);
  uVar7 = local_1c & 0x80000003;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
  }
  if (uVar7 != 0) {
    if ((int)local_1c < 0) {
      local_1c = local_1c + 3;
    }
    lVar2 = (longlong)((int)local_1c >> 2) * 4;
    local_1c = (uint)lVar2;
    if ((int)local_1c != lVar2) {
      local_1c = FUN_00405944();
    }
  }
  local_14 = 0;
  uVar7 = local_1c;
  if ((int)local_1c < 0) {
    uVar7 = local_1c + 3;
  }
  lVar2 = (longlong)((int)uVar7 >> 2) * 3;
  iVar5 = (int)lVar2;
  if (iVar5 != lVar2) {
    iVar5 = FUN_00405944();
  }
  FUN_00409be0(param_3,&DAT_004108f8,1,iVar5);
  if (0 < (int)local_1c) {
    do {
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) <= uVar10)) {
        thunk_FUN_00404478();
      }
      uVar4 = *(undefined1 *)(param_2 + uVar10);
      iVar8 = 0;
      if ((local_8 == 0) || (iVar6 = local_8, *(int *)(local_8 + -4) == 0)) {
        uVar4 = thunk_FUN_00404478();
        iVar6 = extraout_ECX;
        iVar8 = extraout_EDX;
      }
      *(undefined1 *)(iVar6 + iVar8) = uVar4;
      uVar7 = uVar10 + 1;
      if (SCARRY4(uVar10,1)) {
        uVar7 = FUN_00405944();
      }
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) <= uVar7)) {
        uVar7 = thunk_FUN_00404478();
      }
      uVar4 = *(undefined1 *)(param_2 + uVar7);
      iVar8 = 1;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 2)) {
        uVar4 = thunk_FUN_00404478();
        iVar6 = extraout_ECX_00;
        iVar8 = extraout_EDX_00;
      }
      *(undefined1 *)(iVar6 + iVar8) = uVar4;
      uVar7 = uVar10 + 2;
      if (SCARRY4(uVar10,2)) {
        uVar7 = FUN_00405944();
      }
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) <= uVar7)) {
        uVar7 = thunk_FUN_00404478();
      }
      uVar4 = *(undefined1 *)(param_2 + uVar7);
      iVar8 = 2;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 3)) {
        uVar4 = thunk_FUN_00404478();
        iVar6 = extraout_ECX_01;
        iVar8 = extraout_EDX_01;
      }
      *(undefined1 *)(iVar6 + iVar8) = uVar4;
      uVar7 = uVar10 + 3;
      if (SCARRY4(uVar10,3)) {
        uVar7 = FUN_00405944();
      }
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) <= uVar7)) {
        uVar7 = thunk_FUN_00404478();
      }
      uVar4 = *(undefined1 *)(param_2 + uVar7);
      iVar8 = 3;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 4)) {
        uVar4 = thunk_FUN_00404478();
        iVar6 = extraout_ECX_02;
        iVar8 = extraout_EDX_02;
      }
      *(undefined1 *)(iVar6 + iVar8) = uVar4;
      bVar11 = SCARRY4(uVar10,4);
      uVar10 = uVar10 + 4;
      if (bVar11) {
        FUN_00405944();
      }
      iVar8 = 0;
      if ((local_8 == 0) || (iVar6 = local_8, *(int *)(local_8 + -4) == 0)) {
        iVar8 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_03;
      }
      uVar7 = *(byte *)(iVar6 + iVar8) - 1;
      if (0x7e < uVar7) {
        uVar7 = thunk_FUN_00404478();
      }
      uVar7 = (uint)*(byte *)(param_1 + uVar7 + 0x3c) * 4;
      iVar8 = 1;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 2)) {
        uVar7 = thunk_FUN_00404478();
        iVar6 = extraout_ECX_03;
        iVar8 = extraout_EDX_04;
      }
      uVar9 = *(byte *)(iVar6 + iVar8) - 1;
      if (0x7e < uVar9) {
        uVar7 = thunk_FUN_00404478();
        uVar9 = extraout_EDX_05;
      }
      uVar7 = uVar7 | *(byte *)(param_1 + uVar9 + 0x3c) >> 4 & 3;
      if (0xff < uVar7) {
        uVar7 = thunk_FUN_00404478();
      }
      uVar4 = (undefined1)uVar7;
      iVar8 = *param_3;
      if ((iVar8 == 0) || (uVar7 = local_14, *(uint *)(iVar8 + -4) <= local_14)) {
        uVar4 = thunk_FUN_00404478();
        iVar8 = extraout_ECX_04;
        uVar7 = extraout_EDX_06;
      }
      *(undefined1 *)(iVar8 + uVar7) = uVar4;
      iVar8 = 1;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 2)) {
        iVar8 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_07;
      }
      uVar7 = *(byte *)(iVar6 + iVar8) - 1;
      if (0x7e < uVar7) {
        uVar7 = thunk_FUN_00404478();
      }
      uVar7 = (uint)(*(byte *)(param_1 + uVar7 + 0x3c) & 0xf) << 4;
      iVar8 = 2;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 3)) {
        uVar7 = thunk_FUN_00404478();
        iVar6 = extraout_ECX_05;
        iVar8 = extraout_EDX_08;
      }
      uVar9 = *(byte *)(iVar6 + iVar8) - 1;
      if (0x7e < uVar9) {
        uVar7 = thunk_FUN_00404478();
        uVar9 = extraout_EDX_09;
      }
      uVar7 = uVar7 | *(byte *)(param_1 + uVar9 + 0x3c) >> 2 & 0xf;
      if (0xff < uVar7) {
        uVar7 = thunk_FUN_00404478();
      }
      uVar4 = (undefined1)uVar7;
      uVar7 = local_14 + 1;
      if (SCARRY4(local_14,1)) {
        uVar4 = FUN_00405944();
        uVar7 = extraout_EDX_10;
      }
      iVar8 = *param_3;
      if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar7)) {
        uVar4 = thunk_FUN_00404478();
        iVar8 = extraout_ECX_06;
        uVar7 = extraout_EDX_11;
      }
      *(undefined1 *)(iVar8 + uVar7) = uVar4;
      iVar8 = 2;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 3)) {
        iVar8 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_12;
      }
      uVar7 = *(byte *)(iVar6 + iVar8) - 1;
      if (0x7e < uVar7) {
        uVar7 = thunk_FUN_00404478();
      }
      uVar7 = (uint)(*(byte *)(param_1 + uVar7 + 0x3c) & 3) << 6;
      iVar8 = 3;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 4)) {
        uVar7 = thunk_FUN_00404478();
        iVar6 = extraout_ECX_07;
        iVar8 = extraout_EDX_13;
      }
      uVar9 = *(byte *)(iVar6 + iVar8) - 1;
      if (0x7e < uVar9) {
        uVar7 = thunk_FUN_00404478();
        uVar9 = extraout_EDX_14;
      }
      uVar7 = uVar7 | *(byte *)(param_1 + uVar9 + 0x3c) & 0x3f;
      if (0xff < uVar7) {
        uVar7 = thunk_FUN_00404478();
      }
      uVar4 = (undefined1)uVar7;
      uVar7 = local_14 + 2;
      if (SCARRY4(local_14,2)) {
        uVar4 = FUN_00405944();
        uVar7 = extraout_EDX_15;
      }
      iVar8 = *param_3;
      if ((iVar8 == 0) || (*(uint *)(iVar8 + -4) <= uVar7)) {
        uVar4 = thunk_FUN_00404478();
        iVar8 = extraout_ECX_08;
        uVar7 = extraout_EDX_16;
      }
      *(undefined1 *)(iVar8 + uVar7) = uVar4;
      bVar11 = SCARRY4(local_14,3);
      local_14 = local_14 + 3;
      if (bVar11) {
        FUN_00405944();
      }
      iVar8 = 3;
      if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 4)) {
        iVar8 = thunk_FUN_00404478();
        iVar6 = extraout_EDX_17;
      }
      if (*(char *)(iVar6 + iVar8) == cVar1) {
        iVar8 = 2;
        if ((local_8 == 0) || (iVar6 = local_8, *(uint *)(local_8 + -4) < 3)) {
          iVar8 = thunk_FUN_00404478();
          iVar6 = extraout_EDX_18;
        }
        if (*(char *)(iVar6 + iVar8) == cVar1) {
          local_10 = 2;
        }
        else {
          local_10 = 1;
        }
      }
      else {
        local_10 = 0;
      }
    } while ((int)uVar10 < (int)local_1c);
  }
  if (local_10 != 0) {
    iVar8 = iVar5 - local_10;
    if (SBORROW4(iVar5,local_10)) {
      iVar8 = FUN_00405944();
    }
    FUN_00409be0(param_3,&DAT_004108f8,1,iVar8);
  }
  puVar3 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0061424f;
  puStack_34 = (undefined1 *)0x614247;
  FUN_00409ce0(&local_8,&DAT_004108f8,puVar3);
  return;
}
