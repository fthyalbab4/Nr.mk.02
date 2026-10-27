// rea decompile_all
// name: FUN_10138cf0
// address: 0x10138cf0
// body: available
// range: 0x10138cf0-0x10138d19 inclusive
// range: 0x10138d20-0x10138e04 inclusive
// range: 0x10138e10-0x10138eab inclusive
// range: 0x10138eb0-0x10138ef2 inclusive
// range: 0x10138f00-0x10138ffc inclusive
// range: 0x10139000-0x101390b2 inclusive
// range: 0x101390c0-0x101390ee inclusive
// range: 0x101390f0-0x101390fc inclusive
// range: 0x10139100-0x1013912b inclusive
// range: 0x10139130-0x1013915c inclusive
// range: 0x10139160-0x1013936e inclusive
// range: 0x10139370-0x101393a9 inclusive
// range: 0x101393b0-0x101393de inclusive
// range: 0x101393e0-0x10139437 inclusive
// range: 0x10139440-0x10139514 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10138cf0(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  HANDLE hHeap;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  PSRWLOCK SRWLock;
  code *pcVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  int local_40;
  uint local_3c;
  int local_2c;
  code *local_28;
  int local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  int local_14;

  if (*param_2 == 3) {
    return;
  }
  local_20 = (int *)(param_1 + 0xa0);
LAB_10138d31:
  while( true ) {
    uVar14 = FUN_100be480(param_1);
    if ((code *)uVar14 == (code *)0x0) break;
    (*(code *)uVar14)((int)((ulonglong)uVar14 >> 0x20));
    if (*param_2 == 3) {
      return;
    }
  }
  local_1c = *(uint *)(param_1 + 0x88);
  LOCK();
  piVar10 = (int *)(*(int *)(param_1 + 0x8c) + 0xf8);
  *piVar10 = *piVar10 + 0x100;
  UNLOCK();
  if (*param_2 == 3) {
LAB_101394ba:
    iVar12 = *(int *)(param_1 + 0x8c);
    LOCK();
    puVar1 = (uint *)(iVar12 + 0xf8);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 - 0x100;
    UNLOCK();
    uVar7 = 2;
    if ((uVar6 & 0xff) < 2) {
      uVar7 = uVar6 & 0xff;
    }
    FUN_10139520(iVar12 + 0xec,uVar7);
    return;
  }
  local_3c = 0;
  uVar6 = 0xffffffff;
LAB_10138d69:
  iVar12 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(iVar12 + 0x84);
  iVar3 = iVar2 - *(int *)(iVar12 + 0x80);
  piVar10 = local_20;
  if (iVar3 < 1) {
LAB_10138e90:
    do {
      FUN_100be610(&local_2c,piVar10);
    } while (local_2c == 2);
    pcVar11 = local_28;
    local_40 = local_24;
    if (local_2c == 0) {
      local_40 = 0;
      pcVar11 = (code *)0x0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x9c) != '\x01') {
      LOCK();
      puVar1 = (uint *)(iVar12 + 0x80);
      uVar7 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((int)(uVar7 - iVar2) < 0) {
        uVar8 = *(uint *)(param_1 + 0x98);
        uVar7 = uVar8 - 1 & uVar7;
        pcVar11 = *(code **)(*(int *)(param_1 + 0x94) + uVar7 * 8);
        local_40 = *(int *)(*(int *)(param_1 + 0x94) + 4 + uVar7 * 8);
        uVar7 = uVar8 + 3;
        if (-1 < (int)uVar8) {
          uVar7 = uVar8;
        }
        if ((0x40 < uVar8) && (iVar3 <= (int)uVar7 >> 2)) {
          FUN_101395d0((int *)(param_1 + 0x90),uVar8 >> 1);
        }
        piVar10 = local_20;
        if (pcVar11 != (code *)0x0) goto LAB_10138ebc;
      }
      else {
        *(uint *)(*(int *)(param_1 + 0x90) + 0x80) = uVar7;
      }
      goto LAB_10138e90;
    }
    uVar7 = iVar2 - 1;
    *(uint *)(iVar12 + 0x84) = uVar7;
    iVar12 = *(int *)(param_1 + 0x90);
    iVar3 = uVar7 - *(int *)(iVar12 + 0x80);
    if (iVar3 < 0) {
      *(int *)(iVar12 + 0x84) = iVar2;
      goto LAB_10138e90;
    }
    uVar8 = *(uint *)(param_1 + 0x98);
    uVar7 = uVar8 - 1 & uVar7;
    pcVar11 = *(code **)(*(int *)(param_1 + 0x94) + uVar7 * 8);
    local_40 = *(int *)(*(int *)(param_1 + 0x94) + 4 + uVar7 * 8);
    if (iVar2 + -1 == *(int *)(iVar12 + 0x80)) {
      LOCK();
      bVar13 = iVar2 + -1 == *(int *)(iVar12 + 0x80);
      if (bVar13) {
        *(int *)(iVar12 + 0x80) = iVar2;
      }
      UNLOCK();
      *(int *)(*(int *)(param_1 + 0x90) + 0x84) = iVar2;
      if (!bVar13) goto LAB_10138e90;
    }
    else {
      uVar7 = uVar8 + 3;
      if (-1 < (int)uVar8) {
        uVar7 = uVar8;
      }
      if ((0x40 < uVar8) && (iVar3 < (int)uVar7 >> 2)) {
        FUN_101395d0((int *)(param_1 + 0x90),uVar8 >> 1);
      }
    }
  }
