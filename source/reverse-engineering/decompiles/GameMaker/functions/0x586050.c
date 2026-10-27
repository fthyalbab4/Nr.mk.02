// rea decompile_all
// name: FUN_00586050
// address: 0x586050
// body: available
// range: 0x586050-0x5860b2 inclusive
// range: 0x5860db-0x586a1a inclusive
// range: 0x586a28-0x586a33 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00586050(int param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  int local_3c;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;

  puVar3 = *(undefined1 **)(param_1 + 0xc);
  pbVar6 = (byte *)*param_2;
  local_24 = param_2[1];
  local_28 = *(uint *)(param_1 + 0x20);
  uVar7 = *(uint *)(param_1 + 0x1c);
  local_20 = *(undefined1 **)(param_1 + 0x34);
  local_3c = param_3;
  if (local_20 < *(undefined1 **)(param_1 + 0x30)) {
    local_1c = *(undefined1 **)(param_1 + 0x30) + (-1 - (int)local_20);
  }
  else {
    local_1c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)local_20);
  }
  do {
    switch(*puVar3) {
    case 0:
      if (((undefined1 *)0x101 < local_1c) && (9 < local_24)) {
        *(uint *)(param_1 + 0x20) = local_28;
        *(uint *)(param_1 + 0x1c) = uVar7;
        param_2[1] = local_24;
        param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
        *param_2 = (int)pbVar6;
        *(undefined1 **)(param_1 + 0x34) = local_20;
        local_3c = FUN_00585bcc(puVar3[0x10],puVar3[0x11],*(undefined4 *)(puVar3 + 0x14),param_2,
                                param_1,*(undefined4 *)(puVar3 + 0x18));
        pbVar6 = (byte *)*param_2;
        local_24 = param_2[1];
        local_28 = *(uint *)(param_1 + 0x20);
        uVar7 = *(uint *)(param_1 + 0x1c);
        local_20 = *(undefined1 **)(param_1 + 0x34);
        if (local_20 < *(undefined1 **)(param_1 + 0x30)) {
          local_1c = (undefined1 *)((*(int *)(param_1 + 0x30) - (int)local_20) + -1);
        }
        else {
          local_1c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)local_20);
        }
        if (local_3c != 0) {
          if (local_3c == 1) {
            *puVar3 = 7;
          }
          else {
            *puVar3 = 9;
          }
          break;
        }
      }
      *(uint *)(puVar3 + 0xc) = (uint)(byte)puVar3[0x10];
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(puVar3 + 0x14);
      *puVar3 = 1;
      break;
    case 1:
      for (; uVar7 < *(uint *)(puVar3 + 0xc); uVar7 = uVar7 + 8) {
        if (local_24 == 0) {
          *(uint *)(param_1 + 0x20) = local_28;
          *(uint *)(param_1 + 0x1c) = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar6;
          *(undefined1 **)(param_1 + 0x34) = local_20;
          uVar5 = FUN_00585ab4(param_1,param_2,local_3c);
          return uVar5;
        }
        local_3c = 0;
        local_24 = local_24 - 1;
        local_28 = local_28 | (uint)*pbVar6 << ((byte)uVar7 & 0x1f);
        pbVar6 = pbVar6 + 1;
      }
      pbVar1 = (byte *)(*(int *)(puVar3 + 8) +
                       (*(uint *)(&DAT_0077c504 + *(uint *)(puVar3 + 0xc) * 4) & local_28) * 8);
      local_28 = local_28 >> (pbVar1[1] & 0x1f);
      uVar7 = uVar7 - pbVar1[1];
      bVar2 = *pbVar1;
      uVar4 = (uint)bVar2;
      if (uVar4 == 0) {
        *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(pbVar1 + 4);
        *puVar3 = 6;
      }
      else if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) == 0) {
          *(uint *)(puVar3 + 0xc) = uVar4;
          *(byte **)(puVar3 + 8) = pbVar1 + *(int *)(pbVar1 + 4) * 8;
        }
        else {
          if ((bVar2 & 0x20) == 0) {
            *puVar3 = 9;
            FUN_0040b75c(&PTR_DAT_00584ec0,param_2 + 6);
            *(uint *)(param_1 + 0x20) = local_28;
            *(uint *)(param_1 + 0x1c) = uVar7;
            param_2[1] = local_24;
            param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
            *param_2 = (int)pbVar6;
            *(undefined1 **)(param_1 + 0x34) = local_20;
            uVar5 = FUN_00585ab4(param_1,param_2,0xfffffffd);
            return uVar5;
          }
          *puVar3 = 7;
        }
      }
      else {
        *(uint *)(puVar3 + 8) = uVar4 & 0xf;
        *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(pbVar1 + 4);
        *puVar3 = 2;
      }
      break;
    case 2:
      uVar4 = *(uint *)(puVar3 + 8);
      for (; uVar7 < uVar4; uVar7 = uVar7 + 8) {
        if (local_24 == 0) {
          *(uint *)(param_1 + 0x20) = local_28;
          *(uint *)(param_1 + 0x1c) = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar6;
          *(undefined1 **)(param_1 + 0x34) = local_20;
          uVar5 = FUN_00585ab4(param_1,param_2,local_3c);
          return uVar5;
        }
        local_3c = 0;
        local_24 = local_24 - 1;
        local_28 = local_28 | (uint)*pbVar6 << ((byte)uVar7 & 0x1f);
        pbVar6 = pbVar6 + 1;
      }
      *(uint *)(puVar3 + 4) =
           *(int *)(puVar3 + 4) + (*(uint *)(&DAT_0077c504 + uVar4 * 4) & local_28);
      local_28 = local_28 >> ((byte)uVar4 & 0x1f);
      uVar7 = uVar7 - uVar4;
      *(uint *)(puVar3 + 0xc) = (uint)(byte)puVar3[0x11];
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(puVar3 + 0x18);
      *puVar3 = 3;
      break;
    case 3:
      for (; uVar7 < *(uint *)(puVar3 + 0xc); uVar7 = uVar7 + 8) {
        if (local_24 == 0) {
          *(uint *)(param_1 + 0x20) = local_28;
          *(uint *)(param_1 + 0x1c) = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar6;
          *(undefined1 **)(param_1 + 0x34) = local_20;
          uVar5 = FUN_00585ab4(param_1,param_2,local_3c);
          return uVar5;
        }
        local_3c = 0;
        local_24 = local_24 - 1;
        local_28 = local_28 | (uint)*pbVar6 << ((byte)uVar7 & 0x1f);
        pbVar6 = pbVar6 + 1;
      }
      pbVar1 = (byte *)(*(int *)(puVar3 + 8) +
                       (*(uint *)(&DAT_0077c504 + *(uint *)(puVar3 + 0xc) * 4) & local_28) * 8);
      local_28 = local_28 >> (pbVar1[1] & 0x1f);
      uVar7 = uVar7 - pbVar1[1];
      bVar2 = *pbVar1;
      if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) != 0) {
          *puVar3 = 9;
          FUN_0040b75c(&PTR_DAT_00584eb8,param_2 + 6);
          *(uint *)(param_1 + 0x20) = local_28;
          *(uint *)(param_1 + 0x1c) = uVar7;
          param_2[1] = local_24;
          param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar6;
          *(undefined1 **)(param_1 + 0x34) = local_20;
          uVar5 = FUN_00585ab4(param_1,param_2,0xfffffffd);
          return uVar5;
        }
        *(uint *)(puVar3 + 0xc) = (uint)bVar2;
        *(byte **)(puVar3 + 8) = pbVar1 + *(int *)(pbVar1 + 4) * 8;
      }
      else {
        *(uint *)(puVar3 + 8) = bVar2 & 0xf;
        *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(pbVar1 + 4);
        *puVar3 = 4;
      }
      break;
    case 4:
      uVar4 = *(uint *)(puVar3 + 8);
      for (; uVar7 < uVar4; uVar7 = uVar7 + 8) {
        if (local_24 == 0) {
          *(uint *)(param_1 + 0x20) = local_28;
          *(uint *)(param_1 + 0x1c) = uVar7;
          param_2[1] = 0;
          param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
          *param_2 = (int)pbVar6;
          *(undefined1 **)(param_1 + 0x34) = local_20;
          uVar5 = FUN_00585ab4(param_1,param_2,local_3c);
          return uVar5;
        }
        local_3c = 0;
        local_24 = local_24 - 1;
        local_28 = local_28 | (uint)*pbVar6 << ((byte)uVar7 & 0x1f);
        pbVar6 = pbVar6 + 1;
      }
      *(uint *)(puVar3 + 0xc) =
           *(int *)(puVar3 + 0xc) + (*(uint *)(&DAT_0077c504 + uVar4 * 4) & local_28);
      local_28 = local_28 >> ((byte)uVar4 & 0x1f);
      uVar7 = uVar7 - uVar4;
      *puVar3 = 5;
      break;
    case 5:
      local_18 = local_20 + -*(int *)(puVar3 + 0xc);
      if ((uint)((int)local_20 - *(int *)(param_1 + 0x28)) < *(uint *)(puVar3 + 0xc)) {
        local_18 = (undefined1 *)
                   (*(int *)(param_1 + 0x2c) -
                   (*(int *)(puVar3 + 0xc) - ((int)local_20 - *(int *)(param_1 + 0x28))));
      }
      while (*(int *)(puVar3 + 4) != 0) {
        if (local_1c == (undefined1 *)0x0) {
          if ((*(undefined1 **)(param_1 + 0x2c) == local_20) &&
             (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x28))) {
            local_20 = *(undefined1 **)(param_1 + 0x28);
            if (local_20 < *(undefined1 **)(param_1 + 0x30)) {
              local_1c = (undefined1 *)((*(int *)(param_1 + 0x30) - (int)local_20) + -1);
            }
            else {
              local_1c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)local_20);
            }
          }
          if (local_1c == (undefined1 *)0x0) {
            *(undefined1 **)(param_1 + 0x34) = local_20;
            uVar5 = FUN_00585ab4(param_1,param_2,local_3c);
            local_20 = *(undefined1 **)(param_1 + 0x34);
            if (local_20 < *(undefined1 **)(param_1 + 0x30)) {
              local_1c = (undefined1 *)((*(int *)(param_1 + 0x30) - (int)local_20) + -1);
            }
            else {
              local_1c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)local_20);
            }
            if ((*(undefined1 **)(param_1 + 0x2c) == local_20) &&
               (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x28))) {
              local_20 = *(undefined1 **)(param_1 + 0x28);
              if (local_20 < *(undefined1 **)(param_1 + 0x30)) {
                local_1c = (undefined1 *)((*(int *)(param_1 + 0x30) - (int)local_20) + -1);
              }
              else {
                local_1c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)local_20);
              }
            }
            if (local_1c == (undefined1 *)0x0) {
              *(uint *)(param_1 + 0x20) = local_28;
              *(uint *)(param_1 + 0x1c) = uVar7;
              param_2[1] = local_24;
              param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
              *param_2 = (int)pbVar6;
              *(undefined1 **)(param_1 + 0x34) = local_20;
              uVar5 = FUN_00585ab4(param_1,param_2,uVar5);
              return uVar5;
            }
          }
        }
        local_3c = 0;
        *local_20 = *local_18;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
        local_1c = local_1c + -1;
        if (*(undefined1 **)(param_1 + 0x2c) == local_18) {
          local_18 = *(undefined1 **)(param_1 + 0x28);
        }
        *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + -1;
      }
      *puVar3 = 0;
      break;
    case 6:
      if (local_1c == (undefined1 *)0x0) {
        if ((*(undefined1 **)(param_1 + 0x2c) == local_20) &&
           (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x28))) {
          local_20 = *(undefined1 **)(param_1 + 0x28);
          if (local_20 < *(undefined1 **)(param_1 + 0x30)) {
            local_1c = (undefined1 *)((*(int *)(param_1 + 0x30) - (int)local_20) + -1);
          }
          else {
            local_1c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)local_20);
          }
        }
        if (local_1c == (undefined1 *)0x0) {
          *(undefined1 **)(param_1 + 0x34) = local_20;
          uVar5 = FUN_00585ab4(param_1,param_2,local_3c);
          local_20 = *(undefined1 **)(param_1 + 0x34);
          if (local_20 < *(undefined1 **)(param_1 + 0x30)) {
            local_1c = (undefined1 *)((*(int *)(param_1 + 0x30) - (int)local_20) + -1);
          }
          else {
            local_1c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)local_20);
          }
          if ((*(undefined1 **)(param_1 + 0x2c) == local_20) &&
             (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x28))) {
            local_20 = *(undefined1 **)(param_1 + 0x28);
            if (local_20 < *(undefined1 **)(param_1 + 0x30)) {
              local_1c = (undefined1 *)((*(int *)(param_1 + 0x30) - (int)local_20) + -1);
            }
            else {
              local_1c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)local_20);
            }
          }
          if (local_1c == (undefined1 *)0x0) {
            *(uint *)(param_1 + 0x20) = local_28;
            *(uint *)(param_1 + 0x1c) = uVar7;
            param_2[1] = local_24;
            param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
            *param_2 = (int)pbVar6;
            *(undefined1 **)(param_1 + 0x34) = local_20;
            uVar5 = FUN_00585ab4(param_1,param_2,uVar5);
            return uVar5;
          }
        }
      }
      local_3c = 0;
      *local_20 = puVar3[8];
      local_20 = local_20 + 1;
      local_1c = local_1c + -1;
      *puVar3 = 0;
      break;
    case 7:
      if (7 < uVar7) {
        uVar7 = uVar7 - 8;
        local_24 = local_24 + 1;
        pbVar6 = pbVar6 + -1;
      }
      *(undefined1 **)(param_1 + 0x34) = local_20;
      local_3c = FUN_00585ab4(param_1,param_2,local_3c);
      local_20 = *(undefined1 **)(param_1 + 0x34);
      if (local_20 < *(undefined1 **)(param_1 + 0x30)) {
        local_1c = (undefined1 *)((*(int *)(param_1 + 0x30) - (int)local_20) + -1);
      }
      else {
        local_1c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)local_20);
      }
      if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x30)) {
        *(uint *)(param_1 + 0x20) = local_28;
        *(uint *)(param_1 + 0x1c) = uVar7;
        param_2[1] = local_24;
        param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
        *param_2 = (int)pbVar6;
        *(undefined1 **)(param_1 + 0x34) = local_20;
        uVar5 = FUN_00585ab4(param_1,param_2,local_3c);
        return uVar5;
      }
      *puVar3 = 8;
      break;
    case 8:
      *(uint *)(param_1 + 0x20) = local_28;
      *(uint *)(param_1 + 0x1c) = uVar7;
      param_2[1] = local_24;
      param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
      *param_2 = (int)pbVar6;
      *(undefined1 **)(param_1 + 0x34) = local_20;
      uVar5 = FUN_00585ab4(param_1,param_2,1);
      return uVar5;
    case 9:
      *(uint *)(param_1 + 0x20) = local_28;
      *(uint *)(param_1 + 0x1c) = uVar7;
      param_2[1] = local_24;
      param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
      *param_2 = (int)pbVar6;
      *(undefined1 **)(param_1 + 0x34) = local_20;
      uVar5 = FUN_00585ab4(param_1,param_2,0xfffffffd);
      return uVar5;
    default:
      *(uint *)(param_1 + 0x20) = local_28;
      *(uint *)(param_1 + 0x1c) = uVar7;
      param_2[1] = local_24;
      param_2[2] = (int)(pbVar6 + (param_2[2] - *param_2));
      *param_2 = (int)pbVar6;
      *(undefined1 **)(param_1 + 0x34) = local_20;
      uVar5 = FUN_00585ab4(param_1,param_2,0xfffffffe);
      return uVar5;
    }
  } while( true );
}
