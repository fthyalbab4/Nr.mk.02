// rea decompile_all
// name: FUN_10092330
// address: 0x10092330
// body: available
// range: 0x10092330-0x100924f1 inclusive
// range: 0x10092500-0x100925a9 inclusive
// range: 0x100925b0-0x10092714 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10092330(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint local_2c;

  if (*param_2 == 1) {
    uVar3 = param_2[7];
    uVar11 = param_2[0xd];
    uVar14 = 2;
    if (uVar3 != uVar11) {
      iVar9 = param_2[0xc];
      uVar4 = param_2[0xf];
      uVar15 = (uVar3 - 1) + uVar4;
      uVar13 = uVar11;
      uVar12 = uVar11;
      if (uVar15 < uVar11) {
        uVar5 = param_2[9];
        uVar8 = uVar4 + uVar3;
        uVar13 = uVar3;
        local_2c = uVar5;
LAB_10092461:
        uVar12 = uVar13;
        if (uVar3 == uVar13) {
          uVar13 = param_2[2];
          if ((*(byte *)(iVar9 + uVar15) & 0x20) != 0) {
            uVar13 = param_2[3];
          }
          if ((uVar13 >> (*(byte *)(iVar9 + uVar15) & 0x1f) & 1) != 0) {
            uVar15 = param_2[4];
            uVar12 = uVar15;
            if (uVar15 < local_2c) {
              uVar12 = local_2c;
            }
            if (uVar5 == 0xffffffff) {
              uVar12 = uVar15;
            }
            uVar10 = uVar4;
            uVar7 = uVar12;
            if (uVar4 < uVar12) {
              uVar10 = uVar12;
            }
            do {
              uVar13 = uVar7;
              if (uVar10 == uVar13) {
                uVar13 = local_2c;
                if (uVar5 == 0xffffffff) {
                  uVar13 = 0;
                }
                goto LAB_10092540;
              }
              if (uVar11 <= uVar13 + uVar3) {
                uVar15 = uVar12 + uVar3;
                if (uVar12 + uVar3 < uVar11) {
                  uVar15 = uVar11;
                }
                FUN_10136b52(uVar15,uVar11,&PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
                pcVar6 = (code *)invalidInstructionException();
                (*pcVar6)();
              }
              uVar7 = uVar13 + 1;
            } while (*(char *)(param_2[0xe] + uVar13) == *(char *)(iVar9 + uVar3 + uVar13));
            uVar13 = ((uVar3 + 1) - uVar15) + uVar13;
            if (uVar5 == 0xffffffff) goto LAB_10092450;
LAB_1009251d:
            local_2c = 0;
            goto LAB_1009251f;
          }
          param_2[7] = uVar8;
          uVar13 = uVar8;
          if (uVar5 != 0xffffffff) goto LAB_1009251d;
          goto LAB_10092450;
        }
      }
      do {
        uVar10 = uVar13;
        if (uVar13 == 0) goto LAB_100925c3;
LAB_100925b5:
        if (uVar10 < uVar11) {
          uVar15 = uVar10;
          if (-0x41 < *(char *)(iVar9 + uVar10)) goto LAB_100925c5;
        }
        else {
          uVar15 = uVar11;
          if (uVar10 == uVar11) goto LAB_100925c5;
        }
        uVar13 = uVar10 + 1;
      } while( true );
    }
  }
  else {
    uVar14 = 2;
    if (*(char *)((int)param_2 + 0xe) == '\0') {
      bVar1 = *(byte *)(param_2 + 3);
      *(byte *)(param_2 + 3) = bVar1 ^ 1;
      uVar3 = param_2[1];
      iVar9 = param_2[0xc];
      uVar11 = param_2[0xd];
      if (uVar3 != 0) {
        if (uVar3 < uVar11) {
          if (*(char *)(iVar9 + uVar3) < -0x40) {
LAB_100923f6:
            FUN_10136b90(iVar9,uVar11,uVar3,uVar11,&PTR_s_C__Users_runneradmin__rustup_too_101594c0)
            ;
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
        }
        else if (uVar3 != uVar11) goto LAB_100923f6;
      }
      if (uVar3 == uVar11) {
        if (bVar1 == 0) {
          *(undefined1 *)((int)param_2 + 0xe) = 1;
          goto LAB_100926c2;
        }
      }
      else {
        bVar2 = *(byte *)(iVar9 + uVar3);
        uVar11 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar15 = *(byte *)(iVar9 + 1 + uVar3) & 0x3f;
          if (bVar2 < 0xe0) {
            uVar11 = (uVar11 & 0x1f) << 6 | uVar15;
          }
          else {
            uVar15 = *(byte *)(iVar9 + 2 + uVar3) & 0x3f | uVar15 << 6;
            if (bVar2 < 0xf0) {
              uVar11 = uVar15 | (uVar11 & 0x1f) << 0xc;
            }
            else {
              uVar11 = *(byte *)(iVar9 + 3 + uVar3) & 0x3f | uVar15 << 6 | (uVar11 & 7) << 0x12;
            }
          }
        }
        if (bVar1 == 0) {
          uVar14 = 1;
          iVar9 = 1;
          if ((0x7f < uVar11) && (iVar9 = 2, 0x7ff < uVar11)) {
            iVar9 = 4 - (uint)(uVar11 < 0x10000);
          }
          param_1[1] = uVar3;
          param_2[1] = iVar9 + uVar3;
          param_1[2] = iVar9 + uVar3;
          goto LAB_100926c2;
        }
      }
      param_1[1] = uVar3;
      param_1[2] = uVar3;
      uVar14 = 0;
    }
  }
  goto LAB_100926c2;
  while( true ) {
    uVar15 = uVar15 - 1;
    if (uVar4 <= uVar15) {
      FUN_10136b52(uVar15,uVar4,&PTR_s_C__Users_runneradmin__rustup_too_101567a8);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    uVar12 = uVar15 + uVar3;
    if (uVar11 <= uVar12) {
      FUN_10136b52(uVar12,uVar11,&PTR_s_C__Users_runneradmin__rustup_too_101567b8);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    if (*(char *)(param_2[0xe] + uVar15) != *(char *)(iVar9 + uVar12)) break;
LAB_10092540:
    if (uVar15 <= uVar13) {
      param_2[7] = uVar8;
      if (uVar5 != 0xffffffff) {
        param_2[9] = 0;
      }
      uVar14 = 0;
      param_1[1] = uVar3;
      param_1[2] = uVar8;
      goto LAB_100926c2;
    }
  }
  uVar13 = param_2[6] + uVar3;
  param_2[7] = uVar13;
  if (uVar5 != 0xffffffff) {
    local_2c = uVar4 - param_2[6];
LAB_1009251f:
    param_2[9] = local_2c;
  }
LAB_10092450:
  uVar15 = uVar13 + (uVar4 - 1);
  uVar10 = uVar11;
  uVar12 = uVar11;
  if (uVar11 <= uVar15) goto LAB_100925b5;
  goto LAB_10092461;
LAB_100925c3:
  uVar15 = 0;
LAB_100925c5:
  uVar14 = 1;
  if (uVar12 <= uVar15) {
    uVar12 = uVar15;
  }
  param_1[1] = uVar3;
  param_2[7] = uVar12;
  param_1[2] = uVar15;
LAB_100926c2:
  *param_1 = uVar14;
  return;
}
