// rea decompile_all
// name: FUN_1012b790
// address: 0x1012b790
// body: available
// range: 0x1012b790-0x1012b7dd inclusive
// range: 0x1012b7e0-0x1012b8cc inclusive
// range: 0x1012b8d0-0x1012bf72 inclusive
// range: 0x1012bf80-0x1012c119 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char __fastcall FUN_1012b790(int *param_1,byte param_2)

{
  byte *pbVar1;
  short *psVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint local_2c;
  uint local_28;
  int *local_1c;

  iVar13 = param_1[7];
  iVar8 = (int)(char)*(byte *)(iVar13 + 4);
  if (iVar8 == 0) {
    cVar5 = FUN_10124460(param_1,param_2);
  }
  else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(iVar13 + 3)) {
    default:
      if (9 < *(byte *)(iVar13 + 4)) {
        FUN_10136b52(iVar8,10,&PTR_s_C__Users_runneradmin__cargo_regi_1015f408);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      cVar5 = (**(code **)(&DAT_1015f318 + iVar8 * 0xc))(param_1,param_2);
      break;
    case 2:
      do {
        if (*(int *)(iVar13 + 0x24) == 0) {
          FUN_10123b30(param_1);
          iVar13 = param_1[7];
          if (*(int *)(iVar13 + 0x24) == 0) {
            if (param_2 == 0) {
              return '\0';
            }
            *(undefined4 *)(iVar13 + 0x80) = 0;
joined_r0x1012c02d:
            if (param_2 == 4) {
              FUN_10127590((int)param_1,1);
              return param_1[4] == 0 ^ 3;
            }
            if (*(int *)(iVar13 + 0x48) == 0) {
              return '\x01';
            }
            FUN_10127590((int)param_1,0);
            return param_1[4] != 0;
          }
        }
        uVar11 = *(uint *)(iVar13 + 0x10);
        if (*(uint *)(iVar13 + 0x18) <= uVar11) {
          FUN_10136b52(uVar11,*(uint *)(iVar13 + 0x18),
                       &PTR_s_C__Users_runneradmin__cargo_regi_1015f7e0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        iVar8 = *(int *)(iVar13 + 0x48);
        uVar6 = *(uint *)(iVar13 + 0x44);
        uVar7 = iVar8 + 2;
        if (uVar6 <= uVar7) {
LAB_1012c0d7:
          FUN_10136b52(uVar7,uVar6,&PTR_s_C__Users_runneradmin__cargo_regi_1015cd14);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        bVar3 = *(byte *)(*(int *)(iVar13 + 0x14) + uVar11);
        *(byte *)(*(int *)(iVar13 + 0x40) + 2 + iVar8) = bVar3;
        *(int *)(iVar13 + 0x48) = iVar8 + 3;
        psVar2 = (short *)(iVar13 + 0xb0 + (uint)bVar3 * 4);
        *psVar2 = *psVar2 + 1;
        *(int *)(iVar13 + 0x24) = *(int *)(iVar13 + 0x24) + -1;
        *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
        if (iVar8 == uVar6 - 6) {
          FUN_10127590((int)param_1,0);
          if (param_1[4] == 0) {
            return '\0';
          }
          iVar13 = param_1[7];
        }
      } while( true );
    case 3:
      local_2c = 0;
      do {
        while (uVar7 = *(uint *)(iVar13 + 0x24), 0x105 < uVar7) {
          local_1c = (int *)(iVar13 + 0x24);
LAB_1012b8d7:
          uVar11 = *(uint *)(iVar13 + 0x10);
          if (uVar11 == 0) {
            uVar11 = 0;
            goto LAB_1012bf82;
          }
          uVar10 = *(uint *)(iVar13 + 0x18);
          uVar6 = uVar11 - 1;
          if (uVar10 < uVar6) {
            FUN_10136a50(uVar6,uVar10,uVar10,&PTR_s_C__Users_runneradmin__cargo_regi_1015f6c0);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar10 - uVar6 < 0x103) {
            FUN_10136a50(0,0x103,uVar10 - uVar6,&PTR_s_C__Users_runneradmin__cargo_regi_1015f690);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          iVar8 = *(int *)(iVar13 + 0x14);
          bVar3 = *(byte *)(iVar8 + -1 + uVar11);
          if ((bVar3 == *(byte *)(iVar8 + uVar11)) && (bVar3 == *(byte *)(iVar8 + 2 + uVar6))) {
            local_28 = *(uint *)(iVar8 + 3 + uVar6);
            uVar6 = *(uint *)(iVar8 + 7 + uVar6);
            uVar10 = (uint)bVar3 * 0x1010101;
            iVar12 = 2;
            if (uVar10 == local_28 && uVar10 == uVar6) {
              local_28 = *(uint *)(iVar8 + 0xb + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xf + (uVar11 - 1));
              iVar12 = 10;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x13 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x17 + (uVar11 - 1));
              iVar12 = 0x12;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x1b + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x1f + (uVar11 - 1));
              iVar12 = 0x1a;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x23 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x27 + (uVar11 - 1));
              iVar12 = 0x22;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x2b + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x2f + (uVar11 - 1));
              iVar12 = 0x2a;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x33 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x37 + (uVar11 - 1));
              iVar12 = 0x32;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x3b + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x3f + (uVar11 - 1));
              iVar12 = 0x3a;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x43 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x47 + (uVar11 - 1));
              iVar12 = 0x42;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x4b + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x4f + (uVar11 - 1));
              iVar12 = 0x4a;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x53 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x57 + (uVar11 - 1));
              iVar12 = 0x52;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x5b + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x5f + (uVar11 - 1));
              iVar12 = 0x5a;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 99 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x67 + (uVar11 - 1));
              iVar12 = 0x62;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x6b + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x6f + (uVar11 - 1));
              iVar12 = 0x6a;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x73 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x77 + (uVar11 - 1));
              iVar12 = 0x72;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x7b + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x7f + (uVar11 - 1));
              iVar12 = 0x7a;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x83 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x87 + (uVar11 - 1));
              iVar12 = 0x82;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x8b + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x8f + (uVar11 - 1));
              iVar12 = 0x8a;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x93 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x97 + (uVar11 - 1));
              iVar12 = 0x92;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0x9b + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0x9f + (uVar11 - 1));
              iVar12 = 0x9a;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xa3 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xa7 + (uVar11 - 1));
              iVar12 = 0xa2;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xab + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xaf + (uVar11 - 1));
              iVar12 = 0xaa;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xb3 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xb7 + (uVar11 - 1));
              iVar12 = 0xb2;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xbb + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xbf + (uVar11 - 1));
              iVar12 = 0xba;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xc3 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 199 + (uVar11 - 1));
              iVar12 = 0xc2;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xcb + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xcf + (uVar11 - 1));
              iVar12 = 0xca;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xd3 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xd7 + (uVar11 - 1));
              iVar12 = 0xd2;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xdb + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xdf + (uVar11 - 1));
              iVar12 = 0xda;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xe3 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xe7 + (uVar11 - 1));
              iVar12 = 0xe2;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xeb + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xef + (uVar11 - 1));
              iVar12 = 0xea;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xf3 + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xf7 + (uVar11 - 1));
              iVar12 = 0xf2;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
              local_28 = *(uint *)(iVar8 + 0xfb + (uVar11 - 1));
              uVar6 = *(uint *)(iVar8 + 0xff + (uVar11 - 1));
              iVar12 = 0xfa;
              uVar9 = 0x102;
              if (uVar10 != local_28 || uVar10 != uVar6) goto LAB_1012bea2;
            }
            else {
LAB_1012bea2:
              iVar8 = 0;
              for (uVar6 = uVar6 ^ uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                iVar8 = iVar8 + 1;
              }
              uVar6 = 0;
              for (uVar9 = local_28 ^ uVar10; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              uVar9 = iVar8 + 0x20;
              if ((local_28 ^ uVar10) != 0) {
                uVar9 = uVar6;
              }
              uVar9 = (uVar9 >> 3) + iVar12;
            }
            local_2c = uVar7;
            if (uVar9 <= uVar7) {
              local_2c = uVar9;
            }
          }
          uVar7 = local_2c;
          if (*(int *)(iVar13 + 0x50) - 1U < (uVar11 - 1) + local_2c) {
            FUN_101369c0("wild scan",0x13,&PTR_s_C__Users_runneradmin__cargo_regi_1015f6a0);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (local_2c < 3) goto LAB_1012bf82;
          uVar11 = *(uint *)(iVar13 + 0x44);
          uVar6 = *(uint *)(iVar13 + 0x48);
          if (uVar11 < uVar6) {
            FUN_10136a50(uVar6,uVar11,uVar11,&PTR_s_C__Users_runneradmin__cargo_regi_1015b950);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uVar11 - uVar6 < 3) {
            FUN_10136a50(0,3,uVar11 - uVar6,&PTR_s_C__Users_runneradmin__cargo_regi_1015b940);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          iVar8 = *(int *)(iVar13 + 0x40);
          *(undefined2 *)(iVar8 + uVar6) = 1;
          *(char *)(iVar8 + 2 + uVar6) = (char)local_2c + -3;
          *(uint *)(iVar13 + 0x48) = uVar6 + 3;
          cVar5 = *(char *)(iVar13 + 0x3a) + '\x01';
          if (cVar5 == '\0') {
            cVar5 = -1;
          }
          *(char *)(iVar13 + 0x3a) = cVar5;
          if (*(int *)(iVar13 + 0x20) == 0x106) {
            FUN_101369c0("tally_dist: bad match",0x2b,
                         &PTR_s_C__Users_runneradmin__cargo_regi_1015c93c);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pbVar1 = &UNK_1015c949 + local_2c;
          local_2c = 0;
          psVar2 = (short *)(iVar13 + 0x4b4 + (uint)*pbVar1 * 4);
          *psVar2 = *psVar2 + 1;
          *(short *)(iVar13 + 0x9ac) = *(short *)(iVar13 + 0x9ac) + 1;
          *local_1c = *local_1c - uVar7;
          *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + uVar7;
          if (uVar6 == uVar11 - 6) {
LAB_1012bfd3:
            FUN_10127590((int)param_1,0);
            if (param_1[4] == 0) {
              return '\0';
            }
            iVar13 = param_1[7];
          }
        }
        FUN_10123b30(param_1);
        iVar13 = param_1[7];
        uVar7 = *(uint *)(iVar13 + 0x24);
        if (param_2 == 0 && uVar7 < 0x106) {
          return '\0';
        }
        if (uVar7 == 0) {
          *(undefined4 *)(iVar13 + 0x80) = 0;
          goto joined_r0x1012c02d;
        }
        local_1c = (int *)(iVar13 + 0x24);
        if (2 < uVar7) goto LAB_1012b8d7;
        uVar11 = *(uint *)(iVar13 + 0x10);
LAB_1012bf82:
        if (*(uint *)(iVar13 + 0x18) <= uVar11) {
          FUN_10136b52(uVar11,*(uint *)(iVar13 + 0x18),
                       &PTR_s_C__Users_runneradmin__cargo_regi_1015f6b0);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        iVar8 = *(int *)(iVar13 + 0x48);
        uVar6 = *(uint *)(iVar13 + 0x44);
        uVar7 = iVar8 + 2;
        if (uVar6 <= uVar7) goto LAB_1012c0d7;
        bVar3 = *(byte *)(*(int *)(iVar13 + 0x14) + uVar11);
        *(byte *)(*(int *)(iVar13 + 0x40) + 2 + iVar8) = bVar3;
        *(int *)(iVar13 + 0x48) = iVar8 + 3;
        psVar2 = (short *)(iVar13 + 0xb0 + (uint)bVar3 * 4);
        *psVar2 = *psVar2 + 1;
        *local_1c = *local_1c + -1;
        *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
        if (iVar8 == uVar6 - 6) goto LAB_1012bfd3;
      } while( true );
    }
  }
  return cVar5;
}
