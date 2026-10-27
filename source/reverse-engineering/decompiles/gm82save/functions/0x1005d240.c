// rea decompile_all
// name: FUN_1005d240
// address: 0x1005d240
// body: available
// range: 0x1005d240-0x1005d3b1 inclusive
// range: 0x1005d3c0-0x1005d454 inclusive
// range: 0x1005d460-0x1005d53c inclusive
// range: 0x1005d540-0x1005d5ce inclusive
// range: 0x1005d5d0-0x1005d720 inclusive
// range: 0x1005d730-0x1005d9bd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_1005d240(char *param_1,undefined4 *param_2,undefined4 param_3,byte *param_4,uint param_5,
            int *param_6,uint *param_7)

{
  byte *pbVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  HANDLE pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  LPVOID pvVar9;
  byte *pbVar10;
  SIZE_T SVar11;
  uint uVar12;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar13;
  undefined4 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte bVar18;
  byte *local_94;
  undefined4 local_8c;
  undefined4 *local_88;
  byte *local_80;
  undefined4 *local_7c;
  byte *local_78;
  int local_74;
  LPVOID local_70;
  LPVOID pvStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined3 local_5f;
  HANDLE pvStack_5c;
  HANDLE pvStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined8 local_44;
  undefined8 local_3c;
  LPVOID local_28;
  int iStack_24;
  HANDLE pvStack_14;

  if (param_6[3] == 0) {
    *param_1 = -1;
  }
  else {
    FUN_10111020(param_7,param_4,param_5);
    FUN_10111020(param_7,&DAT_1013f4fe,8);
    FUN_1006b940((undefined1 *)&local_70,(void *)param_7[1],param_7[2]);
    if ((char)local_70 == -1) {
      pvStack_14 = pvStack_58;
      local_28 = pvStack_6c;
      iStack_24 = iStack_68;
      local_4c = *(undefined4 *)(_DAT_0079a9e8 + 0x2d8);
      local_88 = FUN_10107380(0,4);
      if (local_88 == (undefined4 *)0x0) {
        FUN_1013679e(4,4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_94 = (byte *)0x1;
      *local_88 = *param_2;
      local_80 = (byte *)0x1;
      local_78 = (byte *)0x1;
      pvStack_5c = pvStack_14;
      local_70 = local_28;
      pvStack_6c = (LPVOID)iStack_24;
      local_7c = local_88;
      while( true ) {
        FUN_10090ef0(&local_44,(int *)&local_70);
        if ((int)local_44 == -2) break;
        pbVar17 = local_44._4_4_;
        if ((int)local_44 == -1) {
          *param_1 = '\0';
          *(byte **)(param_1 + 4) = local_44._4_4_;
          *(byte **)(param_1 + 8) = (byte *)local_3c;
LAB_1005d847:
          if (pvStack_6c != (LPVOID)0x0) {
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,local_70);
          }
          CloseHandle(pvStack_5c);
          puVar6 = local_7c;
          goto joined_r0x1005d7cc;
        }
        iVar8 = (int)local_44;
        if ((byte *)local_3c != (byte *)0x0) {
          pbVar15 = (byte *)0x0;
          local_74 = (int)local_44;
          pbVar10 = local_44._4_4_;
          do {
            bVar18 = *pbVar10;
            uVar13 = (uint)bVar18;
            if ((char)bVar18 < '\0') {
              if (bVar18 < 0xe0) {
                pbVar1 = pbVar10 + 2;
                uVar13 = (uVar13 & 0x1f) << 6 | pbVar10[1] & 0x3f;
              }
              else {
                uVar5 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
                if (bVar18 < 0xf0) {
                  pbVar1 = pbVar10 + 3;
                  uVar13 = uVar5 | (uVar13 & 0x1f) << 0xc;
                }
                else {
                  pbVar1 = pbVar10 + 4;
                  uVar13 = pbVar10[3] & 0x3f | uVar5 << 6 | (uVar13 & 7) << 0x12;
                }
              }
            }
            else {
              pbVar1 = pbVar10 + 1;
            }
            if ((4 < uVar13 - 9) && (uVar13 != 0x20)) {
              pbVar16 = pbVar15;
              if (uVar13 < 0x85) break;
              uVar5 = uVar13 >> 8;
              if (uVar5 < 0x20) {
                if (uVar5 == 0) {
                  bVar18 = (&DAT_10154dd4)[uVar13 & 0xff];
                }
                else {
                  if (uVar5 != 0x16) break;
                  bVar18 = uVar13 == 0x1680;
                }
              }
              else if (uVar5 == 0x20) {
                bVar18 = (byte)(&DAT_10154dd4)[uVar13 & 0xff] >> 1;
              }
              else {
                if (uVar5 != 0x30) break;
                bVar18 = uVar13 == 0x3000;
              }
              if ((bVar18 & 1) == 0) break;
            }
            pbVar15 = pbVar1 + ((int)pbVar15 - (int)pbVar10);
            pbVar10 = pbVar1;
            pbVar16 = (byte *)local_3c;
          } while (pbVar1 != local_44._4_4_ + (int)(byte *)local_3c);
          if (pbVar16 + 1 < local_94) {
            local_94 = pbVar16 + 1;
          }
          uVar13 = (int)(byte *)local_3c - (int)pbVar16;
          local_78 = local_94;
          if (uVar13 == 0) {
LAB_1005d7e2:
            SVar11 = param_7[2];
            if (SVar11 == 0) {
              pvVar9 = (LPVOID)0x1;
            }
            else {
              _Src = (void *)param_7[1];
              pvVar9 = FUN_10107380(0,SVar11);
              if (pvVar9 == (LPVOID)0x0) {
                FUN_101366bc(1);
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              memcpy(pvVar9,_Src,SVar11);
            }
            *param_1 = '\x06';
            *(SIZE_T *)(param_1 + 4) = SVar11;
            *(LPVOID *)(param_1 + 8) = pvVar9;
            *(SIZE_T *)(param_1 + 0xc) = SVar11;
            param_1[0x10] = '\0';
          }
          else {
            pbVar16 = pbVar16 + (int)local_44._4_4_;
            bVar18 = *pbVar16;
            uVar5 = (uint)bVar18;
            if (-1 < (char)bVar18) {
joined_r0x1005d576:
              if (uVar5 != 0x2b) goto LAB_1005d57c;
LAB_1005d650:
              if ((1 < uVar13) && ((char)pbVar16[1] < -0x40)) goto LAB_1005d964;
              local_8c = 2;
              bVar3 = true;
              uVar14 = 0;
LAB_1005d671:
              if (local_94 == (byte *)0x0) {
                FUN_10136b20(&PTR_s_src_load_rs_10142050);
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              local_48 = FUN_10003510(pbVar16 + 1,uVar13 - 1);
              uVar7 = (*(code *)0x4ae1e8)();
              (*(code *)0x407ea8)();
              iVar8 = (*(code *)0x405a4c)();
              *(undefined4 *)(iVar8 + 4) = local_8c;
              *(undefined4 *)(iVar8 + 8) = param_3;
              *(undefined4 *)(iVar8 + 0xc) = uVar14;
              (*(code *)0x4ac9b4)();
              (*(code *)0x4acb64)();
              iVar8 = local_74;
              if (bVar3) {
                if (local_94 == local_80) {
                  FUN_10135e40((uint *)&local_80);
                  local_88 = local_7c;
                }
                local_88[(int)local_94] = uVar7;
                local_94 = local_94 + 1;
                local_78 = local_94;
                iVar8 = local_74;
              }
              goto joined_r0x1005d3c2;
            }
            if (bVar18 < 0xe0) {
              uVar5 = (uVar5 & 0x1f) << 6 | pbVar16[1] & 0x3f;
            }
            else {
              uVar12 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
              if (bVar18 < 0xf0) {
                uVar5 = uVar12 | (uVar5 & 0x1f) << 0xc;
                goto joined_r0x1005d576;
              }
              uVar5 = pbVar16[3] & 0x3f | uVar12 << 6 | (uVar5 & 7) << 0x12;
            }
            if (uVar5 == 0x2b) goto LAB_1005d650;
LAB_1005d57c:
            if (uVar5 != 0x7c) goto LAB_1005d7e2;
            if ((1 < uVar13) && ((char)pbVar16[1] < -0x40)) {
LAB_1005d964:
              FUN_10136b90((int)pbVar16,uVar13,1,uVar13,&PTR_s_src_load_rs_10142040);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            SVar11 = uVar13 - 1;
            puVar6 = (undefined4 *)FUN_100025a0(param_6,(uint *)(pbVar16 + 1),SVar11);
            if (puVar6 != (undefined4 *)0x0) {
              uVar14 = *puVar6;
              bVar3 = false;
              local_8c = 3;
              goto LAB_1005d671;
            }
            if (SVar11 == 0) {
              pvVar9 = (LPVOID)0x1;
            }
            else {
              pvVar9 = FUN_10107380(0,SVar11);
              if (pvVar9 == (LPVOID)0x0) {
                FUN_101366bc(1);
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              memcpy(pvVar9,pbVar16 + 1,SVar11);
            }
            if ((char)param_4[param_5 - 1] < -0x40) {
              FUN_10136b90((int)param_4,param_5,0,param_5 - 1,&PTR_s_src_load_rs_1013ffcc);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            puVar6 = FUN_10107380(0,0xd);
            if (puVar6 == (undefined4 *)0x0) {
              FUN_101366bc(1);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            *(undefined1 *)(puVar6 + 3) = 0x65;
            puVar6[2] = 0x65727420;
            puVar6[1] = 0x65637275;
            *puVar6 = 0x6f736572;
            *param_1 = '\x05';
            *(byte **)(param_1 + 4) = param_4;
            *(uint *)(param_1 + 8) = param_5 - 1;
            *(SIZE_T *)(param_1 + 0xc) = SVar11;
            *(LPVOID *)(param_1 + 0x10) = pvVar9;
            *(SIZE_T *)(param_1 + 0x14) = SVar11;
            param_1[0x18] = '\r';
            param_1[0x19] = '\0';
            param_1[0x1a] = '\0';
            param_1[0x1b] = '\0';
            *(undefined4 **)(param_1 + 0x1c) = puVar6;
            param_1[0x20] = '\r';
            param_1[0x21] = '\0';
            param_1[0x22] = '\0';
            param_1[0x23] = '\0';
          }
          if (local_74 != 0) {
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,pbVar17);
          }
          goto LAB_1005d847;
        }
joined_r0x1005d3c2:
        if (iVar8 != 0) {
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,pbVar17);
        }
      }
      if (pvStack_6c != (LPVOID)0x0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,local_70);
      }
      CloseHandle(pvStack_5c);
      pbVar17 = (byte *)param_7[1];
      uVar13 = param_7[2];
      iVar8 = FUN_10110f10(pbVar17,uVar13);
      if (iVar8 != 0) {
        FUN_10110e70((int)param_7,extraout_EDX);
        pbVar17 = (byte *)param_7[1];
        uVar13 = param_7[2];
      }
      iVar8 = FUN_10110f10(pbVar17,uVar13);
      if (iVar8 != 0) {
        FUN_10110e70((int)param_7,extraout_EDX_00);
      }
      *param_1 = -1;
      puVar6 = local_7c;
joined_r0x1005d7cc:
      if (local_80 != (byte *)0x0) {
        local_7c = puVar6;
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,puVar6);
      }
    }
    else {
      *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_60,CONCAT43(uStack_64,iStack_68._1_3_));
      *(ulonglong *)(param_1 + 1) =
           CONCAT17((undefined1)iStack_68,CONCAT43(pvStack_6c,local_70._1_3_));
      *(HANDLE *)(param_1 + 0x18) = pvStack_58;
      *(ulonglong *)(param_1 + 0x11) = CONCAT17(pvStack_58._0_1_,CONCAT43(pvStack_5c,local_5f));
      *param_1 = (char)local_70;
      *(undefined4 *)(param_1 + 0x20) = local_50;
      *(undefined4 *)(param_1 + 0x1c) = local_54;
    }
  }
  return;
}
