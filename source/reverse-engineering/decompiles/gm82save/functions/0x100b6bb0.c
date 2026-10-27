// rea decompile_all
// name: FUN_100b6bb0
// address: 0x100b6bb0
// body: available
// range: 0x100b6bb0-0x100b6cee inclusive
// range: 0x100b6cf0-0x100b6d1a inclusive
// range: 0x100b6d20-0x100b6e00 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b6bb0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;

  LOCK();
  UNLOCK();
  iVar8 = DAT_101632e4 + 1;
  DAT_101632e4 = DAT_101632e4 + 1;
LAB_100b6be0:
  if (DAT_101632e8 == (int *)0x0) {
    piVar10 = FUN_10138820();
    uVar2 = piVar10[1];
  }
  else {
    uVar2 = DAT_101632e8[1];
    piVar10 = DAT_101632e8;
  }
  piVar9 = DAT_101632e8;
  if ((uint)(iVar8 * 3) <= uVar2) goto LAB_100b6dc0;
  if (uVar2 != 0) {
    iVar15 = uVar2 << 6;
    puVar13 = (uint *)(*piVar10 + 0x18);
    do {
      while( true ) {
        LOCK();
        uVar2 = *puVar13;
        if (uVar2 == 0) {
          *puVar13 = 1;
        }
        UNLOCK();
        if (uVar2 != 0) break;
        puVar13 = puVar13 + 0x10;
        iVar15 = iVar15 + -0x40;
        if (iVar15 == 0) goto LAB_100b6c40;
      }
      FUN_10138880(puVar13);
      puVar13 = puVar13 + 0x10;
      iVar15 = iVar15 + -0x40;
    } while (iVar15 != 0);
  }
LAB_100b6c40:
  if (DAT_101632e8 != piVar10) {
    if (piVar10[1] != 0) {
      iVar15 = piVar10[1] << 6;
      puVar13 = (uint *)(*piVar10 + 0x18);
      do {
        while( true ) {
          LOCK();
          uVar2 = *puVar13;
          *puVar13 = *puVar13 - 1;
          UNLOCK();
          if (3 < uVar2 && (char)((uVar2 & 2) >> 1) == '\0') break;
          puVar13 = puVar13 + 0x10;
          iVar15 = iVar15 + -0x40;
          if (iVar15 == 0) goto LAB_100b6be0;
        }
        FUN_101389f0(puVar13);
        puVar13 = puVar13 + 0x10;
        iVar15 = iVar15 + -0x40;
      } while (iVar15 != 0);
    }
    goto LAB_100b6be0;
  }
  piVar9 = (int *)FUN_100b6e10(iVar8,piVar10);
  if (piVar10[1] != 0) {
    iVar8 = *piVar10;
    iVar11 = piVar10[1] * 0x40;
    iVar15 = iVar8;
    do {
      if (*(int *)(iVar15 + 0x1c) != 0) {
        iVar3 = piVar9[2];
        iVar4 = *piVar9;
        uVar2 = piVar9[1];
        iVar14 = *(int *)(iVar15 + 0x1c);
        do {
          iVar5 = *(int *)(iVar14 + 0xc);
          uVar12 = (uint)(*(int *)(iVar14 + 8) * -0x61c88647) >> (-(char)iVar3 & 0x1fU);
          if (uVar2 <= uVar12) {
            FUN_10136b52(uVar12,uVar2,&PTR_s_C__Users_runneradmin__cargo_regi_1014ff6c);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          iVar1 = iVar4 + uVar12 * 0x40;
          iVar6 = *(int *)(iVar4 + 0x20 + uVar12 * 0x40);
          if (iVar6 == 0) {
            *(int *)(iVar1 + 0x1c) = iVar14;
          }
          else {
            *(int *)(iVar6 + 0xc) = iVar14;
          }
          *(int *)(iVar1 + 0x20) = iVar14;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          iVar14 = iVar5;
        } while (iVar5 != 0);
      }
      iVar15 = iVar15 + 0x40;
    } while (iVar15 != iVar8 + iVar11);
    puVar13 = (uint *)(iVar8 + 0x18);
    DAT_101632e8 = piVar9;
    do {
      while( true ) {
        LOCK();
        uVar2 = *puVar13;
        *puVar13 = *puVar13 - 1;
        UNLOCK();
        if (3 < uVar2 && (char)((uVar2 & 2) >> 1) == '\0') break;
        puVar13 = puVar13 + 0x10;
        iVar11 = iVar11 + -0x40;
        piVar9 = DAT_101632e8;
        if (iVar11 == 0) goto LAB_100b6dc0;
      }
      FUN_101389f0(puVar13);
      puVar13 = puVar13 + 0x10;
      iVar11 = iVar11 + -0x40;
      piVar9 = DAT_101632e8;
    } while (iVar11 != 0);
  }
LAB_100b6dc0:
  DAT_101632e8 = piVar9;
  piVar10 = DAT_101632ec;
  if (DAT_101632ec == (int *)0x0) {
    piVar10 = FUN_101386f0();
  }
  *param_1 = (int)piVar10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((int)param_1 + 0x11) = 0;
  return;
}
