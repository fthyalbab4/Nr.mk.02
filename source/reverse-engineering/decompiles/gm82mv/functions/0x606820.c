// rea decompile_all
// name: FUN_00606820
// address: 0x606820
// body: available
// range: 0x606820-0x606cb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x606856 (push 0x606cb3 followed by fs-segment stack chaining); handler 0x606cb3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00606820(int param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *in_FS_OFFSET;
  undefined1 **local_4c;
  undefined4 local_48;
  undefined1 **local_44;
  undefined4 local_40;
  undefined1 **local_3c;
  undefined1 **local_38;
  wchar_t *local_34;
  undefined1 **local_30;
  undefined1 **local_2c;
  int local_28;
  int local_24;
  undefined4 uStack_20;
  undefined1 *local_1c;

  iVar9 = 9;
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  uStack_20 = (undefined1 *)CONCAT13(param_2,(undefined3)uStack_20);
  local_1c = (undefined1 *)0x606845;
  FUN_00408ff8(&local_1c,&DAT_00615f70);
  puVar1 = PTR_DAT_00688c44;
  uStack_20 = &LAB_00606cb3;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  *(undefined4 *)PTR_DAT_00688c4c = 0xffffffff;
  local_28 = 0x606869;
  local_1c = &stack0xfffffffc;
  FUN_005f6964();
  local_28 = 0x60686e;
  FUN_005fbfe8();
  local_28 = 0x606875;
  iVar9 = FUN_00409c34(*(undefined4 *)puVar1);
  if (iVar9 <= param_1) {
    local_28 = 0x606880;
    iVar9 = FUN_00409c34(*(undefined4 *)puVar1);
    local_28 = param_1 + 1;
    local_2c = (undefined1 **)0x606898;
    FUN_00409dfc(puVar1,&DAT_00571724,1);
    local_28 = 0x6068a2;
    iVar5 = FUN_00409c34(*(undefined4 *)puVar1);
    if (iVar9 <= iVar5 + -1) {
      local_24 = ((iVar5 + -1) - iVar9) + 1;
      do {
        *(undefined4 *)(*(int *)puVar1 + iVar9 * 4) = 0;
        iVar9 = iVar9 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  *(int *)PTR_DAT_00688964 = param_1;
  puVar2 = PTR_DAT_0068939c;
  *(undefined4 *)PTR_DAT_0068939c = *(undefined4 *)(*(int *)puVar1 + param_1 * 4);
  uStack_20._0_3_ = CONCAT12(*(int *)PTR_DAT_0068939c != 0,(undefined2)uStack_20);
  if (*(int *)PTR_DAT_0068939c == 0) {
    local_28 = 0x6068ea;
    uVar6 = FUN_00609404(&DAT_006082a8,CONCAT31((int3)((uint)puVar2 >> 8),1));
    *(undefined4 *)(*(int *)puVar1 + param_1 * 4) = uVar6;
    local_28 = 0x6068f8;
    uVar7 = FUN_0057133c(param_1);
    local_28 = 0x606901;
    FUN_00609654(uVar6,uVar7);
    *(undefined4 *)PTR_DAT_0068939c = *(undefined4 *)(*(int *)puVar1 + param_1 * 4);
  }
  local_28 = 0x606913;
  FUN_0058f93c();
  if (uStack_20._3_1_ != '\0') {
    local_28 = 0x606920;
    FUN_00561fe8(1);
  }
  if (-1 < DAT_00688660 + -1) {
    local_24 = DAT_00688660;
    iVar9 = 0;
    do {
      iVar5 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
      if (-1 < iVar5 + -1) {
        iVar10 = 0;
        do {
          local_28 = 0x606954;
          iVar8 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar10);
          if (*(int *)(iVar8 + 4) == *(int *)(*(int *)(DAT_00850eb0 + iVar9 * 4) + 4)) {
            local_28 = 0x606973;
            iVar8 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar10);
            *(undefined1 *)(iVar8 + 0x108) = 1;
          }
          iVar10 = iVar10 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar5 = *(int *)(DAT_00850eb0 + iVar9 * 4);
      local_28 = *(int *)(iVar5 + 0x54);
      local_2c = *(undefined1 ***)(iVar5 + 0x50);
      local_30 = *(undefined1 ***)(iVar5 + 0x5c);
      local_34 = *(wchar_t **)(iVar5 + 0x58);
      local_38 = (undefined1 **)0x6069a4;
      uVar6 = FUN_0060a934(*(undefined4 *)PTR_DAT_0068939c,*(undefined4 *)(iVar5 + 0xcc));
      local_28 = 0x6069b5;
      FUN_0060d4e0(uVar6,*(undefined4 *)(DAT_00850eb0 + iVar9 * 4));
      local_28 = 0x6069c2;
      FUN_00405fdc(*(undefined4 *)(DAT_00850eb0 + iVar9 * 4));
      iVar9 = iVar9 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  if ((uStack_20._2_1_ == '\0') &&
     (iVar9 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68) - DAT_00688660, -1 < iVar9 + -1)) {
    iVar5 = 0;
    local_24 = iVar9;
    do {
      local_28 = 0x606a03;
      iVar9 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar5);
      if ((iVar9 != 0) && (*(char *)(iVar9 + 0x108) == '\0')) {
        if (*PTR_PTR_00689304 != '\0') {
          local_28 = 0;
          local_2c = (undefined1 **)0x0;
          local_30 = (undefined1 **)0x606a37;
          FUN_0058a684(iVar9,iVar9,*(undefined4 *)(iVar9 + 0xcc));
        }
        if (*(int *)(iVar9 + 0x16c) != 0) {
          local_24 = 0;
          local_2c = (undefined1 **)0x606a58;
          uVar6 = FUN_00616588(&DAT_006160fc,1,*(undefined4 *)(iVar9 + 0x16c));
          local_2c = (undefined1 **)0x606a61;
          cVar4 = FUN_00616664(uVar6);
          if (cVar4 == '\0') {
            local_2c = (undefined1 **)0x606cd0;
            local_30 = (undefined1 **)0x606a75;
            FUN_0041636c(*(undefined4 *)(iVar9 + 4),&local_2c);
            local_30 = local_2c;
            local_34 = L" in room ";
            local_38 = (undefined1 **)0x606a8c;
            FUN_00571260(*(undefined4 *)PTR_DAT_00688964,&local_30);
            local_38 = local_30;
            local_3c = (undefined1 **)&DAT_00606d60;
            local_24 = *(int *)PTR_DAT_00689674;
            local_44 = (undefined1 **)0x606aa8;
            FUN_0040875c(&local_28,6);
            local_44 = (undefined1 **)0x606ab2;
            FUN_006113b0(local_28,0);
          }
          else {
            local_2c = &local_1c;
            local_30 = (undefined1 **)0x606ac3;
            cVar4 = FUN_0058869c(iVar9,iVar9,uVar6);
            if (cVar4 == '\0') {
              local_2c = (undefined1 **)0x606d70;
              local_30 = (undefined1 **)0x606ad7;
              FUN_0041636c(*(undefined4 *)(iVar9 + 4),&local_38);
              local_30 = local_38;
              local_34 = L" in room ";
              local_38 = (undefined1 **)0x606aee;
              FUN_00571260(*(undefined4 *)PTR_DAT_00688964,&local_3c);
              local_38 = local_3c;
              local_3c = (undefined1 **)&DAT_00606d60;
              local_24 = *(int *)PTR_DAT_00689674;
              local_44 = (undefined1 **)0x606b0a;
              FUN_0040875c(&local_34,6);
              local_44 = (undefined1 **)0x606b14;
              FUN_006113b0(local_34,0);
            }
          }
          local_28 = 0x606b1b;
          FUN_00405fdc(uVar6);
        }
        if (*PTR_PTR_00689304 == '\0') {
          local_28 = 0;
          local_2c = (undefined1 **)0x0;
          local_30 = (undefined1 **)0x606b38;
          FUN_0058a684(iVar9,iVar9,*(undefined4 *)(iVar9 + 0xcc));
        }
      }
      iVar5 = iVar5 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  DAT_00688660 = 0;
  if (uStack_20._3_1_ != '\0') {
    local_28 = 0x606b5e;
    FUN_0058a760(7,2);
  }
  if ((uStack_20._2_1_ == '\0') && (*(int *)(*(int *)PTR_DAT_0068939c + 100) != 0)) {
    local_28 = 0;
    local_2c = (undefined1 **)0x606b91;
    uVar6 = FUN_00616588(&DAT_006160fc,1,*(undefined4 *)(*(int *)PTR_DAT_0068939c + 100));
    local_2c = (undefined1 **)0x606b9a;
    cVar4 = FUN_00616664(uVar6);
    if (cVar4 == '\0') {
      local_2c = (undefined1 **)0x606ddc;
      local_30 = (undefined1 **)0x606bb2;
      FUN_00571260(*(undefined4 *)PTR_DAT_00688964,&local_44);
      local_30 = local_44;
      local_34 = L"\r";
      local_38 = *(undefined1 ***)PTR_DAT_00689674;
      local_3c = (undefined1 **)0x606bce;
      FUN_0040875c(&local_40,4);
      local_3c = (undefined1 **)0x606bd8;
      FUN_006113b0(local_40,0);
    }
    else {
      local_2c = (undefined1 **)0x0;
      local_30 = (undefined1 **)0x0;
      local_34 = (wchar_t *)0x0;
      local_38 = (undefined1 **)0x0;
      local_3c = (undefined1 **)0x0;
      local_40 = 0x606bf2;
      uVar7 = FUN_0060d2cc(&DAT_0060b63c,1,0);
      local_2c = &local_1c;
      local_30 = (undefined1 **)0x606c03;
      cVar4 = FUN_0058869c(uVar7,uVar7,uVar6);
      if (cVar4 == '\0') {
        local_2c = (undefined1 **)0x606e40;
        local_30 = (undefined1 **)0x606c1b;
        FUN_00571260(*(undefined4 *)PTR_DAT_00688964,&local_4c);
        local_30 = local_4c;
        local_34 = L"\r";
        local_38 = *(undefined1 ***)PTR_DAT_00689674;
        local_3c = (undefined1 **)0x606c37;
        FUN_0040875c(&local_48,4);
        local_3c = (undefined1 **)0x606c41;
        FUN_006113b0(local_48,0);
      }
      local_28 = 0x606c48;
      FUN_00405fdc(uVar7);
    }
    local_28 = 0x606c4f;
    FUN_00405fdc(uVar6);
  }
  local_28 = 0x606c5e;
  FUN_0058a760(7,4);
  if ((*(int *)PTR_DAT_00688c4c == -1) && (*PTR_DAT_006891d0 != '\0')) {
    local_28 = 0x606c77;
    FUN_0058f9f8();
    local_28 = 0x606c7c;
    FUN_005f9784();
    local_28 = 0x606c81;
    FUN_0061ff3c();
    *(undefined4 *)PTR_DAT_006889c0 = 0;
  }
  puVar3 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00606cba;
  uStack_20 = (undefined1 *)0x606ca4;
  thunk_FUN_004072fc(&local_4c,10,puVar3);
  uStack_20 = (undefined1 *)0x606cb2;
  FUN_004090d0(&local_1c,&DAT_00615f70);
  return;
}
