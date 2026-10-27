// rea decompile_all
// name: FUN_100bea60
// address: 0x100bea60
// body: available
// range: 0x100bea60-0x100bec3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_100bea60(void)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  int *lpTlsValue;
  int iVar4;
  LPVOID pvVar5;
  int iVar6;
  undefined4 *lpMem;
  HANDLE hHeap;
  DWORD dwTlsIndex;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined8 local_418 [129];

  if (DAT_101630e0 == 0) {
    dwTlsIndex = FUN_1013be20(&DAT_101630e0);
    lpTlsValue = TlsGetValue(dwTlsIndex);
    piVar8 = DAT_101630cc;
  }
  else {
    dwTlsIndex = DAT_101630e0 - 1;
    lpTlsValue = TlsGetValue(dwTlsIndex);
    piVar8 = DAT_101630cc;
  }
  DAT_101630cc = piVar8;
  if (lpTlsValue < (int *)0x2) {
    if (lpTlsValue == (int *)0x1) {
      lpTlsValue = (int *)0x0;
    }
    else {
      if (DAT_101630c8 == 0) {
        LOCK();
        iVar4 = *piVar8;
        *piVar8 = *piVar8 + 1;
        UNLOCK();
        if (*piVar8 == 0 || SCARRY4(iVar4,1) != *piVar8 < 0) {
LAB_100bec10:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
      }
      else {
        FUN_101373c0();
        piVar8 = DAT_101630cc;
        LOCK();
        iVar4 = *DAT_101630cc;
        *DAT_101630cc = *DAT_101630cc + 1;
        UNLOCK();
        if (*piVar8 == 0 || SCARRY4(iVar4,1) != *piVar8 < 0) goto LAB_100bec10;
      }
      iVar4 = -0x400;
      do {
        *(undefined8 *)(&stack0xfffffff0 + iVar4) = 0;
        *(undefined8 *)((int)local_418 + iVar4 + 0x400) = 0x1009e1b0;
        iVar4 = iVar4 + 0x10;
      } while (iVar4 != 0);
      pvVar5 = FUN_10107380(0,0x4c0);
      if (pvVar5 == (LPVOID)0x0) {
        FUN_1013679e(0x40,0x480);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar7 = (uint)pvVar5 & 0xffffffc0;
      *(LPVOID *)(uVar7 + 0x3c) = pvVar5;
      piVar1 = (int *)(uVar7 + 0x40);
      *(undefined4 *)(uVar7 + 0x40) = 0;
      *(int **)(uVar7 + 0x44) = piVar8;
      memcpy((void *)(uVar7 + 0x48),local_418,0x400);
      *(undefined4 *)(uVar7 + 0x448) = 0;
      *(undefined4 *)(uVar7 + 0x44c) = 0;
      *(undefined4 *)(uVar7 + 0x450) = 1;
      *(undefined4 *)(uVar7 + 0x454) = 0;
      *(undefined4 *)(uVar7 + 0x480) = 0;
      iVar6 = piVar8[0x40];
      *(int *)(uVar7 + 0x40) = iVar6;
      LOCK();
      iVar4 = piVar8[0x40];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        piVar8[0x40] = (int)piVar1;
        iVar4 = iVar6;
      }
      UNLOCK();
      while (!bVar9) {
        *piVar1 = iVar4;
        LOCK();
        iVar6 = piVar8[0x40];
        bVar9 = iVar4 == iVar6;
        if (bVar9) {
          piVar8[0x40] = (int)piVar1;
          iVar6 = iVar4;
        }
        UNLOCK();
        iVar4 = iVar6;
      }
      lpTlsValue = FUN_10107380(0,8);
      if (lpTlsValue == (int *)0x0) {
        FUN_1013679e(4,8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *lpTlsValue = (int)piVar1;
      lpTlsValue[1] = dwTlsIndex;
      lpMem = TlsGetValue(dwTlsIndex);
      TlsSetValue(dwTlsIndex,lpTlsValue);
      if (lpMem != (undefined4 *)0x0) {
        puVar2 = (uint *)*lpMem;
        uVar7 = puVar2[0x104];
        puVar2[0x104] = uVar7 - 1;
        if (uVar7 == 1 && puVar2[0x103] == 0) {
          FUN_10136e40(puVar2);
        }
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
      }
    }
  }
  return lpTlsValue;
}
