// rea decompile_all
// name: FUN_10124a50
// address: 0x10124a50
// body: available
// range: 0x10124a50-0x10124ba5 inclusive
// range: 0x10124bb0-0x10124c4b inclusive
// range: 0x10124c50-0x10124e50 inclusive
// range: 0x10124e60-0x101251fc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char __cdecl FUN_10124a50(int *param_1,char param_2)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  uint *puVar17;
  bool bVar18;
  undefined1 local_39;
  uint local_38;
  int local_34;
  uint local_30;
  uint *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined8 local_20 [2];

  iVar11 = param_1[7];
  cVar16 = *(char *)(iVar11 + 5);
  if (param_2 == '\x04') {
    if (cVar16 != '\0') {
      if (cVar16 == '\x02') goto LAB_10124b8c;
      bVar4 = *(char *)(iVar11 + 0x70) + 7;
      if (bVar4 < 0x40) {
        *(byte *)(iVar11 + 0x70) = bVar4;
      }
      else {
        FUN_1012a990((int *)(iVar11 + 0x58),0,0,bVar4);
      }
      *(undefined1 *)(iVar11 + 5) = 0;
      *(undefined4 *)(iVar11 + 0x3c) = *(undefined4 *)(iVar11 + 0x10);
      FUN_1012b0b0((int)param_1);
      if (param_1[4] == 0) {
        return '\0';
      }
      iVar11 = param_1[7];
    }
    bVar4 = *(byte *)(iVar11 + 0x70);
    bVar5 = bVar4 + 3;
    if (bVar5 < 0x40) {
      uVar9 = 3 << (bVar4 & 0x1f);
      uVar10 = uVar9;
      uVar14 = 0 << (bVar4 & 0x1f) | 3U >> 0x20 - (bVar4 & 0x1f);
      if ((bVar4 & 0x20) != 0) {
        uVar10 = 0;
        uVar14 = uVar9;
      }
      *(uint *)(iVar11 + 0x68) = *(uint *)(iVar11 + 0x68) | uVar10;
      *(uint *)(iVar11 + 0x6c) = *(uint *)(iVar11 + 0x6c) | uVar14;
      *(byte *)(iVar11 + 0x70) = bVar5;
      *(undefined1 *)(iVar11 + 5) = 2;
    }
    else {
      FUN_1012a990((int *)(iVar11 + 0x58),3,0,bVar5);
      *(undefined1 *)(iVar11 + 5) = 2;
    }
  }
  else {
    if ((cVar16 != '\0') || (*(int *)(iVar11 + 0x24) == 0)) goto LAB_10124b8c;
    bVar4 = *(byte *)(iVar11 + 0x70);
    bVar5 = bVar4 + 3;
    if (bVar5 < 0x40) {
      uVar9 = 2 << (bVar4 & 0x1f);
      uVar10 = uVar9;
      uVar14 = 0 << (bVar4 & 0x1f) | 2U >> 0x20 - (bVar4 & 0x1f);
      if ((bVar4 & 0x20) != 0) {
        uVar10 = 0;
        uVar14 = uVar9;
      }
      *(uint *)(iVar11 + 0x6c) = *(uint *)(iVar11 + 0x6c) | uVar14;
      *(uint *)(iVar11 + 0x68) = *(uint *)(iVar11 + 0x68) | uVar10;
      *(byte *)(iVar11 + 0x70) = bVar5;
    }
    else {
      FUN_1012a990((int *)(iVar11 + 0x58),2,0,bVar5);
    }
    *(undefined1 *)(iVar11 + 5) = 1;
  }
  *(undefined4 *)(iVar11 + 0x3c) = *(undefined4 *)(iVar11 + 0x10);
LAB_10124b8c:
  local_24 = (uint)(param_2 == '\x04' | 2);