LAB_10138ebc:
  if (pcVar11 == (code *)0x0) {
    iVar12 = *(int *)(param_1 + 0x8c);
    uVar7 = *(uint *)(iVar12 + 0x104);
    if (1 < uVar7) {
      local_14 = *(int *)(iVar12 + 0x100);
      local_18 = (int *)(local_14 + 0x1c);
      do {
        uVar8 = *(uint *)(param_1 + 0x84);
        uVar4 = uVar8 >> 0xc ^ uVar8;
        uVar8 = (uVar8 << 0x14 | *(uint *)(param_1 + 0x80) >> 0xc) ^ *(uint *)(param_1 + 0x80);
        uVar4 = (uVar4 << 0x19 | uVar8 >> 7) ^ uVar4;
        uVar8 = uVar8 << 0x19 ^ uVar8;
        uVar9 = uVar4 >> 0x1b ^ uVar4;
        uVar8 = (uVar4 << 5 | uVar8 >> 0x1b) ^ uVar8;
        *(uint *)(param_1 + 0x84) = uVar9;
        *(uint *)(param_1 + 0x80) = uVar8;
        uVar14 = __aullrem((uint)((ulonglong)uVar8 * 0x4f6cdd1d),
                           uVar9 * 0x4f6cdd1d +
                           uVar8 * 0x2545f491 + (int)((ulonglong)uVar8 * 0x4f6cdd1d >> 0x20),uVar7,0
                          );
        uVar9 = (uint)uVar14;
        bVar13 = false;
        uVar8 = uVar9;
        uVar4 = uVar9;
        if (uVar9 < uVar7) {
          uVar4 = uVar7;
        }
        while (uVar8 != uVar4) {
          if (uVar8 == *(uint *)(param_1 + 0x88)) {
LAB_10138fa0:
            uVar8 = uVar8 + 1;
          }
          else {
            if (uVar7 <= uVar8) goto LAB_101394f4;
            FUN_100be610(&local_2c,(int *)(local_14 + 0x1c + uVar8 * 0x24));
            if (local_2c == 0) goto LAB_10138fa0;
            if (local_2c != 1) {
              bVar13 = true;
              goto LAB_10138fa0;
            }
            local_40 = local_24;
            uVar8 = uVar8 + 1;
            pcVar11 = local_28;
            if (local_28 != (code *)0x0) goto LAB_10139470;
          }
        }
        uVar8 = 0;
        piVar10 = local_18;
        while (uVar9 != uVar8) {
          pcVar11 = (code *)0x0;
          if (uVar8 != *(uint *)(param_1 + 0x88)) {
            if (uVar7 <= uVar8) {
LAB_101394f4:
              FUN_10136b52(uVar8,uVar7,&PTR_s_C__Users_runneradmin__cargo_regi_10151410);
                    /* WARNING: Does not return */
              pcVar11 = (code *)invalidInstructionException();
              (*pcVar11)();
            }
            FUN_100be610(&local_2c,piVar10);
            pcVar11 = (code *)0x0;
            if (local_2c != 0) {
              if (local_2c == 1) {
                local_40 = local_24;
                pcVar11 = local_28;
              }
              else {
                bVar13 = true;
              }
            }
          }
          piVar10 = piVar10 + 9;
          uVar8 = uVar8 + 1;
          if (pcVar11 != (code *)0x0) goto LAB_10139470;
        }
      } while (bVar13);
      iVar12 = *(int *)(param_1 + 0x8c);
    }
    do {
      uVar7 = *(uint *)(iVar12 + 0x40);
      piVar10 = *(int **)(iVar12 + 0x44);
      uVar8 = uVar7 >> 1;
      uVar4 = uVar8 & 0x3f;
      if (uVar4 == 0x3f) {
        uVar9 = 0;
        do {
          if (uVar9 < 7) {
            uVar7 = 1;
            do {
              uVar8 = uVar7 >> ((byte)uVar9 & 0x1f);
              uVar7 = uVar7 + 1;
            } while (uVar8 == 0);
LAB_101390c0:
            uVar9 = uVar9 + 1;
          }
          else {
            SwitchToThread();
            if (uVar9 < 0xb) goto LAB_101390c0;
          }
          uVar7 = *(uint *)(iVar12 + 0x40);
          piVar10 = *(int **)(iVar12 + 0x44);
          uVar8 = uVar7 >> 1;
          uVar4 = uVar8 & 0x3f;
        } while (uVar4 == 0x3f);
      }
      uVar9 = uVar7 + 2;
      if ((uVar7 & 1) == 0) {
        if (uVar8 == *(uint *)(iVar12 + 0x80) >> 1) goto LAB_10139130;
        uVar9 = uVar7 + 2 | (uint)(0x7f < (*(uint *)(iVar12 + 0x80) ^ uVar7));
      }
      LOCK();
      bVar13 = uVar7 == *(uint *)(iVar12 + 0x40);
      if (bVar13) {
        *(uint *)(iVar12 + 0x40) = uVar9;
      }
      UNLOCK();
      if (bVar13) {
        if (uVar4 != 0x3e) goto LAB_10139396;
        piVar5 = (int *)*piVar10;
        if (piVar5 != (int *)0x0) goto LAB_1013937d;
        uVar6 = 0;
        goto LAB_10139347;
      }
    } while( true );
  }
  goto LAB_10139470;
