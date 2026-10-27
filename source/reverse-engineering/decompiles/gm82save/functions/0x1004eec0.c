// rea decompile_all
// name: FUN_1004eec0
// address: 0x1004eec0
// body: available
// range: 0x1004eec0-0x1004ef04 inclusive
// range: 0x1004ef10-0x1004ef5e inclusive
// range: 0x1004ef60-0x1004f007 inclusive
// range: 0x1004f010-0x1004f0f8 inclusive
// range: 0x1004f100-0x1004f155 inclusive
// range: 0x1004f160-0x1004f1b9 inclusive
// range: 0x1004f1c0-0x1004f5ee inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1004f3f8) */

void __fastcall FUN_1004eec0(int param_1,PSRWLOCK param_2)

{
  int iVar1;
  PVOID pvVar2;
  code *pcVar3;
  PSRWLOCK pRVar4;
  int **ppiVar5;
  char cVar6;
  undefined4 *puVar7;
  PVOID pvVar8;
  PVOID pvVar9;
  int *piVar10;
  HANDLE pvVar11;
  undefined4 uVar12;
  int *piVar13;
  PVOID pvVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined4 *local_8c;
  undefined4 *local_88;
  int *local_80;
  undefined8 local_7c;
  PSRWLOCK local_74;
  int *local_70;
  PSRWLOCK local_6c;
  int **ppiStack_68;
  PSRWLOCK local_64;
  int *local_60;
  PSRWLOCK local_5c;
  int **local_58;
  int local_50 [2];
  undefined4 local_48;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;

  if (param_1 == 0) {
    local_48 = 0xffffffff;
    ppiStack_68 = (int **)0xffffffff;
    cVar6 = '\x01';
    local_30 = 0;
    local_28 = 0;
    local_38 = 0xffffffff;
    local_20 = 0;
    pvVar14 = param_2[0x10].Ptr;
    pvVar8 = param_2[0x32].Ptr;
    if (((uint)pvVar8 & (uint)pvVar14) == 0) {
      uVar18 = 0;
LAB_1004f09d:
      uVar19 = 0;
      do {
        ppiVar5 = ppiStack_68;
        pRVar4 = local_6c;
        piVar13 = local_70;
        pvVar2 = param_2[0x33].Ptr;
        uVar15 = (int)pvVar8 - 1U & (uint)pvVar14;
        pvVar8 = *(PVOID *)((int)pvVar2 + uVar15 * 4);
        if (pvVar14 == pvVar8) {
          if ((PVOID)(uVar15 + 1) < param_2[0x30].Ptr) {
            LOCK();
            pvVar9 = param_2[0x10].Ptr;
            bVar21 = pvVar14 == pvVar9;
            if (bVar21) {
              param_2[0x10].Ptr = (PVOID)((int)pvVar14 + 1);
              pvVar9 = pvVar14;
            }
            UNLOCK();
          }
          else {
            LOCK();
            pvVar9 = param_2[0x10].Ptr;
            bVar21 = pvVar14 == pvVar9;
            if (bVar21) {
              param_2[0x10].Ptr =
                   (PVOID)((-(int)param_2[0x31].Ptr & (uint)pvVar14) + (int)param_2[0x31].Ptr);
              pvVar9 = pvVar14;
            }
            UNLOCK();
          }
          if (bVar21) {
            local_30 = CONCAT44((int)pvVar14 + 1U,(PVOID)((int)pvVar2 + uVar15 * 4));
            *(uint *)((int)pvVar2 + uVar15 * 4) = (int)pvVar14 + 1U;
            FUN_1004b980(param_2 + 0x28);
            goto LAB_1004f52f;
          }
          uVar15 = 1;
          uVar16 = 6;
          if (uVar19 < 6) {
            uVar16 = uVar19;
          }
          do {
            uVar20 = uVar15 >> ((byte)uVar16 & 0x1f);
            uVar15 = uVar15 + 1;
          } while (uVar20 == 0);
          uVar19 = uVar19 + (uVar19 < 7);
          pvVar8 = param_2[0x32].Ptr;
          uVar15 = (uint)pvVar8 & (uint)pvVar9;
          pvVar14 = pvVar9;
        }
        else {
          if ((int)pvVar8 + (int)param_2[0x31].Ptr == (int)pvVar14 + 1U) {
            if ((PVOID)((int)param_2->Ptr + (int)param_2[0x31].Ptr) == pvVar14) goto LAB_1004f1f6;
            uVar15 = 1;
            uVar16 = 6;
            if (uVar19 < 6) {
              uVar16 = uVar19;
            }
            do {
              uVar20 = uVar15 >> ((byte)uVar16 & 0x1f);
              uVar15 = uVar15 + 1;
            } while (uVar20 == 0);
            uVar19 = uVar19 + (uVar19 < 7);
          }
          else {
            if (uVar19 < 7) {
              uVar15 = 1;
              do {
                uVar16 = uVar15 >> ((byte)uVar19 & 0x1f);
                uVar15 = uVar15 + 1;
              } while (uVar16 == 0);
            }
            else {
              SwitchToThread();
              if (10 < uVar19) goto LAB_1004f0a6;
            }
            uVar19 = uVar19 + 1;
          }
LAB_1004f0a6:
          pvVar8 = param_2[0x32].Ptr;
          uVar15 = (uint)pvVar8 & (uint)param_2[0x10].Ptr;
          pvVar14 = param_2[0x10].Ptr;
        }
        if (uVar15 != 0) {
          return;
        }
      } while( true );
    }
  }
  else {
    if (param_1 == 1) {
      local_88 = param_2[0x11].Ptr;
      if (((uint)param_2[0x10].Ptr & 1) != 0) {
        return;
      }
      uVar18 = 0;
      local_8c = (undefined4 *)0x0;
      pvVar14 = param_2[0x10].Ptr;
      do {
        uVar19 = (uint)pvVar14 >> 1 & 0x1f;
        if (uVar19 == 0x1f) {
          if (uVar18 < 7) {
            uVar19 = 1;
            do {
              uVar15 = uVar19 >> ((byte)uVar18 & 0x1f);
              uVar19 = uVar19 + 1;
            } while (uVar15 == 0);
LAB_1004ef10:
            uVar18 = uVar18 + 1;
          }
          else {
            SwitchToThread();
            if (uVar18 < 0xb) goto LAB_1004ef10;
          }
          pvVar8 = param_2[0x10].Ptr;
          local_88 = param_2[0x11].Ptr;
        }
        else {
          if ((uVar19 == 0x1e && local_8c == (undefined4 *)0x0) &&
             (local_8c = FUN_10107380(8,0x80), local_8c == (undefined4 *)0x0)) {
LAB_1004f560:
            FUN_1013679e(4,0x80);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (local_88 == (undefined4 *)0x0) {
            puVar7 = FUN_10107380(8,0x80);
            if (puVar7 == (undefined4 *)0x0) goto LAB_1004f560;
            LOCK();
            bVar21 = param_2[0x11].Ptr == (PVOID)0x0;
            if (bVar21) {
              param_2[0x11].Ptr = puVar7;
            }
            UNLOCK();
            if (bVar21) {
              param_2[1].Ptr = puVar7;
              local_88 = puVar7;
              goto LAB_1004efc2;
            }
            if (local_8c != (LPVOID)0x0) {
              pvVar11 = GetProcessHeap();
              HeapFree(pvVar11,0,local_8c);
            }
            pvVar8 = param_2[0x10].Ptr;
            local_88 = param_2[0x11].Ptr;
            local_8c = puVar7;
          }
          else {
LAB_1004efc2:
            LOCK();
            pvVar8 = param_2[0x10].Ptr;
            bVar21 = pvVar14 == pvVar8;
            if (bVar21) {
              param_2[0x10].Ptr = (PVOID)((int)pvVar14 + 2);
              pvVar8 = pvVar14;
            }
            UNLOCK();
            if (bVar21) {
              if (uVar19 != 0x1e) goto joined_r0x1004f547;
              if (local_8c == (LPVOID)0x0) {
                FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101417dc);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              param_2[0x11].Ptr = local_8c;
              LOCK();
              param_2[0x10].Ptr = (PVOID)((int)param_2[0x10].Ptr + 2);
              UNLOCK();
              *local_88 = local_8c;
              puVar17 = local_88 + 0x1f;
              goto LAB_1004f4ff;
            }
            local_88 = param_2[0x11].Ptr;
            uVar19 = 6;
            if (uVar18 < 6) {
              uVar19 = uVar18;
            }
            uVar15 = 1;
            do {
              uVar16 = uVar15 >> ((byte)uVar19 & 0x1f);
              uVar15 = uVar15 + 1;
            } while (uVar16 == 0);
            uVar18 = uVar18 + (uVar18 < 7);
          }
        }
        pvVar14 = pvVar8;
        if (((uint)pvVar8 & 1) != 0) {
          local_88 = (undefined4 *)0x0;
          uVar19 = 0;
joined_r0x1004f547:
          if (local_8c != (undefined4 *)0x0) {
            pvVar11 = GetProcessHeap();
            HeapFree(pvVar11,0,local_8c);
          }
          if (local_88 == (undefined4 *)0x0) {
            return;
          }
          puVar17 = local_88 + uVar19 + 1;
LAB_1004f4ff:
          LOCK();
          *puVar17 = *puVar17 | 1;
          UNLOCK();
          FUN_1004b980(param_2 + 0x20);
          return;
        }
      } while( true );
    }
    local_48 = 0xffffffff;
    local_58 = (int **)0xffffffff;
    local_30 = 0;
    local_28 = 0;
    local_38 = 0xffffffff;
    local_20 = 0;
    AcquireSRWLockExclusive(param_2);
    FUN_10047e70((int *)&local_80,(int)(param_2 + 7));
    piVar13 = local_80;
    if (local_80 == (int *)0x0) {
      if (*(char *)&param_2[0xd].Ptr != '\0') {
        ReleaseSRWLockExclusive(param_2);
        return;
      }
      ppiStack_68 = &local_60;
      local_70 = local_50;
      local_6c = param_2;
      local_64 = param_2;
      puVar7 = FUN_10092f50();
      if (puVar7 == (undefined4 *)0x0) {
        uVar12 = FUN_10135ac0((uint *)&local_70);
        cVar6 = (char)uVar12;
      }
      else {
        piVar13 = (int *)*puVar7;
        *puVar7 = 0;
        local_80 = local_50;
        if (piVar13 == (int *)0x0) {
          piVar13 = FUN_10136d40();
          local_70 = (int *)0x0;
          local_7c = CONCAT44(&local_60,param_2);
          local_74 = param_2;
          uVar12 = FUN_10037ff0((uint *)&local_80,piVar13);
          cVar6 = (char)uVar12;
          LOCK();
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            FUN_1009dc30(piVar13);
          }
        }
        else {
          piVar13[5] = 0;
          piVar13[6] = 0;
          local_70 = (int *)0x0;
          local_7c = CONCAT44(ppiStack_68,local_6c);
          local_74 = local_64;
          uVar12 = FUN_10037ff0((uint *)&local_80,piVar13);
          cVar6 = (char)uVar12;
          piVar10 = (int *)*puVar7;
          *puVar7 = piVar13;
          if (piVar10 != (int *)0x0) {
            LOCK();
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (*piVar10 == 0) {
              FUN_1009dc30(piVar10);
            }
          }
        }
      }
      if (local_70 != (int *)0x0) {
        ReleaseSRWLockExclusive(local_6c);
        if (cVar6 != '\0') {
          return;
        }
        goto LAB_1004f577;
      }
    }
    else {
      iVar1 = (int)local_7c._4_4_;
      local_20 = (int)local_7c._4_4_;
      ReleaseSRWLockExclusive(param_2);
      if (iVar1 == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101417ec);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *(undefined1 *)(iVar1 + 2) = 1;
      *(undefined1 *)(iVar1 + 1) = 1;
      LOCK();
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        FUN_1009dc30(piVar13);
      }
LAB_1004f52f:
      cVar6 = '\x02';
    }
  }
  if (cVar6 != '\0') {
    return;
  }
