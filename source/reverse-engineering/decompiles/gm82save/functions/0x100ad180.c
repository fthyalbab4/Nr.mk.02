// rea decompile_all
// name: FUN_100ad180
// address: 0x100ad180
// body: available
// range: 0x100ad180-0x100ad1c0 inclusive
// range: 0x100ad1d0-0x100ad226 inclusive
// range: 0x100ad230-0x100ad382 inclusive
// range: 0x100ad390-0x100ad5e4 inclusive
// range: 0x100ad5f0-0x100ad639 inclusive
// range: 0x100ad640-0x100ad689 inclusive
// range: 0x100ad690-0x100ad6c9 inclusive
// range: 0x100ad6d0-0x100ad920 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100ad47a) */
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_100ad180(int param_1,PSRWLOCK param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  PVOID pvVar3;
  int *piVar4;
  code *pcVar5;
  undefined8 *******pppppppuVar6;
  PSRWLOCK pRVar7;
  undefined8 *******pppppppuVar8;
  char cVar9;
  LPVOID lpMem;
  LPVOID pvVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  HANDLE pvVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  PVOID pvVar18;
  uint uVar19;
  PVOID pvVar20;
  bool bVar21;
  uint local_80;
  undefined8 *******local_78;
  PSRWLOCK pRStack_74;
  undefined8 *******local_70;
  PSRWLOCK pRStack_6c;
  char local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 ******local_40;
  PSRWLOCK local_3c;
  undefined8 *******local_38;
  undefined8 *******local_30;
  PSRWLOCK pRStack_2c;
  undefined8 *******pppppppuStack_28;
  undefined4 uStack_24;
  int local_20;
  void *local_18;

  if (param_1 == 0) {
    pppppppuStack_28 = (undefined8 *******)0xffffffff;
    local_50 = 0;
    cVar9 = '\x01';
    local_60 = 0;
    uStack_58 = 0;
    pvVar18 = param_2[0x10].Ptr;
    pvVar20 = param_2[0x32].Ptr;
    if (((uint)pvVar20 & (uint)pvVar18) == 0) {
LAB_100ad5e1:
      uVar19 = 0;
      do {
        pppppppuVar8 = pppppppuStack_28;
        pRVar7 = pRStack_2c;
        pppppppuVar6 = local_30;
        pvVar3 = param_2[0x33].Ptr;
        uVar17 = (int)pvVar20 - 1U & (uint)pvVar18;
        pvVar20 = *(PVOID *)((int)pvVar3 + uVar17 * 8);
        if (pvVar18 == pvVar20) {
          if ((PVOID)(uVar17 + 1) < param_2[0x30].Ptr) {
            LOCK();
            bVar21 = pvVar18 == param_2[0x10].Ptr;
            if (bVar21) {
              param_2[0x10].Ptr = (PVOID)((int)pvVar18 + 1);
            }
            UNLOCK();
          }
          else {
            LOCK();
            bVar21 = pvVar18 == param_2[0x10].Ptr;
            if (bVar21) {
              param_2[0x10].Ptr =
                   (PVOID)((-(int)param_2[0x31].Ptr & (uint)pvVar18) + (int)param_2[0x31].Ptr);
            }
            UNLOCK();
          }
          if (bVar21) {
            local_60 = CONCAT44((int)pvVar18 + 1U,(PVOID)((int)pvVar3 + uVar17 * 8));
            *(char *)((int)pvVar3 + uVar17 * 8 + 4) = param_3;
            *(uint *)((int)pvVar3 + uVar17 * 8) = (int)pvVar18 + 1U;
            FUN_100a8a60(param_2 + 0x28);
            goto LAB_100ad860;
          }
          uVar17 = 6;
          if (uVar19 < 6) {
            uVar17 = uVar19;
          }
          if (uVar19 == 0) goto LAB_100ad6fe;
          iVar16 = uVar17 * uVar17;
          do {
            iVar16 = iVar16 + -1;
          } while (iVar16 != 0);
LAB_100ad5f0:
          uVar19 = uVar19 + 1;
        }
        else if ((int)pvVar20 + (int)param_2[0x31].Ptr == (int)pvVar18 + 1U) {
          if ((PVOID)((int)param_2->Ptr + (int)param_2[0x31].Ptr) == pvVar18) goto LAB_100ad714;
          uVar17 = 6;
          if (uVar19 < 6) {
            uVar17 = uVar19;
          }
          if (uVar19 != 0) {
            iVar16 = uVar17 * uVar17;
            do {
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            goto LAB_100ad5f0;
          }
LAB_100ad6fe:
          uVar19 = 1;
        }
        else {
          if (uVar19 < 7) {
            if (uVar19 != 0) {
              iVar16 = uVar19 * uVar19;
              do {
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
            goto LAB_100ad5f0;
          }
          SwitchToThread();
          uVar19 = uVar19 + 1;
        }
        pvVar18 = param_2[0x10].Ptr;
        pvVar20 = param_2[0x32].Ptr;
        if (((uint)pvVar20 & (uint)pvVar18) != 0) {
          return;
        }
      } while( true );
    }
  }
  else {
    if (param_1 == 1) {
      pvVar18 = param_2[0x10].Ptr;
      if (((uint)pvVar18 & 1) != 0) {
        return;
      }
      local_80 = 0;
      lpMem = (LPVOID)0x0;
      pvVar10 = param_2[0x11].Ptr;
      do {
        uVar19 = (uint)pvVar18 >> 1 & 0x1f;
        if (uVar19 == 0x1f) {
          if (local_80 < 7) {
            if (local_80 != 0) {
              iVar16 = local_80 * local_80;
              do {
                iVar16 = iVar16 + -1;
              } while (iVar16 != 0);
            }
          }
          else {
            SwitchToThread();
          }
          local_80 = local_80 + 1;
          pvVar10 = lpMem;
        }
        else {
          if ((uVar19 == 0x1e && lpMem == (LPVOID)0x0) &&
             (lpMem = FUN_10107380(8,0xfc), lpMem == (LPVOID)0x0)) {
LAB_100ad86e:
            FUN_1013679e(4,0xfc);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (pvVar10 == (LPVOID)0x0) {
            pvVar10 = FUN_10107380(8,0xfc);
            if (pvVar10 == (LPVOID)0x0) goto LAB_100ad86e;
            LOCK();
            bVar21 = param_2[0x11].Ptr == (PVOID)0x0;
            if (bVar21) {
              param_2[0x11].Ptr = pvVar10;
            }
            UNLOCK();
            if (!bVar21) {
              if (lpMem != (LPVOID)0x0) {
                pvVar14 = GetProcessHeap();
                HeapFree(pvVar14,0,lpMem);
              }
              goto LAB_100ad1e3;
            }
            param_2[1].Ptr = pvVar10;
          }
          LOCK();
          bVar21 = pvVar18 == param_2[0x10].Ptr;
          if (bVar21) {
            param_2[0x10].Ptr = (PVOID)((int)pvVar18 + 2);
          }
          UNLOCK();
          if (bVar21) {
            if (uVar19 != 0x1e) goto LAB_100ad550;
            if (lpMem == (LPVOID)0x0) {
              FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb08);
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            uVar19 = 0x1e;
            param_2[0x11].Ptr = lpMem;
            LOCK();
            param_2[0x10].Ptr = (PVOID)((int)param_2[0x10].Ptr + 2);
            UNLOCK();
            *(LPVOID *)((int)pvVar10 + 0xf8) = lpMem;
            goto LAB_100ad597;
          }
          uVar19 = 6;
          if (local_80 < 6) {
            uVar19 = local_80;
          }
          pvVar10 = lpMem;
          if (local_80 == 0) {
            local_80 = 1;
          }
          else {
            iVar16 = uVar19 * uVar19;
            do {
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            local_80 = local_80 + 1;
          }
        }
LAB_100ad1e3:
        pvVar18 = param_2[0x10].Ptr;
        lpMem = pvVar10;
        pvVar10 = param_2[0x11].Ptr;
        if (((uint)pvVar18 & 1) != 0) {
          uVar19 = 0;
          pvVar10 = (LPVOID)0x0;
LAB_100ad550:
          if (lpMem != (LPVOID)0x0) {
            pvVar14 = GetProcessHeap();
            HeapFree(pvVar14,0,lpMem);
          }
          if (pvVar10 == (LPVOID)0x0) {
            return;
          }
LAB_100ad597:
          *(char *)((int)pvVar10 + uVar19 * 8 + 4) = param_3;
          LOCK();
          puVar1 = (uint *)((int)pvVar10 + uVar19 * 8);
          *puVar1 = *puVar1 | 1;
          UNLOCK();
          FUN_100a8a60(param_2 + 0x20);
          return;
        }
      } while( true );
    }
    local_38 = (undefined8 *******)0xffffffff;
    local_20 = 0;
    local_30 = (undefined8 *******)0x0;
    pRStack_2c = (PSRWLOCK)0x0;
    pppppppuStack_28 = (undefined8 *******)0x0;
    uStack_24 = 0;
    AcquireSRWLockExclusive(param_2);
    pvVar18 = param_2[9].Ptr;
    if (pvVar18 != (PVOID)0x0) {
      puVar11 = FUN_100a8900();
      if (puVar11 == (undefined1 *)0x0) {
        FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      pvVar20 = (PVOID)0x0;
      iVar16 = (int)pvVar18 * 0xc;
      piVar15 = param_2[8].Ptr;
      do {
        iVar2 = *piVar15;
        if (*(undefined1 **)(iVar2 + 0x14) != puVar11) {
          LOCK();
          bVar21 = *(int *)(iVar2 + 0xc) == 0;
          if (bVar21) {
            *(int *)(iVar2 + 0xc) = piVar15[1];
          }
          UNLOCK();
          if (bVar21) {
            if (piVar15[2] != 0) {
              *(int *)(iVar2 + 0x10) = piVar15[2];
            }
            FUN_10107860((char *)(*(int *)(iVar2 + 8) + 0x18));
            pvVar18 = param_2[9].Ptr;
            if (pvVar20 < pvVar18) {
              pvVar3 = param_2[8].Ptr;
              local_18 = (void *)((int)pvVar3 + (int)pvVar20 * 0xc);
              piVar15 = *(int **)((int)pvVar3 + (int)pvVar20 * 0xc);
              iVar16 = *(int *)((int)pvVar3 + (int)pvVar20 * 0xc + 8);
              memmove(local_18,(void *)((int)pvVar3 + (int)pvVar20 * 0xc + 0xc),
                      (~(uint)pvVar20 + (int)pvVar18) * 0xc);
              pvVar18 = (PVOID)((int)pvVar18 - 1);
              param_2[9].Ptr = pvVar18;
              if (piVar15 != (int *)0x0) {
                local_20 = iVar16;
                ReleaseSRWLockExclusive(param_2);
                if (iVar16 == 0) {
                  FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb38);
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                *(char *)(iVar16 + 2) = param_3;
                *(undefined1 *)(iVar16 + 1) = 1;
                cVar9 = '\x02';
                LOCK();
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (*piVar15 == 0) {
                  FUN_1011b0a0(piVar15);
LAB_100ad860:
                  cVar9 = '\x02';
                }
                goto LAB_100ad862;
              }
            }
            FUN_1013684d(pvVar20,pvVar18,&PTR_s_C__Users_runneradmin__rustup_too_1014fa24);
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
        }
        piVar15 = piVar15 + 3;
        pvVar20 = (PVOID)((int)pvVar20 + 1);
        iVar16 = iVar16 + -0xc;
      } while (iVar16 != 0);
    }
    if (*(char *)&param_2[0xd].Ptr != '\0') {
      ReleaseSRWLockExclusive(param_2);
      return;
    }
    local_78 = (undefined8 *******)&local_30;
    local_68 = param_3;
    pRStack_74 = param_2;
    local_70 = &local_40;
    pRStack_6c = param_2;
    puVar12 = FUN_100a89a0();
    if (puVar12 == (undefined4 *)0x0) {
      uVar19 = FUN_10137aa0((undefined8 *)&local_78);
      cVar9 = (char)uVar19;
    }
    else {
      piVar15 = (int *)*puVar12;
      *puVar12 = 0;
      if (piVar15 == (int *)0x0) {
        piVar15 = (int *)FUN_1013c310();
        local_68 = '\x02';
        local_60 = CONCAT44(param_2,&local_30);
        uStack_58 = CONCAT44(param_2,&local_40);
        local_50 = CONCAT31(local_50._1_3_,param_3);
        uVar13 = FUN_100af920((int *)&local_60,piVar15);
        cVar9 = (char)uVar13;
        LOCK();
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (*piVar15 == 0) {
          FUN_1011b0a0(piVar15);
        }
      }
      else {
        piVar15[3] = 0;
        piVar15[4] = 0;
        local_68 = '\x02';
        local_60 = CONCAT44(pRStack_74,local_78);
        uStack_58 = CONCAT44(pRStack_6c,local_70);
        local_50 = CONCAT13(local_65,CONCAT21(local_67,param_3));
        uVar13 = FUN_100af920((int *)&local_60,piVar15);
        cVar9 = (char)uVar13;
        piVar4 = (int *)*puVar12;
        *puVar12 = piVar15;
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            FUN_1011b0a0(piVar4);
          }
        }
      }
    }
    if (local_68 != '\x02') {
      ReleaseSRWLockExclusive(pRStack_74);
      if (cVar9 != '\0') {
        return;
      }
      goto LAB_100ad885;
    }
  }
LAB_100ad862:
  if (cVar9 != '\0') {
    return;
  }
LAB_100ad885:
  FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1014fbc8);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
LAB_100ad714:
  if (pppppppuStack_28 != (undefined8 *******)0xffffffff) {
    FUN_1010f2e0();
    if (local_78 == pppppppuVar6 && pRStack_74 == pRVar7) {
      if (pppppppuVar8 <= local_70) goto LAB_100ad885;
    }
    else if (pRVar7 <= pRStack_74 &&
             (uint)(local_78 < pppppppuVar6) <= (uint)((int)pRStack_74 - (int)pRVar7))
    goto LAB_100ad885;
  }
  local_40 = (undefined8 ******)&local_60;
  local_38 = (undefined8 *******)&local_30;
  local_3c = param_2;
  puVar12 = FUN_100a89a0();
  if (puVar12 == (undefined4 *)0x0) {
    FUN_10137b20((int *)&local_40);
  }
  else {
    piVar15 = (int *)*puVar12;
    *puVar12 = 0;
    if (piVar15 == (int *)0x0) {
      piVar15 = (int *)FUN_1013c310();
      local_78 = (undefined8 *******)&local_60;
      local_40 = (undefined8 ******)0x0;
      local_70 = local_38;
      pRStack_74 = local_3c;
      FUN_100afe90((int *)&local_78,piVar15);
      LOCK();
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        FUN_1011b0a0(piVar15);
      }
    }
    else {
      piVar15[3] = 0;
      piVar15[4] = 0;
      local_78 = (undefined8 *******)&local_60;
      local_40 = (undefined8 ******)0x0;
      local_70 = local_38;
      pRStack_74 = local_3c;
      FUN_100afe90((int *)&local_78,piVar15);
      piVar4 = (int *)*puVar12;
      *puVar12 = piVar15;
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          FUN_1011b0a0(piVar4);
        }
      }
    }
  }
  pvVar18 = param_2[0x10].Ptr;
  pvVar20 = param_2[0x32].Ptr;
  if (((uint)pvVar20 & (uint)pvVar18) != 0) {
    return;
  }
  goto LAB_100ad5e1;
}
