// rea decompile_all
// name: FUN_100ffb50
// address: 0x100ffb50
// body: available
// range: 0x100ffb50-0x100ffc6e inclusive
// range: 0x100ffc70-0x100ffd0a inclusive
// range: 0x100ffd10-0x100fff16 inclusive
// range: 0x100fff20-0x1010019b inclusive
// range: 0x101001a0-0x101001b3 inclusive
// range: 0x101001c0-0x101006b5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100ffb50(undefined4 *param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  char *pcVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint local_9c;
  uint local_98;
  byte *local_88;
  undefined1 local_81;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined4 *local_74;
  int local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_4c;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;

  local_74 = param_1;
  FUN_100969a0(&local_70,param_2,param_3,
               ".llvm.C:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\rustc-demangle-0.1.27\\src\\lib.rs"
               ,6);
  uVar15 = param_3;
  if ((char)local_70 == '\0') {
    do {
      FUN_10092330(&local_20,&local_70);
    } while (local_20 == 1);
    local_54 = local_1c;
    if (local_20 == 0) {
LAB_100ffc34:
      uVar8 = local_54 + 6;
      if (uVar8 != 0) {
        if (uVar8 < param_3) {
          if (*(char *)((int)param_2 + uVar8) < -0x40) {
LAB_100ffc5a:
            FUN_10136b90((int)param_2,param_3,uVar8,param_3,&DAT_10155e68);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        else if (uVar8 != param_3) goto LAB_100ffc5a;
      }
      pbVar11 = (byte *)(uVar8 + (int)param_2);
      do {
        if (pbVar11 == (byte *)((int)param_2 + param_3)) {
          if (local_54 == 0) {
            uVar14 = 0xffffffff;
            goto LAB_101005c2;
          }
          if (local_54 < param_3) {
            uVar15 = local_54;
            if (-0x41 < *(char *)((int)param_2 + local_54)) break;
          }
          else if (local_54 == param_3) break;
          FUN_10136b90((int)param_2,param_3,0,local_54,&DAT_10155e78);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        bVar4 = *pbVar11;
        uVar8 = (uint)bVar4;
        if ((char)bVar4 < '\0') {
          pbVar12 = pbVar11 + 1;
          if (bVar4 < 0xe0) {
            pbVar11 = pbVar11 + 2;
            uVar8 = (uVar8 & 0x1f) << 6 | *pbVar12 & 0x3f;
          }
          else {
            uVar10 = pbVar11[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
            if (bVar4 < 0xf0) {
              pbVar11 = pbVar11 + 3;
              uVar8 = uVar10 | (uVar8 & 0x1f) << 0xc;
            }
            else {
              pbVar12 = pbVar11 + 3;
              pbVar11 = pbVar11 + 4;
              uVar8 = *pbVar12 & 0x3f | uVar10 << 6 | (uVar8 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar11 = pbVar11 + 1;
        }
      } while (0xfffffff8 < uVar8 - 0x47 || 0xfffffff5 < uVar8 - 0x3a);
    }
  }
  else {
    local_9c = local_4c;
    iVar13 = local_34 - 1;
    if (local_4c == 0xffffffff) {
      uVar8 = local_54 + iVar13;
      if (uVar8 < local_3c) {
        local_80 = (uint)local_68;
        local_7c = local_58;
        local_78 = local_68._4_4_;
        uVar10 = local_34;
        if (local_34 < (uint)local_60) {
          uVar10 = (uint)local_60;
        }
LAB_100ffdc9:
        do {
          uVar6 = (uint)local_68;
          if ((*(byte *)(local_40 + uVar8) & 0x20) != 0) {
            uVar6 = local_68._4_4_;
          }
          if ((uVar6 >> (*(byte *)(local_40 + uVar8) & 0x1f) & 1) == 0) {
            local_54 = local_54 + local_34;
          }
          else {
            uVar8 = (uint)local_60;
            do {
              uVar6 = uVar8;
              uVar8 = (uint)local_60;
              if (uVar10 == uVar6) goto LAB_100ffe20;
              if (local_3c <= uVar6 + local_54) {
                uVar15 = (uint)local_60 + local_54;
                if ((uint)local_60 + local_54 < local_3c) {
                  uVar15 = local_3c;
                }
                FUN_10136b52(uVar15,local_3c,&PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              uVar8 = uVar6 + 1;
            } while (*(char *)(local_38 + uVar6) == *(char *)(local_40 + local_54 + uVar6));
            local_54 = (local_54 - (uint)local_60) + 1 + uVar6;
          }
          uVar8 = local_54 + iVar13;
        } while (uVar8 < local_3c);
      }
    }
    else {
      uVar8 = iVar13 + local_54;
      if (uVar8 < local_3c) {
        local_7c = local_68._4_4_;
        local_80 = (uint)local_60;
        local_78 = (uint)local_68;
        local_2c = local_34 - local_58;
        local_28 = local_58;
LAB_100ffc8a:
        do {
          uVar10 = (uint)local_68;
          if ((*(byte *)(local_40 + uVar8) & 0x20) != 0) {
            uVar10 = local_68._4_4_;
          }
          if ((uVar10 >> (*(byte *)(local_40 + uVar8) & 0x1f) & 1) == 0) {
            local_54 = local_54 + local_34;
          }
          else {
            local_24 = (uint)local_60;
            if ((uint)local_60 < local_9c) {
              local_24 = local_9c;
            }
            uVar10 = local_34;
            if (local_34 < local_24) {
              uVar10 = local_24;
            }
            uVar8 = local_24;
            do {
              uVar6 = uVar8;
              uVar8 = (uint)local_60;
              if (uVar10 == uVar6) goto LAB_100ffd20;
              if (local_3c <= uVar6 + local_54) {
                uVar15 = local_24 + local_54;
                if (local_24 + local_54 < local_3c) {
                  uVar15 = local_3c;
                }
                FUN_10136b52(uVar15,local_3c,&PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              uVar8 = uVar6 + 1;
            } while (*(char *)(local_38 + uVar6) == *(char *)(local_40 + local_54 + uVar6));
            local_54 = (local_54 - (uint)local_60) + 1 + uVar6;
          }
          local_9c = 0;
          uVar8 = iVar13 + local_54;
        } while (uVar8 < local_3c);
      }
    }
  }
LAB_100ffe69:
  if (uVar15 < 3) {
    uVar14 = 0xffffffff;
    if (uVar15 != 2) goto LAB_101005c2;
    if ((short)*param_2 == 0x4e5a) {
      iVar13 = -2;
      uVar15 = 2;
      iVar9 = 2;
      goto LAB_100ffff1;
    }
LAB_101003dd:
    uVar14 = 0xffffffff;
    uVar8 = 2;
    if ((char)*param_2 != 'R') goto LAB_101005c2;
LAB_101003f0:
    cVar5 = *(char *)((int)param_2 + 1);
    if (cVar5 < -0x40) {
      FUN_10136b90((int)param_2,uVar8,1,uVar8,&PTR_s_C__Users_runneradmin__cargo_regi_10155fa0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    iVar13 = (int)param_2 + 1;
    iVar9 = -1;
  }
  else {
    if (*(char *)((int)param_2 + 2) == 'N' && (short)*param_2 == 0x5a5f) {
      iVar13 = -3;
      iVar9 = 3;
      if (uVar15 == 3) {
        uVar15 = 3;
      }
      else if (*(char *)((int)param_2 + 3) < -0x40) {
        FUN_10136b90((int)param_2,uVar15,3,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_10156080);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
LAB_100ffff1:
      local_88 = (byte *)(iVar9 + (int)param_2);
      iVar13 = iVar13 + uVar15;
      pbVar12 = local_88 + iVar13;
      iVar9 = iVar13;
      pbVar11 = local_88;
      do {
        uVar8 = uVar15;
        if (iVar9 == 0) {
          if (iVar13 != 0) {
            bVar4 = *local_88;
            uVar10 = (uint)bVar4;
            if ((char)bVar4 < '\0') {
              if (bVar4 < 0xe0) {
                pbVar11 = local_88 + 2;
                uVar10 = (uVar10 & 0x1f) << 6 | local_88[1] & 0x3f;
              }
              else {
                uVar6 = local_88[2] & 0x3f | (local_88[1] & 0x3f) << 6;
                if (bVar4 < 0xf0) {
                  pbVar11 = local_88 + 3;
                  uVar10 = uVar6 | (uVar10 & 0x1f) << 0xc;
                }
                else {
                  pbVar11 = local_88 + 4;
                  uVar10 = local_88[3] & 0x3f | uVar6 << 6 | (uVar10 & 7) << 0x12;
                }
              }
            }
            else {
              pbVar11 = local_88 + 1;
            }
            local_98 = 0;
            if (uVar10 == 0x45) goto LAB_10100121;
            local_98 = 0;
            goto LAB_10100227;
          }
          break;
        }
        iVar9 = iVar9 + -1;
        bVar4 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (-1 < (char)bVar4);
LAB_10100372:
      if (uVar15 < 3) goto LAB_101003dd;
    }
    else {
      if ((short)*param_2 == 0x4e5a) {
        if (*(char *)((int)param_2 + 2) < -0x40) {
          FUN_10136b90((int)param_2,uVar15,2,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_10156070
                      );
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        iVar9 = 2;
        iVar13 = -2;
        goto LAB_100ffff1;
      }
      uVar8 = 3;
      if ((uVar15 != 3) && (uVar8 = uVar15, *param_2 == 0x4e5a5f5f)) {
        iVar13 = -4;
        iVar9 = 4;
        if (uVar15 < 5) {
          uVar15 = 4;
        }
        else if ((char)param_2[1] < -0x40) {
          FUN_10136b90((int)param_2,uVar15,4,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_10156060
                      );
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        goto LAB_100ffff1;
      }
    }
    if ((short)*param_2 == 0x525f) {
      cVar5 = *(char *)((int)param_2 + 2);
      if (cVar5 < -0x40) {
        FUN_10136b90((int)param_2,uVar8,2,uVar8,&PTR_s_C__Users_runneradmin__cargo_regi_10155fb0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      iVar13 = (int)param_2 + 2;
      iVar9 = -2;
    }
    else {
      if ((char)*param_2 == 'R') goto LAB_101003f0;
      uVar14 = 0xffffffff;
      if ((uVar8 == 3) || (*(char *)((int)param_2 + 2) != 'R' || (short)*param_2 != 0x5f5f))
      goto LAB_101005c2;
      cVar5 = *(char *)((int)param_2 + 3);
      if (cVar5 < -0x40) {
        FUN_10136b90((int)param_2,uVar8,3,uVar8,&PTR_s_C__Users_runneradmin__cargo_regi_10155f90);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      iVar13 = (int)param_2 + 3;
      iVar9 = -3;
    }
  }
  uVar14 = 0xffffffff;
  if ((byte)(cVar5 + 0xbfU) < 0x1a) {
    uVar14 = 0xffffffff;
    local_98 = iVar9 + uVar8;
    uVar15 = 0;
    do {
      if (local_98 == uVar15) {
        local_68 = 0;
        local_60 = 0;
        local_70 = iVar13;
        local_6c = local_98;
        cVar5 = FUN_101006c0(&local_70,'\0');
        if (cVar5 != '\0') {
LAB_101005d0:
          FUN_10136c40("`fmt::Error`s should be impossible without a `fmt::Formatter`",0x3d,
                       &local_81,&DAT_10155c14,&PTR_s_C__Users_runneradmin__cargo_regi_10155fd0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (local_70 == 0) break;
        if (((uint)local_68 < local_6c) &&
           ((byte)(*(char *)(local_70 + (uint)local_68) + 0xbfU) < 0x1a)) {
          local_60 = 0;
          cVar5 = FUN_101006c0(&local_70,'\0');
          if (cVar5 != '\0') goto LAB_101005d0;
          if (local_70 == 0) break;
        }
        if ((uint)local_68 != 0) {
          if ((uint)local_68 < local_6c) {
            if (*(char *)(local_70 + (uint)local_68) < -0x40) {
LAB_10100565:
              FUN_10136b90(local_70,local_6c,(uint)local_68,local_6c,
                           &PTR_s_C__Users_runneradmin__cargo_regi_10155fc0);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          else if (local_6c != (uint)local_68) goto LAB_10100565;
        }
        pbVar11 = (byte *)(local_70 + (uint)local_68);
        iVar9 = local_6c - (uint)local_68;
        local_88 = (byte *)0x0;
        goto joined_r0x1010012b;
      }
      pcVar2 = (char *)(iVar13 + uVar15);
      uVar15 = uVar15 + 1;
    } while (-1 < *pcVar2);
  }
LAB_101005c2:
  *local_74 = uVar14;
  return;
  while( true ) {
    uVar8 = uVar8 - 1;
    if (local_34 <= (uint)local_60 - 1) goto LAB_1010063f;
    uVar6 = uVar8 + local_54;
    if (local_3c <= uVar6) goto LAB_10100612;
    if (*(char *)(local_38 + uVar8) != *(char *)(local_40 + uVar6)) break;
LAB_100ffe20:
    if (uVar8 == 0) goto LAB_100ffc34;
  }
  local_54 = local_54 + local_58;
  uVar8 = local_54 + iVar13;
  if (local_3c <= uVar8) goto LAB_100ffe69;
  goto LAB_100ffdc9;
LAB_100ffd20:
  do {
    if (uVar8 <= local_9c) goto LAB_100ffc34;
    uVar8 = uVar8 - 1;
    if (local_34 <= uVar8) {
LAB_1010063f:
      FUN_10136b52(uVar8,local_34,&PTR_s_C__Users_runneradmin__rustup_too_101567a8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar6 = uVar8 + local_54;
    if (local_3c <= uVar6) {
LAB_10100612:
      FUN_10136b52(uVar6,local_3c,&PTR_s_C__Users_runneradmin__rustup_too_101567b8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  } while (*(char *)(local_38 + uVar8) == *(char *)(local_40 + uVar6));
  local_54 = local_54 + local_58;
  uVar8 = iVar13 + local_54;
  local_9c = local_2c;
  if (local_3c <= uVar8) goto LAB_100ffe69;
  goto LAB_100ffc8a;
LAB_10100227:
  do {
    uVar6 = uVar10 - 0x30;
    if (9 < uVar6) goto LAB_10100372;
    uVar7 = 0;
    do {
      while( true ) {
        uVar10 = (uint)((ulonglong)uVar7 * 10);
        if ((((int)((ulonglong)uVar7 * 10 >> 0x20) != 0) ||
            (uVar7 = uVar10 + uVar6, CARRY4(uVar10,uVar6))) || (pbVar11 == pbVar12))
        goto LAB_10100372;
        bVar4 = *pbVar11;
        uVar10 = (uint)bVar4;
        if ((char)bVar4 < '\0') break;
        pbVar11 = pbVar11 + 1;
        uVar6 = uVar10 - 0x30;
        if (9 < uVar6) goto joined_r0x101002e3;
      }
      pbVar1 = pbVar11 + 1;
      if (bVar4 < 0xe0) {
        pbVar11 = pbVar11 + 2;
        uVar10 = (uVar10 & 0x1f) << 6 | *pbVar1 & 0x3f;
      }
      else {
        uVar6 = pbVar11[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar4 < 0xf0) {
          pbVar11 = pbVar11 + 3;
          uVar10 = uVar6 | (uVar10 & 0x1f) << 0xc;
        }
        else {
          pbVar1 = pbVar11 + 3;
          pbVar11 = pbVar11 + 4;
          uVar10 = *pbVar1 & 0x3f | uVar6 << 6 | (uVar10 & 7) << 0x12;
        }
      }
      uVar6 = uVar10 - 0x30;
    } while (uVar6 < 10);
joined_r0x101002e3:
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      while( true ) {
        if (pbVar11 == pbVar12) goto LAB_10100372;
        bVar4 = *pbVar11;
        uVar10 = (uint)bVar4;
        if (-1 < (char)bVar4) break;
        pbVar1 = pbVar11 + 1;
        if (bVar4 < 0xe0) {
          pbVar11 = pbVar11 + 2;
          uVar10 = (uVar10 & 0x1f) << 6 | *pbVar1 & 0x3f;
        }
        else {
          uVar6 = pbVar11[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar4 < 0xf0) {
            pbVar11 = pbVar11 + 3;
            uVar10 = uVar6 | (uVar10 & 0x1f) << 0xc;
          }
          else {
            pbVar1 = pbVar11 + 3;
            pbVar11 = pbVar11 + 4;
            uVar10 = *pbVar1 & 0x3f | uVar6 << 6 | (uVar10 & 7) << 0x12;
          }
        }
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_1010035a;
      }
      pbVar11 = pbVar11 + 1;
    }
LAB_1010035a:
    local_98 = local_98 + 1;
  } while (uVar10 != 0x45);
LAB_10100121:
  iVar9 = (int)pbVar12 - (int)pbVar11;
joined_r0x1010012b:
  if (iVar9 == 0) {
    iVar9 = 0;
LAB_10100594:
    local_74[1] = local_88;
    local_74[2] = iVar13;
    local_74[3] = local_98;
    local_74[4] = param_2;
    local_74[5] = uVar8;
    local_74[6] = pbVar11;
    local_74[7] = iVar9;
    uVar14 = 1;
  }
  else {
    uVar14 = 0xffffffff;
    if (*pbVar11 == 0x2e) {
      bVar4 = 0x2e;
      pbVar12 = pbVar11;
      do {
        pbVar12 = pbVar12 + 1;
        uVar15 = (uint)bVar4;
        while( true ) {
          if (((((0xe < uVar15 - 0x21 && 9 < uVar15 - 0x30) && 0x19 < (uVar15 & 0x1fffdf) - 0x41) &&
               (6 < uVar15 - 0x3a)) && (5 < uVar15 - 0x5b)) && (uVar15 - 0x7f < 0xfffffffc))
          goto LAB_101005c2;
          if (pbVar12 == pbVar11 + iVar9) goto LAB_10100594;
          bVar4 = *pbVar12;
          if (-1 < (char)bVar4) break;
          pbVar1 = pbVar12 + 1;
          uVar10 = (uint)(bVar4 & 0x1f);
          if (bVar4 < 0xe0) {
            pbVar12 = pbVar12 + 2;
            uVar15 = uVar10 << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar15 = pbVar12[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar4 < 0xf0) {
              pbVar12 = pbVar12 + 3;
              uVar15 = uVar10 << 0xc | uVar15;
            }
            else {
              pbVar1 = pbVar12 + 3;
              pbVar12 = pbVar12 + 4;
              uVar15 = (uVar10 & 7) << 0x12 | *pbVar1 & 0x3f | uVar15 << 6;
            }
          }
        }
      } while( true );
    }
  }
  goto LAB_101005c2;
}
