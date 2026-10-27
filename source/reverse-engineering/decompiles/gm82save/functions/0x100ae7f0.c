// rea decompile_all
// name: FUN_100ae7f0
// address: 0x100ae7f0
// body: available
// range: 0x100ae7f0-0x100ae847 inclusive
// range: 0x100ae850-0x100ae8f1 inclusive
// range: 0x100ae900-0x100ae991 inclusive
// range: 0x100ae9a0-0x100aea2a inclusive
// range: 0x100aea30-0x100aea9c inclusive
// range: 0x100aeaa0-0x100aeac6 inclusive
// range: 0x100aead0-0x100aeb17 inclusive
// range: 0x100aeb20-0x100aebcb inclusive
// range: 0x100aebd0-0x100aebf6 inclusive
// range: 0x100aec00-0x100aec53 inclusive
// range: 0x100aec60-0x100aece5 inclusive
// range: 0x100aecf0-0x100aede8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100ae7f0(int param_1,PSRWLOCK param_2)

{
  PSRWLOCK pRVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char cVar4;
  LPVOID pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  HANDLE pvVar9;
  PVOID pvVar10;
  uint uVar11;
  int iVar12;
  PVOID pvVar13;
  uint uVar14;
  int *piVar15;
  undefined4 *puVar16;
  bool bVar17;
  PVOID local_28;
  uint local_20;
  LPVOID local_1c;
  PSRWLOCK local_14;

  if (param_1 == 0) {
    LOCK();
    pRVar1 = param_2 + 0x41;
    pRVar1->Ptr = (PVOID)((int)pRVar1->Ptr + -1);
    UNLOCK();
    if (pRVar1->Ptr != (PVOID)0x0) {
      return;
    }
    pvVar10 = param_2[0x10].Ptr;
    do {
      LOCK();
      pvVar13 = param_2[0x10].Ptr;
      bVar17 = pvVar10 == pvVar13;
      if (bVar17) {
        param_2[0x10].Ptr = (PVOID)((uint)pvVar10 | (uint)param_2[0x32].Ptr);
        pvVar13 = pvVar10;
      }
      UNLOCK();
      pvVar10 = pvVar13;
    } while (!bVar17);
    pvVar10 = param_2[0x32].Ptr;
    if (((uint)pvVar10 & (uint)pvVar13) == 0) {
      AcquireSRWLockExclusive(param_2 + 0x20);
      if (param_2[0x23].Ptr != (PVOID)0x0) {
        iVar12 = (int)param_2[0x23].Ptr * 0xc;
        piVar15 = param_2[0x22].Ptr;
        do {
          LOCK();
          bVar17 = *(int *)(*piVar15 + 0xc) == 0;
          if (bVar17) {
            *(int *)(*piVar15 + 0xc) = 2;
          }
          UNLOCK();
          if (bVar17) {
            FUN_10107860((char *)(*(int *)(*piVar15 + 8) + 0x18));
          }
          piVar15 = piVar15 + 3;
          iVar12 = iVar12 + -0xc;
        } while (iVar12 != 0);
      }
      pvVar10 = param_2[0x26].Ptr;
      puVar16 = param_2[0x25].Ptr;
      param_2[0x26].Ptr = (PVOID)0x0;
      if (pvVar10 != (PVOID)0x0) {
        puVar3 = puVar16 + (int)pvVar10 * 3;
        do {
          piVar15 = (int *)*puVar16;
          LOCK();
          bVar17 = piVar15[3] == 0;
          if (bVar17) {
            piVar15[3] = puVar16[1];
          }
          UNLOCK();
          if (bVar17) {
            FUN_10107860((char *)(piVar15[2] + 0x18));
            LOCK();
            *piVar15 = *piVar15 + -1;
            iVar12 = *piVar15;
            UNLOCK();
          }
          else {
            LOCK();
            *piVar15 = *piVar15 + -1;
            iVar12 = *piVar15;
            UNLOCK();
          }
          if (iVar12 == 0) {
            FUN_1011b0a0(piVar15);
          }
          puVar16 = puVar16 + 3;
        } while (puVar16 != puVar3);
      }
      if (param_2[0x23].Ptr == (PVOID)0x0) {
        bVar17 = param_2[0x26].Ptr == (PVOID)0x0;
      }
      else {
        bVar17 = false;
      }
      LOCK();
      *(bool *)&param_2[0x27].Ptr = bVar17;
      UNLOCK();
      ReleaseSRWLockExclusive(param_2 + 0x20);
      pvVar10 = param_2[0x32].Ptr;
    }
    local_28 = param_2->Ptr;
    local_20 = 0;
    uVar11 = ~(uint)pvVar10;
LAB_100aec75:
    do {
      uVar14 = (int)pvVar10 - 1U & (uint)local_28;
      pvVar10 = *(PVOID *)((int)param_2[0x33].Ptr + uVar14 * 0x28 + 0x20);
      if ((PVOID)((int)local_28 + 1) == pvVar10) {
        if (param_2[0x30].Ptr <= (PVOID)(uVar14 + 1)) {
          pvVar10 = (PVOID)(((uint)local_28 & -(int)param_2[0x31].Ptr) + (int)param_2[0x31].Ptr);
        }
        local_28 = pvVar10;
        puVar2 = (uint *)((int)param_2[0x33].Ptr + uVar14 * 0x28);
        uVar14 = *puVar2;
        iVar12 = uVar14 - 3;
        if (uVar14 < 3) {
          iVar12 = 3;
        }
        if (iVar12 == 0) {
          if (puVar2[1] == 0) {
            pvVar10 = param_2[0x32].Ptr;
            goto LAB_100aec75;
          }
        }
        else {
          if (iVar12 != 1) {
            if (iVar12 == 2) {
              pvVar10 = param_2[0x32].Ptr;
            }
            else {
              FUN_100ae070(uVar14,(PSRWLOCK)puVar2[1]);
              pvVar10 = param_2[0x32].Ptr;
            }
            goto LAB_100aec75;
          }
          if (puVar2[1] == 0) {
            pvVar10 = param_2[0x32].Ptr;
            goto LAB_100aec75;
          }
        }
        pvVar5 = (LPVOID)puVar2[2];
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,pvVar5);
        pvVar10 = param_2[0x32].Ptr;
        goto LAB_100aec75;
      }
      if ((PVOID)((uint)pvVar13 & uVar11) == local_28) goto LAB_100aed89;
      if (local_20 < 7) {
        if (local_20 != 0) {
          iVar12 = local_20 * local_20;
          do {
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
      }
      else {
        SwitchToThread();
      }
      pvVar10 = param_2[0x32].Ptr;
      local_20 = local_20 + 1;
    } while( true );
  }
  if (param_1 == 1) {
    LOCK();
    pRVar1 = param_2 + 0x31;
    pRVar1->Ptr = (PVOID)((int)pRVar1->Ptr + -1);
    UNLOCK();
    if (pRVar1->Ptr != (PVOID)0x0) {
      return;
    }
    LOCK();
    pRVar1 = param_2 + 0x10;
    pvVar10 = pRVar1->Ptr;
    pRVar1->Ptr = (PVOID)((uint)pRVar1->Ptr | 1);
    UNLOCK();
    if (((uint)pvVar10 & 1) == 0) {
      uVar11 = 0;
      pvVar10 = param_2[0x10].Ptr;
      if ((~(uint)pvVar10 & 0x3e) == 0) {
        iVar12 = 1;
        uVar14 = 0;
        uVar11 = 0;
        do {
          uVar7 = uVar14;
          uVar8 = uVar11;
          if (uVar11 < 7) {
            while (uVar8 != 0) {
              uVar7 = uVar7 - 1;
              uVar8 = uVar7;
            }
          }
          else {
            SwitchToThread();
          }
          pvVar10 = param_2[0x10].Ptr;
          uVar14 = uVar14 + iVar12;
          uVar11 = uVar11 + 1;
          iVar12 = iVar12 + 2;
        } while ((~(uint)pvVar10 & 0x3e) == 0);
      }
      pvVar13 = param_2->Ptr;
      LOCK();
      local_1c = param_2[1].Ptr;
      param_2[1].Ptr = (PVOID)0x0;
      UNLOCK();
      uVar14 = (uint)pvVar13 >> 1;
      if (local_1c == (LPVOID)0x0 && uVar14 != (uint)pvVar10 >> 1) {
        iVar12 = uVar11 * 2 + 1;
        uVar7 = uVar11 * uVar11;
        do {
          uVar8 = uVar7;
          uVar6 = uVar11;
          if (uVar11 < 7) {
            while (uVar6 != 0) {
              uVar8 = uVar8 - 1;
              uVar6 = uVar8;
            }
          }
          else {
            SwitchToThread();
          }
          uVar7 = uVar7 + iVar12;
          uVar11 = uVar11 + 1;
          iVar12 = iVar12 + 2;
          LOCK();
          local_1c = param_2[1].Ptr;
          param_2[1].Ptr = (PVOID)0x0;
          UNLOCK();
        } while (local_1c == (LPVOID)0x0);
      }
      while (uVar14 != (uint)pvVar10 >> 1) {
        uVar14 = uVar14 & 0x1f;
        if (uVar14 == 0x1f) {
          if (*(int *)((int)local_1c + 0x4d8) == 0) {
            iVar12 = 1;
            uVar14 = 0;
            uVar11 = 0;
            do {
              uVar7 = uVar14;
              uVar8 = uVar11;
              if (uVar11 < 7) {
                while (uVar8 != 0) {
                  uVar7 = uVar7 - 1;
                  uVar8 = uVar7;
                }
              }
              else {
                SwitchToThread();
              }
              uVar14 = uVar14 + iVar12;
              uVar11 = uVar11 + 1;
              iVar12 = iVar12 + 2;
            } while (*(int *)((int)local_1c + 0x4d8) == 0);
          }
          pvVar5 = *(LPVOID *)((int)local_1c + 0x4d8);
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,local_1c);
          local_1c = pvVar5;
        }
        else {
          puVar2 = (uint *)((int)local_1c + uVar14 * 0x28);
          if ((*(uint *)((int)local_1c + uVar14 * 0x28 + 0x20) & 1) == 0) {
            iVar12 = 1;
            uVar11 = 0;
            uVar14 = 0;
            do {
              uVar7 = uVar11;
              uVar8 = uVar14;
              if (uVar14 < 7) {
                while (uVar8 != 0) {
                  uVar7 = uVar7 - 1;
                  uVar8 = uVar7;
                }
              }
              else {
                SwitchToThread();
              }
              uVar11 = uVar11 + iVar12;
              uVar14 = uVar14 + 1;
              iVar12 = iVar12 + 2;
            } while ((puVar2[8] & 1) == 0);
          }
          uVar11 = *puVar2;
          iVar12 = uVar11 - 3;
          if (uVar11 < 3) {
            iVar12 = 3;
          }
          if (iVar12 == 0) {
            if (puVar2[1] != 0) {
              pvVar5 = (LPVOID)puVar2[2];
              pvVar9 = GetProcessHeap();
              HeapFree(pvVar9,0,pvVar5);
            }
          }
          else if (iVar12 == 1) {
            if (puVar2[1] != 0) {
              pvVar5 = (LPVOID)puVar2[2];
              pvVar9 = GetProcessHeap();
              HeapFree(pvVar9,0,pvVar5);
            }
          }
          else if (iVar12 != 2) {
            FUN_100ae070(uVar11,(PSRWLOCK)puVar2[1]);
          }
        }
        pvVar13 = (PVOID)((int)pvVar13 + 2);
        uVar14 = (uint)pvVar13 >> 1;
      }
      if (local_1c != (LPVOID)0x0) {
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,local_1c);
      }
      param_2->Ptr = (PVOID)((uint)pvVar13 & 0xfffffffe);
    }
    LOCK();
    cVar4 = *(char *)&param_2[0x32].Ptr;
    *(undefined1 *)&param_2[0x32].Ptr = 1;
    UNLOCK();
    if (cVar4 == '\0') {
      return;
    }
    local_14 = param_2;
    FUN_100af7f0((int *)&local_14);
    return;
  }
  LOCK();
  pRVar1 = param_2 + 0xf;
  pRVar1->Ptr = (PVOID)((int)pRVar1->Ptr + -1);
  UNLOCK();
  if (pRVar1->Ptr != (PVOID)0x0) {
    return;
  }
  FUN_1004ed60(param_2);
  LOCK();
  cVar4 = *(char *)&param_2[0x10].Ptr;
  *(undefined1 *)&param_2[0x10].Ptr = 1;
  UNLOCK();
  if (cVar4 == '\0') {
    return;
  }
  FUN_100a8860((int *)(param_2 + 1));
  FUN_100a8860((int *)(param_2 + 7));
  pvVar9 = GetProcessHeap();
LAB_100aedd8:
  HeapFree(pvVar9,0,param_2);
  return;
LAB_100aed89:
  LOCK();
  cVar4 = *(char *)&param_2[0x42].Ptr;
  *(undefined1 *)&param_2[0x42].Ptr = 1;
  UNLOCK();
  if (cVar4 == '\0') {
    return;
  }
  if (param_2[0x34].Ptr != (PVOID)0x0) {
    pvVar5 = param_2[0x33].Ptr;
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,pvVar5);
  }
  FUN_100a8860((int *)(param_2 + 0x21));
  FUN_100a8860((int *)(param_2 + 0x29));
  param_2 = param_2[-1].Ptr;
  pvVar9 = GetProcessHeap();
  goto LAB_100aedd8;
}
