// rea decompile_all
// name: FUN_100b2620
// address: 0x100b2620
// body: available
// range: 0x100b2620-0x100b28fe inclusive
// range: 0x100b2900-0x100b2936 inclusive
// range: 0x100b2940-0x100b2999 inclusive
// range: 0x100b29a0-0x100b2d0b inclusive
// range: 0x100b2d10-0x100b2d99 inclusive
// range: 0x100b2da0-0x100b2de9 inclusive
// range: 0x100b2df0-0x100b30d3 inclusive
// range: 0x100b30e0-0x100b32f1 inclusive
// range: 0x100b3300-0x100b3386 inclusive
// range: 0x100b3390-0x100b3640 inclusive
// range: 0x100b3650-0x100b37eb inclusive
// range: 0x100b37f6-0x100b3913 inclusive
// range: 0x100b3941-0x100b39d7 inclusive
// range: 0x100b3a0d-0x100b3bce inclusive
// range: 0x100b3be1-0x100b3d00 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100b342e) */
/* WARNING: Removing unreachable block (ram,0x100b3bca) */
/* WARNING: Type propagation algorithm not settling */

void __fastcall
FUN_100b2620(undefined4 *param_1,int *param_2,byte *param_3,SIZE_T param_4,undefined1 param_5)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  byte *******pppppppbVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  byte *******pppppppbVar12;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  byte *******pppppppbVar16;
  byte *******pppppppbVar17;
  byte *******pppppppbVar18;
  undefined2 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  byte *******pppppppbVar22;
  bool bVar23;
  byte bVar24;
  LPVOID pvVar25;
  int iVar26;
  BOOL BVar27;
  undefined1 *puVar28;
  undefined4 *puVar29;
  int *piVar30;
  uint uVar31;
  HANDLE pvVar32;
  int *piVar33;
  byte *******pppppppbVar34;
  byte *pbVar35;
  byte *pbVar36;
  PVOID pvVar37;
  int iVar38;
  byte *******pppppppbVar39;
  uint uVar40;
  PVOID pvVar41;
  uint uVar42;
  void *pvVar43;
  uint uVar44;
  PVOID pvVar45;
  byte *******pppppppbVar46;
  ulonglong uVar47;
  longlong lVar48;
  PSRWLOCK pRVar49;
  uint local_140;
  uint local_13c;
  undefined8 local_130;
  byte *******local_128;
  byte *******pppppppbStack_124;
  byte *******local_120;
  byte *******pppppppbStack_11c;
  byte *******local_118;
  undefined2 local_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_10c;
  LARGE_INTEGER local_108;
  LARGE_INTEGER *local_100;
  undefined1 *local_f8;
  undefined1 *local_f4;
  PSRWLOCK local_f0;
  LARGE_INTEGER *pLStack_ec;
  PSRWLOCK local_e8;
  undefined4 *local_e4;
  byte *local_e0;
  byte *******local_dc;
  byte *******local_d8;
  byte *******pppppppbStack_d4;
  byte *******local_d0;
  byte *******pppppppbStack_cc;
  byte *******local_c8;
  undefined2 local_c4;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_bc;
  byte *******local_b4;
  undefined1 local_b0 [4];
  undefined1 auStack_ac [8];
  PSRWLOCK pRStack_a4;
  undefined8 local_a0;
  byte *******local_98;
  uint local_88;
  PSRWLOCK local_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined1 local_70 [12];
  undefined8 *local_64;
  undefined1 local_60 [16];
  undefined4 *local_50;
  byte *******local_48;
  byte *******local_44;
  byte *******local_40;
  byte *******local_3c;
  uint local_38;
  SIZE_T local_34;
  LPVOID local_30;
  SIZE_T local_2c;
  undefined1 local_28;
  undefined1 local_24;

  bVar23 = FUN_1010a490(param_3,param_4);
  local_e4 = param_1;
  if (bVar23) {
    local_7c = 0x100b263f;
    if (param_4 == 0) {
      pvVar25 = (LPVOID)0x1;
    }
    else {
      pvVar25 = FUN_10107380(0,param_4);
      if (pvVar25 == (LPVOID)0x0) goto LAB_100b3c5c;
      memcpy(pvVar25,param_3,param_4);
    }
    local_78 = CONCAT44(pvVar25,param_4);
    local_70[4] = 0;
    local_70._0_4_ = param_4;
  }
  else {
    FUN_10108310(&local_130);
    pppppppbVar46 = local_128;
    uVar44 = (uint)(byte *)local_130;
    pvVar43 = local_130._4_4_;
    if ((byte *)local_130 == (byte *)0xffffffff) {
      param_1[1] = local_128;
      *param_1 = local_130._4_4_;
      param_1[2] = 0x3b9aca01;
      param_1[6] = 0;
      param_1[7] = 4;
      param_1[8] = 0;
      return;
    }
    local_7c = 0x100b263f;
    if (local_128 == (byte *******)0x0) {
      pvVar25 = (LPVOID)0x1;
    }
    else {
      pvVar25 = FUN_10107380(0,(SIZE_T)local_128);
      if (pvVar25 == (LPVOID)0x0) goto LAB_100b3c7b;
      memcpy(pvVar25,pvVar43,(size_t)pppppppbVar46);
    }
    local_130 = CONCAT44(pvVar25,pppppppbVar46);
    pppppppbStack_124 = (byte *******)((uint)pppppppbStack_124 & 0xffffff00);
    local_128 = pppppppbVar46;
    FUN_10111020((uint *)&local_130,param_3,param_4);
    local_70._0_8_ = CONCAT44(pppppppbStack_124,local_128);
    local_78 = local_130;
    if (uVar44 != 0) {
      pvVar32 = GetProcessHeap();
      HeapFree(pvVar32,0,pvVar43);
    }
  }
  pvVar43 = local_78._4_4_;
  uVar5 = local_70._0_4_;
  bVar24 = FUN_10111f40((int)local_78._4_4_,local_70._0_4_);
  if ((bVar24 != 0) || (bVar24 = FUN_10112230((int)pvVar43,uVar5), bVar24 != 0)) {
    if (uVar5 == 0) {
      pvVar25 = (LPVOID)0x1;
    }
    else {
      pvVar25 = FUN_10107380(0,uVar5);
      if (pvVar25 == (LPVOID)0x0) {
LAB_100b3c5c:
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      memcpy(pvVar25,pvVar43,uVar5);
    }
    local_34 = uVar5;
    local_2c = uVar5;
    local_28 = local_70[4];
    local_24 = param_5;
    local_64 = &local_78;
    local_38 = 3;
    local_30 = pvVar25;
    FUN_100b1220((int *)&local_130,*param_2,(PSRWLOCK)param_2[1],&local_38);
    pppppppbVar46 = local_128;
    uVar44 = (uint)(byte *)local_130;
    if ((byte *)local_130 != (byte *)0xffffffff) {
      pRVar49 = local_130._4_4_;
      pvVar25 = FUN_10107380(0,0x21);
      if (pvVar25 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      memcpy(pvVar25,&DAT_1014fa77,0x21);
      iVar26 = 3;
      if (2 < uVar44) {
        iVar26 = uVar44 - 3;
      }
      if ((iVar26 == 0) || (iVar26 == 1)) {
        if (pRVar49 != (PSRWLOCK)0x0) {
          pvVar32 = GetProcessHeap();
          HeapFree(pvVar32,0,pppppppbVar46);
        }
      }
      else if (iVar26 != 2) {
        FUN_100ae070(uVar44,pRVar49);
      }
      local_e4[2] = 1000000000;
      local_e4[3] = 0x21;
      local_e4[4] = pvVar25;
      local_e4[5] = 0x21;
      goto LAB_100b38cb;
    }
    ReleaseSemaphore((HANDLE)param_2[4],1,(LPLONG)0x0);
    pRVar49 = (PSRWLOCK)param_2[3];
    if (param_2[2] == 0) {
      local_60._8_4_ = 0xffffffff;
      local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
      _local_b0 = (undefined1  [16])0x0;
LAB_100b2d08:
      uVar44 = 0;
LAB_100b2d13:
      while( true ) {
        uVar40 = uVar44;
        auVar6 = local_60;
        pvVar41 = pRVar49->Ptr;
        uVar44 = (int)pRVar49[0x32].Ptr - 1U & (uint)pvVar41;
        iVar26 = uVar44 * 0x30;
        pvVar45 = *(PVOID *)((int)pRVar49[0x33].Ptr + iVar26 + 0x28);
        if ((PVOID)((int)pvVar41 + 1) != pvVar45) break;
        if (pRVar49[0x30].Ptr <= (PVOID)(uVar44 + 1)) {
          pvVar45 = (PVOID)((-(int)pRVar49[0x31].Ptr & (uint)pvVar41) + (int)pRVar49[0x31].Ptr);
        }
        LOCK();
        bVar23 = pvVar41 == pRVar49->Ptr;
        if (bVar23) {
          pRVar49->Ptr = pvVar45;
        }
        UNLOCK();
        if (bVar23) {
          puVar29 = (undefined4 *)((int)pRVar49[0x33].Ptr + iVar26);
          iVar26 = (int)pvVar41 + (int)pRVar49[0x31].Ptr;
          auStack_ac._0_4_ = iVar26;
          local_b0 = (undefined1  [4])puVar29;
          pbVar36 = (byte *)*puVar29;
          pppppppbVar46 = (byte *******)puVar29[1];
          pppppppbVar39 = (byte *******)puVar29[2];
          local_128 = (byte *******)*(undefined8 *)(puVar29 + 5);
          pppppppbStack_124 = (byte *******)((ulonglong)*(undefined8 *)(puVar29 + 5) >> 0x20);
          local_120 = (byte *******)*(undefined8 *)(puVar29 + 7);
          pppppppbStack_11c = (byte *******)((ulonglong)*(undefined8 *)(puVar29 + 7) >> 0x20);
          local_118 = (byte *******)puVar29[9];
          local_130 = *(undefined8 *)(puVar29 + 3);
          puVar29[10] = iVar26;
          FUN_100a8a60(pRVar49 + 0x20);
          if (pppppppbVar39 == (byte *******)0xfffffffd) goto LAB_100b341b;
          local_c4 = SUB42(local_120,0);
          uStack_c2 = (undefined1)((uint)local_120 >> 0x10);
          uStack_c1 = (undefined1)((uint)local_120 >> 0x18);
          pppppppbStack_d4 = (byte *******)local_130;
          local_d0 = (byte *******)((ulonglong)local_130 >> 0x20);
          local_e0 = pbVar36;
          local_dc = pppppppbVar46;
          pppppppbVar16 = local_118;
          pppppppbVar46 = local_128;
          pppppppbVar34 = pppppppbStack_124;
          pppppppbVar8 = local_118;
          uVar9 = local_114;
          uVar10 = uStack_112;
          uVar11 = uStack_111;
          pppppppbVar12 = pppppppbStack_110;
          pppppppbVar13 = pppppppbStack_10c;
          pppppppbVar17 = pppppppbStack_d4;
          pppppppbVar14 = local_d0;
          pppppppbVar15 = local_128;
          pppppppbVar18 = pppppppbStack_124;
          uVar19 = local_c4;
          uVar20 = uStack_c2;
          uVar21 = uStack_c1;
          pppppppbVar22 = pppppppbStack_11c;
          goto joined_r0x100b327f;
        }
        uVar44 = 6;
        if (uVar40 < 6) {
          uVar44 = uVar40;
        }
        iVar26 = uVar44 * uVar44;
        uVar44 = 1;
        if (uVar40 != 0) {
          do {
            iVar26 = iVar26 + -1;
          } while (iVar26 != 0);
LAB_100b2d10:
          uVar44 = uVar40 + 1;
        }
      }
      if (pvVar45 != pvVar41) {
        if (uVar40 < 7) {
          if (uVar40 != 0) {
            iVar26 = uVar40 * uVar40;
            do {
              iVar26 = iVar26 + -1;
            } while (iVar26 != 0);
          }
          uVar44 = uVar40 + 1;
        }
        else {
          SwitchToThread();
          uVar44 = uVar40 + 1;
        }
        goto LAB_100b2d13;
      }
      if ((PVOID)(~(uint)pRVar49[0x32].Ptr & (uint)pRVar49[0x10].Ptr) != pvVar41) {
        uVar44 = 6;
        if (uVar40 < 6) {
          uVar44 = uVar40;
        }
        iVar26 = uVar44 * uVar44;
        uVar44 = 1;
        if (uVar40 != 0) {
          do {
            iVar26 = iVar26 + -1;
          } while (iVar26 != 0);
          goto LAB_100b2d10;
        }
        goto LAB_100b2d13;
      }
      if (((uint)pRVar49[0x32].Ptr & (uint)pRVar49[0x10].Ptr) != 0) goto LAB_100b341b;
      if (local_60._8_4_ != 0xffffffff) {
        local_88 = local_60._8_4_;
        uVar5 = local_60._0_4_;
        uVar7 = local_60._4_4_;
        lVar48 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
        if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
          lVar48 = FUN_1013c290();
        }
        local_140 = (uint)((ulonglong)lVar48 >> 0x20);
        pppppppbVar46 = (byte *******)lVar48;
        local_108.s.HighPart = 0;
        local_108.s.LowPart = 0;
        BVar27 = QueryPerformanceCounter(&local_108);
        if (BVar27 == 0) goto LAB_100b3cab;
        local_f8 = (undefined1 *)local_108.s.LowPart;
        local_84 = (PSRWLOCK)local_108.s.HighPart;
        uVar47 = __aulldiv(local_108.s.LowPart,local_108.s.HighPart,(uint)pppppppbVar46,local_140);
        puVar28 = (undefined1 *)(lVar48 * uVar47);
        local_80 = (int)(uVar47 >> 0x20) * 1000000000;
        bVar23 = local_f8 < puVar28;
        uVar44 = (int)local_f8 - (int)puVar28;
        lVar2 = (uVar47 & 0xffffffff) * 1000000000;
        local_f8 = (undefined1 *)lVar2;
        iVar26 = (int)((ulonglong)lVar2 >> 0x20) + local_80;
        lVar2 = (ulonglong)uVar44 * 1000000000;
        local_b4 = pppppppbVar46;
        lVar48 = __aulldiv((uint)lVar2,
                           (int)((ulonglong)lVar2 >> 0x20) +
                           ((int)local_84 + (-(uint)bVar23 - (int)(lVar48 * uVar47 >> 0x20))) *
                           1000000000,(uint)pppppppbVar46,local_140);
        lVar48 = lVar48 + CONCAT44(iVar26,local_f8) + 0x3fffffffffffffff;
        uVar40 = (uint)lVar48;
        lVar48 = __aulldiv(uVar40,(uint)((ulonglong)lVar48 >> 0x20),1000000000,0);
        uVar44 = (uint)((ulonglong)lVar48 >> 0x20);
        if (lVar48 == auVar6._0_8_) {
          if (local_88 <= uVar40 + (uint)lVar48 * -1000000000) goto LAB_100b3bb7;
        }
        else if ((uint)uVar7 <= uVar44 && (uint)((uint)lVar48 < (uint)uVar5) <= uVar44 - uVar7)
        goto LAB_100b3bb7;
      }
      local_108.s.LowPart = (DWORD)local_b0;
      local_100 = (LARGE_INTEGER *)local_60;
      local_108.s.HighPart = (LONG)pRVar49;
      puVar29 = FUN_100a89a0();
      if (puVar29 == (undefined4 *)0x0) {
        FUN_10137cd0((int *)&local_108);
      }
      else {
        piVar30 = (int *)*puVar29;
        *puVar29 = 0;
        if (piVar30 == (int *)0x0) {
          piVar30 = (int *)FUN_1013c310();
          local_f4 = local_b0;
          local_108.s.LowPart = 0;
          pLStack_ec = local_100;
          local_f0 = (PSRWLOCK)local_108.s.HighPart;
          FUN_100b3d40((int *)&local_f4,piVar30);
          LOCK();
          *piVar30 = *piVar30 + -1;
          UNLOCK();
          if (*piVar30 == 0) {
            FUN_1011b0a0(piVar30);
          }
        }
        else {
          piVar30[3] = 0;
          piVar30[4] = 0;
          local_f4 = local_b0;
          local_108.s.LowPart = 0;
          pLStack_ec = local_100;
          local_f0 = (PSRWLOCK)local_108.s.HighPart;
          FUN_100b3d40((int *)&local_f4,piVar30);
          piVar33 = (int *)*puVar29;
          *puVar29 = piVar30;
          if (piVar33 != (int *)0x0) {
            LOCK();
            *piVar33 = *piVar33 + -1;
            UNLOCK();
            if (*piVar33 == 0) {
              FUN_1011b0a0(piVar33);
            }
          }
        }
      }
      goto LAB_100b2d08;
    }
    if (param_2[2] == 1) {
      local_60._8_4_ = 0xffffffff;
      local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
      _local_b0 = (undefined1  [16])0x0;
LAB_100b28f6:
      pvVar41 = pRVar49->Ptr;
      pvVar45 = pRVar49[1].Ptr;
      uVar44 = 0;
LAB_100b290c:
      while( true ) {
        auVar6 = local_60;
        uVar40 = (uint)pvVar41 >> 1 & 0x1f;
        if (uVar40 != 0x1f) break;
        if (uVar44 < 7) {
          if (uVar44 != 0) {
            iVar26 = uVar44 * uVar44;
            do {
              iVar26 = iVar26 + -1;
            } while (iVar26 != 0);
          }
        }
        else {
LAB_100b2900:
          SwitchToThread();
        }
LAB_100b2906:
        pvVar41 = pRVar49->Ptr;
        pvVar45 = pRVar49[1].Ptr;
        uVar44 = uVar44 + 1;
      }
      if (((uint)pvVar41 & 1) == 0) {
        pvVar37 = pRVar49[0x10].Ptr;
        if ((uint)pvVar41 >> 1 == (uint)pvVar37 >> 1) goto LAB_100b29e7;
        pvVar37 = (PVOID)((int)pvVar41 + 2U | (uint)(0x3f < ((uint)pvVar37 ^ (uint)pvVar41)));
      }
      else {
        pvVar37 = (PVOID)((int)pvVar41 + 2);
      }
      if (pvVar45 == (LPVOID)0x0) {
        if (6 < uVar44) goto LAB_100b2900;
        if (uVar44 != 0) {
          iVar26 = uVar44 * uVar44;
          do {
            iVar26 = iVar26 + -1;
          } while (iVar26 != 0);
        }
        goto LAB_100b2906;
      }
      LOCK();
      bVar23 = pvVar41 == pRVar49->Ptr;
      if (bVar23) {
        pRVar49->Ptr = pvVar37;
      }
      UNLOCK();
      if (!bVar23) goto code_r0x100b29b1;
      if (uVar40 == 0x1e) {
        pvVar41 = *(PVOID *)((int)pvVar45 + 0x5d0);
        if (pvVar41 == (PVOID)0x0) {
          iVar26 = 1;
          uVar44 = 0;
          local_13c = 0;
          do {
            uVar42 = local_13c;
            uVar31 = uVar44;
            if (uVar44 < 7) {
              while (uVar31 != 0) {
                uVar42 = uVar42 - 1;
                uVar31 = uVar42;
              }
            }
            else {
              SwitchToThread();
            }
            pvVar41 = *(PVOID *)((int)pvVar45 + 0x5d0);
            local_13c = local_13c + iVar26;
            uVar44 = uVar44 + 1;
            iVar26 = iVar26 + 2;
          } while (pvVar41 == (PVOID)0x0);
        }
        iVar26 = *(int *)((int)pvVar41 + 0x5d0);
        pRVar49[1].Ptr = pvVar41;
        pRVar49->Ptr = (PVOID)(((uint)pvVar37 & 0xfffffffe) + 2 + (uint)(iVar26 != 0));
      }
      auStack_ac._4_4_ = pvVar45;
      pRStack_a4 = (PSRWLOCK)uVar40;
      puVar29 = (undefined4 *)((int)pvVar45 + uVar40 * 0x30);
      if ((*(uint *)((int)pvVar45 + uVar40 * 0x30 + 0x28) & 1) == 0) {
        iVar26 = 1;
        uVar44 = 0;
        uVar42 = 0;
        do {
          uVar31 = uVar44;
          uVar4 = uVar42;
          if (uVar42 < 7) {
            while (uVar4 != 0) {
              uVar31 = uVar31 - 1;
              uVar4 = uVar31;
            }
          }
          else {
            SwitchToThread();
          }
          uVar44 = uVar44 + iVar26;
          uVar42 = uVar42 + 1;
          iVar26 = iVar26 + 2;
        } while ((puVar29[10] & 1) == 0);
      }
      pbVar36 = (byte *)*puVar29;
      pppppppbVar39 = (byte *******)puVar29[2];
      local_b4 = (byte *******)puVar29[1];
      local_128 = (byte *******)*(undefined8 *)(puVar29 + 5);
      pppppppbStack_124 = (byte *******)((ulonglong)*(undefined8 *)(puVar29 + 5) >> 0x20);
      local_120 = (byte *******)*(undefined8 *)(puVar29 + 7);
      pppppppbStack_11c = (byte *******)((ulonglong)*(undefined8 *)(puVar29 + 7) >> 0x20);
      local_118 = (byte *******)puVar29[9];
      local_130 = *(undefined8 *)(puVar29 + 3);
      iVar26 = uVar40 + 1;
      if (iVar26 == 0x1f) {
        iVar26 = 0;
        do {
          iVar38 = iVar26 * 0x30;
          if ((*(uint *)((int)pvVar45 + iVar38 + 0x28) & 2) == 0) {
            uVar44 = *(uint *)((int)pvVar45 + iVar38 + 0x28);
            do {
              puVar1 = (uint *)((int)pvVar45 + iVar38 + 0x28);
              LOCK();
              uVar40 = *puVar1;
              bVar23 = uVar44 == uVar40;
              if (bVar23) {
                *puVar1 = uVar44 | 4;
                uVar40 = uVar44;
              }
              UNLOCK();
              uVar44 = uVar40;
            } while (!bVar23);
            if ((uVar40 & 2) == 0) goto LAB_100b3416;
          }
          iVar26 = iVar26 + 1;
        } while (iVar26 != 0x1e);
LAB_100b3406:
        pvVar32 = GetProcessHeap();
        HeapFree(pvVar32,0,pvVar45);
      }
      else {
        uVar44 = puVar29[10];
        do {
          LOCK();
          uVar42 = puVar29[10];
          bVar23 = uVar44 == uVar42;
          if (bVar23) {
            puVar29[10] = uVar44 | 2;
            uVar42 = uVar44;
          }
          UNLOCK();
          uVar44 = uVar42;
        } while (!bVar23);
        if ((uVar42 & 4) != 0) {
          if (uVar40 < 0x1d) {
            do {
              iVar38 = iVar26 * 0x30;
              if ((*(uint *)((int)pvVar45 + iVar38 + 0x28) & 2) == 0) {
                uVar44 = *(uint *)((int)pvVar45 + iVar38 + 0x28);
                do {
                  puVar1 = (uint *)((int)pvVar45 + iVar38 + 0x28);
                  LOCK();
                  uVar40 = *puVar1;
                  bVar23 = uVar44 == uVar40;
                  if (bVar23) {
                    *puVar1 = uVar44 | 4;
                    uVar40 = uVar44;
                  }
                  UNLOCK();
                  uVar44 = uVar40;
                } while (!bVar23);
                if ((uVar40 & 2) == 0) goto LAB_100b3416;
              }
              iVar26 = iVar26 + 1;
            } while (iVar26 != 0x1e);
          }
          goto LAB_100b3406;
        }
      }
LAB_100b3416:
      if (pppppppbVar39 == (byte *******)0xfffffffd) goto LAB_100b341b;
      local_c4 = SUB42(local_120,0);
      uStack_c2 = (undefined1)((uint)local_120 >> 0x10);
      uStack_c1 = (undefined1)((uint)local_120 >> 0x18);
      pppppppbStack_d4 = (byte *******)local_130;
      local_d0 = (byte *******)((ulonglong)local_130 >> 0x20);
      local_e0 = pbVar36;
      local_dc = local_b4;
      pppppppbVar16 = local_118;
      pppppppbVar46 = local_128;
      pppppppbVar34 = pppppppbStack_124;
      pppppppbVar8 = local_118;
      uVar9 = local_114;
      uVar10 = uStack_112;
      uVar11 = uStack_111;
      pppppppbVar12 = pppppppbStack_110;
      pppppppbVar13 = pppppppbStack_10c;
      pppppppbVar17 = pppppppbStack_d4;
      pppppppbVar14 = local_d0;
      pppppppbVar15 = local_128;
      pppppppbVar18 = pppppppbStack_124;
      uVar19 = local_c4;
      uVar20 = uStack_c2;
      uVar21 = uStack_c1;
      pppppppbVar22 = pppppppbStack_11c;
      goto joined_r0x100b327f;
    }
    local_100 = (LARGE_INTEGER *)0xffffffff;
    local_50 = (undefined4 *)0x0;
    local_60 = (undefined1  [16])0x0;
    AcquireSRWLockExclusive(pRVar49);
    pvVar41 = pRVar49[3].Ptr;
    if (pvVar41 != (PVOID)0x0) {
      puVar28 = FUN_100a8900();
      if (puVar28 == (undefined1 *)0x0) {
        FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pvVar45 = (PVOID)0x0;
      iVar26 = (int)pvVar41 * 0xc;
      piVar30 = pRVar49[2].Ptr;
LAB_100b30ed:
      iVar38 = *piVar30;
      if (*(undefined1 **)(iVar38 + 0x14) == puVar28) goto LAB_100b30e0;
      LOCK();
      bVar23 = *(int *)(iVar38 + 0xc) == 0;
      if (bVar23) {
        *(int *)(iVar38 + 0xc) = piVar30[1];
      }
      UNLOCK();
      if (!bVar23) goto LAB_100b30e0;
      if (piVar30[2] != 0) {
        *(int *)(iVar38 + 0x10) = piVar30[2];
      }
      FUN_10107860((char *)(*(int *)(iVar38 + 8) + 0x18));
      pvVar41 = pRVar49[3].Ptr;
      if (pvVar41 <= pvVar45) {
LAB_100b3cee:
        FUN_1013684d(pvVar45,pvVar41,&PTR_s_C__Users_runneradmin__rustup_too_1014fa24);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pvVar37 = pRVar49[2].Ptr;
      piVar30 = *(int **)((int)pvVar37 + (int)pvVar45 * 0xc);
      puVar29 = *(undefined4 **)((int)pvVar37 + (int)pvVar45 * 0xc + 8);
      memmove((void *)((int)pvVar37 + (int)pvVar45 * 0xc),
              (void *)((int)pvVar37 + (int)pvVar45 * 0xc + 0xc),
              (~(uint)pvVar45 + (int)pvVar41) * 0xc);
      pvVar41 = (PVOID)((int)pvVar41 + -1);
      pRVar49[3].Ptr = pvVar41;
      if (piVar30 == (int *)0x0) goto LAB_100b3cee;
      local_50 = puVar29;
      ReleaseSRWLockExclusive(pRVar49);
      if (puVar29 == (undefined4 *)0x0) {
        local_e0 = (byte *)CONCAT31(local_e0._1_3_,1);
        local_d8 = (byte *******)0xfffffffd;
      }
      else {
        if (*(char *)((int)puVar29 + 0x29) == '\0') {
          if (*(char *)(puVar29 + 10) == '\0') {
            iVar26 = 1;
            uVar40 = 0;
            uVar44 = 0;
            do {
              uVar42 = uVar40;
              uVar31 = uVar44;
              if (uVar44 < 7) {
                while (uVar31 != 0) {
                  uVar42 = uVar42 - 1;
                  uVar31 = uVar42;
                }
              }
              else {
                SwitchToThread();
              }
              uVar40 = uVar40 + iVar26;
              uVar44 = uVar44 + 1;
              iVar26 = iVar26 + 2;
            } while (*(char *)(puVar29 + 10) == '\0');
          }
          pppppppbVar46 = (byte *******)puVar29[2];
          pbVar36 = (byte *)*puVar29;
          pppppppbVar39 = (byte *******)puVar29[1];
          puVar29[2] = 0xfffffffd;
          if (pppppppbVar46 == (byte *******)0xfffffffd) {
            FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb18);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_118 = (byte *******)puVar29[9];
          local_120 = (byte *******)*(undefined8 *)(puVar29 + 7);
          pppppppbStack_11c = (byte *******)((ulonglong)*(undefined8 *)(puVar29 + 7) >> 0x20);
          local_130 = *(undefined8 *)(puVar29 + 3);
          local_128 = (byte *******)*(undefined8 *)(puVar29 + 5);
          pppppppbStack_124 = (byte *******)((ulonglong)*(undefined8 *)(puVar29 + 5) >> 0x20);
          pvVar32 = GetProcessHeap();
          HeapFree(pvVar32,0,puVar29);
        }
        else {
          pppppppbVar46 = (byte *******)puVar29[2];
          pbVar36 = (byte *)*puVar29;
          pppppppbVar39 = (byte *******)puVar29[1];
          puVar29[2] = 0xfffffffd;
          if (pppppppbVar46 == (byte *******)0xfffffffd) {
            FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_1014fb28);
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_118 = (byte *******)puVar29[9];
          local_120 = (byte *******)*(undefined8 *)(puVar29 + 7);
          pppppppbStack_11c = (byte *******)((ulonglong)*(undefined8 *)(puVar29 + 7) >> 0x20);
          local_130 = *(undefined8 *)(puVar29 + 3);
          local_128 = (byte *******)*(undefined8 *)(puVar29 + 5);
          pppppppbStack_124 = (byte *******)((ulonglong)*(undefined8 *)(puVar29 + 5) >> 0x20);
          *(undefined1 *)(puVar29 + 10) = 1;
        }
        pppppppbStack_cc = local_128;
        local_c8 = pppppppbStack_124;
        pppppppbStack_d4 = (byte *******)local_130;
        local_d0 = (byte *******)((ulonglong)local_130 >> 0x20);
        pppppppbStack_bc = local_118;
        local_c4 = SUB42(local_120,0);
        uStack_c2 = (undefined1)((uint)local_120 >> 0x10);
        uStack_c1 = (undefined1)((uint)local_120 >> 0x18);
        pppppppbStack_c0 = pppppppbStack_11c;
        local_e0 = pbVar36;
        local_dc = pppppppbVar39;
        local_d8 = pppppppbVar46;
      }
      LOCK();
      *piVar30 = *piVar30 + -1;
      UNLOCK();
      pppppppbVar39 = local_d8;
      pppppppbVar16 = pppppppbStack_bc;
      pppppppbVar46 = local_128;
      pppppppbVar34 = pppppppbStack_124;
      pppppppbVar8 = local_118;
      uVar9 = local_114;
      uVar10 = uStack_112;
      uVar11 = uStack_111;
      pppppppbVar12 = pppppppbStack_110;
      pppppppbVar13 = pppppppbStack_10c;
      pppppppbVar17 = pppppppbStack_d4;
      pppppppbVar14 = local_d0;
      pppppppbVar15 = pppppppbStack_cc;
      pppppppbVar18 = local_c8;
      uVar19 = local_c4;
      uVar20 = uStack_c2;
      uVar21 = uStack_c1;
      pppppppbVar22 = pppppppbStack_c0;
      if (*piVar30 == 0) {
        FUN_1011b0a0(piVar30);
        pppppppbVar39 = local_d8;
        pppppppbVar16 = pppppppbStack_bc;
        pppppppbVar46 = local_128;
        pppppppbVar34 = pppppppbStack_124;
        pppppppbVar8 = local_118;
        uVar9 = local_114;
        uVar10 = uStack_112;
        uVar11 = uStack_111;
        pppppppbVar12 = pppppppbStack_110;
        pppppppbVar13 = pppppppbStack_10c;
        pppppppbVar17 = pppppppbStack_d4;
        pppppppbVar14 = local_d0;
        pppppppbVar15 = pppppppbStack_cc;
        pppppppbVar18 = local_c8;
        uVar19 = local_c4;
        uVar20 = uStack_c2;
        uVar21 = uStack_c1;
        pppppppbVar22 = pppppppbStack_c0;
      }
      goto joined_r0x100b327f;
    }
LAB_100b33c2:
    if (*(char *)&pRVar49[0xd].Ptr == '\0') {
      pLStack_ec = &local_108;
      local_f4 = local_60;
      local_f0 = pRVar49;
      local_e8 = pRVar49;
      puVar29 = FUN_100a89a0();
      if (puVar29 == (undefined4 *)0x0) {
LAB_100b3b62:
        FUN_10137d90(&local_e0,(int *)&local_f4);
        pRVar49 = local_f0;
        pbVar36 = local_e0;
        pppppppbVar46 = local_dc;
        pppppppbVar39 = local_d8;
        pppppppbVar34 = pppppppbStack_d4;
        pppppppbVar8 = local_d0;
        pppppppbVar12 = pppppppbStack_cc;
        pppppppbVar13 = local_c8;
        uVar9 = local_c4;
        uVar10 = uStack_c2;
        uVar11 = uStack_c1;
        pppppppbVar14 = pppppppbStack_c0;
        pppppppbVar15 = pppppppbStack_bc;
      }
      else {
        piVar30 = (int *)*puVar29;
        *puVar29 = 0;
        if (piVar30 == (int *)0x0) {
          piVar33 = (int *)FUN_1013c310();
          local_f4 = (undefined1 *)0x0;
          auStack_ac._0_4_ = pRVar49;
          local_b0 = (undefined1  [4])local_60;
          auStack_ac._4_4_ = &local_108;
          pRStack_a4 = pRVar49;
          FUN_100b45b0((undefined4 *)&local_130,(int *)local_b0,piVar33);
          LOCK();
          *piVar33 = *piVar33 + -1;
          iVar26 = *piVar33;
          UNLOCK();
joined_r0x100b3c39:
          if (iVar26 == 0) {
            FUN_1011b0a0(piVar33);
          }
        }
        else {
          piVar30[3] = 0;
          piVar30[4] = 0;
          local_f4 = (undefined1 *)0x0;
          auStack_ac._4_4_ = pLStack_ec;
          auStack_ac._0_4_ = local_f0;
          local_b0 = (undefined1  [4])local_60;
          pRStack_a4 = local_e8;
          FUN_100b45b0((undefined4 *)&local_130,(int *)local_b0,piVar30);
          piVar33 = (int *)*puVar29;
          *puVar29 = piVar30;
          if (piVar33 != (int *)0x0) {
            LOCK();
            *piVar33 = *piVar33 + -1;
            iVar26 = *piVar33;
            UNLOCK();
            goto joined_r0x100b3c39;
          }
        }
        auStack_ac._0_4_ = local_120;
        local_b0 = (undefined1  [4])pppppppbStack_124;
        pRStack_a4 = (PSRWLOCK)local_118;
        auStack_ac._4_4_ = pppppppbStack_11c;
        local_a0 = CONCAT44(pppppppbStack_110,CONCAT13(uStack_111,CONCAT12(uStack_112,local_114)));
        local_98 = pppppppbStack_10c;
        pRVar49 = local_f0;
        pbVar36 = (byte *)local_130;
        pppppppbVar46 = &(local_130._4_4_)->Ptr;
        pppppppbVar39 = local_128;
        pppppppbVar34 = pppppppbStack_124;
        pppppppbVar8 = local_120;
        pppppppbVar12 = pppppppbStack_11c;
        pppppppbVar13 = local_118;
        uVar9 = local_114;
        uVar10 = uStack_112;
        uVar11 = uStack_111;
        pppppppbVar14 = pppppppbStack_110;
        pppppppbVar15 = pppppppbStack_10c;
        if (local_128 == (byte *******)0xfffffffc) goto LAB_100b3b62;
      }
      pppppppbStack_bc = pppppppbVar15;
      pppppppbStack_c0 = pppppppbVar14;
      uStack_c1 = uVar11;
      uStack_c2 = uVar10;
      local_c4 = uVar9;
      local_c8 = pppppppbVar13;
      pppppppbStack_cc = pppppppbVar12;
      local_d0 = pppppppbVar8;
      pppppppbStack_d4 = pppppppbVar34;
      local_d8 = pppppppbVar39;
      local_dc = pppppppbVar46;
      local_e0 = pbVar36;
      local_f0 = pRVar49;
      pppppppbVar39 = local_d8;
      pppppppbVar16 = pppppppbStack_bc;
      pppppppbVar46 = local_128;
      pppppppbVar34 = pppppppbStack_124;
      pppppppbVar8 = local_118;
      uVar9 = local_114;
      uVar10 = uStack_112;
      uVar11 = uStack_111;
      pppppppbVar12 = pppppppbStack_110;
      pppppppbVar13 = pppppppbStack_10c;
      pppppppbVar17 = pppppppbStack_d4;
      pppppppbVar14 = local_d0;
      pppppppbVar15 = pppppppbStack_cc;
      pppppppbVar18 = local_c8;
      uVar19 = local_c4;
      uVar20 = uStack_c2;
      uVar21 = uStack_c1;
      pppppppbVar22 = pppppppbStack_c0;
      if (local_f4 != (undefined1 *)0x0) goto LAB_100b35e9;
    }
    else {
      local_e0 = (byte *)CONCAT31(local_e0._1_3_,1);
      local_d8 = (byte *******)0xfffffffd;
LAB_100b35e9:
      ReleaseSRWLockExclusive(pRVar49);
      pppppppbVar39 = local_d8;
      pppppppbVar16 = pppppppbStack_bc;
      pppppppbVar46 = local_128;
      pppppppbVar34 = pppppppbStack_124;
      pppppppbVar8 = local_118;
      uVar9 = local_114;
      uVar10 = uStack_112;
      uVar11 = uStack_111;
      pppppppbVar12 = pppppppbStack_110;
      pppppppbVar13 = pppppppbStack_10c;
      pppppppbVar17 = pppppppbStack_d4;
      pppppppbVar14 = local_d0;
      pppppppbVar15 = pppppppbStack_cc;
      pppppppbVar18 = local_c8;
      uVar19 = local_c4;
      uVar20 = uStack_c2;
      uVar21 = uStack_c1;
      pppppppbVar22 = pppppppbStack_c0;
    }
joined_r0x100b327f:
    pppppppbStack_110 = pppppppbVar22;
    uStack_111 = uVar21;
    uStack_112 = uVar20;
    local_114 = uVar19;
    local_118 = pppppppbVar18;
    pppppppbStack_124 = pppppppbVar17;
    pppppppbStack_10c = pppppppbVar16;
    local_128 = pppppppbVar39;
    pppppppbStack_d4 = pppppppbStack_124;
    local_d0 = pppppppbVar14;
    pppppppbStack_cc = pppppppbVar15;
    local_c8 = local_118;
    local_c4 = local_114;
    uStack_c2 = uStack_112;
    uStack_c1 = uStack_111;
    pppppppbStack_c0 = pppppppbStack_110;
    pppppppbStack_bc = pppppppbStack_10c;
    if (local_128 == (byte *******)0xfffffffd) goto LAB_100b35fc;
    if (local_128 != (byte *******)0xfffffffe) {
      local_130 = CONCAT44(local_dc,local_e0);
      auStack_ac._0_4_ = &LAB_100b4ba0;
      local_b0 = (undefined1  [4])&local_130;
      local_120 = pppppppbVar14;
      pppppppbStack_11c = pppppppbVar15;
      FUN_10093970((undefined8 *)&local_e0,(ushort *)&DAT_1014f720,(uint)local_b0);
      pppppppbVar46 = local_d8;
      pppppppbVar39 = local_dc;
      pbVar36 = local_e0;
      if (local_d8 == (byte *******)0x0) {
        pvVar25 = (LPVOID)0x1;
      }
      else {
        pvVar25 = FUN_10107380(0,(SIZE_T)local_d8);
        if (pvVar25 == (LPVOID)0x0) {
LAB_100b3c7b:
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        memcpy(pvVar25,pppppppbVar39,(size_t)pppppppbVar46);
      }
      if (pbVar36 != (byte *)0x0) {
        pvVar32 = GetProcessHeap();
        HeapFree(pvVar32,0,pppppppbVar39);
      }
      FUN_100adf80((char *)&local_130);
      goto LAB_100b38b7;
    }
    pbVar36 = *(byte **)((int)local_64 + 4);
    pppppppbVar39 = *(byte ********)(local_64 + 1);
    local_128 = pppppppbVar46;
    pppppppbStack_124 = pppppppbVar34;
    local_118 = pppppppbVar8;
    local_48 = pppppppbStack_d4;
    local_44 = pppppppbVar14;
    local_40 = pppppppbVar15;
    local_3c = local_c8;
    FUN_1010a5e0((undefined1 *)&local_130,pbVar36,(uint)pppppppbVar39);
    pppppppbStack_10c = pppppppbVar13;
    pppppppbStack_110 = pppppppbVar12;
    uStack_111 = uVar11;
    pppppppbVar46 = pppppppbVar39;
    pbVar35 = pbVar36;
    if ((byte)local_130 < 6) {
      pppppppbVar34 = (byte *******)&DAT_00000006;
      switch(*(int *)(&DAT_100b3d04 + (uint)(byte)local_130 * 4) + local_7c) {
      case 0x100b37ec:
        pppppppbVar34 = local_128 + 1;
        break;
      case 0x100b3914:
        pbVar35 = (byte *)((int)local_120 + 1);
        if (local_120 == (byte *******)0x0) {
          pbVar35 = (byte *)0x0;
        }
        pppppppbVar34 = (byte *******)((byte *)((int)local_128 + 2) + (int)pbVar35);
        break;
      case 0x100b3922:
        pbVar35 = (byte *)((int)local_120 + 1);
        if (local_120 == (byte *******)0x0) {
          pbVar35 = (byte *)0x0;
        }
        pppppppbVar34 = (byte *******)((int)(local_128 + 2) + (int)pbVar35);
        break;
      case 0x100b3930:
        pppppppbVar34 = (byte *******)0x2;
      }
      pppppppbVar46 = (byte *******)((int)pppppppbVar39 - (int)pppppppbVar34);
      if (pppppppbVar39 < pppppppbVar34) goto code_r0x100b3bcf;
      pbVar35 = (byte *)((int)pppppppbVar34 + (int)pbVar36);
    }
    if (pppppppbVar46 == (byte *******)0x0) {
      uStack_c2 = false;
    }
    else {
      uStack_c2 = *pbVar35 == 0x2f || *pbVar35 == 0x5c;
    }
    local_c8 = local_120;
    local_d8 = (byte *******)local_130;
    pppppppbStack_d4 = (byte *******)((ulonglong)local_130 >> 0x20);
    local_d0 = local_128;
    pppppppbStack_cc = pppppppbStack_124;
    local_c4 = 0x200;
    local_e0 = pbVar36;
    local_dc = pppppppbVar39;
    FUN_1010a5e0(local_b0,(byte *)pppppppbVar14,(uint)pppppppbVar15);
    pppppppbVar46 = pppppppbVar15;
    pppppppbVar34 = pppppppbVar14;
    if (local_b0[0] < 6) {
      pppppppbVar34 = (byte *******)&DAT_00000006;
      switch(local_7c + *(int *)(&DAT_100b3d1c + (uint)local_b0[0] * 4)) {
      case 0x100b39d8:
        pppppppbVar34 = (byte *******)(auStack_ac._4_4_ + 4);
        break;
      case 0x100b39df:
        pbVar36 = (byte *)((int)(byte *******)local_a0 + 1);
        if ((byte *******)local_a0 == (byte *******)0x0) {
          pbVar36 = (byte *)0x0;
        }
        pppppppbVar34 = (byte *******)((byte *)(auStack_ac._4_4_ + 2) + (int)pbVar36);
        break;
      case 0x100b39ed:
        pbVar36 = (byte *)((int)(byte *******)local_a0 + 1);
        if ((byte *******)local_a0 == (byte *******)0x0) {
          pbVar36 = (byte *)0x0;
        }
        pppppppbVar34 = (byte *******)((int)(auStack_ac._4_4_ + 8) + (int)pbVar36);
        break;
      case 0x100b39fb:
        pppppppbVar34 = (byte *******)0x2;
      }
      pppppppbVar46 = (byte *******)((int)pppppppbVar15 - (int)pppppppbVar34);
      pppppppbVar39 = pppppppbVar15;
      if (pppppppbVar15 < pppppppbVar34) {
code_r0x100b3bcf:
        FUN_10136a50((uint)pppppppbVar34,(uint)pppppppbVar39,(uint)pppppppbVar39,
                     &PTR_s_C__Users_runneradmin__rustup_too_10158004);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pppppppbVar34 = (byte *******)((int)pppppppbVar34 + (int)pppppppbVar14);
    }
    if (pppppppbVar46 == (byte *******)0x0) {
      uStack_112 = false;
    }
    else {
      uStack_112 = *(byte *)pppppppbVar34 == 0x2f || *(byte *)pppppppbVar34 == 0x5c;
    }
    local_130 = CONCAT44(pppppppbVar15,pppppppbVar14);
    local_128 = local_b0;
    pppppppbStack_124 = local_b0._4_4_;
    pppppppbStack_11c = local_b0._12_4_;
    local_118 = (byte *******)local_a0;
    local_114 = 0x200;
    local_120 = (byte *******)auStack_ac._4_4_;
    bVar23 = FUN_100a8650((undefined8 *)&local_e0,&local_130);
    if (bVar23) {
      local_e4[2] = 0xfffffffe;
    }
    else {
      local_128 = (byte *******)&local_48;
      local_130 = CONCAT44(&LAB_100a8d80,&local_64);
      pppppppbStack_124 = (byte *******)&LAB_1011d390;
      FUN_10093970((undefined8 *)&local_e0,(ushort *)&DAT_1014fa98,(uint)&local_130);
      pppppppbVar39 = local_d8;
      pppppppbVar46 = local_dc;
      pbVar36 = local_e0;
      if (local_d8 == (byte *******)0x0) {
        pvVar25 = (LPVOID)0x1;
      }
      else {
        pvVar25 = FUN_10107380(0,(SIZE_T)local_d8);
        if (pvVar25 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        memcpy(pvVar25,pppppppbVar46,(size_t)pppppppbVar39);
      }
      local_e4[2] = 1000000000;
      local_e4[3] = pppppppbVar39;
      local_e4[4] = pvVar25;
      local_e4[5] = pppppppbVar39;
      local_e4[6] = 0;
      local_e4[7] = 4;
      local_e4[8] = 0;
      if (pbVar36 != (byte *)0x0) {
        pvVar32 = GetProcessHeap();
        HeapFree(pvVar32,0,pppppppbVar46);
      }
    }
    pppppppbVar46 = local_44;
    if (local_48 != (byte *******)0x0) {
      pvVar32 = GetProcessHeap();
      HeapFree(pvVar32,0,pppppppbVar46);
    }
    goto LAB_100b38e0;
  }
  pvVar25 = FUN_10107380(0,0x33);
  if (pvVar25 == (LPVOID)0x0) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  memcpy(pvVar25,&DAT_1014fa44,0x33);
  local_e4[2] = 1000000000;
  local_e4[3] = 0x33;
  local_e4[4] = pvVar25;
  local_e4[5] = 0x33;
  local_e4[6] = 0;
  local_e4[7] = 4;
  local_e4[8] = 0;
  if ((int)local_78 == 0) {
    return;
  }
  goto LAB_100b38f1;
LAB_100b29e7:
  if (((uint)pvVar37 & 1) != 0) goto LAB_100b341b;
  if (local_60._8_4_ != 0xffffffff) {
    local_88 = local_60._8_4_;
    uVar5 = local_60._0_4_;
    uVar7 = local_60._4_4_;
    lVar48 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
    if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
      lVar48 = FUN_1013c290();
    }
    local_140 = (uint)((ulonglong)lVar48 >> 0x20);
    pppppppbVar46 = (byte *******)lVar48;
    local_108.s.HighPart = 0;
    local_108.s.LowPart = 0;
    BVar27 = QueryPerformanceCounter(&local_108);
    if (BVar27 == 0) {
LAB_100b3cab:
      local_f0 = (PSRWLOCK)GetLastError();
      local_f4 = (undefined1 *)0x0;
      FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_f4,&PTR_FUN_101569a8,
                   &PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_f8 = (undefined1 *)local_108.s.LowPart;
    local_84 = (PSRWLOCK)local_108.s.HighPart;
    uVar47 = __aulldiv(local_108.s.LowPart,local_108.s.HighPart,(uint)pppppppbVar46,local_140);
    puVar28 = (undefined1 *)(lVar48 * uVar47);
    local_80 = (int)(uVar47 >> 0x20) * 1000000000;
    bVar23 = local_f8 < puVar28;
    uVar44 = (int)local_f8 - (int)puVar28;
    lVar2 = (uVar47 & 0xffffffff) * 1000000000;
    local_f8 = (undefined1 *)lVar2;
    iVar26 = (int)((ulonglong)lVar2 >> 0x20) + local_80;
    lVar2 = (ulonglong)uVar44 * 1000000000;
    local_b4 = pppppppbVar46;
    lVar48 = __aulldiv((uint)lVar2,
                       (int)((ulonglong)lVar2 >> 0x20) +
                       ((int)local_84 + (-(uint)bVar23 - (int)(lVar48 * uVar47 >> 0x20))) *
                       1000000000,(uint)pppppppbVar46,local_140);
    lVar48 = lVar48 + CONCAT44(iVar26,local_f8) + 0x3fffffffffffffff;
    uVar40 = (uint)lVar48;
    lVar48 = __aulldiv(uVar40,(uint)((ulonglong)lVar48 >> 0x20),1000000000,0);
    uVar44 = (uint)((ulonglong)lVar48 >> 0x20);
    if (lVar48 == auVar6._0_8_) {
      if (local_88 <= uVar40 + (uint)lVar48 * -1000000000) goto LAB_100b3bb7;
    }
    else if ((uint)uVar7 <= uVar44 && (uint)((uint)lVar48 < (uint)uVar5) <= uVar44 - uVar7)
    goto LAB_100b3bb7;
  }
  local_108.s.LowPart = (DWORD)local_b0;
  local_100 = (LARGE_INTEGER *)local_60;
  local_108.s.HighPart = (LONG)pRVar49;
  puVar29 = FUN_100a89a0();
  if (puVar29 == (undefined4 *)0x0) {
    FUN_10137d30((int *)&local_108);
  }
  else {
    piVar30 = (int *)*puVar29;
    *puVar29 = 0;
    if (piVar30 == (int *)0x0) {
      piVar30 = (int *)FUN_1013c310();
      local_f4 = local_b0;
      local_108.s.LowPart = 0;
      pLStack_ec = local_100;
      local_f0 = (PSRWLOCK)local_108.s.HighPart;
      FUN_100b4180((int *)&local_f4,piVar30);
      LOCK();
      *piVar30 = *piVar30 + -1;
      UNLOCK();
      if (*piVar30 == 0) {
        FUN_1011b0a0(piVar30);
      }
    }
    else {
      piVar30[3] = 0;
      piVar30[4] = 0;
      local_f4 = local_b0;
      local_108.s.LowPart = 0;
      pLStack_ec = local_100;
      local_f0 = (PSRWLOCK)local_108.s.HighPart;
      FUN_100b4180((int *)&local_f4,piVar30);
      piVar33 = (int *)*puVar29;
      *puVar29 = piVar30;
      if (piVar33 != (int *)0x0) {
        LOCK();
        *piVar33 = *piVar33 + -1;
        UNLOCK();
        if (*piVar33 == 0) {
          FUN_1011b0a0(piVar33);
        }
      }
    }
  }
  goto LAB_100b28f6;
LAB_100b3bb7:
  local_e0 = (byte *)((uint)local_e0 & 0xffffff00);
  pppppppbVar46 = local_128;
  pppppppbVar34 = pppppppbStack_124;
  pppppppbVar8 = local_118;
  uVar9 = local_114;
  uVar10 = uStack_112;
  uVar11 = uStack_111;
  pppppppbVar12 = pppppppbStack_110;
  pppppppbVar13 = pppppppbStack_10c;
  goto LAB_100b35fc;
code_r0x100b29b1:
  uVar40 = 6;
  if (uVar44 < 6) {
    uVar40 = uVar44;
  }
  if (uVar44 == 0) {
    uVar44 = 1;
  }
  else {
    iVar26 = uVar40 * uVar40;
    do {
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
    uVar44 = uVar44 + 1;
  }
  pvVar41 = pRVar49->Ptr;
  pvVar45 = pRVar49[1].Ptr;
  goto LAB_100b290c;
LAB_100b30e0:
  piVar30 = piVar30 + 3;
  pvVar45 = (PVOID)((int)pvVar45 + 1);
  iVar26 = iVar26 + -0xc;
  if (iVar26 == 0) goto LAB_100b33c2;
  goto LAB_100b30ed;
LAB_100b341b:
  local_e0 = (byte *)CONCAT31(local_e0._1_3_,1);
  pppppppbVar46 = local_128;
  pppppppbVar34 = pppppppbStack_124;
  pppppppbVar8 = local_118;
  uVar9 = local_114;
  uVar10 = uStack_112;
  uVar11 = uStack_111;
  pppppppbVar12 = pppppppbStack_110;
  pppppppbVar13 = pppppppbStack_10c;
LAB_100b35fc:
  pppppppbStack_10c = pppppppbVar13;
  pppppppbStack_110 = pppppppbVar12;
  uStack_111 = uVar11;
  uStack_112 = uVar10;
  local_114 = uVar9;
  local_118 = pppppppbVar8;
  pppppppbStack_124 = pppppppbVar34;
  local_128 = pppppppbVar46;
  pppppppbVar46 = (byte *******)&DAT_00000024;
  pvVar25 = FUN_10107380(0,0x24);
  if (pvVar25 == (LPVOID)0x0) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  memcpy(pvVar25,"Error receiving from command channel",0x24);
LAB_100b38b7:
  local_e4[2] = 1000000000;
  local_e4[3] = pppppppbVar46;
  local_e4[4] = pvVar25;
  local_e4[5] = pppppppbVar46;
LAB_100b38cb:
  local_e4[6] = 0;
  local_e4[7] = 4;
  local_e4[8] = 0;
LAB_100b38e0:
  if ((int)local_78 != 0) {
    pvVar43 = local_78._4_4_;
LAB_100b38f1:
    pvVar32 = GetProcessHeap();
    HeapFree(pvVar32,0,pvVar43);
  }
  return;
}
