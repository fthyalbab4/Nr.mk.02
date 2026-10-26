// rea decompile_all
// name: FUN_005e109c
// address: 0x5e109c
// body: available
// range: 0x5e109c-0x5e1633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e10be (push 0x5e1634 followed by fs-segment stack chaining); handler 0x5e1634 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e109c(undefined4 param_1,int *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *in_FS_OFFSET;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48 [2];
  undefined *local_40;
  int local_3c [4];
  int *piStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  uint local_10;
  uint local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  iVar6 = 0x10;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_24 = &LAB_005e1634;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  piStack_2c = (int *)0x5e10ca;
  FUN_00407eb8(param_2,0);
  piStack_2c = (int *)0x5e10d4;
  FUN_00407f0c(&local_8,param_1);
  piStack_2c = (int *)0x5e10dc;
  FUN_00407058(&local_8);
  piStack_2c = (int *)0x5e10e1;
  iVar6 = FUN_00408238();
  if (iVar6 != 0) {
    piStack_2c = (int *)0x5e10f6;
    cVar3 = FUN_005e3958(local_8,&DAT_005e1650);
    if (cVar3 != '\0') {
      piStack_2c = (int *)0x5e110a;
      FUN_0040839c(&local_8,&DAT_005e1660,local_8);
    }
    piStack_2c = (int *)0x5e1117;
    cVar3 = FUN_005e3a04(local_8,&DAT_005e1650);
    if (cVar3 != '\0') {
      piStack_2c = (int *)0x5e1128;
      FUN_004082dc(&local_8,&DAT_005e1660);
    }
    local_c = 0;
    local_10 = 0;
    piStack_2c = (int *)0x5e113a;
    FUN_00407058(&local_8);
    piStack_2c = (int *)0x5e113f;
    iVar6 = FUN_00408238();
    if (0 < iVar6) {
      iVar7 = 1;
      do {
        if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) <= iVar7 - 1U)) {
          piStack_2c = (int *)0x5e1161;
          iVar4 = thunk_FUN_00404478();
        }
        uVar5 = (uint)*(ushort *)(iVar4 + -2 + iVar7 * 2);
        if (uVar5 < 0x3b) {
          if (uVar5 == 0x3a) {
            uVar5 = local_10 + 1;
            if (7 < (int)uVar5) goto LAB_005e160e;
            if (7 < local_10) {
              piStack_2c = (int *)0x5e11d2;
              local_10 = thunk_FUN_00404478();
            }
            local_3c[local_10 + 1] = iVar7;
            local_10 = uVar5;
          }
          else if (uVar5 == 0x2e) {
            uVar5 = local_c + 1;
            if (3 < (int)uVar5) goto LAB_005e160e;
            if (2 < local_c) {
              piStack_2c = (int *)0x5e11b0;
              local_c = thunk_FUN_00404478();
            }
            local_48[local_c + 1] = iVar7;
            local_c = uVar5;
          }
          else if (9 < uVar5 - 0x30) goto LAB_005e160e;
        }
        else if (((5 < uVar5 - 0x41) && (5 < uVar5 - 0x61)) || (0 < (int)local_c))
        goto LAB_005e160e;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if ((local_c == 0) || (local_c == 3)) {
      if (local_c == 3) {
        if (4 < local_10 - 2) goto LAB_005e160e;
        uVar5 = local_10 - 1;
        if (7 < uVar5) {
          piStack_2c = (int *)0x5e1220;
          uVar5 = thunk_FUN_00404478();
        }
        if (local_48[1] < local_3c[uVar5 + 1]) goto LAB_005e160e;
      }
      else if (5 < local_10 - 2) goto LAB_005e160e;
      piStack_2c = &local_4c;
      local_3c[3] = 0x5e1254;
      FUN_004086a8(local_8,1,local_3c[1] + -1);
      local_3c[3] = 0x5e1264;
      FUN_0040839c(local_48,&DAT_005e1670,local_4c);
      local_3c[3] = 0x5e126f;
      iVar6 = FUN_005e2640(local_48[0],0xffffffff);
      if ((-1 < iVar6) && (iVar6 < 0x10000)) {
        local_3c[3] = 0x5e1294;
        FUN_004168d8(iVar6,1,&local_50);
        local_3c[3] = 0x5e12a3;
        FUN_0040839c(param_2,local_50,&DAT_005e1650);
        bVar1 = false;
        if (1 < (int)local_10) {
          iVar6 = local_10 - 1;
          iVar7 = 2;
          do {
            uVar5 = iVar7 - 2;
            if (7 < uVar5) {
              local_3c[3] = 0x5e12ca;
              uVar5 = thunk_FUN_00404478();
            }
            iVar4 = local_3c[uVar5 + 1];
            if (7 < iVar7 - 1U) {
              local_3c[3] = 0x5e12da;
              thunk_FUN_00404478();
            }
            if (iVar4 == local_3c[iVar7] + -1) {
              if (bVar1) {
                local_3c[3] = 0x5e12f3;
                FUN_00407eb8(param_2,0);
                goto LAB_005e160e;
              }
              bVar1 = true;
              iVar4 = -local_10 + 8;
              if (0 < (int)local_c) {
                iVar4 = -local_10 + 6;
              }
              if (0 < iVar4) {
                do {
                  local_3c[3] = 0x5e1323;
                  FUN_004082dc(param_2,&DAT_005e1680);
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
            }
            else {
              piStack_2c = &local_58;
              if (7 < iVar7 - 1U) {
                local_3c[2] = 0x5e133a;
                thunk_FUN_00404478();
              }
              if (7 < iVar7 - 2U) {
                local_3c[2] = 0x5e134d;
                thunk_FUN_00404478();
              }
              if (7 < iVar7 - 2U) {
                local_3c[2] = 0x5e135f;
                thunk_FUN_00404478();
              }
              local_3c[2] = 0x5e136b;
              FUN_004086a8(local_8,iVar4 + 1);
              local_3c[2] = 0x5e137b;
              FUN_0040839c(&local_54,&DAT_005e1670,local_58);
              local_3c[2] = 0x5e1386;
              iVar4 = FUN_005e2640(local_54,0xffffffff);
              if ((iVar4 < 0) || (0xffff < iVar4)) {
                local_3c[2] = 0x5e139d;
                FUN_00407eb8(param_2,0);
                goto LAB_005e160e;
              }
              local_3c[2] = *param_2;
              local_3c[1] = 0x5e13b3;
              FUN_004168d8(iVar4,1,&local_5c);
              local_3c[1] = local_5c;
              piStack_2c = (int *)&DAT_005e1650;
              local_40 = (undefined *)0x5e13c7;
              FUN_00408480(param_2,3);
            }
            iVar7 = iVar7 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (local_c == 0) {
          piStack_2c = &local_64;
          uVar5 = local_10 - 1;
          if (7 < uVar5) {
            local_3c[2] = 0x5e13ed;
            uVar5 = thunk_FUN_00404478();
          }
          local_3c[2] = 0x5e1400;
          FUN_004086a8(local_8,local_3c[uVar5 + 1] + 1,0x7fffffff);
          local_3c[2] = 0x5e1410;
          FUN_0040839c(&local_60,&DAT_005e1670,local_64);
          local_3c[2] = 0x5e141b;
          iVar6 = FUN_005e2640(local_60,0xffffffff);
          if ((iVar6 < 0) || (0xffff < iVar6)) {
            local_3c[2] = 0x5e1432;
            FUN_00407eb8(param_2,0);
            goto LAB_005e160e;
          }
          local_3c[2] = *param_2;
          local_3c[1] = 0x5e1448;
          FUN_004168d8(iVar6,1,&local_68);
          local_3c[1] = local_68;
          piStack_2c = (int *)&DAT_005e1650;
          local_40 = (undefined *)0x5e145c;
          FUN_00408480(param_2,3);
        }
        if (0 < (int)local_c) {
          piStack_2c = &local_6c;
          uVar5 = local_10 - 1;
          if (7 < uVar5) {
            local_3c[2] = 0x5e1478;
            uVar5 = thunk_FUN_00404478();
          }
          iVar6 = local_3c[uVar5 + 1];
          if (7 < local_10 - 1) {
            local_3c[2] = 0x5e1491;
            thunk_FUN_00404478();
          }
          local_3c[2] = 0x5e149d;
          FUN_004086a8(local_8,iVar6 + 1);
          local_3c[2] = 0x5e14a8;
          iVar6 = FUN_005e2640(local_6c,0xffffffff);
          if ((iVar6 < 0) || (0xff < iVar6)) {
            local_3c[2] = 0x5e14bf;
            FUN_00407eb8(param_2,0);
            goto LAB_005e160e;
          }
          local_3c[2] = 0x5e14d3;
          FUN_004168d8(iVar6,2,&local_70);
          local_3c[2] = 0x5e14dd;
          FUN_004082dc(param_2,local_70);
          piStack_2c = &local_74;
          local_3c[1] = 0x5e14f5;
          FUN_004086a8(local_8,local_48[1] + 1,local_40 + (-1 - local_48[1]));
          local_3c[1] = 0x5e1500;
          iVar6 = FUN_005e2640(local_74,0xffffffff);
          if ((iVar6 < 0) || (0xff < iVar6)) {
            local_3c[1] = 0x5e1517;
            FUN_00407eb8(param_2,0);
            goto LAB_005e160e;
          }
          local_3c[1] = *param_2;
          local_3c[0] = 0x5e152d;
          FUN_004168d8(iVar6,2,&local_78);
          local_3c[0] = local_78;
          local_40 = &DAT_005e1650;
          local_48[1] = 0x5e1541;
          FUN_00408480(param_2,3);
          piStack_2c = &local_7c;
          local_48[0] = 0x5e1559;
          FUN_004086a8(local_8,local_40 + 1,(local_3c[0] - (int)local_40) + -1);
          local_48[0] = 0x5e1564;
          iVar6 = FUN_005e2640(local_7c,0xffffffff);
          if ((iVar6 < 0) || (0xff < iVar6)) {
            local_48[0] = 0x5e157b;
            FUN_00407eb8(param_2,0);
            goto LAB_005e160e;
          }
          local_48[0] = 0x5e158f;
          FUN_004168d8(iVar6,2,&local_80);
          local_48[0] = 0x5e1599;
          FUN_004082dc(param_2,local_80);
          piStack_2c = &local_84;
          local_4c = 0x5e15ae;
          FUN_004086a8(local_8,local_3c[0] + 1,3);
          local_4c = 0x5e15b9;
          iVar6 = FUN_005e2640(local_84,0xffffffff);
          if ((iVar6 < 0) || (0xff < iVar6)) {
            local_4c = 0x5e15d0;
            FUN_00407eb8(param_2,0);
            goto LAB_005e160e;
          }
          local_4c = *param_2;
          local_50 = 0x5e15e6;
          FUN_004168d8(iVar6,2,&local_88);
          local_50 = local_88;
          piStack_2c = (int *)&DAT_005e1650;
          local_58 = 0x5e15fd;
          FUN_00408480(param_2,3);
        }
        local_3c[3] = 0x5e1604;
        iVar6 = FUN_00408238(*param_2);
        local_3c[3] = 0x5e160e;
        FUN_00408244(param_2,iVar6 + -1);
      }
    }
  }
LAB_005e160e:
  puVar2 = puStack_24;
  *in_FS_OFFSET = (int)piStack_2c;
  puStack_24 = &LAB_005e163b;
  iStack_28 = 0x5e162b;
  thunk_FUN_00406e80(&local_88,0x11,puVar2);
  iStack_28 = 0x5e1633;
  thunk_FUN_00406e5c(&local_8);
  return;
}
