// rea decompile_all
// name: FUN_1013bf80
// address: 0x1013bf80
// body: available
// range: 0x1013bf80-0x1013bf83 inclusive
// range: 0x1013bf90-0x1013bfb4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1013bf80(uint param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;

  do {
    while ((param_1 & 4) != 0) {
      LOCK();
      bVar10 = param_1 == DAT_10163300;
      uVar7 = param_1 & 0xfffffffe;
      if (!bVar10) {
        param_1 = DAT_10163300;
        uVar7 = DAT_10163300;
      }
      DAT_10163300 = uVar7;
      UNLOCK();
      if (bVar10) {
        return;
      }
    }
    uVar7 = (param_1 & 0xfffffffe) + 4;
    LOCK();
    bVar10 = param_1 != DAT_10163300;
    uVar9 = uVar7;
    if (bVar10) {
      param_1 = DAT_10163300;
      uVar9 = DAT_10163300;
    }
    DAT_10163300 = uVar9;
    UNLOCK();
  } while (bVar10);
  do {
    while( true ) {
      while( true ) {
        piVar8 = (int *)(uVar7 & 0xfffffff0);
        iVar6 = piVar8[2];
        piVar4 = piVar8;
        while (iVar6 == 0) {
          piVar3 = (int *)*piVar4;
          piVar3[1] = (int)piVar4;
          piVar4 = piVar3;
          iVar6 = piVar3[2];
        }
        piVar8[2] = iVar6;
        if ((uVar7 & 9) != 1) break;
        LOCK();
        bVar10 = uVar7 != DAT_10163300;
        uVar9 = uVar7 & 0xfffffff3;
        if (bVar10) {
          uVar7 = DAT_10163300;
          uVar9 = DAT_10163300;
        }
        DAT_10163300 = uVar9;
        UNLOCK();
        if (!bVar10) {
          return;
        }
      }
      uVar9 = 0x11;
      if ((((uVar7 & 8) != 0) || (uVar9 = 0, *(char *)(iVar6 + 0x11) != '\x01')) ||
         (*(int *)(iVar6 + 4) == 0)) break;
      piVar8[2] = *(int *)(iVar6 + 4);
      LOCK();
      bVar10 = uVar7 == DAT_10163300;
      uVar9 = uVar7 & 0xfffffff3;
      if (!bVar10) {
        uVar7 = DAT_10163300;
        uVar9 = DAT_10163300;
      }
      DAT_10163300 = uVar9;
      UNLOCK();
      if (bVar10) {
        piVar4 = *(int **)(iVar6 + 0xc);
        if (piVar4 == (int *)0x0) goto LAB_1010784a;
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + 1;
        UNLOCK();
        if (*piVar4 != 0 && SCARRY4(iVar2,1) == *piVar4 < 0) {
          *(undefined1 *)(iVar6 + 0x10) = 1;
          FUN_10107860((char *)(piVar4 + 6));
          LOCK();
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 != 0) {
            return;
          }
          FUN_10107640(piVar4);
          return;
        }
        goto LAB_10107854;
      }
      piVar8[2] = iVar6;
    }
    LOCK();
    bVar10 = uVar7 != DAT_10163300;
    if (bVar10) {
      uVar7 = DAT_10163300;
      uVar9 = DAT_10163300;
    }
    DAT_10163300 = uVar9;
    UNLOCK();
  } while (bVar10);
  while( true ) {
    iVar2 = *(int *)(iVar6 + 4);
    piVar4 = *(int **)(iVar6 + 0xc);
    if (piVar4 == (int *)0x0) break;
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + 1;
    UNLOCK();
    if (*piVar4 == 0 || SCARRY4(iVar1,1) != *piVar4 < 0) goto LAB_10107854;
    *(undefined1 *)(iVar6 + 0x10) = 1;
    FUN_10107860((char *)(piVar4 + 6));
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      FUN_10107640(piVar4);
    }
    iVar6 = iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
LAB_1010784a:
  FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_10157eec);
LAB_10107854:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}
