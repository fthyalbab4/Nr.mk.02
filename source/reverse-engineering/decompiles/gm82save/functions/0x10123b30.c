// rea decompile_all
// name: FUN_10123b30
// address: 0x10123b30
// body: available
// range: 0x10123b30-0x10123bb2 inclusive
// range: 0x10123bc0-0x10123c9a inclusive
// range: 0x10123ca0-0x10123dfc inclusive
// range: 0x10123e00-0x10123f65 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10123b30(int *param_1)

{
  size_t _Size;
  int iVar1;
  int iVar2;
  code *pcVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  short sVar12;
  uint uVar13;
  ushort uVar14;
  int local_34;

  iVar11 = param_1[7];
  _Size = *(size_t *)(iVar11 + 0x20);
  uVar9 = *(uint *)(iVar11 + 0x24);
  while( true ) {
    uVar9 = *(int *)(iVar11 + 0x50) - (uVar9 + *(uint *)(iVar11 + 0x10));
    if (*(int *)(iVar11 + 0x20) + (_Size - 0x106) <= *(uint *)(iVar11 + 0x10)) {
      if (*(uint *)(iVar11 + 0x18) < _Size * 2) {
        FUN_10136a50(0,_Size * 2,*(uint *)(iVar11 + 0x18),
                     &PTR_s_C__Users_runneradmin__cargo_regi_1015cf50);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((int)_Size < 0) {
        FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                     ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_1015cedc);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      memcpy(*(void **)(iVar11 + 0x14),(void *)((int)*(void **)(iVar11 + 0x14) + _Size),_Size);
      if (*(ushort *)(iVar11 + 0xc) < (ushort)_Size) {
        *(undefined2 *)(iVar11 + 0x34) = 0;
        sVar4 = 0;
      }
      else {
        sVar4 = *(ushort *)(iVar11 + 0xc) - (ushort)_Size;
      }
      *(short *)(iVar11 + 0xc) = sVar4;
      uVar5 = *(int *)(iVar11 + 0x10) - _Size;
      *(uint *)(iVar11 + 0x10) = uVar5;
      *(int *)(iVar11 + 0x3c) = *(int *)(iVar11 + 0x3c) - _Size;
      if (*(uint *)(iVar11 + 0x80) <= uVar5) {
        uVar5 = *(uint *)(iVar11 + 0x80);
      }
      *(uint *)(iVar11 + 0x80) = uVar5;
      uVar14 = (ushort)*(undefined4 *)(iVar11 + 0x20);
      FUN_10124070(*(undefined1 (**) [16])(iVar11 + 0x30),0x10000,uVar14);
      FUN_10124070(*(undefined1 (**) [16])(iVar11 + 0x28),*(uint *)(iVar11 + 0x2c),uVar14);
      uVar9 = uVar9 + _Size;
    }
    if (param_1[1] == 0) break;
    if (uVar9 < 2) {
      FUN_101369c0(&DAT_1015ceec,0x11,&PTR_s_C__Users_runneradmin__cargo_regi_1015cef4);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar9 = FUN_101240d0(param_1,*(int *)(iVar11 + 0x24) + *(int *)(iVar11 + 0x10),uVar9);
    iVar11 = param_1[7];
    uVar9 = uVar9 + *(int *)(iVar11 + 0x24);
    *(uint *)(iVar11 + 0x24) = uVar9;
    iVar1 = *(int *)(iVar11 + 0x80);
    if (2 < iVar1 + uVar9) {
      uVar5 = *(int *)(iVar11 + 0x10) - iVar1;
      if (*(ushort *)(iVar11 + 0x36) < 0x401) {
        if (*(int *)(iVar11 + 0x10) != iVar1) {
          uVar9 = uVar5 - 1;
          sVar4 = (short)uVar9;
          if (*(char *)(iVar11 + 6) == '\x01') {
            uVar6 = uVar5 + 1;
            if (*(uint *)(iVar11 + 0x18) <= uVar6) {
              FUN_10136b52(uVar6,*(uint *)(iVar11 + 0x18),
                           &PTR_s_C__Users_runneradmin__cargo_regi_1015bc1c);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            local_34 = *(int *)(iVar11 + 0x30);
            uVar6 = (*(uint *)(iVar11 + 0x84) & 0x3ff) << 5 ^
                    (uint)*(byte *)(*(int *)(iVar11 + 0x14) + uVar6);
            *(uint *)(iVar11 + 0x84) = uVar6;
            sVar12 = *(short *)(local_34 + uVar6 * 2);
            if (sVar12 != sVar4) {
              uVar9 = *(int *)(iVar11 + 0x20) - 1U & uVar9;
              if (*(uint *)(iVar11 + 0x2c) <= uVar9) {
                FUN_10136b52(uVar9,*(uint *)(iVar11 + 0x2c),
                             &PTR_s_C__Users_runneradmin__cargo_regi_1015bc2c);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
LAB_10123d43:
              *(short *)(*(int *)(iVar11 + 0x28) + uVar9 * 2) = sVar12;
              *(short *)(local_34 + uVar6 * 2) = sVar4;
            }
          }
          else {
            uVar6 = *(uint *)(iVar11 + 0x18);
            if (uVar6 < uVar9) {
              FUN_10136a50(uVar9,uVar6,uVar6,&PTR_s_C__Users_runneradmin__cargo_regi_1015cd90);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            if (uVar6 - uVar9 < 4) {
              FUN_10136a50(0,4,uVar6 - uVar9,&PTR_s_C__Users_runneradmin__cargo_regi_1015cd80);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            local_34 = *(int *)(iVar11 + 0x30);
            uVar6 = (uint)(*(int *)(*(int *)(iVar11 + 0x14) + uVar9) * -0x61c8864f) >> 0x10;
            sVar12 = *(short *)(local_34 + uVar6 * 2);
            if (sVar12 != sVar4) {
              uVar9 = *(int *)(iVar11 + 0x20) - 1U & uVar9;
              if (*(uint *)(iVar11 + 0x2c) <= uVar9) {
                FUN_10136b52(uVar9,*(uint *)(iVar11 + 0x2c),
                             &PTR_s_C__Users_runneradmin__cargo_regi_1015cd70);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              goto LAB_10123d43;
            }
          }
        }
      }
      else {
        uVar9 = *(uint *)(iVar11 + 0x18);
        if (uVar9 <= uVar5) {
          FUN_10136b52(uVar5,uVar9,&PTR_s_C__Users_runneradmin__cargo_regi_1015cf04);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (uVar9 <= uVar5 + 1) {
          FUN_10136b52(uVar5 + 1,uVar9,&PTR_s_C__Users_runneradmin__cargo_regi_1015cf14);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar6 = (uint)*(byte *)(*(int *)(iVar11 + 0x14) + 1 + uVar5);
        uVar9 = uVar6 * -0x61c8864f >> 0x10;
        if (*(char *)(iVar11 + 6) != '\0') {
          uVar9 = (uint)*(byte *)(*(int *)(iVar11 + 0x14) + uVar5) << 5 ^ uVar6;
        }
        *(uint *)(iVar11 + 0x84) = uVar9;
      }
      uVar9 = *(uint *)(iVar11 + 0x24);
      uVar6 = *(int *)(iVar11 + 0x80) - (uint)(uVar9 == 1);
      if (uVar6 != 0) {
        if (*(char *)(iVar11 + 6) == '\x01') {
          FUN_10123f70(iVar11,uVar5,uVar6);
        }
        else {
          uVar9 = *(uint *)(iVar11 + 0x18);
          if (uVar9 < uVar5) {
            FUN_10136a50(uVar5,uVar9,uVar9,&PTR_s_C__Users_runneradmin__cargo_regi_1015cd60);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar7 = uVar9 - uVar5;
          if (uVar6 + 3 < uVar9 - uVar5) {
            uVar7 = uVar6 + 3;
          }
          if (3 < uVar7) {
            iVar1 = *(int *)(iVar11 + 0x20);
            uVar7 = uVar7 + 1;
            uVar9 = *(uint *)(iVar11 + 0x2c);
            piVar10 = (int *)(*(int *)(iVar11 + 0x14) + uVar5);
            iVar2 = *(int *)(iVar11 + 0x30);
            do {
              uVar13 = (uint)(*piVar10 * -0x61c8864f) >> 0x10;
              sVar4 = *(short *)(iVar2 + uVar13 * 2);
              if ((short)uVar5 != sVar4) {
                uVar8 = uVar5 & 0xffff & iVar1 + 0xffffU;
                if (uVar9 <= uVar8) {
                  FUN_10136b52(uVar8,uVar9,&PTR_s_C__Users_runneradmin__cargo_regi_1015cd24);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                *(short *)(*(int *)(iVar11 + 0x28) + uVar8 * 2) = sVar4;
                *(short *)(iVar2 + uVar13 * 2) = (short)uVar5;
              }
              uVar7 = uVar7 - 1;
              piVar10 = (int *)((int)piVar10 + 1);
              uVar5 = uVar5 + 1;
            } while (4 < uVar7);
          }
        }
        *(int *)(iVar11 + 0x80) = *(int *)(iVar11 + 0x80) - uVar6;
        uVar9 = *(uint *)(iVar11 + 0x24);
      }
    }
    if ((0x105 < uVar9) || (param_1[1] == 0)) break;
  }
  if (*(int *)(iVar11 + 0x50) - 0x106U < *(uint *)(iVar11 + 0x10)) {
    FUN_101369c0("not enough room for search",0x35,&PTR_s_C__Users_runneradmin__cargo_regi_1015cf40)
    ;
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return;
}
