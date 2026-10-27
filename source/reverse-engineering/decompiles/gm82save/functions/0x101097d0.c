// rea decompile_all
// name: FUN_101097d0
// address: 0x101097d0
// body: available
// range: 0x101097d0-0x10109c1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_101097d0(void *param_1,uint param_2,void *param_3,uint param_4)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_8c;
  char local_58 [4];
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  int local_40;
  uint local_3c;
  uint local_34;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;

  if (param_2 < param_4) {
    FUN_100969a0((undefined4 *)local_58,param_3,param_4,param_1,param_2);
    if (local_58[0] == '\0') {
      if (local_4c._2_1_ == '\0') {
        uVar4 = local_4c & 0xff;
        if (local_54 != 0) {
          if (local_54 < local_24) {
            if (*(char *)(local_28 + local_54) < -0x40) goto LAB_10109b81;
          }
          else if (local_54 != local_24) goto LAB_10109b81;
        }
        if (local_54 != local_24) {
          bVar1 = *(byte *)(local_28 + local_54);
          uVar6 = (uint)bVar1;
          if ((char)bVar1 < '\0') {
            uVar8 = *(byte *)(local_28 + 1 + local_54) & 0x3f;
            if (bVar1 < 0xe0) {
              uVar6 = (uVar6 & 0x1f) << 6 | uVar8;
            }
            else {
              uVar4 = *(byte *)(local_28 + 2 + local_54) & 0x3f | uVar8 << 6;
              if (bVar1 < 0xf0) {
                uVar4 = uVar4 | (uVar6 & 0x1f) << 0xc;
                uVar6 = uVar4;
              }
              else {
                uVar4 = uVar4 << 6;
                uVar6 = *(byte *)(local_28 + 3 + local_54) & 0x3f | uVar4 | (uVar6 & 7) << 0x12;
              }
            }
          }
          uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
          if ((local_4c & 1) == 0) {
            iVar3 = 1;
            if ((0x7f < uVar6) && (iVar3 = 2, 0x7ff < uVar6)) {
              iVar3 = 4 - (uint)(uVar6 < 0x10000);
            }
            local_54 = local_54 + iVar3;
            if (local_54 != 0) {
              if (local_54 < local_24) {
                if (*(char *)(local_28 + local_54) < -0x40) {
LAB_10109b81:
                  FUN_10136b90(local_28,local_24,local_54,local_24,
                               &PTR_s_C__Users_runneradmin__rustup_too_101594c0);
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              else if (local_54 != local_24) goto LAB_10109b81;
            }
          }
        }
        goto LAB_10109a05;
      }
    }
    else {
      iVar3 = local_1c - 1;
      local_8c = local_34;
      if (local_34 == 0xffffffff) {
        uVar6 = local_3c + iVar3;
        if (uVar6 < local_24) {
          uVar8 = local_1c;
          if (local_1c < local_48) {
            uVar8 = local_48;
          }
LAB_10109a20:
          uVar4 = local_50;
          if ((*(byte *)(local_28 + uVar6) & 0x20) != 0) {
            uVar4 = local_4c;
          }
          if ((uVar4 >> (*(byte *)(local_28 + uVar6) & 0x1f) & 1) == 0) {
            local_3c = local_3c + local_1c;
          }
          else {
            uVar4 = local_48;
            do {
              uVar6 = uVar4;
              uVar4 = local_48;
              if (uVar8 == uVar6) goto LAB_10109a80;
              if (local_24 <= uVar6 + local_3c) {
                uVar4 = local_48 + local_3c;
                if (local_48 + local_3c < local_24) {
                  uVar4 = local_24;
                }
                FUN_10136b52(uVar4,local_24,&PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar4 = uVar6 + 1;
            } while (*(char *)(local_20 + uVar6) == *(char *)(local_28 + local_3c + uVar6));
            local_3c = (local_3c - local_48) + 1 + uVar6;
          }
          goto LAB_10109a13;
        }
      }
      else {
        uVar6 = local_3c + iVar3;
        if (uVar6 < local_24) {
LAB_101098eb:
          uVar4 = local_50;
          if ((*(byte *)(local_28 + uVar6) & 0x20) != 0) {
            uVar4 = local_4c;
          }
          if ((uVar4 >> (*(byte *)(local_28 + uVar6) & 0x1f) & 1) == 0) {
            local_3c = local_3c + local_1c;
            local_8c = 0;
          }
          else {
            uVar8 = local_48;
            if (local_48 < local_8c) {
              uVar8 = local_8c;
            }
            uVar7 = local_1c;
            if (local_1c < uVar8) {
              uVar7 = uVar8;
            }
            uVar6 = local_8c;
            uVar4 = uVar8;
            do {
              uVar5 = uVar4;
              uVar4 = local_48;
              if (uVar7 == uVar5) goto LAB_10109980;
              if (local_24 <= uVar5 + local_3c) {
                uVar4 = uVar8 + local_3c;
                if (uVar8 + local_3c < local_24) {
                  uVar4 = local_24;
                }
                FUN_10136b52(uVar4,local_24,&PTR_s_C__Users_runneradmin__rustup_too_101567c8);
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar6 = local_3c;
              uVar4 = uVar5 + 1;
            } while (*(char *)(local_20 + uVar5) == *(char *)(local_28 + local_3c + uVar5));
            local_8c = 0;
            local_3c = (local_3c - local_48) + 1 + uVar5;
          }
          goto LAB_101098da;
        }
      }
    }
  }
  else if (param_2 == param_4) {
    iVar3 = memcmp(param_1,param_3,param_2);
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 0);
    goto LAB_10109a05;
  }
  uVar4 = 0;
LAB_10109a05:
  return uVar4 & 0xffffff01;
  while( true ) {
    uVar4 = uVar4 - 1;
    if (local_1c <= local_48 - 1) goto LAB_10109bfb;
    uVar6 = uVar4 + local_3c;
    if (local_24 <= uVar6) {
      FUN_10136b52(uVar6,local_24,&PTR_s_C__Users_runneradmin__rustup_too_101567b8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (*(char *)(local_20 + uVar4) != *(char *)(local_28 + uVar6)) break;
LAB_10109a80:
    uVar6 = 0;
    if (uVar4 == 0) goto LAB_10109aba;
  }
  local_3c = local_3c + local_40;
LAB_10109a13:
  uVar6 = local_3c + iVar3;
  uVar4 = 0;
  if (local_24 <= uVar6) goto LAB_10109a05;
  goto LAB_10109a20;
LAB_10109980:
  do {
    if (uVar4 <= local_8c) goto LAB_10109aba;
    uVar4 = uVar4 - 1;
    if (local_1c <= uVar4) {
LAB_10109bfb:
      FUN_10136b52(uVar4,local_1c,&PTR_s_C__Users_runneradmin__rustup_too_101567a8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar6 = uVar4 + local_3c;
    if (local_24 <= uVar6) {
      FUN_10136b52(uVar6,local_24,&PTR_s_C__Users_runneradmin__rustup_too_101567b8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  } while (*(char *)(local_20 + uVar4) == *(char *)(local_28 + uVar6));
  local_3c = local_3c + local_40;
  local_8c = local_1c - local_40;
LAB_101098da:
  uVar6 = local_3c + iVar3;
  uVar4 = 0;
  if (local_24 <= uVar6) goto LAB_10109a05;
  goto LAB_101098eb;
LAB_10109aba:
  uVar4 = CONCAT31((int3)(uVar6 >> 8),1);
  goto LAB_10109a05;
}
