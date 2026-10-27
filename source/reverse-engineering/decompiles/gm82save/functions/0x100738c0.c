// rea decompile_all
// name: FUN_100738c0
// address: 0x100738c0
// body: available
// range: 0x100738c0-0x10073940 inclusive
// range: 0x10073950-0x10073995 inclusive
// range: 0x100739a0-0x100739fd inclusive
// range: 0x10073a00-0x10073a3e inclusive
// range: 0x10073a40-0x10073b18 inclusive
// range: 0x10073b20-0x10073dc0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100738c0(int *param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  byte *lpMem;
  byte bVar4;
  undefined4 *puVar5;
  HANDLE pvVar6;
  BOOL BVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *extraout_ECX;
  byte *pbVar11;
  undefined1 uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char local_7c;
  undefined1 local_7b;
  undefined2 local_7a;
  int local_78;
  byte *pbStack_74;
  undefined4 *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  char local_44;
  undefined1 local_43;
  undefined2 local_42;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  int local_20;
  byte *pbStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;

  if (param_1 == (int *)0x0) {
    param_1 = (int *)&DAT_00000004;
  }
  if (param_2 != 0) {
    piVar1 = param_1 + param_2;
    do {
      iVar3 = *param_1;
      uVar17 = 0;
      uVar18 = 0;
      puVar14 = *(undefined1 **)(iVar3 + 0x44);
      if ((-1 < (int)puVar14) && (puVar14 < _DAT_0077f0e0)) {
        iVar8 = _DAT_0077f0dc;
        if (_DAT_0077f0dc == 0) {
          iVar8 = 8;
        }
        uVar2 = *(undefined8 *)(iVar8 + (int)puVar14 * 8);
        uVar17 = (undefined4)uVar2;
        uVar18 = (undefined4)((ulonglong)uVar2 >> 0x20);
      }
      if (DAT_10163290 <= (double)CONCAT44(uVar18,uVar17) &&
          (double)CONCAT44(uVar18,uVar17) != DAT_10163290) {
        return CONCAT31((int3)((uint)puVar14 >> 8),1);
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar8 = 0;
        do {
          iVar10 = *(int *)(iVar3 + 0x24 + iVar8 * 4);
          puVar5 = (undefined4 *)FUN_10049460(&local_7c,*(ushort **)(iVar3 + 0x4c + iVar8 * 4));
          lpMem = pbStack_74;
          if (local_7c != -1) {
            local_20 = local_78;
            pbStack_1c = pbStack_74;
            puStack_18 = puStack_70;
            uStack_14 = uStack_6c;
            local_58 = CONCAT44(uStack_68,uStack_6c);
            local_50 = local_64;
            local_48 = local_5c;
            goto LAB_10073ce8;
          }
          if (puStack_70 == (undefined4 *)0x1) {
            bVar4 = *pbStack_74;
            puVar5 = (undefined4 *)(uint)bVar4;
            uVar12 = 1;
            if ((puVar5 != (undefined4 *)0x2b) && (puVar5 != (undefined4 *)0x2d)) goto LAB_100739b8;
            goto LAB_10073cd0;
          }
          if (puStack_70 == (undefined4 *)0x0) {
            uVar12 = 0;
            goto LAB_10073cd0;
          }
          bVar4 = *pbStack_74;
LAB_100739b8:
          puVar9 = puStack_70;
          pbVar11 = pbStack_74;
          if (bVar4 == 0x2d) {
            puVar5 = (undefined4 *)((int)puStack_70 + -1);
            if (&DAT_00000008 < puStack_70) {
              puVar14 = (undefined1 *)0x0;
              do {
                pbVar11 = pbVar11 + 1;
                iVar13 = (int)((longlong)(int)puVar14 * 10);
                if ((longlong)iVar13 != (longlong)(int)puVar14 * 10) {
                  puVar5 = (undefined4 *)0x3;
                  goto LAB_10073d9b;
                }
                puVar9 = (undefined4 *)(*pbVar11 - 0x30);
                if ((undefined4 *)0x9 < puVar9) goto LAB_10073ccb;
                puVar14 = (undefined1 *)(iVar13 - (int)puVar9);
                if (SBORROW4(iVar13,(int)puVar9)) {
                  uVar12 = 3;
                  puStack_70 = puVar9;
                  goto LAB_10073cd0;
                }
                puVar5 = (undefined4 *)((int)puVar5 + -1);
              } while (puVar5 != (undefined4 *)0x0);
              puVar5 = (undefined4 *)0x0;
            }
            else {
              puVar14 = (undefined1 *)0x0;
              bVar16 = puVar5 != (undefined4 *)0x0;
              puVar5 = (undefined4 *)0x0;
              if (bVar16) {
                puVar5 = (undefined4 *)0x1;
                do {
                  pbVar11 = pbStack_74 + (int)puVar5;
                  if (9 < *pbVar11 - 0x30) goto LAB_10073ccb;
                  puVar5 = (undefined4 *)((int)puVar5 + 1);
                  puVar14 = (undefined1 *)((int)puVar14 * 10 - (*pbVar11 - 0x30));
                } while (puStack_70 != puVar5);
              }
            }
          }
          else {
            puVar5 = (undefined4 *)(uint)bVar4;
            if (puVar5 == (undefined4 *)0x2b) {
              pbVar11 = pbStack_74 + 1;
              puVar9 = (undefined4 *)((int)puStack_70 + -1);
            }
            puVar14 = (undefined1 *)0x0;
            if ((undefined4 *)0x7 < puVar9) {
LAB_10073a50:
              iVar13 = (int)((longlong)(int)puVar14 * 10);
              if ((longlong)iVar13 != (longlong)(int)puVar14 * 10) {
                puVar5 = (undefined4 *)0x2;
LAB_10073d9b:
                puVar9 = (undefined4 *)0x1;
                if ((byte)(*pbVar11 - 0x30) < 10) {
                  puVar9 = puVar5;
                }
                uVar12 = SUB41(puVar9,0);
                puStack_70 = (undefined4 *)(uint)(byte)(*pbVar11 - 0x30);
                goto LAB_10073cd0;
              }
              puVar5 = (undefined4 *)(*pbVar11 - 0x30);
              if ((undefined4 *)0x9 < puVar5) goto LAB_10073ccb;
              puVar14 = (undefined1 *)(iVar13 + (int)puVar5);
              if (!SCARRY4(iVar13,(int)puVar5)) goto code_r0x10073a70;
              uVar12 = 2;
              puStack_70 = puVar9;
              goto LAB_10073cd0;
            }
            puVar14 = (undefined1 *)0x0;
            for (; puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)((int)puVar9 + -1)) {
              puVar5 = (undefined4 *)(*pbVar11 - 0x30);
              if ((undefined4 *)0x9 < puVar5) goto LAB_10073ccb;
              pbVar11 = pbVar11 + 1;
              puVar14 = (undefined1 *)((int)puVar5 + (int)puVar14 * 10);
            }
          }
LAB_10073ab0:
          if (local_78 != 0) {
            pvVar6 = GetProcessHeap();
            puVar5 = (undefined4 *)HeapFree(pvVar6,0,lpMem);
          }
          local_20 = 0;
          pbStack_1c = (byte *)0x0;
          if ((-1 < (int)puVar14) && (uVar15 = iVar10 - 5, uVar15 < 10)) {
            puVar5 = (undefined4 *)((&switchD_10073ae9::switchdataD_10073dc4)[uVar15] + 0x100738d8);
            switch(iVar10) {
            case 5:
              local_20 = -1;
              pbStack_1c = (byte *)0x7fefffff;
              if (puVar14 < _DAT_0077f4d8) {
                iVar10 = _DAT_0077f4c4;
                if (_DAT_0077f4c4 == 0) {
                  iVar10 = 4;
                }
                puVar5 = (undefined4 *)&DAT_0077f4d0;
LAB_10073c83:
                pbStack_1c = (byte *)0x7fefffff;
                local_20 = -1;
                if (*(int *)(iVar10 + (int)puVar14 * 4) != 0) {
                  puVar5 = (undefined4 *)*puVar5;
                  if (puVar5 == (undefined4 *)0x0) {
                    puVar5 = (undefined4 *)&DAT_00000008;
                  }
                  local_20 = (int)*(undefined8 *)(puVar5 + (int)puVar14 * 2);
                  pbStack_1c = (byte *)((ulonglong)*(undefined8 *)(puVar5 + (int)puVar14 * 2) >>
                                       0x20);
                }
              }
              break;
            case 6:
              local_20 = -1;
              pbStack_1c = (byte *)0x7fefffff;
              if (puVar14 < _DAT_0077f2c8) {
                iVar10 = _DAT_0077f2b8;
                if (_DAT_0077f2b8 == 0) {
                  iVar10 = 4;
                }
                puVar5 = (undefined4 *)&DAT_0077f2c4;
                goto LAB_10073c83;
              }
              break;
            case 7:
              local_20 = -1;
              pbStack_1c = (byte *)0x7fefffff;
              if (puVar14 < _DAT_0077f1c0) {
                iVar10 = _DAT_0077f1ac;
                if (_DAT_0077f1ac == 0) {
                  iVar10 = 4;
                }
                puVar5 = (undefined4 *)&DAT_0077f1b8;
                goto LAB_10073c83;
              }
              break;
            case 8:
              local_20 = -1;
              pbStack_1c = (byte *)0x7fefffff;
              if (puVar14 < _DAT_0077f618) {
                iVar10 = _DAT_0077f608;
                if (_DAT_0077f608 == 0) {
                  iVar10 = 4;
                }
                puVar5 = (undefined4 *)&DAT_0077f614;
                goto LAB_10073c83;
              }
              break;
            case 9:
              local_20 = -1;
              pbStack_1c = (byte *)0x7fefffff;
              if (puVar14 < _DAT_0077f2dc) {
                iVar10 = _DAT_0077f2cc;
                if (_DAT_0077f2cc == 0) {
                  iVar10 = 4;
                }
                puVar5 = (undefined4 *)&DAT_0077f2d8;
                goto LAB_10073c83;
              }
              break;
            case 10:
              local_20 = -1;
              pbStack_1c = (byte *)0x7fefffff;
              if (puVar14 < _DAT_0077f0e0) {
                iVar10 = _DAT_0077f0d0;
                if (_DAT_0077f0d0 == 0) {
                  iVar10 = 4;
                }
                puVar5 = (undefined4 *)&DAT_0077f0dc;
                goto LAB_10073c83;
              }
              break;
            case 0xb:
              local_20 = -1;
              pbStack_1c = (byte *)0x7fefffff;
              if (puVar14 < _DAT_0077f3b8) {
                iVar10 = _DAT_0077f3a8;
                if (_DAT_0077f3a8 == 0) {
                  iVar10 = 4;
                }
                puVar5 = (undefined4 *)&DAT_0077f3b4;
                goto LAB_10073c83;
              }
              break;
            case 0xc:
              local_20 = -1;
              pbStack_1c = (byte *)0x7fefffff;
              if (puVar14 < _DAT_0077f50c) {
                iVar10 = _DAT_0077f4fc;
                if (_DAT_0077f4fc == 0) {
                  iVar10 = 4;
                }
                puVar5 = (undefined4 *)&DAT_0077f508;
                goto LAB_10073c83;
              }
              break;
            case 0xe:
              local_20 = -1;
              pbStack_1c = (byte *)0x7fefffff;
              if (puVar14 < _DAT_0077f4f4) {
                iVar10 = _DAT_0077f4e4;
                if (_DAT_0077f4e4 == 0) {
                  iVar10 = 4;
                }
                puVar5 = (undefined4 *)&DAT_0077f4f0;
                goto LAB_10073c83;
              }
            }
          }
          if (DAT_10163290 <= (double)CONCAT44(pbStack_1c,local_20) &&
              (double)CONCAT44(pbStack_1c,local_20) != DAT_10163290) goto LAB_10073d34;
          puStack_18 = (undefined4 *)0x0;
          uStack_14 = 0;
          iVar8 = iVar8 + 1;
        } while (iVar8 != 8);
      }
      param_1 = param_1 + 1;
    } while (param_1 != piVar1);
  }
  return 0;
code_r0x10073a70:
  pbVar11 = pbVar11 + 1;
  puVar9 = (undefined4 *)((int)puVar9 + -1);
  if (puVar9 == (undefined4 *)0x0) goto LAB_10073ab0;
  goto LAB_10073a50;
LAB_10073ccb:
  uVar12 = 1;
  puStack_70 = puVar9;
LAB_10073cd0:
  local_7a = SUB42(puVar5,0);
  local_7c = '\t';
  local_7b = uVar12;
  if (local_78 != 0) {
    pvVar6 = GetProcessHeap();
    BVar7 = HeapFree(pvVar6,0,pbStack_74);
    puStack_70 = extraout_ECX;
    local_7a = (short)BVar7;
  }
LAB_10073ce8:
  local_40 = CONCAT44(pbStack_1c,local_20);
  local_34 = local_58;
  local_2c = local_50;
  local_24 = local_48;
  local_44 = local_7c;
  local_43 = local_7b;
  local_42 = local_7a;
  local_38 = puStack_70;
  puVar5 = (undefined4 *)FUN_10005ca0(&local_44);
LAB_10073d34:
  return CONCAT31((int3)((uint)puVar5 >> 8),1);
}
