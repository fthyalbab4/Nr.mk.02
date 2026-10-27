// rea decompile_all
// name: FUN_005dae2c
// address: 0x5dae2c
// body: available
// range: 0x5dae2c-0x5db358 inclusive
// range: 0x5db392-0x5db660 inclusive
// range: 0x5db668-0x5db750 inclusive
// range: 0x5db75e-0x5db7b3 inclusive
// range: 0x5db7bb-0x5db825 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5dae60 (push 0x5db826 followed by fs-segment stack chaining); handler 0x5db826 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5daeb4 (push 0x5db7b4 followed by fs-segment stack chaining); handler 0x5db7b4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5db5db (push 0x5db751 followed by fs-segment stack chaining); handler 0x5db751 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5db607 (push 0x5db661 followed by fs-segment stack chaining); handler 0x5db661 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dae2c(int *param_1,int *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined3 uVar7;
  int *piVar8;
  uint *in_FS_OFFSET;
  byte bVar9;
  wchar_t *apwStackY_1824 [1484];
  uint uVar10;
  uint uVar11;
  uint uStack_d8;
  undefined1 *puStack_d4;
  int *piStack_d0;
  uint uStack_cc;
  int *piStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int *piStack_b8;
  uint uStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  uint uStack_90;
  undefined1 *puStack_8c;
  undefined1 *puStack_88;
  undefined4 local_78;
  int local_74;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  int *local_64;
  int local_60;
  int local_5c;
  wchar_t *local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined1 local_3c;
  int *local_38;
  code *local_34;
  int *local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort local_16;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;

  bVar9 = 0;
  puStack_88 = &stack0xfffffffc;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_6c = 0;
  local_50 = 0;
  local_4c = 0;
  local_8 = 0;
  local_c = 0;
  puStack_8c = &LAB_005db826;
  uStack_90 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_90;
  puStack_94 = (undefined1 *)0x5dae6d;
  local_14 = param_2;
  local_10 = param_1;
  FUN_0046410c(param_1,0);
  local_34 = (code *)0x0;
  local_30 = (int *)0x0;
  puStack_94 = (undefined1 *)0x5dae7f;
  iVar4 = FUN_0043c834(local_14);
  local_10[0x2b] = iVar4;
  puStack_94 = (undefined1 *)0x5dae98;
  cVar3 = (**(code **)(*local_10 + 0x84))(local_10,local_14,0);
  if (cVar3 == '\0') {
    puStack_94 = (undefined1 *)0x5db7c8;
    FUN_0040b9d0(PTR_LAB_00688df8,&local_78);
    local_58 = L"TIF/TIFF";
    local_54 = 0x11;
    puStack_94 = (undefined1 *)0x5db7e3;
    FUN_005d8ba0(local_78,&local_58,0);
  }
  else {
    local_38 = local_10 + 0x11;
    puStack_98 = &LAB_005db7b4;
    uStack_9c = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_9c;
    if ((*(byte *)(local_10 + 0x12) & 1) == 0) {
      uStack_a0 = 1;
      piStack_a4 = &local_48;
      piStack_a8 = (int *)0x5daedb;
      puStack_94 = &stack0xfffffffc;
      FUN_00436ad0(0,0,0);
      piVar8 = local_10 + (uint)bVar9 * -2 + 0x2e;
      local_10[0x2d] = local_48;
      *piVar8 = *(int *)(local_44 + (uint)bVar9 * -8);
      piVar8[(uint)bVar9 * -2 + 1] = (int)(&local_40)[(uint)bVar9 * -2 + (uint)bVar9 * -2];
      (piVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           (int)(&local_40 + (uint)bVar9 * -2 + (uint)bVar9 * -2)[(uint)bVar9 * -2 + 1];
      uStack_a0 = 0;
      piStack_a4 = (int *)0x0;
      piStack_a8 = local_10 + 0x2d;
      uStack_ac = 0x5daf05;
      FUN_0040b9d0(PTR_LAB_00688b34,&local_4c);
      uStack_ac = local_4c;
      piStack_b0 = (int *)0x5daf1a;
      FUN_00406268(local_10,local_10,0);
      uStack_b4 = local_10[0x2b] + local_38[10];
      piStack_b0 = (int *)0x0;
      piStack_b8 = (int *)0x5daf35;
      FUN_0043c854(local_14);
      piStack_b0 = (int *)0x5daf45;
      FUN_0043ca88(local_14,&local_16,2);
      if ((*(byte *)(local_38 + 1) & 2) != 0) {
        local_16 = CONCAT11((char)local_16,(char)(local_16 >> 8));
      }
      piStack_b0 = (int *)(uint)local_16;
      uStack_b4 = 0x5daf75;
      FUN_00409dfc(local_10 + 0x32,&DAT_005d6914,1);
      piStack_b0 = (int *)0x5daf96;
      FUN_0043ca88(local_14,local_10[0x32],(uint)local_16 * 0xc);
      if ((*(byte *)(local_38 + 1) & 2) != 0) {
        piStack_b0 = (int *)0x5dafa7;
        FUN_005dad74(local_10);
      }
      piStack_b0 = (int *)0x5dafaf;
      FUN_005dad50(local_10);
      piStack_b0 = &local_8;
      uStack_b4 = 0x5dafc3;
      FUN_005da328(local_10,local_14,0x111);
      piStack_b0 = &local_c;
      uStack_b4 = 0x5dafd7;
      FUN_005da328(local_10,local_14,0x117);
      if ((*(byte *)(local_38 + 1) & 1) != 0) {
        piStack_b0 = &local_8;
        uStack_b4 = 0x5daff4;
        FUN_005da328(local_10,local_14,0x144);
        piStack_b0 = &local_c;
        uStack_b4 = 0x5db008;
        FUN_005da328(local_10,local_14,0x145);
      }
      iVar4 = local_10[0x10];
      if ((*(byte *)(local_38 + 1) & 2) == 0) {
        *(undefined1 *)(iVar4 + 0x140) = 0;
      }
      else {
        *(undefined1 *)(iVar4 + 0x140) = 4;
      }
      piStack_b0 = (int *)0x5db041;
      FUN_005d4f74(iVar4,*(undefined1 *)((int)local_38 + 0x11));
      if (*(char *)(iVar4 + 5) == '\x10') {
        piStack_b0 = (int *)0x5db052;
        FUN_005d5058(iVar4,8);
      }
      else {
        piStack_b0 = (int *)0x5db05d;
        FUN_005d5058(iVar4,*(char *)(iVar4 + 5));
      }
      if ((byte)((char)local_38[5] - 10U) < 2) {
        piStack_b0 = (int *)0x5db073;
        FUN_005d4fdc(iVar4,6);
      }
      else {
        piStack_b0 = (int *)0x5db083;
        FUN_005d4fdc(iVar4,(char)local_38[4]);
      }
      cVar3 = *(char *)(iVar4 + 0x134);
      if (cVar3 == '\x01') {
        if (*(char *)((int)local_38 + 0x25) != '\0') {
          piStack_b0 = (int *)0x5db0d6;
          FUN_005d4fdc(iVar4,3);
        }
        piStack_b0 = (int *)0x5db0df;
        FUN_005d50c0(iVar4,1);
      }
      else if (cVar3 == '\x04') {
        piStack_b0 = (int *)0x5db0b7;
        FUN_005d50c0(iVar4,6);
      }
      else if (cVar3 == '\x05') {
        piStack_b0 = (int *)0x5db0ac;
        FUN_005d50c0(iVar4,7);
      }
      else if ((byte)(cVar3 - 8U) < 4) {
        piStack_b0 = (int *)0x5db0c2;
        FUN_005d50c0(iVar4,6);
      }
      else {
        piStack_b0 = (int *)0x5db0ea;
        FUN_005d50c0(iVar4,cVar3);
      }
      piStack_b0 = (int *)0x5db0f8;
      FUN_005d4ff0(iVar4,*(undefined1 *)((int)local_38 + 0x12));
      if (*(char *)(iVar4 + 0x134) == '\t') {
        piStack_b0 = (int *)0x5db10a;
        FUN_005d50d4(iVar4,3);
      }
      else {
        piStack_b0 = (int *)0x5db11a;
        FUN_005d50d4(iVar4,*(undefined1 *)((int)local_38 + 0x12));
      }
      if (*(char *)(iVar4 + 0x134) == '\n') {
        *(byte *)(iVar4 + 0x140) = *(byte *)(iVar4 + 0x140) | 8;
      }
      if (*(char *)(iVar4 + 0x134) == '\x03') {
        piStack_b0 = (int *)0x5db149;
        FUN_00464480(local_10,3);
      }
      else {
        piStack_b0 = (int *)0x5db157;
        uVar5 = FUN_005d4b64(iVar4,1);
        piStack_b0 = (int *)0x5db161;
        FUN_00464480(local_10,uVar5);
      }
      piStack_b0 = (int *)0x5db16f;
      (**(code **)(*local_10 + 0x44))(local_10,local_38[2]);
      piStack_b0 = (int *)0x5db17d;
      (**(code **)(*local_10 + 0x38))(local_10,local_38[3]);
      if ((local_38[2] == 0) || (local_38[3] == 0)) {
        piStack_b0 = (int *)0x5db19c;
        FUN_0040b9d0(PTR_LAB_00688df8,&local_50);
        local_58 = L"TIF/TIFF";
        local_54 = 0x11;
        piStack_b0 = (int *)0x5db1b7;
        FUN_005d8ba0(local_50,&local_58,0);
      }
      local_10[0x2f] = local_38[2];
      iVar4 = local_10[0x10];
      iVar6 = *(byte *)(iVar4 + 0x135) - 1;
      bVar9 = (byte)iVar6;
      uVar7 = (undefined3)((uint)iVar6 >> 8);
      if (bVar9 < 3) {
        if (*(byte *)(iVar4 + 0x135) == 1) {
          piStack_b0 = (int *)0x0;
          uStack_b4 = 0x5db1f9;
          iVar4 = FUN_005dab94(local_10,0x140,&local_2c);
          if (local_2c != 0) {
            uStack_b4 = local_10[0x2b] + iVar4;
            piStack_b0 = (int *)0x0;
            piStack_b8 = (int *)0x5db21c;
            FUN_0043c854(local_14);
            piStack_b0 = (int *)0x5db232;
            FUN_0043ca88(local_14,local_10 + 0x33,local_2c * 2);
            piStack_b0 = (int *)0x6;
            uStack_b4 = local_2c;
            piStack_b8 = (int *)0x0;
            local_64 = local_10 + 0x33;
            local_60 = (int)local_10 + (local_2c / 3) * 2 + 0xcc;
            local_5c = (int)local_10 + ((local_2c * 2) / 3) * 2 + 0xcc;
            uStack_bc = 0x5db28c;
            uVar5 = FUN_005d51e0(local_10[0x10],&local_64,2);
            piStack_b0 = (int *)0x5db296;
            (**(code **)(*local_10 + 0x3c))(local_10,uVar5);
          }
        }
        else {
          piStack_b0 = (int *)0x5db2a9;
          uVar5 = FUN_005d5708(iVar4,CONCAT31(uVar7,(*(byte *)(local_38 + 1) & 4) != 0));
          piStack_b0 = (int *)0x5db2b3;
          (**(code **)(*local_10 + 0x3c))(local_10,uVar5);
        }
      }
      else if (*(char *)(iVar4 + 0x134) == '\v') {
        piStack_b0 = (int *)(uint)*(byte *)local_38[0x11];
        uStack_b4 = (uint)*(byte *)(local_38[0x11] + 1);
        iVar6 = local_10[0x1be];
        piStack_b8 = (int *)0x5db2e3;
        uVar5 = FUN_00409c3c(iVar6,CONCAT31(uVar7,bVar9 - 3));
        piStack_b8 = (int *)0x5db2ee;
        FUN_005d595c(iVar4,iVar6,uVar5);
      }
      local_38[0xf] = (uint)*(byte *)((int)local_38 + 0x13) * local_38[2] + 7 >> 3;
      if ((*(byte *)(local_38 + 5) != 1) && (local_38[0x17] == 2)) {
        if (*(char *)((int)local_38 + 0x12) == '\x03') {
          local_34 = (code *)&LAB_005d8d94;
        }
        else if (*(char *)((int)local_38 + 0x12) == '\x04') {
          local_34 = FUN_005d8da4;
        }
        else {
          local_34 = (code *)&LAB_005d8d88;
        }
      }
      uVar7 = (undefined3)((uint)local_38 >> 8);
      switch(*(byte *)(local_38 + 5) & 0x7f) {
      default:
        piStack_b0 = (int *)0x5db49f;
        FUN_0040b9d0(PTR_LAB_00689670,&local_68);
        local_48 = local_68;
        local_44[0] = 0x11;
        local_40 = L"TIF/TIFF";
        local_3c = 0x11;
        piStack_b0 = &local_48;
        uStack_b4 = 0x5db4c6;
        FUN_0040b9d0(PTR_LAB_00688854,&local_6c);
        piVar8 = piStack_b0;
        piStack_b0 = (int *)0x5db4d4;
        FUN_005d8ba0(local_6c,piVar8,1);
        break;
      case 1:
        break;
      case 3:
        piStack_b0 = (int *)0x5db3b2;
        local_30 = (int *)FUN_00405fac(&PTR_FUN_005e58a4,1);
        break;
      case 4:
        piStack_b0 = (int *)0x5db39e;
        local_30 = (int *)FUN_00405fac(&PTR_FUN_005e5700,1);
        break;
      case 5:
        piStack_b0 = (int *)CONCAT31(uVar7,(*(byte *)(local_38 + 1) & 8) != 0);
        uStack_b4 = 0;
        piStack_b8 = (int *)local_38[2];
        uStack_bc = 0x5db41f;
        uVar5 = FUN_005dab08(local_10,0x124,0);
        uStack_bc = 0x5db42d;
        local_30 = (int *)FUN_005e8314(&PTR_FUN_005e6800,1,uVar5);
        break;
      case 6:
      case 8:
        piStack_b0 = (int *)CONCAT31(uVar7,(*(byte *)(local_38 + 1) & 8) != 0);
        uStack_b4 = CONCAT31(uVar7,(char)local_38[5] == '\b');
        piStack_b8 = (int *)local_38[2];
        uStack_bc = 0x5db3e6;
        uVar5 = FUN_005dab08(local_10,0x124,0);
        uStack_bc = 0x5db3f4;
        local_30 = (int *)FUN_005e8314(&PTR_LAB_005e69a8,1,uVar5);
        break;
      case 9:
        piStack_b0 = (int *)0x1;
        uStack_b4 = 0x5db48d;
        local_30 = (int *)FUN_005e8abc(&PTR_FUN_005e6b4c,1,1);
        break;
      case 10:
        piStack_b0 = local_38 + 0x12;
        uStack_b4 = 0x5db44c;
        FUN_005da094(local_10,local_14,0x15b);
        piStack_b0 = (int *)0x5db45e;
        local_30 = (int *)FUN_005e8e00(&PTR_FUN_005e7084,1,local_10 + 0x11);
        break;
      case 0xc:
        piStack_b0 = (int *)0x5db475;
        local_30 = (int *)FUN_005e9274(&PTR_LAB_005e7308,1,local_38[2]);
      }
      if (local_30 != (int *)0x0) {
        piStack_b0 = (int *)0x5db4e2;
        (**(code **)(*local_30 + 8))();
      }
      piStack_b0 = (int *)0x0;
      uStack_b4 = 0;
      piStack_b8 = local_10 + 0x2d;
      uStack_bc = 0;
      uStack_c0 = 0x5db502;
      FUN_00406268(local_10,local_10,2);
      uStack_c0 = 0;
      uStack_c4 = 0;
      piStack_c8 = local_10 + 0x2d;
      uStack_cc = 0x5db51c;
      FUN_0040b9d0(PTR_LAB_0068914c,&local_70);
      uStack_cc = local_70;
      piStack_d0 = (int *)0x5db531;
      FUN_00406268(local_10,local_10,0);
      local_38[0xc] = 0;
      local_38[0x15] = 0;
      piStack_d0 = (int *)0x5db549;
      iVar4 = FUN_00409c34(local_8);
      local_38[0x16] = iVar4;
      if (local_38[0x15] < local_38[0x16]) {
        puStack_d4 = (undefined1 *)(*(int *)(local_8 + local_38[0x15] * 4) + local_10[0x2b]);
        piStack_d0 = (int *)0x0;
        uStack_d8 = 0x5db575;
        FUN_0043c854(local_14);
        piStack_d0 = (int *)0x5db580;
        iVar4 = FUN_00409c34(local_38[0x10]);
        if (local_38[0x15] < iVar4) {
          lVar1 = (longlong)*(int *)(local_38[0x10] + local_38[0x15] * 4) * (longlong)local_38[0xf];
        }
        else {
          piStack_d0 = (int *)0x5db5ad;
          iVar4 = FUN_00409c3c(local_38[0x10]);
          lVar1 = (longlong)*(int *)(local_38[0x10] + iVar4 * 4) * (longlong)local_38[0xf];
        }
        local_2c = (uint)lVar1;
        piStack_d0 = (int *)0x5db5c7;
        local_20 = FUN_00404324(local_2c,(int)((ulonglong)lVar1 >> 0x20));
        puStack_d4 = &LAB_005db751;
        uStack_d8 = *in_FS_OFFSET;
        *in_FS_OFFSET = (uint)&uStack_d8;
        local_1c = local_20;
        if (local_30 != (int *)0x0) {
          piStack_d0 = (int *)&stack0xfffffffc;
          local_28 = FUN_00404324(*(undefined4 *)(local_c + local_38[0x15] * 4));
          uVar11 = *in_FS_OFFSET;
          *in_FS_OFFSET = (uint)&stack0xffffff1c;
          local_24 = local_28;
          (**(code **)(*local_14 + 0xc))
                    (local_14,local_28,*(undefined4 *)(local_c + local_38[0x15] * 4));
          uVar10 = local_2c;
          (**(code **)*local_30)
                    (local_30,&local_28,&local_20,local_2c,
                     *(undefined4 *)(local_c + local_38[0x15] * 4));
          *in_FS_OFFSET = uVar10;
          if (local_24 != 0) {
            FUN_00404340(local_24,uVar10,uVar11);
          }
          return;
        }
        piStack_d0 = (int *)&stack0xfffffffc;
        (**(code **)(*local_14 + 0xc))(local_14,local_20,local_2c);
        local_20 = local_1c;
        while ((piVar8 = piStack_d0, (uint)local_38[0xc] < (uint)local_38[3] &&
               (local_20 - local_1c < (int)local_2c))) {
          FUN_004632a8(local_10,local_38[0xc]);
          if (local_34 != (code *)0x0) {
            (*local_34)(local_20,local_38[2] + -1);
          }
          local_74 = local_20;
          FUN_005d513c(local_10[0x10],&local_74,0);
          local_20 = local_20 + local_38[0xf];
          local_38[0xc] = local_38[0xc] + 1;
          iVar4 = MulDiv(local_38[0xc],100,local_38[3]);
          FUN_00406268(local_10,local_10,1,0,local_10 + 0x2d,1,iVar4);
          OffsetRect((LPRECT)(local_10 + 0x2d),0,1);
        }
        *in_FS_OFFSET = uStack_d8;
        piStack_d0 = (int *)&DAT_005db758;
        if (local_1c != 0) {
          puStack_d4 = (undefined1 *)0x5db750;
          FUN_00404340(local_1c,uStack_d8,piVar8);
        }
        return;
      }
      *in_FS_OFFSET = uStack_cc;
      uStack_c4 = 0x5db7e3;
      piStack_c8 = (int *)0x0;
      uStack_cc = 0;
      piStack_d0 = local_10 + 0x2d;
      puStack_d4 = (undefined1 *)0x0;
      uStack_d8 = 0x5db79d;
      FUN_00406268(local_10,local_10,2);
      if (local_30 != (int *)0x0) {
        uStack_d8 = 0x5db7ab;
        (**(code **)(*local_30 + 4))();
      }
      uStack_d8 = 0x5db7b3;
      FUN_00405fdc(local_30);
      return;
    }
    uStack_a0 = 0x5daec5;
    puStack_94 = &stack0xfffffffc;
    FUN_00406ba8();
  }
  puVar2 = puStack_88;
  *in_FS_OFFSET = uStack_90;
  puStack_88 = &LAB_005db82d;
  puStack_8c = (undefined1 *)0x5db7f8;
  thunk_FUN_004072d8(&local_78,uStack_90,puVar2);
  puStack_8c = (undefined1 *)0x5db805;
  thunk_FUN_004072fc(&local_70,3);
  puStack_8c = (undefined1 *)0x5db812;
  thunk_FUN_004072fc(&local_50,2);
  puStack_8c = (undefined1 *)0x5db825;
  FUN_00409120(&local_c,&DAT_005d5a50,2);
  return;
}
