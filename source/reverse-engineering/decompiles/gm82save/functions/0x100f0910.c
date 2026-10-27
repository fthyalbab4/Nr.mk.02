// rea decompile_all
// name: FUN_100f0910
// address: 0x100f0910
// body: available
// range: 0x100f0910-0x100f094c inclusive
// range: 0x100f0950-0x100f0af5 inclusive
// range: 0x100f0b00-0x100f0b97 inclusive
// range: 0x100f0ba0-0x100f0c34 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100f0910(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int local_7c;
  uint local_70;
  int iStack_6c;
  uint local_68;
  uint *local_64;
  int *local_60;
  int *local_5c;
  undefined8 local_58;
  int local_50;
  undefined8 local_4c;
  uint local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int iStack_2c;
  undefined8 local_28;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;

  piVar2 = (int *)*param_1;
  if (((char)piVar2[0x19] == '\x01') && (iVar3 = param_1[2], piVar2[0x14] != iVar3)) {
    piVar1 = piVar2 + 0x14;
    local_64 = (uint *)(piVar2 + 1);
    local_60 = param_1;
    local_5c = piVar2;
    do {
      while ((uVar9 = FUN_100f0c40(param_1), 4 < uVar9 - 9 && (uVar9 != 0x20))) {
        if (0x84 < uVar9) {
          uVar11 = uVar9 >> 8;
          if (uVar11 < 0x20) {
            if (uVar11 == 0) {
              bVar8 = (&DAT_10154dd4)[uVar9 & 0xff];
joined_r0x100f09bc:
              if ((bVar8 & 1) != 0) break;
            }
            else if ((uVar11 == 0x16) && (uVar9 == 0x1680)) break;
          }
          else {
            if (uVar11 == 0x20) {
              bVar8 = (byte)(&DAT_10154dd4)[uVar9 & 0xff] >> 1;
              goto joined_r0x100f09bc;
            }
            if ((uVar11 == 0x30) && (uVar9 == 0x3000)) break;
          }
        }
        uVar9 = FUN_100f0c40(param_1);
        if (uVar9 != 0x23) {
          return;
        }
        local_50 = piVar2[0x16];
        local_58 = *(undefined8 *)piVar1;
        local_70 = 0;
        iStack_6c = 1;
        local_68 = 0;
        FUN_100f1250(param_1);
        if (*piVar1 != iVar3) {
          uVar9 = 0;
          local_7c = 1;
          do {
            uVar11 = FUN_100f0c40(param_1);
            FUN_100f1250(param_1);
            if (uVar11 == 10) break;
            uVar13 = 1;
            if ((0x7f < uVar11) && (uVar13 = 2, 0x7ff < uVar11)) {
              uVar13 = 4 - (uVar11 < 0x10000);
            }
            if (local_70 - uVar9 < uVar13) {
              FUN_101359e0(&local_70,uVar9,uVar13,(LPVOID)0x1,1);
              local_7c = iStack_6c;
              if (0x7f < uVar11) goto LAB_100f0b73;
LAB_100f0b00:
              *(byte *)(local_7c + uVar9) = (byte)uVar11;
            }
            else {
              if (uVar11 < 0x80) goto LAB_100f0b00;
LAB_100f0b73:
              bVar8 = (byte)uVar11 & 0x3f | 0x80;
              bVar10 = (byte)(uVar11 >> 6);
              if (uVar11 < 0x800) {
                *(byte *)(local_7c + uVar9) = bVar10 | 0xc0;
                *(byte *)(local_7c + 1 + uVar9) = bVar8;
              }
              else {
                bVar10 = bVar10 & 0x3f | 0x80;
                bVar12 = (byte)(uVar11 >> 0xc);
                if (uVar11 < 0x10000) {
                  *(byte *)(local_7c + uVar9) = bVar12 | 0xe0;
                  *(byte *)(local_7c + 1 + uVar9) = bVar10;
                  *(byte *)(local_7c + 2 + uVar9) = bVar8;
                }
                else {
                  *(byte *)(local_7c + uVar9) = (byte)(uVar11 >> 0x12) | 0xf0;
                  *(byte *)(local_7c + 1 + uVar9) = bVar12 & 0x3f | 0x80;
                  *(byte *)(local_7c + 2 + uVar9) = bVar10;
                  *(byte *)(local_7c + 3 + uVar9) = bVar8;
                  param_1 = local_60;
                }
              }
            }
            uVar9 = uVar9 + uVar13;
            local_68 = uVar9;
          } while (*piVar1 != iVar3);
        }
        piVar7 = local_5c;
        local_4c = CONCAT44(iStack_6c,local_70);
        iStack_2c = piVar2[0x16];
        local_44 = local_68;
        uStack_1c = (undefined4)*(undefined8 *)piVar1;
        uStack_18 = (undefined4)((ulonglong)*(undefined8 *)piVar1 >> 0x20);
        local_20 = local_50;
        local_28 = local_58;
        uStack_40 = (undefined4)local_58;
        uStack_3c = (undefined4)((ulonglong)local_58 >> 0x20);
        local_30 = uStack_18;
        iStack_38 = local_50;
        uStack_34 = uStack_1c;
        iStack_14 = iStack_2c;
        if (*local_5c != 0) {
          FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10153d0c);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        *local_5c = -1;
        iVar4 = local_5c[3];
        if (iVar4 == local_5c[1]) {
          FUN_1013bd80(local_64);
        }
        iVar5 = piVar7[2];
        *(int *)(iVar5 + 0x20 + iVar4 * 0x24) = iStack_2c;
        *(ulonglong *)(iVar5 + 0x18 + iVar4 * 0x24) = CONCAT44(local_30,uStack_34);
        *(ulonglong *)(iVar5 + 0x10 + iVar4 * 0x24) = CONCAT44(iStack_38,uStack_3c);
        *(ulonglong *)(iVar5 + 8 + iVar4 * 0x24) = CONCAT44(uStack_40,local_44);
        *(undefined8 *)(iVar5 + iVar4 * 0x24) = local_4c;
        piVar7[3] = iVar4 + 1;
        *piVar7 = *piVar7 + 1;
        if (*piVar1 == iVar3) {
          return;
        }
      }
      FUN_100f1250(param_1);
    } while (*piVar1 != iVar3);
  }
  return;
}
