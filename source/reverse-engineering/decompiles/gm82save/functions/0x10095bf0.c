// rea decompile_all
// name: FUN_10095bf0
// address: 0x10095bf0
// body: available
// range: 0x10095bf0-0x10095ca3 inclusive
// range: 0x10095cb0-0x10095de4 inclusive
// range: 0x10095df0-0x10095ec6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10095bf0(uint *param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_30;

  uVar10 = *param_1;
  if (uVar10 != 0) {
    uVar11 = param_2 & 0x3f;
    uVar12 = 0;
    uVar7 = *(ushort *)(&DAT_10146368 + uVar11 * 2) & 0x7ff;
    uVar13 = (uint)(*(ushort *)(&DAT_10146368 + uVar11 * 2) >> 0xb);
    do {
      if (((*(ushort *)(&DAT_1014636a + uVar11 * 2) & 0x7ff) - uVar7 == uVar12) ||
         ((uVar7 - 0x51c) + uVar12 == 0)) goto LAB_10095c7a;
      if (uVar10 == uVar12) {
        uVar13 = uVar13 - 1;
        goto LAB_10095c7a;
      }
      if (uVar12 == 0x300) {
        FUN_10136b52(0x300,0x300,&PTR_s_C__Users_runneradmin__rustup_too_10146908);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      iVar8 = uVar7 + uVar12;
      bVar1 = *(byte *)((int)param_1 + uVar12 + 8);
      uVar12 = uVar12 + 1;
    } while (bVar1 == (&DAT_101463ea)[iVar8]);
    uVar13 = uVar13 - (bVar1 < (byte)(&DAT_101463ea)[iVar8]);
LAB_10095c7a:
    local_30 = 0;
    uVar12 = uVar13 - 1;
    uVar7 = 0;
    do {
      uVar18 = uVar10 - 1;
      if (0x300 < uVar10) {
        FUN_10136b52(uVar18,0x300,&PTR_s_C__Users_runneradmin__rustup_too_101454dc);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      bVar1 = *(byte *)((int)param_1 + uVar10 + 7);
      bVar5 = (byte)uVar11 & 0x1f;
      uVar14 = (uint)bVar1 << ((byte)uVar11 & 0x1f);
      uVar15 = uVar14;
      uVar9 = 0 << bVar5 | (uint)(bVar1 >> 0x20 - bVar5);
      if ((param_2 & 0x20) != 0) {
        uVar15 = 0;
        uVar9 = uVar14;
      }
      uVar16 = uVar15 + local_30;
      uVar15 = uVar9 + uVar7 + (uint)CARRY4(uVar15,local_30);
      uVar7 = uVar15 * -0x80000000 | uVar16 >> 1;
      uVar17 = uVar15 >> 1;
      uVar14 = (uVar7 + uVar17 + (uint)CARRY4(uVar7,uVar17)) % 5;
      uVar9 = uVar7 - uVar14;
      uVar3 = (ulonglong)uVar9 * 0xcccccccd;
      local_30 = (uint)uVar3;
      uVar7 = (uVar17 - (uVar7 < uVar14)) * -0x33333333 + uVar9 * -0x33333334 + (int)(uVar3 >> 0x20)
      ;
      lVar4 = (uVar3 & 0xffffffff) * 0xfffffff6;
      uVar9 = (uint)lVar4;
      iVar8 = uVar9 + uVar16;
      if (uVar12 + uVar10 < 0x300) {
        *(char *)((int)param_1 + uVar10 + uVar13 + 7) = (char)iVar8;
      }
      else if (iVar8 != 0 ||
               ((int)((ulonglong)lVar4 >> 0x20) - local_30) + uVar7 * -10 + uVar15 +
               (uint)CARRY4(uVar9,uVar16) != 0) {
        *(undefined1 *)(param_1 + 0xc2) = 1;
      }
      uVar10 = uVar18;
    } while (uVar18 != 0);
    if ((uVar16 < 10) <= uVar15) {
      do {
        uVar11 = uVar7 >> 1;
        uVar18 = uVar7 << 0x1f | local_30 >> 1;
        uVar10 = (uVar18 + uVar11 + (uint)CARRY4(uVar18,uVar11)) % 5;
        uVar9 = uVar18 - uVar10;
        uVar3 = (ulonglong)uVar9 * 0xcccccccd;
        uVar11 = (uVar11 - (uVar18 < uVar10)) * -0x33333333 +
                 uVar9 * -0x33333334 + (int)(uVar3 >> 0x20);
        lVar4 = (uVar3 & 0xffffffff) * 0xfffffff6;
        uVar10 = (uint)lVar4;
        iVar8 = uVar10 + local_30;
        if (uVar12 < 0x300) {
          *(char *)((int)param_1 + uVar12 + 8) = (char)iVar8;
        }
        else if (iVar8 != 0 ||
                 ((int)((ulonglong)lVar4 >> 0x20) - (uint)uVar3) + uVar11 * -10 + uVar7 +
                 (uint)CARRY4(uVar10,local_30) != 0) {
          *(undefined1 *)(param_1 + 0xc2) = 1;
        }
        uVar12 = uVar12 - 1;
        bVar2 = (local_30 < 10) <= uVar7;
        local_30 = (uint)uVar3;
        uVar7 = uVar11;
      } while (bVar2);
    }
    uVar10 = *param_1 + uVar13;
    uVar12 = 0x300;
    if (uVar10 < 0x300) {
      uVar12 = uVar10;
    }
    *param_1 = uVar12;
    param_1[1] = param_1[1] + uVar13;
    while (uVar10 != 0) {
      uVar10 = uVar12 - 1;
      if (0x300 < uVar12) {
        FUN_10136b52(uVar10,0x300,&PTR_s_C__Users_runneradmin__rustup_too_101454cc);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      if (*(char *)((int)param_1 + uVar12 + 7) != '\0') {
        return;
      }
      *param_1 = uVar10;
      uVar12 = uVar10;
    }
  }
  return;
}