LAB_10124bdc:
  do {
    if ((uint)(*(int *)(iVar11 + 0x4c) << 2) <= *(int *)(iVar11 + 100) + 8U) {
      FUN_1012b0b0((int)param_1);
      if (param_1[4] == 0) {
        if (param_2 != '\x04') {
          return '\0';
        }
        if (param_1[1] != 0) {
          return '\0';
        }
        if (*(char *)(param_1[7] + 0x70) != '\0') {
          return '\0';
        }
        bVar18 = *(char *)(param_1[7] + 5) == '\0';
        goto LAB_101250da;
      }
      iVar11 = param_1[7];
    }
    if (0x105 < *(uint *)(iVar11 + 0x24)) {
      puVar17 = (uint *)(iVar11 + 0x24);
      goto LAB_10124c53;
    }
    FUN_10123b30(param_1);
    iVar11 = param_1[7];
    uVar14 = *(uint *)(iVar11 + 0x24);
    if (param_2 == '\0' && uVar14 < 0x106) {
      return '\0';
    }
    if (uVar14 == 0) {
      uVar14 = 2;
      if (*(uint *)(iVar11 + 0x10) < 2) {
        uVar14 = *(uint *)(iVar11 + 0x10);
      }
      *(uint *)(iVar11 + 0x80) = uVar14;
      if (*(char *)(iVar11 + 5) != '\0') {
        bVar4 = *(char *)(iVar11 + 0x70) + 7;
        if (bVar4 < 0x40) {
          *(byte *)(iVar11 + 0x70) = bVar4;
        }
        else {
          FUN_1012a990((int *)(iVar11 + 0x58),0,0,bVar4);
        }
        if (param_2 == '\x04') {
          local_20[0] = *(undefined8 *)(iVar11 + 0x68);
          bVar4 = ((*(byte *)(iVar11 + 0x70) >> 3) + 1) - ((*(byte *)(iVar11 + 0x70) & 7) == 0);
          uVar14 = (uint)bVar4;
          if (8 < bVar4) {
            FUN_10136a50(0,uVar14,8,&PTR_s_C__Users_runneradmin__cargo_regi_1015bfa4);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar10 = *(uint *)(iVar11 + 0x5c);
          iVar2 = *(int *)(iVar11 + 100);
          uVar9 = *(int *)(iVar11 + 0x60) + iVar2;
          if (uVar10 - uVar9 < uVar14) {
            FUN_101369c0("buf.len() must fit in remaining()",0x43,
                         &PTR_s_C__Users_runneradmin__cargo_regi_1015bf94);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (uVar10 < uVar9) {
            FUN_10136a50(uVar9,uVar10,uVar10,&PTR_s_C__Users_runneradmin__cargo_regi_1015bf94);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          memcpy((void *)(uVar9 + *(int *)(iVar11 + 0x58)),local_20,uVar14);
          *(uint *)(iVar11 + 100) = iVar2 + uVar14;
          *(undefined1 *)(iVar11 + 0x70) = 0;
          *(undefined4 *)(iVar11 + 0x6c) = 0;
          *(undefined4 *)(iVar11 + 0x68) = 0;
        }
        *(undefined1 *)(iVar11 + 5) = 0;
        *(undefined4 *)(iVar11 + 0x3c) = *(undefined4 *)(iVar11 + 0x10);
        FUN_1012b0b0((int)param_1);
        if (param_1[4] == 0) {
          bVar18 = param_2 == '\x04';
LAB_101250da:
          return bVar18 * '\x02';
        }
      }
      return (param_2 == '\x04') * '\x02' + '\x01';
    }
    if (*(char *)(iVar11 + 5) == '\0') {
      bVar4 = *(byte *)(iVar11 + 0x70);
      bVar5 = bVar4 + 3;
      if (bVar5 < 0x40) {
        uVar6 = local_24 << (bVar4 & 0x1f);
        uVar9 = uVar6;
        uVar10 = 0 << (bVar4 & 0x1f) | local_24 >> 0x20 - (bVar4 & 0x1f);
        if ((bVar4 & 0x20) != 0) {
          uVar9 = 0;
          uVar10 = uVar6;
        }
        *(uint *)(iVar11 + 0x68) = *(uint *)(iVar11 + 0x68) | uVar9;
        *(uint *)(iVar11 + 0x6c) = *(uint *)(iVar11 + 0x6c) | uVar10;
        *(byte *)(iVar11 + 0x70) = bVar5;
      }
      else {
        FUN_1012a990((int *)(iVar11 + 0x58),local_24,0,bVar5);
        uVar14 = *(uint *)(iVar11 + 0x24);
      }
      *(char *)(iVar11 + 5) = (param_2 == '\x04') + '\x01';
      *(undefined4 *)(iVar11 + 0x3c) = *(undefined4 *)(iVar11 + 0x10);
      puVar17 = (uint *)(iVar11 + 0x24);
      if (uVar14 < 4) goto LAB_10124e99;
LAB_10124c53:
      uVar9 = *(uint *)(iVar11 + 0x10);
      uVar14 = *(uint *)(iVar11 + 0x18);
      local_34 = iVar11;
      if (uVar14 < uVar9) {
        FUN_10136a50(uVar9,uVar14,uVar14,&PTR_s_C__Users_runneradmin__cargo_regi_1015f988);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if (uVar14 - uVar9 < 4) {
        FUN_10136a50(0,4,uVar14 - uVar9,&PTR_s_C__Users_runneradmin__cargo_regi_1015f928);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_38 = *(int *)(iVar11 + 0x30);
      uVar10 = *(uint *)(*(int *)(iVar11 + 0x14) + uVar9);
      uVar14 = uVar10 * -0x61c8864f >> 0x10;
      uVar1 = *(ushort *)(local_38 + uVar14 * 2);
      local_2c = puVar17;
      if (uVar1 != (ushort)uVar9) {
        uVar6 = *(int *)(iVar11 + 0x20) - 1U & uVar9;
        if (*(uint *)(iVar11 + 0x2c) <= uVar6) {
          FUN_10136b52(uVar6,*(uint *)(iVar11 + 0x2c),
                       &PTR_s_C__Users_runneradmin__cargo_regi_1015cd70);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        *(ushort *)(*(int *)(iVar11 + 0x28) + uVar6 * 2) = uVar1;
        *(ushort *)(local_38 + uVar14 * 2) = (ushort)uVar9;
        uVar9 = *(uint *)(iVar11 + 0x10);
      }
      uVar14 = (uint)uVar1;
      uVar6 = uVar9 - uVar14;
      local_38 = uVar9;
      if ((0 < (int)uVar6) && ((int)uVar6 <= *(int *)(iVar11 + 0x20) + -0x106)) {
        uVar12 = *(uint *)(iVar11 + 0x18);
        uVar15 = uVar12 - uVar14;
        if (uVar12 < uVar14) {
          FUN_10136a50(uVar14,uVar12,uVar12,&PTR_s_C__Users_runneradmin__cargo_regi_1015f978);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar15 < 4) {
          FUN_10136a50(0,4,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015f938);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        puVar7 = (uint *)(uVar14 + *(int *)(iVar11 + 0x14));
        local_28 = uVar12;
        if (uVar10 == *puVar7) {
          local_30 = uVar9 + 2;
          if (uVar12 < local_30) {
            FUN_10136a50(local_30,uVar12,uVar12,&PTR_s_C__Users_runneradmin__cargo_regi_1015f968);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (uVar12 - local_30 < 0x100) {
            FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1015f308);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (uVar15 < 0x102) {
            FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1015f2f8);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar14 = 0;
          do {
            if (*(char *)(*(int *)(iVar11 + 0x14) + local_30 + uVar14) !=
                *(char *)((int)puVar7 + uVar14 + 2)) {
              if (uVar14 < 2) goto LAB_10124ebc;
              uVar14 = uVar14 + 2;
              goto LAB_10124dc3;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != 0x100);
          uVar14 = 0x102;
LAB_10124dc3:
          uVar10 = *puVar17;
          if (uVar10 < uVar14) {
            uVar14 = uVar10;
          }
          if (0x101 < uVar14) {
            uVar14 = 0x102;
          }
          local_30 = uVar10;
          if (0xffff < (int)uVar6) {
            local_39 = 2;
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_39,&DAT_1015f948,
                         &PTR_s_C__Users_runneradmin__cargo_regi_1015f958);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar8 = uVar6 - 1 & 0xffff;
          uVar15 = (uVar8 >> 7) + 0x100;
          if (uVar6 < 0x101) {
            uVar15 = uVar8;
          }
          if (0x1ff < uVar15) {
            FUN_10136b52(uVar15,0x200,&PTR_s_C__Users_runneradmin__cargo_regi_1015cc5c);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar8 = uVar14 + 0xfd & 0xff;
          local_28 = CONCAT22((short)(uVar12 >> 0x10),*(ushort *)(&DAT_1015bfd4 + uVar8 * 4));
          uVar15 = (uint)(byte)(&DAT_1015ca5c)[uVar15];
          uVar12 = (uint)*(ushort *)(&DAT_1015c3d4 + uVar15 * 4);
          if (uVar15 < 4) {
            cVar16 = '\x05';
          }
          else {
            uVar12 = (uint)(ushort)((short)(uVar6 - 1) - *(short *)(&DAT_1015ce9e + uVar15 * 2)) <<
                     5 | uVar12;
            cVar16 = (&DAT_1015cca8)[uVar15] + '\x05';
          }
          bVar4 = (byte)*(ushort *)(&DAT_1015bfd6 + uVar8 * 4);
          uVar13 = uVar12 << (bVar4 & 0x1f);
          uVar15 = uVar13;
          uVar6 = 0 << (bVar4 & 0x1f) | uVar12 >> 0x20 - (bVar4 & 0x1f);
          if ((*(ushort *)(&DAT_1015bfd6 + uVar8 * 4) & 0x20) != 0) {
            uVar15 = 0;
            uVar6 = uVar13;
          }
          uVar15 = uVar15 | *(ushort *)(&DAT_1015bfd4 + uVar8 * 4);
          bVar5 = *(byte *)(iVar11 + 0x70);
          bVar4 = cVar16 + bVar4 + bVar5;
          if (bVar4 < 0x40) {
            uVar8 = uVar15 << (bVar5 & 0x1f);
            uVar12 = uVar8;
            uVar6 = uVar6 << (bVar5 & 0x1f) | uVar15 >> 0x20 - (bVar5 & 0x1f);
            if ((bVar5 & 0x20) != 0) {
              uVar12 = 0;
              uVar6 = uVar8;
            }
            *(uint *)(iVar11 + 0x68) = *(uint *)(iVar11 + 0x68) | uVar12;
            *(uint *)(iVar11 + 0x6c) = *(uint *)(iVar11 + 0x6c) | uVar6;
            *(byte *)(iVar11 + 0x70) = bVar4;
          }
          else {
            FUN_1012a990((int *)(iVar11 + 0x58),uVar15,uVar6,bVar4);
            uVar9 = *(uint *)(iVar11 + 0x10);
            uVar10 = *local_2c;
          }
          *local_2c = uVar10 - uVar14;
          *(uint *)(iVar11 + 0x10) = uVar9 + uVar14;
          goto LAB_10124bdc;
        }
      }
    }
    else {
      puVar17 = (uint *)(iVar11 + 0x24);
      if (3 < uVar14) goto LAB_10124c53;
LAB_10124e99:
      local_2c = (uint *)(iVar11 + 0x24);
      uVar14 = *(uint *)(iVar11 + 0x10);
      if (*(uint *)(iVar11 + 0x18) <= uVar14) {
        FUN_10136b52(uVar14,*(uint *)(iVar11 + 0x18),
                     &PTR_s_C__Users_runneradmin__cargo_regi_1015f918);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar10 = (uint)*(byte *)(*(int *)(iVar11 + 0x14) + uVar14);
      local_38 = uVar14;
      local_34 = iVar11;
    }
LAB_10124ebc:
    iVar11 = local_34;
    uVar1 = *(ushort *)(&DAT_1015c46c + (uVar10 & 0xff) * 4);
    bVar4 = *(byte *)(local_34 + 0x70);
    bVar5 = (&DAT_1015c46e)[(uVar10 & 0xff) * 4] + bVar4;
    if (bVar5 < 0x40) {
      uVar9 = (uint)uVar1 << (bVar4 & 0x1f);
      uVar10 = uVar9;
      uVar14 = 0 << (bVar4 & 0x1f) | (uint)(uVar1 >> 0x20 - (bVar4 & 0x1f));
      if ((bVar4 & 0x20) != 0) {
        uVar10 = 0;
        uVar14 = uVar9;
      }
      *(uint *)(local_34 + 0x68) = *(uint *)(local_34 + 0x68) | uVar10;
      *(uint *)(local_34 + 0x6c) = *(uint *)(local_34 + 0x6c) | uVar14;
      *(byte *)(local_34 + 0x70) = bVar5;
      uVar14 = local_38;
    }
    else {
      FUN_1012a990((int *)(local_34 + 0x58),(uint)uVar1,0,bVar5);
      uVar14 = *(uint *)(iVar11 + 0x10);
    }
    *(uint *)(iVar11 + 0x10) = uVar14 + 1;
    *local_2c = *local_2c - 1;
  } while( true );
}
