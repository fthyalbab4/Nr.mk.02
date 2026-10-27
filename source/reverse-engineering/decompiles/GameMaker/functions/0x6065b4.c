// rea decompile_all
// name: FUN_006065b4
// address: 0x6065b4
// body: available
// range: 0x6065b4-0x6068b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6065da (push 0x6068b9 followed by fs-segment stack chaining); handler 0x6068b9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00606802) */

void FUN_006065b4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 *param_5)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  uint uVar6;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  undefined1 **ppuVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_8;

  local_20 = &stack0xfffffffc;
  local_8 = 6;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_006068b9;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (undefined1 *)0x6065e4;
  iVar3 = FUN_00409a18(param_2);
  if (4 < iVar3) {
    iVar3 = 3;
    if ((param_2 == 0) || (*(uint *)(param_2 + -4) < 4)) {
      local_2c = (undefined1 *)0x606600;
      iVar3 = thunk_FUN_00404478();
    }
    if (*(char *)(param_2 + iVar3) == '\x01') {
      uVar8 = 8;
      iVar3 = 4;
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) < 5)) {
        local_2c = (undefined1 *)0x606630;
        iVar3 = thunk_FUN_00404478(4,&local_24);
      }
      local_2c = (undefined1 *)0x606639;
      FUN_0041666c(*(undefined1 *)(param_2 + iVar3));
      local_2c = local_24;
      local_30 = &LAB_006068d8;
      iVar3 = 5;
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) < 6)) {
        local_34 = 0x606657;
        iVar3 = thunk_FUN_00404478(5,&local_28);
      }
      local_34 = 0x606660;
      FUN_0041666c(*(undefined1 *)(param_2 + iVar3));
      local_34 = local_28;
      local_38 = &LAB_006068d8;
      iVar3 = 6;
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) < 7)) {
        iVar3 = thunk_FUN_00404478(6,&local_2c);
      }
      FUN_0041666c(*(undefined1 *)(param_2 + iVar3));
      iVar3 = 7;
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) < 8)) {
        iVar3 = thunk_FUN_00404478(7,&local_30);
      }
      FUN_0041666c(*(undefined1 *)(param_2 + iVar3));
      FUN_00408480(0,7);
    }
    else if (*(char *)(param_2 + iVar3) == '\x03') {
      iVar3 = 4;
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) < 5)) {
        local_2c = (undefined1 *)0x6066d6;
        iVar3 = thunk_FUN_00404478();
      }
      uVar6 = (uint)*(byte *)(param_2 + iVar3);
      uVar8 = uVar6 + 4;
      if (SCARRY4(uVar6,4)) {
        local_2c = (undefined1 *)0x6066e4;
        FUN_00405944();
      }
      local_2c = (undefined1 *)0x6066eb;
      iVar5 = FUN_00409a18(param_2);
      iVar3 = uVar6 + 9;
      if (SCARRY4(uVar8,5)) {
        local_2c = (undefined1 *)0x6066f7;
        iVar5 = FUN_00405944();
        iVar3 = extraout_EDX;
      }
      if (iVar5 < iVar3) goto LAB_00606890;
      iVar3 = 4;
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) < 5)) {
        local_2c = (undefined1 *)0x606712;
        iVar3 = thunk_FUN_00404478();
      }
      local_2c = (undefined1 *)(uint)*(byte *)(param_2 + iVar3);
      local_30 = (undefined1 *)0x60672a;
      FUN_00409be0(&local_8,&DAT_004108f8,1);
      local_2c = (undefined1 *)0x0;
      iVar3 = 4;
      if ((param_2 == 0) || (*(uint *)(param_2 + -4) < 5)) {
        local_30 = (undefined1 *)0x606742;
        iVar3 = thunk_FUN_00404478();
      }
      local_30 = (undefined1 *)(uint)*(byte *)(param_2 + iVar3);
      local_34 = 0x606756;
      FUN_005e0648(param_2,5,&local_8);
      local_2c = (undefined1 *)0x606763;
      FUN_005e3190(local_8,0,&local_34);
      local_2c = (undefined1 *)0x60676e;
      FUN_00407eb8(0,local_34);
    }
    else {
      uVar8 = 0x14;
      local_2c = (undefined1 *)0x10;
      local_30 = (undefined1 *)0x60678a;
      FUN_00409be0(&local_8,&DAT_004108f8,1);
      local_2c = (undefined1 *)0x0;
      local_30 = (undefined1 *)0x10;
      local_34 = 0x6067a0;
      FUN_005e0648(param_2,5,&local_8);
      local_2c = (undefined1 *)0x6067ad;
      FUN_005e2fc4(local_8,&local_20,0);
      local_10 = 8;
      ppuVar7 = &local_20;
      do {
        local_2c = (undefined1 *)0x6067c6;
        uVar2 = (**(code **)(**(int **)PTR_DAT_007826d0 + 0x54))
                          (*(int **)PTR_DAT_007826d0,*(undefined2 *)ppuVar7);
        *(undefined2 *)ppuVar7 = uVar2;
        ppuVar7 = (undefined1 **)((int)ppuVar7 + 2);
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_2c = (undefined1 *)0x6067dc;
      FUN_005e1008(&local_20,&local_38);
      local_2c = (undefined1 *)0x6067e7;
      FUN_00407eb8(0,local_38);
    }
    if ((param_2 == 0) || (*(uint *)(param_2 + -4) <= uVar8)) {
      local_2c = (undefined1 *)0x6067f5;
      thunk_FUN_00404478();
    }
    iVar3 = (uint)*(byte *)(param_2 + uVar8) * 0x100;
    uVar6 = uVar8 + 1;
    if (SCARRY4(uVar8,1)) {
      local_2c = (undefined1 *)0x606813;
      iVar3 = FUN_00405944();
      uVar6 = extraout_EDX_00;
    }
    if ((param_2 == 0) || (*(uint *)(param_2 + -4) <= uVar6)) {
      local_2c = (undefined1 *)0x606821;
      iVar3 = thunk_FUN_00404478();
      uVar6 = extraout_EDX_01;
    }
    uVar4 = iVar3 + (uint)*(byte *)(param_2 + uVar6);
    if (SCARRY4(iVar3,(uint)*(byte *)(param_2 + uVar6))) {
      local_2c = (undefined1 *)0x60682e;
      uVar4 = FUN_00405944();
    }
    if (0xffff < uVar4) {
      local_2c = (undefined1 *)0x60683a;
      uVar4 = thunk_FUN_00404478();
    }
    *param_5 = (short)uVar4;
    iVar3 = uVar8 + 2;
    if (SCARRY4(uVar8,2)) {
      local_2c = (undefined1 *)0x60684a;
      FUN_00405944();
    }
    local_2c = (undefined1 *)0x606851;
    iVar5 = FUN_00409a18(param_2);
    local_2c = (undefined1 *)(iVar5 - iVar3);
    if (SBORROW4(iVar5,iVar3)) {
      local_2c = (undefined1 *)0x60685a;
      local_2c = (undefined1 *)FUN_00405944();
    }
    local_30 = (undefined1 *)0x60686e;
    FUN_00409be0(param_4,&DAT_004108f8,1);
    local_2c = (undefined1 *)0x0;
    local_30 = (undefined1 *)0x60687a;
    iVar5 = FUN_00409a18(param_2);
    local_30 = (undefined1 *)(iVar5 - iVar3);
    if (SBORROW4(iVar5,iVar3)) {
      local_30 = (undefined1 *)0x606883;
      local_30 = (undefined1 *)FUN_00405944();
    }
    local_34 = 0x606890;
    FUN_005e0648(param_2,iVar3,param_4);
  }
LAB_00606890:
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_006068c0;
  local_24 = (undefined1 *)0x6068aa;
  thunk_FUN_00406e80(&local_38,6,puVar1);
  local_24 = (undefined1 *)0x6068b8;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
