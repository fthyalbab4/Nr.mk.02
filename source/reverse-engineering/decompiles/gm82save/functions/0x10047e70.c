// rea decompile_all
// name: FUN_10047e70
// address: 0x10047e70
// body: available
// range: 0x10047e70-0x100480f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10047e70(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  LPVOID pvVar6;
  HANDLE hHeap;
  DWORD dwTlsIndex;
  int *piVar7;
  DWORD DVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  int local_24;

  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    *param_1 = 0;
    return;
  }
  if (DAT_101630b8 == 0) {
    DVar8 = FUN_1013be20(&DAT_101630b8);
  }
  else {
    DVar8 = DAT_101630b8 - 1;
  }
  piVar5 = TlsGetValue(DVar8);
  if (piVar5 < (int *)0x2) {
    if (piVar5 != (int *)0x1) {
      if (DAT_10163350 == 0) {
        dwTlsIndex = FUN_1013be20(&DAT_10163350);
        piVar5 = TlsGetValue(dwTlsIndex);
        if ((int *)0x2 < piVar5) goto LAB_10047ecf;
LAB_10048091:
        piVar7 = FUN_1013c160((int)piVar5);
        iVar2 = piVar7[2];
        iVar3 = piVar7[3];
        LOCK();
        *piVar7 = *piVar7 + -1;
        iVar11 = *piVar7;
        UNLOCK();
      }
      else {
        piVar5 = TlsGetValue(DAT_10163350 - 1);
        if (piVar5 < (int *)0x3) goto LAB_10048091;
LAB_10047ecf:
        LOCK();
        piVar7 = piVar5 + -2;
        iVar11 = *piVar7;
        *piVar7 = *piVar7 + 1;
        UNLOCK();
        if (*piVar7 == 0 || SCARRY4(iVar11,1) != *piVar7 < 0) goto LAB_100480bb;
        piVar7 = piVar5 + -2;
        iVar2 = *piVar5;
        iVar3 = piVar5[1];
        LOCK();
        *piVar7 = *piVar7 + -1;
        iVar11 = *piVar7;
        UNLOCK();
      }
      if (iVar11 == 0) {
        FUN_10107640(piVar7);
      }
      piVar5 = FUN_10107380(0,0x10);
      if (piVar5 == (int *)0x0) {
        FUN_1013679e(8,0x10);
LAB_100480bb:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      *piVar5 = iVar2;
      piVar5[1] = iVar3;
      piVar5[2] = DVar8;
      pvVar6 = TlsGetValue(DVar8);
      TlsSetValue(DVar8,piVar5);
      if (pvVar6 != (LPVOID)0x0) {
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,pvVar6);
      }
      goto LAB_10047f3b;
    }
    if (DAT_10163350 == 0) {
      DVar8 = FUN_1013be20(&DAT_10163350);
      pvVar6 = TlsGetValue(DVar8);
      if ((LPVOID)0x2 < pvVar6) goto LAB_1004801c;
LAB_100480d7:
      piVar5 = FUN_1013c160((int)pvVar6);
    }
    else {
      pvVar6 = TlsGetValue(DAT_10163350 - 1);
      if (pvVar6 < (LPVOID)0x3) goto LAB_100480d7;
LAB_1004801c:
      LOCK();
      piVar5 = (int *)((int)pvVar6 + -8);
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      if (*piVar5 == 0 || SCARRY4(iVar1,1) != *piVar5 < 0) goto LAB_100480bb;
      piVar5 = (int *)((int)pvVar6 + -8);
    }
    local_24 = piVar5[2];
    iVar11 = piVar5[3];
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      FUN_10107640(piVar5);
    }
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 0) goto LAB_10048054;
    piVar5 = *(int **)(param_2 + 4);
  }
  else {
LAB_10047f3b:
    local_24 = *piVar5;
    iVar11 = piVar5[1];
    piVar5 = *(int **)(param_2 + 4);
  }
  piVar7 = piVar5 + iVar1 * 3;
  uVar9 = 0;
  do {
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 8) != local_24 || *(int *)(iVar1 + 0xc) != iVar11) {
      LOCK();
      bVar12 = *(int *)(iVar1 + 0x14) == 0;
      if (bVar12) {
        *(int *)(iVar1 + 0x14) = piVar5[1];
      }
      UNLOCK();
      if (bVar12) {
        if (piVar5[2] != 0) {
          *(int *)(iVar1 + 0x18) = piVar5[2];
        }
        FUN_10107860((char *)(*(int *)(iVar1 + 0x10) + 0x18));
        uVar10 = *(uint *)(param_2 + 8);
        if (uVar9 < uVar10) {
          iVar1 = *(int *)(param_2 + 4);
          iVar11 = *(int *)(iVar1 + uVar9 * 0xc);
          iVar2 = *(int *)(iVar1 + 4 + uVar9 * 0xc);
          iVar3 = *(int *)(iVar1 + 8 + uVar9 * 0xc);
          memmove((void *)(iVar1 + uVar9 * 0xc),(void *)(iVar1 + 0xc + uVar9 * 0xc),
                  (~uVar9 + uVar10) * 0xc);
          uVar10 = uVar10 - 1;
          *(uint *)(param_2 + 8) = uVar10;
          if (iVar11 != 0) {
            *param_1 = iVar11;
            param_1[1] = iVar2;
            param_1[2] = iVar3;
            return;
          }
        }
        FUN_1013684d(uVar9,uVar10,&PTR_s_C__Users_runneradmin__cargo_regi_1014092c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    piVar5 = piVar5 + 3;
    uVar9 = uVar9 + 1;
  } while (piVar5 != piVar7);
LAB_10048054:
  *param_1 = 0;
  return;
}
