// rea decompile_all
// name: FUN_10095140
// address: 0x10095140
// body: available
// range: 0x10095140-0x10095162 inclusive
// range: 0x10095170-0x10095395 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall FUN_10095140(uint param_1)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  if (param_1 < 0x20) {
LAB_10095147:
    bVar4 = false;
  }
  else {
    bVar4 = true;
    if (0x7e < param_1) {
      bVar6 = (byte)(param_1 >> 8);
      if (param_1 < 0x10000) {
        iVar7 = 0;
        uVar8 = 0;
        do {
          uVar10 = (uint)(byte)(&DAT_10145d69)[iVar7];
          pbVar1 = &DAT_10145d68 + iVar7;
          iVar7 = iVar7 + 2;
          uVar9 = uVar8 + uVar10;
          if (*pbVar1 == bVar6) {
            if ((uVar9 < uVar8) || (0x11c < uVar9)) {
              FUN_10136a50(uVar8,uVar9,0x11c,&PTR_s_C__Users_runneradmin__rustup_too_10146078);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar10 != 0) {
              pcVar5 = &DAT_10145db4 + uVar8;
              do {
                if (*pcVar5 == (char)param_1) goto LAB_10095147;
                pcVar5 = pcVar5 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          else if (bVar6 < *pbVar1) break;
          uVar8 = uVar9;
        } while (iVar7 != 0x4c);
        iVar7 = 0;
        bVar4 = true;
        do {
          uVar8 = (uint)(char)(&DAT_10145ed0)[iVar7];
          iVar3 = iVar7 + 1;
          if ((int)uVar8 < 0) {
            if (iVar7 + 1 == 0x124) {
LAB_1009538a:
              FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_10146088);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar8 = (uVar8 & 0x7f) << 8 | (uint)(byte)(&DAT_10145ed1)[iVar7];
            iVar3 = iVar7 + 2;
          }
          iVar7 = iVar3;
          param_1 = param_1 - uVar8;
        } while ((-1 < (int)param_1) && (bVar4 = (bool)(bVar4 ^ 1), iVar7 != 0x124));
      }
      else {
        if (0x1ffff < param_1) {
          return (param_1 < 0xe01f0 && param_1 - 0xe0100 < 0xfff5337a) &&
                 ((param_1 - 0x31350 < 0xfffffffb &&
                  (param_1 - 0x30000 < 0xfffffa1e && param_1 - 0x2f800 < 0xfffff65e)) &&
                 ((param_1 - 0x2ebf0 < 0xfffffff1 && (param_1 & 0x1ffffe) != 0x2ceae) &&
                 ((param_1 & 0x1ffffe) != 0x2b81e && (param_1 & 0x1fffe0) != 0x2a6e0)));
        }
        iVar7 = 0;
        uVar8 = 0;
        do {
          uVar10 = (uint)(byte)(&DAT_10145a41)[iVar7];
          pbVar1 = &DAT_10145a40 + iVar7;
          iVar7 = iVar7 + 2;
          uVar9 = uVar8 + uVar10;
          if (*pbVar1 == bVar6) {
            if ((uVar9 < uVar8) || (0xd4 < uVar9)) {
              FUN_10136a50(uVar8,uVar9,0xd4,&PTR_s_C__Users_runneradmin__rustup_too_10146078);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar10 != 0) {
              pcVar5 = &DAT_10145a9c + uVar8;
              do {
                if (*pcVar5 == (char)param_1) goto LAB_10095147;
                pcVar5 = pcVar5 + 1;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          else if (bVar6 < *pbVar1) break;
          uVar8 = uVar9;
        } while (iVar7 != 0x5c);
        uVar8 = param_1 & 0xffff;
        iVar7 = 0;
        bVar4 = true;
        do {
          uVar9 = (uint)(char)(&DAT_10145b70)[iVar7];
          iVar3 = iVar7 + 1;
          if ((int)uVar9 < 0) {
            if (iVar7 + 1 == 0x1f8) goto LAB_1009538a;
            uVar9 = (uVar9 & 0x7f) << 8 | (uint)(byte)(&DAT_10145b71)[iVar7];
            iVar3 = iVar7 + 2;
          }
          iVar7 = iVar3;
          uVar8 = uVar8 - uVar9;
        } while ((-1 < (int)uVar8) && (bVar4 = (bool)(bVar4 ^ 1), iVar7 != 0x1f8));
      }
    }
  }
  return bVar4;
}
