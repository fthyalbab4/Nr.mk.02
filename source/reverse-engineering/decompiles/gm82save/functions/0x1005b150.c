// rea decompile_all
// name: FUN_1005b150
// address: 0x1005b150
// body: available
// range: 0x1005b150-0x1005b550 inclusive
// range: 0x1005b560-0x1005b5b1 inclusive
// range: 0x1005b5c0-0x1005b63b inclusive
// range: 0x1005b640-0x1005b79e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * __cdecl FUN_1005b150(undefined8 *param_1,uint *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *_Src;
  uint *_Size;
  code *pcVar3;
  int iVar4;
  LPVOID lpMem;
  uint *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  HANDLE pvVar15;
  char cVar16;
  int extraout_EDX;
  int iVar17;
  LPVOID pvVar18;
  int iVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  byte *pbStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  int iStack_84;
  undefined2 uStack_80;
  uint *puStack_78;
  uint *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;

  pvVar18 = (LPVOID)0x1;
  iVar7 = (*(code *)0x5adf3c)();
  FUN_10110c70(param_2,"gml",3);
  _Src = (byte *)param_2[1];
  _Size = (uint *)param_2[2];
  FUN_1011c880(&uStack_c8,(int)_Src,(int)_Size);
  iVar4 = (int)uStack_c8;
  lpMem = uStack_c8._4_4_;
  iVar22 = (int)uStack_c0;
  if ((int)uStack_c8 == -1) {
    if (_Size != (uint *)0x0) {
      pvVar18 = FUN_10107380(0,(SIZE_T)_Size);
      if (pvVar18 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      memcpy(pvVar18,_Src,(size_t)_Size);
    }
    *(LPVOID *)(param_1 + 2) = pvVar18;
    *(uint **)((int)param_1 + 0x14) = _Size;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)param_1 = 1;
    *(LPVOID *)((int)param_1 + 4) = lpMem;
    *(int *)(param_1 + 1) = iVar22;
    *(uint **)((int)param_1 + 0xc) = _Size;
    goto LAB_1005b68a;
  }
  FUN_100969a0((undefined4 *)&uStack_c8,uStack_c8._4_4_,(int)uStack_c0,"#define ",8);
  do {
    FUN_10092330(&pbStack_ec,(int *)&uStack_c8);
  } while (pbStack_ec == (byte *)0x0);
  if (pbStack_ec == (byte *)0x1) {
    iVar22 = iStack_e8;
  }
  iVar19 = (int)uStack_c0 - iVar22;
  FUN_100969a0((undefined4 *)&uStack_58,iVar22 + (int)uStack_c8._4_4_,iVar19,
               "\n#define CreateDestroyAlarmStep",9);
  iVar22 = -4;
  iVar17 = -1;
  uStack_98 = uStack_28;
  uStack_a0 = uStack_30;
  uStack_90 = uStack_20;
  uStack_a8 = uStack_38;
  uStack_b0 = uStack_40;
  uStack_b8 = uStack_48;
  uStack_c8 = uStack_58;
  uStack_c0 = uStack_50;
  uStack_88 = 0;
  uStack_80 = 1;
  iStack_84 = iVar19;
  do {
    iVar8 = FUN_10053300((int *)&uStack_c8);
    iVar22 = iVar22 + 4;
    iVar17 = iVar17 + 1;
  } while (iVar8 != 0);
  *(int *)(iVar7 + 0xc) = iVar17;
  (*(code *)0x409be0)(iVar17);
  puVar20 = *(undefined4 **)(iVar7 + 4);
  iVar8 = iVar17;
  if (puVar20 == (undefined4 *)0x0) {
    puVar20 = (undefined4 *)&DAT_00000004;
  }
  while (iVar8 != 0) {
    uVar9 = (*(code *)0x5a5048)();
    *puVar20 = uVar9;
    puVar20 = puVar20 + 1;
    iVar22 = iVar22 + -4;
    iVar8 = iVar22;
  }
  (*(code *)0x409be0)(iVar17);
  puStack_68 = *(undefined4 **)(iVar7 + 4);
  puStack_78 = *(uint **)(iVar7 + 8);
  uStack_98 = uStack_28;
  uStack_a0 = uStack_30;
  uStack_90 = uStack_20;
  if (puStack_68 == (undefined4 *)0x0) {
    puStack_68 = (undefined4 *)&DAT_00000004;
  }
  if (puStack_78 == (uint *)0x0) {
    puStack_78 = (uint *)&DAT_00000004;
  }
  uStack_a8 = uStack_38;
  uStack_b0 = uStack_40;
  uStack_b8 = uStack_48;
  uStack_c8 = uStack_58;
  uStack_c0 = uStack_50;
  uStack_88 = 0;
  uStack_80 = 1;
  puStack_74 = puStack_78 + iVar17;
  puStack_64 = puStack_68 + iVar17;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  iStack_84 = iVar19;
  do {
    do {
      pbVar10 = (byte *)FUN_10053300((int *)&uStack_c8);
      puVar20 = puStack_68;
      puVar5 = puStack_78;
      if (((pbVar10 == (byte *)0x0) || (puStack_78 == puStack_74)) ||
         (puStack_78 = puStack_78 + 1, puStack_68 == puStack_64)) {
        *(int *)((int)param_1 + 4) = iVar7;
        *(undefined1 *)param_1 = 0xff;
        if (iVar4 == 0) {
          return param_1;
        }
        pvVar15 = GetProcessHeap();
        HeapFree(pvVar15,0,lpMem);
        return param_1;
      }
      puStack_68 = puStack_68 + 1;
      uVar24 = FUN_10002090(pbVar10,extraout_EDX);
    } while ((int)((ulonglong)uVar24 >> 0x20) == 0);
    FUN_10001d30((int *)&pbStack_ec,(int)pbVar10,extraout_EDX,&DAT_10157df0,1);
    if (pbStack_ec == (byte *)0x0) {
      iVar22 = 0;
      uStack_f4 = 0;
      while (extraout_EDX != iVar22) {
        pbVar1 = pbVar10 + iVar22;
        iVar22 = iVar22 + 1;
        if (9 < (byte)(*pbVar1 - 0x30)) {
          if (_Size == (uint *)0x0) {
            pvVar18 = (LPVOID)0x1;
          }
          else {
            pvVar18 = FUN_10107380(0,(SIZE_T)_Size);
            if (pvVar18 == (LPVOID)0x0) {
              FUN_101366bc(1);
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
            memcpy(pvVar18,_Src,(size_t)_Size);
          }
          *(undefined1 *)param_1 = 6;
          *(uint **)((int)param_1 + 4) = _Size;
          *(LPVOID *)(param_1 + 1) = pvVar18;
          *(uint **)((int)param_1 + 0xc) = _Size;
          *(undefined1 *)(param_1 + 2) = 0;
          goto joined_r0x1005b719;
        }
      }
      uStack_f8 = 1;
      iVar22 = extraout_EDX;
    }
    else {
      uStack_f8 = uStack_e4;
      uStack_f4 = uStack_e0;
      pbVar10 = pbStack_ec;
      iVar22 = iStack_e8;
    }
    uVar24 = FUN_10002090(pbVar10,iVar22);
    iVar22 = (int)((ulonglong)uVar24 >> 0x20);
    pcVar11 = (char *)uVar24;
    if (iVar22 == 1) {
      cVar6 = *pcVar11;
      cVar16 = '\x01';
      if ((cVar6 != '+') && (cVar6 != '-')) goto LAB_1005b5d7;
      goto LAB_1005b665;
    }
    if (iVar22 == 0) {
      cVar16 = '\0';
      goto LAB_1005b665;
    }
    cVar6 = *pcVar11;
LAB_1005b5d7:
    uVar12 = 0;
    uVar21 = iVar22 - (uint)(cVar6 == '+');
    pbVar10 = (byte *)(pcVar11 + (cVar6 == '+'));
    if (uVar21 < 9) {
      for (; uVar21 != 0; uVar21 = uVar21 - 1) {
        bVar2 = *pbVar10;
        if (9 < bVar2 - 0x30) goto LAB_1005b663;
        pbVar10 = pbVar10 + 1;
        uVar12 = (bVar2 - 0x30) + uVar12 * 10;
      }
    }
    else {
      while (bVar23 = uVar21 != 0, uVar21 = uVar21 - 1, bVar23) {
        uVar13 = (uint)((ulonglong)uVar12 * 10);
        if ((int)((ulonglong)uVar12 * 10 >> 0x20) != 0) {
          cVar16 = ((byte)(*pbVar10 - 0x30) < 10) + '\x01';
          goto LAB_1005b665;
        }
        uVar14 = *pbVar10 - 0x30;
        if (9 < uVar14) goto LAB_1005b663;
        pbVar10 = pbVar10 + 1;
        uVar12 = uVar14 + uVar13;
        if (CARRY4(uVar14,uVar13)) {
          cVar16 = '\x02';
          goto LAB_1005b665;
        }
      }
    }
    *puVar5 = uVar12;
    FUN_10054170(&pbStack_ec,_Src,_Size,*puVar20,uStack_f8,uStack_f4,param_3);
  } while ((char)pbStack_ec == -1);
  param_1[2] = uStack_dc;
  *(undefined4 *)(param_1 + 4) = uStack_cc;
  param_1[3] = uStack_d4;
  *param_1 = CONCAT44(iStack_e8,pbStack_ec);
  param_1[1] = CONCAT44(uStack_e0,uStack_e4);
  goto joined_r0x1005b719;
LAB_1005b663:
  cVar16 = '\x01';
LAB_1005b665:
  *(undefined1 *)param_1 = 9;
  *(char *)((int)param_1 + 1) = cVar16;
joined_r0x1005b719:
  if (iVar4 != 0) {
    pvVar15 = GetProcessHeap();
    HeapFree(pvVar15,0,lpMem);
  }
LAB_1005b68a:
  (*(code *)0x405a7c)();
  return param_1;
}