LAB_1004f577:
  FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_1014193c);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_1004f1f6:
  if (uVar18 != 0xb) {
    if (uVar18 < 7) {
      uVar19 = 1;
      do {
        uVar15 = uVar19 >> ((byte)uVar18 & 0x1f);
        uVar19 = uVar19 + 1;
      } while (uVar15 == 0);
    }
    else {
      SwitchToThread();
    }
    pvVar14 = param_2[0x10].Ptr;
    pvVar8 = param_2[0x32].Ptr;
    uVar18 = uVar18 + 1;
    uVar19 = (uint)pvVar8 & (uint)pvVar14;
    goto joined_r0x1004f26f;
  }
  if (ppiStack_68 != (int **)0xffffffff) {
    FUN_1010f2e0();
    if (local_80 == piVar13 && (PSRWLOCK)local_7c == pRVar4) {
      if (ppiVar5 <= local_7c._4_4_) goto LAB_1004f577;
    }
    else if (pRVar4 <= (PSRWLOCK)local_7c &&
             (uint)(local_80 < piVar13) <= (uint)((int)(PSRWLOCK)local_7c - (int)pRVar4))
    goto LAB_1004f577;
  }
  local_60 = local_50;
  local_58 = &local_70;
  local_5c = param_2;
  puVar7 = FUN_10092f50();
  if (puVar7 == (undefined4 *)0x0) {
    FUN_10135b20((int *)&local_60);
  }
  else {
    piVar13 = (int *)*puVar7;
    *puVar7 = 0;
    if (piVar13 == (int *)0x0) {
      piVar10 = FUN_10136d40();
      local_80 = local_50;
      local_60 = (int *)0x0;
      local_7c = CONCAT44(local_58,local_5c);
      FUN_100385f0((int *)&local_80,piVar10);
      LOCK();
      *piVar10 = *piVar10 + -1;
      iVar1 = *piVar10;
      UNLOCK();
    }
    else {
      piVar13[5] = 0;
      piVar13[6] = 0;
      local_80 = local_50;
      local_60 = (int *)0x0;
      local_7c = CONCAT44(local_58,local_5c);
      FUN_100385f0((int *)&local_80,piVar13);
      piVar10 = (int *)*puVar7;
      *puVar7 = piVar13;
      if (piVar10 == (int *)0x0) goto LAB_1004f300;
      LOCK();
      *piVar10 = *piVar10 + -1;
      iVar1 = *piVar10;
      UNLOCK();
    }
    if (iVar1 == 0) {
      FUN_1009dc30(piVar10);
    }
  }
LAB_1004f300:
  pvVar14 = param_2[0x10].Ptr;
  pvVar8 = param_2[0x32].Ptr;
  uVar18 = 0;
  uVar19 = (uint)pvVar8 & (uint)pvVar14;
joined_r0x1004f26f:
  if (uVar19 != 0) {
    return;
  }
  goto LAB_1004f09d;
}
