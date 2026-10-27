// rea decompile_all
// name: FUN_0054b710
// address: 0x54b710
// body: available
// range: 0x54b710-0x54bf80 inclusive
// range: 0x54bfb2-0x54bfcc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54b74a (push 0x54bfcd followed by fs-segment stack chaining); handler 0x54bfcd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54b77b (push 0x54bfab followed by fs-segment stack chaining); handler 0x54bfab lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54b7c4 (push 0x54bf81 followed by fs-segment stack chaining); handler 0x54bf81 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054b710(int *param_1,byte param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  BOOL BVar9;
  uint uVar10;
  int iVar11;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uStack_bc;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  tagRECT local_48;
  RECT local_38;
  RECT local_28;
  int local_14;
  int local_10;
  char local_a;
  byte local_9;
  int *local_8;

  puStack_8c = &stack0xfffffffc;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  puStack_90 = &LAB_0054bfcd;
  uStack_94 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_94;
  puStack_98 = (undefined1 *)0x54b755;
  local_a = param_3;
  local_9 = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x20))();
  puVar12 = puStack_8c;
  if (cVar1 != '\0') {
    *in_FS_OFFSET = uStack_94;
    puStack_8c = &LAB_0054bfd4;
    puStack_90 = (undefined1 *)0x54bfcc;
    thunk_FUN_00406e80(&local_7c,9,puVar12);
    return;
  }
  puStack_98 = (undefined1 *)0x54b765;
  FUN_0054d544(local_8);
  puStack_98 = (undefined1 *)0x54b770;
  FUN_0043bb30(local_8[0xe]);
  puStack_9c = &LAB_0054bfab;
  uStack_a0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  puStack_ac = (undefined1 *)0x0;
  puStack_b0 = local_58;
  puStack_b4 = (undefined1 *)0x54b793;
  puStack_98 = &stack0xfffffffc;
  FUN_00438c38(0,0,0);
  puStack_ac = local_58;
  puStack_b0 = (undefined1 *)0x54b7a4;
  FUN_0040b75c(&PTR_DAT_0053b450,&local_5c);
  puStack_b0 = (undefined1 *)local_5c;
  puStack_b4 = (undefined1 *)0x54b7b9;
  FUN_00405d08(local_8,local_8,0);
  puStack_b8 = &LAB_0054bf81;
  uStack_bc = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_bc;
  local_10 = 0;
  puStack_b4 = &stack0xfffffffc;
  local_14 = FUN_005415b8(local_8[0xb]);
  local_14 = local_14 * 6;
  if ((local_9 & 8) != 0) {
    iVar5 = FUN_0054ce78(local_8);
    if (0 < *(int *)(iVar5 + 8)) {
      piVar6 = (int *)FUN_0054ce78(local_8);
      (**(code **)(*piVar6 + 0x18))();
    }
    iVar5 = FUN_005415b8(local_8[0xb]);
    if (-1 < iVar5 + -1) {
      iVar11 = 0;
      do {
        local_10 = local_10 + 1;
        iVar7 = FUN_00548da8(local_8[0xb],iVar11);
        if (0 < *(int *)(*(int *)(iVar7 + 0x20) + 8)) {
          iVar7 = FUN_00548da8(local_8[0xb],iVar11);
          (**(code **)(**(int **)(iVar7 + 0x20) + 0x18))();
          iVar7 = MulDiv(local_10,100,local_14);
          uVar13 = 0;
          FUN_00438c38(0,0,0,local_58,0);
          puVar12 = local_58;
          FUN_0040b75c(&PTR_DAT_0053b450,&local_60);
          FUN_00405d08(local_8,local_8,1,local_60,puVar12,uVar13,iVar7);
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_9 & 4) == 0) {
    iVar5 = FUN_005415b8(local_8[0xb]);
    local_10 = local_10 + iVar5 * 2;
  }
  else {
    iVar5 = FUN_005415b8(local_8[0xb]);
    if (-1 < iVar5 + -1) {
      iVar11 = 0;
      do {
        local_10 = local_10 + 1;
        iVar7 = FUN_00548da8(local_8[0xb],iVar11);
        if (*(char *)(iVar7 + 0x34) != '\0') {
          iVar7 = FUN_00548da8(local_8[0xb],iVar11);
          uVar13 = *(undefined4 *)(iVar7 + 0x1c);
          iVar7 = FUN_00548da8(local_8[0xb],iVar11);
          uVar8 = FUN_00547e88(*(undefined4 *)(iVar7 + 0x38));
          iVar7 = FUN_00548da8(local_8[0xb],iVar11);
          cVar1 = FUN_0054b6f8(*(undefined4 *)(iVar7 + 0x18),uVar8,uVar13);
          if (cVar1 == '\0') {
            iVar7 = FUN_00548da8(local_8[0xb],iVar11);
            FUN_00547e38(*(undefined4 *)(iVar7 + 0x38),0);
            iVar7 = MulDiv(local_10,100,local_14);
            uVar13 = 0;
            FUN_00438c38(0,0,0,local_58,0);
            puVar12 = local_58;
            FUN_0040b75c(&PTR_DAT_0053b450,&local_64);
            FUN_00405d08(local_8,local_8,1,local_64,puVar12,uVar13,iVar7);
          }
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = FUN_005415b8(local_8[0xb]);
    if (-1 < iVar5 + -2) {
      iVar5 = iVar5 + -1;
      iVar11 = 0;
      do {
        local_10 = local_10 + 1;
        iVar7 = FUN_00548da8(local_8[0xb],iVar11);
        if (*(int *)(iVar7 + 0x38) != 0) {
          iVar7 = FUN_00548da8(local_8[0xb],iVar11);
          cVar1 = FUN_00547f34(*(undefined4 *)(iVar7 + 0x38));
          if (((byte)(cVar1 - 2U) < 2) &&
             (iVar7 = FUN_00548da8(local_8[0xb],iVar11 + 1), *(char *)(iVar7 + 0x34) == '\0')) {
            uVar13 = FUN_00548da8(local_8[0xb],iVar11);
            FUN_00545650(uVar13,&local_28);
            uVar13 = FUN_00548da8(local_8[0xb],iVar11 + 1);
            FUN_00545650(uVar13,&local_38);
            BVar9 = IntersectRect(&local_48,&local_28,&local_38);
            if (BVar9 != 0) {
              BVar9 = EqualRect(&local_48,&local_38);
              if (BVar9 != 0) {
                iVar7 = FUN_00548da8(local_8[0xb],iVar11);
                FUN_00547f44(*(undefined4 *)(iVar7 + 0x38),0);
              }
              iVar7 = MulDiv(local_10,100,local_14);
              uVar13 = 0;
              FUN_00438c38(0,0,0,local_58,0);
              puVar12 = local_58;
              FUN_0040b75c(&PTR_DAT_0053b450,&local_68);
              FUN_00405d08(local_8,local_8,1,local_68,puVar12,uVar13,iVar7);
            }
          }
        }
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_9 & 2) == 0) {
    iVar5 = FUN_005415b8(local_8[0xb]);
    local_10 = local_10 + iVar5;
  }
  else {
    iVar5 = FUN_005415b8(local_8[0xb]);
    iVar5 = iVar5 + -1;
    if (0 < iVar5) {
      do {
        local_10 = local_10 + 1;
        iVar11 = iVar5;
        do {
          iVar11 = iVar11 + -1;
          if ((iVar11 < 1) ||
             (iVar7 = FUN_00548da8(local_8[0xb],iVar11), *(int *)(iVar7 + 0x38) == 0)) break;
          iVar7 = FUN_00548da8(local_8[0xb],iVar11);
          cVar1 = FUN_00547f34(*(undefined4 *)(iVar7 + 0x38));
        } while (cVar1 == '\x03');
        uVar13 = FUN_00548da8(local_8[0xb],iVar11);
        uVar8 = FUN_00548da8(local_8[0xb],iVar5);
        FUN_0054754c(uVar8,uVar13);
        iVar11 = MulDiv(local_10,100,local_14);
        uVar13 = 0;
        FUN_00438c38(0,0,0,local_58,0);
        puVar12 = local_58;
        FUN_0040b75c(&PTR_DAT_0053b450,&local_6c);
        FUN_00405d08(local_8,local_8,1,local_6c,puVar12,uVar13,iVar11);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((local_9 & 1) == 0) {
    iVar5 = FUN_005415b8(local_8[0xb]);
    local_10 = local_10 + iVar5;
  }
  else {
    iVar5 = FUN_005415b8(local_8[0xb]);
    iVar5 = iVar5 + -1;
    if (-1 < iVar5) {
      do {
        local_10 = local_10 + 1;
        FUN_00548da8(local_8[0xb],iVar5);
        cVar1 = FUN_00544778();
        if ((cVar1 == '\0') &&
           (iVar11 = FUN_00548da8(local_8[0xb],iVar5), *(char *)(iVar11 + 0x34) != '\0')) {
          iVar11 = FUN_00548da8(local_8[0xb],iVar5);
          sVar3 = FUN_00547f0c(*(undefined4 *)(iVar11 + 0x38));
          FUN_00548da8(local_8[0xb],iVar5);
          FUN_005471ec();
          FUN_00548da8(local_8[0xb],iVar5);
          cVar1 = FUN_00544778();
          if (cVar1 != '\0') {
            if ((0 < iVar5) &&
               (iVar11 = FUN_00548da8(local_8[0xb],iVar5 + -1), *(char *)(iVar11 + 0x34) != '\0')) {
              iVar11 = FUN_00548da8(local_8[0xb],iVar5 + -1);
              sVar4 = FUN_00547f0c(*(undefined4 *)(iVar11 + 0x38));
              uVar10 = (uint)(ushort)(sVar4 + sVar3);
              iVar11 = FUN_00548da8(local_8[0xb],iVar5 + -1);
              FUN_00547f14(*(undefined4 *)(iVar11 + 0x38),uVar10);
            }
            FUN_005415e8(local_8[0xb],iVar5);
          }
          iVar11 = MulDiv(local_10,100,local_14);
          uVar13 = 0;
          FUN_00438c38(0,0,0,local_58,0);
          puVar12 = local_58;
          FUN_0040b75c(&PTR_DAT_0053b450,&local_70);
          FUN_00405d08(local_8,local_8,1,local_70,puVar12,uVar13,iVar11);
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
  }
  iVar5 = FUN_005415b8(local_8[0xb]);
  local_10 = local_10 + iVar5;
  if ((local_9 & 4) == 0) {
    if (((local_9 & 0x10) != 0) && (local_a == '\t')) {
      FUN_0040b75c(&PTR_DAT_0053b420,&local_78);
      FUN_0053b600(local_78);
    }
  }
  else {
    iVar5 = FUN_005415b8(local_8[0xb]);
    iVar5 = iVar5 + -1;
    if (-1 < iVar5) {
      do {
        iVar11 = FUN_00548da8(local_8[0xb],iVar5);
        iVar11 = FUN_005415b8(*(undefined4 *)(iVar11 + 0x30));
        iVar11 = iVar11 + -1;
        if (-1 < iVar11) {
          do {
            iVar7 = FUN_00548da8(local_8[0xb],iVar5);
            uVar13 = FUN_005444bc(*(undefined4 *)(iVar7 + 0x30),iVar11);
            cVar1 = FUN_00405c98(uVar13,&PTR_FUN_00538fb4);
            if (cVar1 == '\0') {
              iVar7 = FUN_00548da8(local_8[0xb],iVar5);
              uVar13 = FUN_005444bc(*(undefined4 *)(iVar7 + 0x30),iVar11);
              cVar1 = FUN_00405c98(uVar13,&PTR_FUN_00538bc0);
              if (cVar1 != '\0') goto LAB_0054bddc;
              iVar7 = FUN_00548da8(local_8[0xb],iVar5);
              uVar13 = FUN_005444bc(*(undefined4 *)(iVar7 + 0x30),iVar11);
              cVar1 = FUN_00405c98(uVar13,&PTR_FUN_00539798);
              if (cVar1 != '\0') goto LAB_0054bddc;
              iVar7 = FUN_00548da8(local_8[0xb],iVar5);
              uVar13 = FUN_005444bc(*(undefined4 *)(iVar7 + 0x30),iVar11);
              cVar1 = FUN_00405c98(uVar13,&PTR_FUN_00539934);
              if ((cVar1 != '\0') &&
                 ((0 < iVar5 || (iVar7 = FUN_005415b8(local_8[0xb]), iVar7 == 1))))
              goto LAB_0054bddc;
            }
            else {
LAB_0054bddc:
              iVar7 = FUN_00548da8(local_8[0xb],iVar5);
              FUN_005415e8(*(undefined4 *)(iVar7 + 0x30),iVar11);
            }
            iVar11 = iVar11 + -1;
          } while (iVar11 != -1);
        }
        iVar11 = FUN_00548da8(local_8[0xb],iVar5);
        if (*(int *)(iVar11 + 0x38) != 0) {
          iVar11 = FUN_00548da8(local_8[0xb],iVar5);
          uVar13 = *(undefined4 *)(iVar11 + 0x38);
          sVar3 = FUN_00547f0c(uVar13);
          if ((((sVar3 == 0) || (iVar11 = FUN_005415b8(local_8[0xb]), iVar11 == 1)) &&
              (cVar1 = FUN_00547e30(uVar13), cVar1 == '\0')) &&
             ((cVar1 = FUN_00547f1c(uVar13), cVar1 == '\0' &&
              ((bVar2 = FUN_00547f34(uVar13), bVar2 < 2 ||
               (iVar11 = FUN_005415b8(local_8[0xb]), iVar11 == 1)))))) {
            FUN_00405a7c(uVar13);
          }
        }
        FUN_00548da8(local_8[0xb],iVar5);
        cVar1 = FUN_00544778();
        if (cVar1 != '\0') {
          iVar11 = FUN_00548da8(local_8[0xb],iVar5);
          iVar11 = FUN_005415b8(*(undefined4 *)(iVar11 + 0x30));
          if (iVar11 == 0) {
            FUN_00548da8(local_8[0xb],iVar5);
            FUN_00405a7c();
          }
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
    iVar5 = MulDiv(local_10,100,local_14);
    uVar13 = 0;
    FUN_00438c38(0,0,0,local_58,0);
    puVar12 = local_58;
    FUN_0040b75c(&PTR_DAT_0053b450,&local_74);
    FUN_00405d08(local_8,local_8,1,local_74,puVar12,uVar13,iVar5);
  }
  puVar12 = puStack_b4;
  *in_FS_OFFSET = uStack_bc;
  puStack_b4 = &LAB_0054bf88;
  puStack_b8 = (undefined1 *)0x54bf39;
  iVar5 = FUN_004043a0(0,uStack_bc,puVar12);
  if (iVar5 == 0) {
    puStack_b8 = (undefined1 *)0x64;
  }
  else {
    puStack_b8 = (undefined1 *)0x0;
  }
  uStack_bc = 0;
  FUN_00438c38(0,0,0,local_58,0);
  puVar12 = local_58;
  FUN_0040b75c(&PTR_DAT_0053b450,&local_7c);
  FUN_00405d08(local_8,local_8,2,local_7c,puVar12);
  return;
}
