// rea decompile_all
// name: FUN_10095ed0
// address: 0x10095ed0
// body: available
// range: 0x10095ed0-0x1009609b inclusive
// range: 0x100960a0-0x10096154 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10095ed0(uint *param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;

  uVar14 = *param_1;
  uVar11 = 0;
  uVar5 = 0;
  do {
    uVar13 = (uint)(uVar5 >> 0x20);
    if (uVar14 == uVar11) {
      if (uVar5 == 0) {
        return;
      }
      uVar11 = uVar13 >> (param_2 & 0x1f);
      uVar10 = uVar11;
      uVar13 = (uint)uVar5 >> (param_2 & 0x1f) | uVar13 << 0x20 - (param_2 & 0x1f);
      if ((param_2 & 0x20) != 0) {
        uVar10 = 0;
        uVar13 = uVar11;
      }
      uVar11 = uVar14;
      uVar9 = uVar14;
      if (uVar10 == 0 && uVar13 == 0) {
        do {
          lVar3 = (uVar5 & 0xffffffff) * 10;
          uVar13 = (uint)lVar3;
          uVar11 = (int)((ulonglong)lVar3 >> 0x20) + (int)(uVar5 >> 0x20) * 10;
          uVar5 = CONCAT44(uVar11,uVar13);
          uVar6 = uVar11 >> (param_2 & 0x1f);
          uVar10 = uVar6;
          uVar13 = uVar13 >> (param_2 & 0x1f) | uVar11 << 0x20 - (param_2 & 0x1f);
          if ((param_2 & 0x20) != 0) {
            uVar10 = 0;
            uVar13 = uVar6;
          }
          uVar11 = uVar9 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar10 == 0 && uVar13 == 0);
      }
      break;
    }
    if (uVar11 == 0x300) {
      FUN_10136b52(0x300,0x300,&PTR_s_C__Users_runneradmin__rustup_too_101454ec);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar5 = (uVar5 & 0xffffffff) * 10 +
            CONCAT44(uVar13 * 10,(uint)*(byte *)((int)param_1 + uVar11 + 8));
    uVar13 = (uint)(uVar5 >> 0x20);
    uVar11 = uVar11 + 1;
    uVar9 = uVar13 >> (param_2 & 0x1f);
    uVar10 = uVar9;
    uVar13 = (uint)uVar5 >> (param_2 & 0x1f) | uVar13 << 0x20 - (param_2 & 0x1f);
    if ((param_2 & 0x20) != 0) {
      uVar10 = 0;
      uVar13 = uVar9;
    }
  } while (uVar10 == 0 && uVar13 == 0);
  uVar13 = (param_1[1] - uVar11) + 1;
  param_1[1] = uVar13;
  if ((int)uVar13 < -0x7ff) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 0xc2) = 0;
  }
  else {
    uVar13 = -1 << (param_2 & 0x1f);
    if ((param_2 & 0x20) == 0) {
      uVar10 = uVar13;
      uVar13 = 0xffffffff;
    }
    else {
      uVar10 = 0;
    }
    uVar6 = uVar14 - uVar11;
    uVar9 = 0;
    if (uVar11 <= uVar14 && uVar6 != 0) {
      iVar12 = 8;
      uVar7 = 0x300;
      if (uVar11 < 0x300) {
        uVar7 = uVar11;
      }
      do {
        uVar9 = (uint)(uVar5 >> 0x20);
        if ((uVar7 - 0x300) + iVar12 == 8) {
          FUN_10136b52(uVar11,0x300,&PTR_s_C__Users_runneradmin__rustup_too_101454fc);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        bVar8 = (byte)(uVar9 >> (param_2 & 0x1f));
        if ((param_2 & 0x20) == 0) {
          bVar8 = (byte)((uint)uVar5 >> (param_2 & 0x1f)) | (byte)(uVar9 << 0x20 - (param_2 & 0x1f))
          ;
        }
        bVar2 = *(byte *)((int)param_1 + uVar11 + 8);
        uVar11 = uVar11 + 1;
        *(byte *)((int)param_1 + iVar12) = bVar8;
        uVar5 = (ulonglong)((uint)uVar5 & ~uVar10) * 10 +
                CONCAT44((uVar9 & ~uVar13) * 10,(uint)bVar2);
        iVar12 = iVar12 + 1;
        uVar9 = uVar6;
      } while (uVar14 != uVar11);
    }
    uVar14 = uVar9;
    if (uVar5 != 0) {
      do {
        uVar14 = (uint)(uVar5 >> 0x20);
        bVar8 = (byte)(uVar14 >> (param_2 & 0x1f));
        if ((param_2 & 0x20) == 0) {
          bVar8 = (byte)((uint)uVar5 >> (param_2 & 0x1f)) |
                  (byte)(uVar14 << 0x20 - (param_2 & 0x1f));
        }
        lVar3 = (ulonglong)((uint)uVar5 & ~uVar10) * 10;
        iVar12 = (int)lVar3;
        if (uVar9 < 0x300) {
          *(byte *)((int)param_1 + uVar9 + 8) = bVar8;
          uVar9 = uVar9 + 1;
        }
        else if (bVar8 != 0) {
          *(undefined1 *)(param_1 + 0xc2) = 1;
        }
        iVar1 = (int)((ulonglong)lVar3 >> 0x20) + (uVar14 & ~uVar13) * 10;
        uVar5 = CONCAT44(iVar1,iVar12);
        uVar14 = uVar9;
      } while (iVar12 != 0 || iVar1 != 0);
    }
    do {
      *param_1 = uVar9;
      if (uVar9 == 0) {
        return;
      }
      if (0x300 < uVar14) {
        FUN_10136b52(uVar9 - 1,0x300,&PTR_s_C__Users_runneradmin__rustup_too_101454cc);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      iVar12 = uVar9 + 7;
      uVar9 = uVar9 - 1;
    } while (*(char *)((int)param_1 + iVar12) == '\0');
  }
  return;
}