LAB_10139130:
  if (local_3c < 0x20) {
    SwitchToThread();
    local_3c = local_3c + 1;
    iVar12 = *param_2;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x8c);
    if (local_3c == 0x20) {
      do {
        uVar7 = *(uint *)(iVar12 + 0xf8);
        uVar6 = uVar7;
        if ((uVar7 & 0x10000) == 0) break;
        uVar6 = uVar7 + 0x10000;
        LOCK();
        bVar13 = uVar7 == *(uint *)(iVar12 + 0xf8);
        if (bVar13) {
          *(uint *)(iVar12 + 0xf8) = uVar6;
        }
        UNLOCK();
      } while (!bVar13);
      uVar6 = uVar6 >> 0x10;
      SwitchToThread();
      local_3c = 0x21;
      iVar12 = *param_2;
    }
    else {
      LOCK();
      iVar2 = *param_2;
      if (iVar2 == 0) {
        *param_2 = 1;
      }
      UNLOCK();
      if (iVar2 == 0) {
        if (*(uint *)(iVar12 + 0xf4) <= local_1c) {
          FUN_10136b52(local_1c,*(uint *)(iVar12 + 0xf4),&DAT_1015132c);
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        SRWLock = (PSRWLOCK)(local_1c * 0x40 + *(int *)(iVar12 + 0xf0));
        AcquireSRWLockExclusive(SRWLock);
        local_3c = 0;
        LOCK();
        iVar2 = *param_2;
        if (iVar2 == 1) {
          *param_2 = 2;
        }
        UNLOCK();
        if (iVar2 == 1) {
          do {
            uVar7 = *(uint *)(iVar12 + 0xf8);
            if (uVar7 >> 0x10 != uVar6) {
              iVar12 = *param_2;
              local_3c = 0x20;
              goto joined_r0x1013925c;
            }
            LOCK();
            bVar13 = uVar7 == *(uint *)(iVar12 + 0xf8);
            if (bVar13) {
              *(uint *)(iVar12 + 0xf8) = uVar7 + 1;
            }
            UNLOCK();
          } while (!bVar13);
          iVar2 = *(int *)(*local_20 + 0x80);
          iVar3 = *(int *)(*local_20 + 0x84);
          if ((iVar3 == iVar2 || iVar3 - iVar2 < 0) &&
             ((*(uint *)(*(int *)(param_1 + 0x8c) + 0x80) ^
              *(uint *)(*(int *)(param_1 + 0x8c) + 0x40)) < 2)) {
            *(undefined1 *)&SRWLock[1].Ptr = 1;
            do {
              SleepConditionVariableSRW((PCONDITION_VARIABLE)(SRWLock + 2),SRWLock,0xffffffff,0);
            } while (*(char *)&SRWLock[1].Ptr != '\0');
          }
          else {
            LOCK();
            *(int *)(iVar12 + 0xf8) = *(int *)(iVar12 + 0xf8) + -1;
            UNLOCK();
          }
          iVar12 = *param_2;
          local_3c = 0;
joined_r0x1013925c:
          if (iVar12 != 3) {
            LOCK();
            if (*param_2 == 2) {
              *param_2 = 0;
            }
            UNLOCK();
          }
        }
        ReleaseSRWLockExclusive(SRWLock);
        uVar6 = 0xffffffff;
        iVar12 = *param_2;
      }
      else {
        iVar12 = *param_2;
      }
    }
  }
  if (iVar12 == 3) goto LAB_101394ba;
  goto LAB_10138d69;
