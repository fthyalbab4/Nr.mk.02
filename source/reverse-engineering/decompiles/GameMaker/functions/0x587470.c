// rea decompile_all
// name: FUN_00587470
// address: 0x587470
// body: available
// range: 0x587470-0x5874e8 inclusive
// range: 0x587511-0x587953 inclusive
// range: 0x587971-0x587ec3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x587936 (push 0x587954 followed by fs-segment stack chaining); handler 0x587954 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00587470(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *in_FS_OFFSET;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 **ppuStack_60;
  undefined4 local_4c;
  int local_48;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  int local_28;
  uint local_24;
  byte *local_20;
  int *local_1c;
  uint local_14;
  uint local_10;
  undefined1 *local_c;
  uint local_8;

  local_20 = (byte *)*param_2;
  local_14 = param_2[1];
  local_8 = *(uint *)(param_1 + 0x20);
  local_10 = *(uint *)(param_1 + 0x1c);
  local_24 = *(uint *)(param_1 + 0x34);
  local_28 = param_3;
  local_1c = param_2;
  local_c = param_1;
  if (local_24 < *(uint *)(param_1 + 0x30)) {
    local_30 = (*(uint *)(param_1 + 0x30) - local_24) - 1;
  }
  else {
    local_30 = *(int *)(param_1 + 0x2c) - local_24;
  }
  do {
    switch(*local_c) {
    case 0:
      for (; local_10 < 3; local_10 = local_10 + 8) {
        if (local_14 == 0) {
          puStack_64 = (undefined4 *)0x587529;
          ppuStack_60 = (undefined4 **)&stack0xfffffffc;
          uVar2 = FUN_005873f0();
          return uVar2;
        }
        local_28 = 0;
        local_14 = local_14 - 1;
        local_8 = local_8 | (uint)*local_20 << ((byte)local_10 & 0x1f);
        local_20 = local_20 + 1;
      }
      local_c[0x18] = (byte)(local_8 & 7) & 1;
      uVar3 = (local_8 & 7) >> 1;
      if (uVar3 == 0) {
        uVar3 = local_10 - 3 & 7;
        local_8 = (local_8 >> 3) >> (sbyte)uVar3;
        local_10 = (local_10 - 3) - uVar3;
        *local_c = 1;
      }
      else if (uVar3 == 1) {
        ppuStack_60 = &local_40;
        puStack_68 = (undefined4 *)0x5875ae;
        FUN_005870f4(&local_34,&local_38,&local_3c);
        puStack_68 = local_40;
        uVar2 = FUN_0058601c(local_34,local_38,local_3c,local_1c);
        *(undefined4 *)(local_c + 0xc) = uVar2;
        if (*(int *)(local_c + 0xc) == 0) {
          local_28 = 0xfffffffc;
          puStack_68 = (undefined4 *)&stack0xfffffffc;
          uVar2 = FUN_005873f0();
          return uVar2;
        }
        local_8 = local_8 >> 3;
        local_10 = local_10 - 3;
        *local_c = 6;
      }
      else if (uVar3 == 2) {
        local_8 = local_8 >> 3;
        local_10 = local_10 - 3;
        *local_c = 3;
      }
      else if (uVar3 == 3) {
        local_8 = local_8 >> 3;
        local_10 = local_10 - 3;
        *local_c = 9;
        ppuStack_60 = (undefined4 **)0x58762a;
        FUN_0040b75c(&PTR_DAT_00584ef0,local_1c + 6);
        local_28 = 0xfffffffd;
        puStack_64 = (undefined4 *)0x587637;
        ppuStack_60 = (undefined4 **)&stack0xfffffffc;
        uVar2 = FUN_005873f0();
        return uVar2;
      }
      break;
    case 1:
      for (; local_10 < 0x20; local_10 = local_10 + 8) {
        if (local_14 == 0) {
          puStack_64 = (undefined4 *)0x587658;
          ppuStack_60 = (undefined4 **)&stack0xfffffffc;
          uVar2 = FUN_005873f0();
          return uVar2;
        }
        local_28 = 0;
        local_14 = local_14 - 1;
        local_8 = local_8 | (uint)*local_20 << ((byte)local_10 & 0x1f);
        local_20 = local_20 + 1;
      }
      if (~local_8 >> 0x10 != (local_8 & 0xffff)) {
        *local_c = 9;
        ppuStack_60 = (undefined4 **)0x5876ac;
        FUN_0040b75c(&PTR_DAT_00584ef8,local_1c + 6);
        local_28 = 0xfffffffd;
        puStack_64 = (undefined4 *)0x5876b9;
        ppuStack_60 = (undefined4 **)&stack0xfffffffc;
        uVar2 = FUN_005873f0();
        return uVar2;
      }
      *(uint *)(local_c + 4) = local_8 & 0xffff;
      local_10 = 0;
      local_8 = 0;
      if (*(int *)(local_c + 4) == 0) {
        if (local_c[0x18] == '\0') {
          *local_c = 0;
        }
        else {
          *local_c = 7;
        }
      }
      else {
        *local_c = 2;
      }
      break;
    case 2:
      if (local_14 == 0) {
        puStack_64 = (undefined4 *)0x587718;
        ppuStack_60 = (undefined4 **)&stack0xfffffffc;
        uVar2 = FUN_005873f0();
        return uVar2;
      }
      if (local_30 == 0) {
        if ((*(uint *)(local_c + 0x2c) == local_24) &&
           (*(int *)(local_c + 0x30) != *(int *)(local_c + 0x28))) {
          local_24 = *(uint *)(local_c + 0x28);
          if (local_24 < *(uint *)(local_c + 0x30)) {
            local_30 = (*(int *)(local_c + 0x30) - local_24) - 1;
          }
          else {
            local_30 = *(int *)(local_c + 0x2c) - local_24;
          }
        }
        if (local_30 == 0) {
          *(uint *)(local_c + 0x34) = local_24;
          ppuStack_60 = (undefined4 **)0x587794;
          local_28 = FUN_00585ab4(local_c,local_1c,local_28);
          local_24 = *(uint *)(local_c + 0x34);
          if (local_24 < *(uint *)(local_c + 0x30)) {
            local_30 = (*(int *)(local_c + 0x30) - local_24) - 1;
          }
          else {
            local_30 = *(int *)(local_c + 0x2c) - local_24;
          }
          if ((*(uint *)(local_c + 0x2c) == local_24) &&
             (*(int *)(local_c + 0x30) != *(int *)(local_c + 0x28))) {
            local_24 = *(uint *)(local_c + 0x28);
            if (local_24 < *(uint *)(local_c + 0x30)) {
              local_30 = (*(int *)(local_c + 0x30) - local_24) - 1;
            }
            else {
              local_30 = *(int *)(local_c + 0x2c) - local_24;
            }
          }
          if (local_30 == 0) {
            puStack_64 = (undefined4 *)0x58781a;
            ppuStack_60 = (undefined4 **)&stack0xfffffffc;
            uVar2 = FUN_005873f0();
            return uVar2;
          }
        }
      }
      local_28 = 0;
      uVar3 = *(uint *)(local_c + 4);
      if (local_14 < *(uint *)(local_c + 4)) {
        uVar3 = local_14;
      }
      if (local_30 < uVar3) {
        uVar3 = local_30;
      }
      ppuStack_60 = (undefined4 **)0x58784b;
      FUN_0040450c(local_20,local_24,uVar3);
      local_20 = local_20 + uVar3;
      local_14 = local_14 - uVar3;
      local_24 = local_24 + uVar3;
      local_30 = local_30 - uVar3;
      *(uint *)(local_c + 4) = *(int *)(local_c + 4) - uVar3;
      if (*(int *)(local_c + 4) == 0) {
        if (local_c[0x18] == '\0') {
          *local_c = 0;
        }
        else {
          *local_c = 7;
        }
      }
      break;
    case 3:
      for (; local_10 < 0xe; local_10 = local_10 + 8) {
        if (local_14 == 0) {
          puStack_64 = (undefined4 *)0x5878a1;
          ppuStack_60 = (undefined4 **)&stack0xfffffffc;
          uVar2 = FUN_005873f0();
          return uVar2;
        }
        local_28 = 0;
        local_14 = local_14 - 1;
        local_8 = local_8 | (uint)*local_20 << ((byte)local_10 & 0x1f);
        local_20 = local_20 + 1;
      }
      uVar3 = local_8 & 0x3fff;
      *(uint *)(local_c + 4) = uVar3;
      if ((0x1d < (local_8 & 0x1f)) || (0x1d < (uVar3 >> 5 & 0x1f))) {
        *local_c = 9;
        ppuStack_60 = (undefined4 **)0x587901;
        FUN_0040b75c(&PTR_DAT_00584f00,local_1c + 6);
        local_28 = 0xfffffffd;
        puStack_64 = (undefined4 *)0x58790e;
        ppuStack_60 = (undefined4 **)&stack0xfffffffc;
        uVar2 = FUN_005873f0();
        return uVar2;
      }
      puStack_64 = (undefined4 *)&LAB_00587954;
      puStack_68 = (undefined4 *)*in_FS_OFFSET;
      *in_FS_OFFSET = (int)&puStack_68;
      ppuStack_60 = (undefined4 **)&stack0xfffffffc;
      uVar2 = FUN_00404304(((local_8 & 0x1f) + 0x102 + (uVar3 >> 5 & 0x1f)) * 4);
      *(undefined4 *)(local_c + 0xc) = uVar2;
      *in_FS_OFFSET = (int)puStack_68;
      local_8 = local_8 >> 0xe;
      local_10 = local_10 - 0xe;
      *(undefined4 *)(local_c + 8) = 0;
      *local_c = 4;
      break;
    case 4:
      while (*(uint *)(local_c + 8) < (*(uint *)(local_c + 4) >> 10) + 4) {
        for (; local_10 < 3; local_10 = local_10 + 8) {
          if (local_14 == 0) {
            puStack_64 = (undefined4 *)0x5879a3;
            ppuStack_60 = (undefined4 **)&stack0xfffffffc;
            uVar2 = FUN_005873f0();
            return uVar2;
          }
          local_28 = 0;
          local_14 = local_14 - 1;
          local_8 = local_8 | (uint)*local_20 << ((byte)local_10 & 0x1f);
          local_20 = local_20 + 1;
        }
        *(uint *)(*(int *)(local_c + 0xc) +
                 (uint)*(ushort *)(&DAT_0077c734 + *(int *)(local_c + 8) * 2) * 4) = local_8 & 7;
        *(int *)(local_c + 8) = *(int *)(local_c + 8) + 1;
        local_8 = local_8 >> 3;
        local_10 = local_10 - 3;
      }
      while (*(uint *)(local_c + 8) < 0x13) {
        *(undefined4 *)
         (*(int *)(local_c + 0xc) + (uint)*(ushort *)(&DAT_0077c734 + *(int *)(local_c + 8) * 2) * 4
         ) = 0;
        *(int *)(local_c + 8) = *(int *)(local_c + 8) + 1;
      }
      *(undefined4 *)(local_c + 0x10) = 7;
      ppuStack_60 = (undefined4 **)(local_c + 0x14);
      puStack_64 = *(undefined4 **)(local_c + 0x24);
      puStack_68 = (undefined4 *)0xffffffe;
      iVar5 = FUN_00586e8c(*(undefined4 *)(local_c + 0xc),0x1ffffffe,local_c + 0x10);
      if (iVar5 != 0) {
        FUN_00404338(*(undefined4 *)(local_c + 0xc));
        if (iVar5 == -3) {
          *local_c = 9;
        }
        local_28 = iVar5;
        uVar2 = FUN_005873f0();
        return uVar2;
      }
      *(undefined4 *)(local_c + 8) = 0;
      *local_c = 5;
      break;
    case 5:
      while (*(uint *)(local_c + 8) <
             (*(uint *)(local_c + 4) & 0x1f) + 0x102 + (*(uint *)(local_c + 4) >> 5 & 0x1f)) {
        for (; local_10 < *(uint *)(local_c + 0x10); local_10 = local_10 + 8) {
          if (local_14 == 0) {
            puStack_64 = (undefined4 *)0x587aeb;
            ppuStack_60 = (undefined4 **)&stack0xfffffffc;
            uVar2 = FUN_005873f0();
            return uVar2;
          }
          local_28 = 0;
          local_14 = local_14 - 1;
          local_8 = local_8 | (uint)*local_20 << ((byte)local_10 & 0x1f);
          local_20 = local_20 + 1;
        }
        iVar5 = *(int *)(local_c + 0x14) +
                (*(uint *)(&DAT_0077c504 + *(uint *)(local_c + 0x10) * 4) & local_8) * 8;
        bVar1 = *(byte *)(iVar5 + 1);
        uVar4 = (uint)bVar1;
        uVar3 = *(uint *)(iVar5 + 4);
        if (uVar3 < 0x10) {
          local_8 = local_8 >> (bVar1 & 0x1f);
          local_10 = local_10 - uVar4;
          *(uint *)(*(int *)(local_c + 0xc) + *(int *)(local_c + 8) * 4) = uVar3;
          *(int *)(local_c + 8) = *(int *)(local_c + 8) + 1;
        }
        else {
          if (uVar3 == 0x12) {
            iVar5 = 7;
            local_48 = 0xb;
          }
          else {
            iVar5 = uVar3 - 0xe;
            local_48 = 3;
          }
          for (; local_10 < iVar5 + uVar4; local_10 = local_10 + 8) {
            if (local_14 == 0) {
              puStack_64 = (undefined4 *)0x587b9a;
              ppuStack_60 = (undefined4 **)&stack0xfffffffc;
              uVar2 = FUN_005873f0();
              return uVar2;
            }
            local_28 = 0;
            local_14 = local_14 - 1;
            local_8 = local_8 | (uint)*local_20 << ((byte)local_10 & 0x1f);
            local_20 = local_20 + 1;
          }
          local_8 = local_8 >> (bVar1 & 0x1f);
          local_48 = local_48 + (*(uint *)(&DAT_0077c504 + iVar5 * 4) & local_8);
          local_8 = local_8 >> ((byte)iVar5 & 0x1f);
          local_10 = (local_10 - uVar4) - iVar5;
          iVar5 = *(int *)(local_c + 8);
          if (((*(uint *)(local_c + 4) & 0x1f) + 0x102 + (*(uint *)(local_c + 4) >> 5 & 0x1f) <
               (uint)(local_48 + iVar5)) || ((uVar3 == 0x10 && (iVar5 == 0)))) {
            ppuStack_60 = (undefined4 **)0x587c18;
            FUN_00404338(*(undefined4 *)(local_c + 0xc));
            *local_c = 9;
            ppuStack_60 = (undefined4 **)0x587c2e;
            FUN_0040b75c(&PTR_DAT_00584f08,local_1c + 6);
            local_28 = 0xfffffffd;
            puStack_64 = (undefined4 *)0x587c3b;
            ppuStack_60 = (undefined4 **)&stack0xfffffffc;
            uVar2 = FUN_005873f0();
            return uVar2;
          }
          if (uVar3 == 0x10) {
            local_4c = *(undefined4 *)(*(int *)(local_c + 0xc) + -4 + iVar5 * 4);
          }
          else {
            local_4c = 0;
          }
          do {
            *(undefined4 *)(*(int *)(local_c + 0xc) + iVar5 * 4) = local_4c;
            iVar5 = iVar5 + 1;
            local_48 = local_48 + -1;
          } while (local_48 != 0);
          *(int *)(local_c + 8) = iVar5;
        }
      }
      *(undefined4 *)(local_c + 0x14) = 0;
      local_34 = 9;
      local_38 = 6;
      ppuStack_60 = (undefined4 **)0x1ffffffe;
      puStack_64 = &local_34;
      puStack_68 = &local_38;
      iVar5 = FUN_00586f58((*(uint *)(local_c + 4) & 0x1f) + 0x101,
                           (*(uint *)(local_c + 4) >> 5 & 0x1f) + 1,*(undefined4 *)(local_c + 0xc));
      FUN_00404338(*(undefined4 *)(local_c + 0xc));
      if (iVar5 != 0) {
        if (iVar5 == -3) {
          *local_c = 9;
        }
        local_28 = iVar5;
        uVar2 = FUN_005873f0();
        return uVar2;
      }
      iVar5 = FUN_0058601c(local_34,local_38,local_3c,local_1c,local_40);
      if (iVar5 == 0) {
        local_28 = 0xfffffffc;
        uVar2 = FUN_005873f0();
        return uVar2;
      }
      *(int *)(local_c + 0xc) = iVar5;
      *local_c = 6;
      break;
    case 6:
      *(uint *)(local_c + 0x20) = local_8;
      *(uint *)(local_c + 0x1c) = local_10;
      local_1c[1] = local_14;
      local_1c[2] = (int)(local_20 + (local_1c[2] - *local_1c));
      *local_1c = (int)local_20;
      *(uint *)(local_c + 0x34) = local_24;
      ppuStack_60 = (undefined4 **)0x587d9c;
      local_28 = FUN_00586050(local_c,local_1c,local_28);
      if (local_28 != 1) {
        ppuStack_60 = (undefined4 **)0x587db3;
        uVar2 = FUN_00585ab4(local_c,local_1c,local_28);
        return uVar2;
      }
      local_28 = 0;
      ppuStack_60 = (undefined4 **)0x587dcb;
      FUN_00404338(*(undefined4 *)(local_c + 0xc));
      local_20 = (byte *)*local_1c;
      local_14 = local_1c[1];
      local_8 = *(uint *)(local_c + 0x20);
      local_10 = *(uint *)(local_c + 0x1c);
      local_24 = *(uint *)(local_c + 0x34);
      if (local_24 < *(uint *)(local_c + 0x30)) {
        local_30 = (*(int *)(local_c + 0x30) - local_24) - 1;
      }
      else {
        local_30 = *(int *)(local_c + 0x2c) - local_24;
      }
      if (local_c[0x18] == '\0') {
        *local_c = 0;
      }
      else {
        *local_c = 7;
      }
      break;
    case 7:
      *(uint *)(local_c + 0x34) = local_24;
      ppuStack_60 = (undefined4 **)0x587e52;
      local_28 = FUN_00585ab4(local_c,local_1c,local_28);
      local_24 = *(uint *)(local_c + 0x34);
      if (*(int *)(local_c + 0x30) != *(int *)(local_c + 0x34)) {
        puStack_64 = (undefined4 *)0x587e72;
        ppuStack_60 = (undefined4 **)&stack0xfffffffc;
        uVar2 = FUN_005873f0();
        return uVar2;
      }
      *local_c = 8;
      break;
    case 8:
      local_28 = 1;
      puStack_64 = (undefined4 *)0x587e90;
      ppuStack_60 = (undefined4 **)&stack0xfffffffc;
      uVar2 = FUN_005873f0();
      return uVar2;
    case 9:
      local_28 = 0xfffffffd;
      puStack_64 = (undefined4 *)0x587ea3;
      ppuStack_60 = (undefined4 **)&stack0xfffffffc;
      uVar2 = FUN_005873f0();
      return uVar2;
    default:
      local_28 = 0xfffffffe;
      puStack_64 = (undefined4 *)0x587eb6;
      ppuStack_60 = (undefined4 **)&stack0xfffffffc;
      uVar2 = FUN_005873f0();
      return uVar2;
    }
  } while( true );
}
