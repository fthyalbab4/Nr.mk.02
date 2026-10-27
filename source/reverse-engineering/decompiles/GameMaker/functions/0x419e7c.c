// rea decompile_all
// name: FUN_00419e7c
// address: 0x419e7c
// body: available
// range: 0x419e7c-0x419f5c inclusive
// range: 0x419fd6-0x41a628 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x419e9b (push 0x41a629 followed by fs-segment stack chaining); handler 0x41a629 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419e7c(ushort *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  ushort local_28;
  byte local_26;
  char local_25;
  ushort local_24;
  undefined1 local_22;
  undefined1 local_21;
  int local_20;
  ushort local_1a;
  ushort *local_18;
  undefined2 local_12;
  short local_10;
  short local_e;
  ushort local_c;
  undefined2 local_a;
  ushort local_8;
  ushort local_6;

  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_2c = 0;
  puStack_44 = &LAB_0041a629;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puVar7 = &stack0xfffffffc;
  local_18 = param_1;
  if ((param_1 != (ushort *)0x0) && (puVar7 = &stack0xfffffffc, *(int *)(param_4 + -0x208) < 2)) {
    *(int *)(param_4 + -0x208) = *(int *)(param_4 + -0x208) + 1;
    local_24 = 0x20;
    local_21 = 0;
    local_22 = 0;
    local_25 = '\0';
    local_18 = param_1;
    while (uVar5 = *local_18, uVar5 != 0) {
      local_1a = uVar5;
      if ((uVar5 < 0xd800) || (0xdfff < uVar5)) {
        puVar2 = (ushort *)FUN_0041d7c8(local_18);
        uVar5 = local_1a;
        if ((ushort)(local_1a - 0x61) < 0x1a) {
          uVar5 = local_1a - 0x20;
        }
        uVar1 = local_24;
        if ((((ushort)(uVar5 - 0x41) < 0x1a) && (uVar1 = uVar5, uVar5 == 0x4d)) &&
           (local_24 == 0x48)) {
          uVar5 = 0x4e;
          uVar1 = uVar5;
        }
        local_24 = uVar1;
        local_18 = puVar2;
        switch(uVar5) {
        case 0x22:
        case 0x27:
          while ((*local_18 != 0 && (*local_18 != local_1a))) {
            if ((*local_18 < 0xd800) || (0xdfff < *local_18)) {
              local_18 = local_18 + 1;
            }
            else {
              local_18 = (ushort *)FUN_0041d7c8(local_18);
            }
          }
          iVar4 = (int)local_18 - (int)puVar2 >> 1;
          if (iVar4 < 0) {
            iVar4 = iVar4 + (uint)(((int)local_18 - (int)puVar2 & 1U) != 0);
          }
          FUN_00419a14(puVar2,iVar4);
          if (*local_18 != 0) {
            local_18 = local_18 + 1;
          }
          break;
        default:
          FUN_00419a14(&local_1a,1);
          break;
        case 0x2f:
          if (DAT_00785c94 != 0) {
            FUN_00419a14(&DAT_00785c94,1);
          }
          break;
        case 0x3a:
          if (DAT_00785ca0 != 0) {
            FUN_00419a14(&DAT_00785ca0,1);
          }
          break;
        case 0x41:
          FUN_00419b84();
          puVar2 = local_18;
          puVar6 = local_18 + -1;
          iVar4 = FUN_004179cc(puVar6,L"AM/PM",5);
          if (iVar4 == 0) {
            if (0xb < local_c) {
              puVar6 = puVar2 + 2;
            }
            FUN_00419a14(puVar6,2);
            local_25 = '\x01';
            local_18 = local_18 + 4;
          }
          else {
            iVar4 = FUN_004179cc(puVar6,&DAT_0041a644,3);
            if (iVar4 == 0) {
              if (0xb < local_c) {
                puVar6 = puVar2 + 1;
              }
              FUN_00419a14(puVar6,1);
              local_25 = '\x01';
              local_18 = local_18 + 2;
            }
            else {
              iVar4 = FUN_004179cc(puVar6,L"AMPM",4);
              if (iVar4 == 0) {
                if (local_c < 0xc) {
                  FUN_00419a58(DAT_00785ca4);
                }
                else {
                  FUN_00419a58(DAT_00785ca8);
                }
                local_25 = '\x01';
                local_18 = local_18 + 3;
              }
              else {
                iVar4 = FUN_004179cc(puVar6,L"AAAA",4);
                if (iVar4 == 0) {
                  FUN_00419b4c();
                  uVar3 = FUN_00419928();
                  FUN_00419a58(*(undefined4 *)(&DAT_00785d2c + (uVar3 & 0xffff) * 4));
                  local_18 = local_18 + 3;
                }
                else {
                  iVar4 = FUN_004179cc(puVar6,&DAT_0041a664,3);
                  if (iVar4 == 0) {
                    FUN_00419b4c();
                    uVar3 = FUN_00419928();
                    FUN_00419a58(*(undefined4 *)(&DAT_00785d10 + (uVar3 & 0xffff) * 4));
                    local_18 = local_18 + 2;
                  }
                  else {
                    FUN_00419a14(&local_1a,1);
                  }
                }
              }
            }
          }
          break;
        case 0x43:
          FUN_00419b18();
          FUN_00419e7c(DAT_00785c98);
          puVar7 = &stack0xfffffffc;
          FUN_00419b84();
          if (((local_c != 0) || (local_e != 0)) || (local_10 != 0)) {
            FUN_00419a14(&DAT_0041a66c,1,puVar7);
            FUN_00419e7c(DAT_00785cb0);
          }
          break;
        case 0x44:
          FUN_00419b18();
          if (local_20 - 1U < 2) {
            puVar7 = &stack0xfffffffc;
            FUN_00419b4c();
            FUN_00419acc(local_a,local_20,puVar7,param_4);
          }
          else if (local_20 == 3) {
            uVar3 = FUN_00419928();
            FUN_00419a58(*(undefined4 *)(&DAT_00785d10 + (uVar3 & 0xffff) * 4));
          }
          else if (local_20 == 4) {
            uVar3 = FUN_00419928();
            FUN_00419a58(*(undefined4 *)(&DAT_00785d2c + (uVar3 & 0xffff) * 4));
          }
          else if (local_20 == 5) {
            FUN_00419e7c(DAT_00785c98);
          }
          else {
            FUN_00419e7c(DAT_00785c9c);
          }
          break;
        case 0x45:
          FUN_00419b18();
          puVar7 = &stack0xfffffffc;
          FUN_00419b4c();
          FUN_00419d50(local_20,&local_30,puVar7,&stack0xfffffffc,param_4);
          FUN_00419a58(local_30);
          break;
        case 0x47:
          FUN_00419b18();
          puVar7 = &stack0xfffffffc;
          FUN_00419b4c();
          FUN_00419bc4(local_20,&local_2c,puVar7,&stack0xfffffffc,param_4);
          FUN_00419a58(local_2c);
          break;
        case 0x48:
          FUN_00419b18();
          FUN_00419b84();
          local_26 = 0;
          puVar2 = local_18;
          while (*puVar2 != 0) {
            if ((*puVar2 < 0xd800) || (0xdfff < *puVar2)) {
              uVar5 = *puVar2;
              if (uVar5 < 0x49) {
                if (uVar5 == 0x48) break;
                if ((uVar5 == 0x22) || (uVar5 == 0x27)) {
                  local_26 = local_26 ^ 1;
                }
                else if (uVar5 == 0x41) goto LAB_0041a1eb;
              }
              else if (uVar5 == 0x61) {
LAB_0041a1eb:
                if (local_26 == 0) {
                  iVar4 = FUN_004179cc(puVar2,L"AM/PM",5);
                  if (((iVar4 == 0) || (iVar4 = FUN_004179cc(puVar2,&DAT_0041a644,3), iVar4 == 0))
                     || (iVar4 = FUN_004179cc(puVar2,L"AMPM",4), iVar4 == 0)) {
                    local_25 = '\x01';
                  }
                  break;
                }
              }
              else if (uVar5 == 0x68) break;
              puVar2 = puVar2 + 1;
            }
            else {
              puVar2 = (ushort *)FUN_0041d7c8(puVar2);
            }
          }
          local_28 = local_c;
          if (local_25 != '\0') {
            if (local_c == 0) {
              local_28 = 0xc;
            }
            else if (0xc < local_c) {
              local_28 = local_c - 0xc;
            }
          }
          if (2 < local_20) {
            local_20 = 2;
          }
          FUN_00419acc(local_28,local_20);
          break;
        case 0x4d:
          FUN_00419b18();
          puVar7 = &stack0xfffffffc;
          FUN_00419b4c();
          if (local_20 - 1U < 2) {
            FUN_00419acc(local_8,local_20,puVar7,param_4);
          }
          else if (local_20 - 1U == 2) {
            FUN_00419a58((&DAT_00785cb0)[local_8]);
          }
          else {
            FUN_00419a58(*(undefined4 *)(&DAT_00785ce0 + (uint)local_8 * 4));
          }
          break;
        case 0x4e:
          FUN_00419b18();
          puVar7 = &stack0xfffffffc;
          FUN_00419b84();
          if (2 < local_20) {
            local_20 = 2;
          }
          FUN_00419acc(local_e,local_20,puVar7,param_4);
          break;
        case 0x53:
          FUN_00419b18();
          puVar7 = &stack0xfffffffc;
          FUN_00419b84();
          if (2 < local_20) {
            local_20 = 2;
          }
          FUN_00419acc(local_10,local_20,puVar7,param_4);
          break;
        case 0x54:
          FUN_00419b18();
          if (local_20 == 1) {
            FUN_00419e7c(DAT_00785cac);
          }
          else {
            FUN_00419e7c(DAT_00785cb0);
          }
          break;
        case 0x59:
          FUN_00419b18();
          puVar7 = &stack0xfffffffc;
          FUN_00419b4c();
          if (local_20 < 3) {
            FUN_00419acc((uint)local_6 % 100,2,100,param_4);
          }
          else {
            FUN_00419acc(local_6,4,puVar7,param_4);
          }
          break;
        case 0x5a:
          FUN_00419b18();
          puVar7 = &stack0xfffffffc;
          FUN_00419b84();
          if (3 < local_20) {
            local_20 = 3;
          }
          FUN_00419acc(local_12,local_20,puVar7,param_4);
        }
      }
      else {
        local_18 = (ushort *)FUN_0041d7c8(local_18);
        local_24 = 0x20;
      }
    }
    *(int *)(param_4 + -0x208) = *(int *)(param_4 + -0x208) + -1;
    puVar7 = puStack_40;
  }
  puStack_40 = puVar7;
  puVar7 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_0041a630;
  puStack_44 = (undefined1 *)0x41a628;
  thunk_FUN_00406e80(&local_30,2,puVar7);
  return;
}