LAB_10139347:
  do {
    if (uVar6 < 7) {
      uVar7 = 1;
      do {
        uVar8 = uVar7 >> ((byte)uVar6 & 0x1f);
        uVar7 = uVar7 + 1;
      } while (uVar8 == 0);
LAB_10139340:
      uVar6 = uVar6 + 1;
    }
    else {
      SwitchToThread();
      if (uVar6 < 0xb) goto LAB_10139340;
    }
    piVar5 = (int *)*piVar10;
  } while (piVar5 == (int *)0x0);
LAB_1013937d:
  iVar2 = *piVar5;
  *(int **)(iVar12 + 0x44) = piVar5;
  *(uint *)(iVar12 + 0x40) = (uVar9 & 0xfffffffe) + 2 + (uint)(iVar2 != 0);
LAB_10139396:
  piVar5 = piVar10 + uVar4 * 3 + 1;
  if ((piVar10[uVar4 * 3 + 3] & 1U) == 0) {
    uVar6 = 0;
    do {
      if (uVar6 < 7) {
        uVar7 = 1;
        do {
          uVar8 = uVar7 >> ((byte)uVar6 & 0x1f);
          uVar7 = uVar7 + 1;
        } while (uVar8 == 0);
LAB_101393b0:
        uVar6 = uVar6 + 1;
      }
      else {
        SwitchToThread();
        if (uVar6 < 0xb) goto LAB_101393b0;
      }
    } while ((piVar5[2] & 1U) == 0);
  }
  local_40 = piVar5[1];
  pcVar11 = (code *)*piVar5;
  uVar6 = 0x3e;
  if (uVar4 == 0x3e) goto LAB_10139444;
  uVar6 = piVar5[2];
  do {
    LOCK();
    uVar7 = piVar5[2];
    bVar13 = uVar6 == uVar7;
    if (bVar13) {
      piVar5[2] = uVar6 | 2;
      uVar7 = uVar6;
    }
    UNLOCK();
    uVar6 = uVar7;
  } while (!bVar13);
  uVar6 = uVar4;
  for (uVar7 = uVar7 & 4; uVar7 != 0; uVar7 = uVar7 & 2) {
    do {
      if (uVar6 == 0) {
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,piVar10);
        goto LAB_10139470;
      }
LAB_10139444:
      uVar6 = uVar6 - 1;
    } while ((piVar10[uVar6 * 3 + 3] & 2U) != 0);
    uVar8 = piVar10[uVar6 * 3 + 3];
    do {
      LOCK();
      uVar7 = piVar10[uVar6 * 3 + 3];
      bVar13 = uVar8 == uVar7;
      if (bVar13) {
        piVar10[uVar6 * 3 + 3] = uVar8 | 4;
        uVar7 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar7;
    } while (!bVar13);
  }
LAB_10139470:
  iVar12 = *(int *)(param_1 + 0x8c);
  LOCK();
  puVar1 = (uint *)(iVar12 + 0xf8);
  uVar6 = *puVar1;
  *puVar1 = *puVar1 - 0x100;
  UNLOCK();
  uVar6 = uVar6 & 0xff;
  if (1 < uVar6) {
    uVar6 = 2;
  }
  FUN_10139520(iVar12 + 0xec,uVar6);
  (*pcVar11)(local_40);
  if (*param_2 == 3) {
    return;
  }
  goto LAB_10138d31;
}
