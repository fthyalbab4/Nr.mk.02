// rea decompile_all
// name: FUN_1005fb30
// address: 0x1005fb30
// body: available
// range: 0x1005fb30-0x10060232 inclusive
// range: 0x10060240-0x10064db9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1005fb30(char *param_1,uint *param_2)

{
  void *pvVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  short sVar10;
  undefined4 *puVar11;
  HANDLE pvVar12;
  uint uVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  SIZE_T SVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  LPVOID pvVar23;
  int *piVar24;
  undefined4 uVar25;
  undefined1 (*pauVar26) [16];
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined3 uVar32;
  undefined1 (*pauVar27) [16];
  undefined1 (*extraout_ECX_07) [16];
  undefined1 (*extraout_ECX_08) [16];
  undefined1 (*extraout_ECX_09) [16];
  undefined1 (*extraout_ECX_10) [16];
  undefined1 (*extraout_ECX_11) [16];
  undefined1 (*extraout_ECX_12) [16];
  undefined1 (*extraout_ECX_13) [16];
  undefined1 (*extraout_ECX_14) [16];
  undefined1 (*extraout_ECX_15) [16];
  undefined1 (*extraout_ECX_16) [16];
  undefined1 (*extraout_ECX_17) [16];
  undefined1 (*extraout_ECX_18) [16];
  undefined1 (*extraout_ECX_19) [16];
  undefined1 (*extraout_ECX_20) [16];
  undefined1 (*extraout_ECX_21) [16];
  undefined1 (*extraout_ECX_22) [16];
  undefined1 (*pauVar28) [16];
  undefined1 (*extraout_ECX_23) [16];
  undefined1 (*extraout_ECX_24) [16];
  undefined1 (*extraout_ECX_25) [16];
  undefined1 (*extraout_ECX_26) [16];
  undefined1 (*extraout_ECX_27) [16];
  undefined1 (*extraout_ECX_28) [16];
  undefined1 (*extraout_ECX_29) [16];
  undefined1 (*extraout_ECX_30) [16];
  undefined1 (*extraout_ECX_31) [16];
  byte *pbVar29;
  undefined1 (*extraout_ECX_32) [16];
  undefined1 (*extraout_ECX_33) [16];
  undefined1 (*pauVar30) [16];
  byte *pbVar31;
  uint uVar33;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  undefined1 (*extraout_EDX_05) [16];
  undefined1 (*extraout_EDX_06) [16];
  undefined1 (*extraout_EDX_07) [16];
  ushort *puVar34;
  undefined1 (*extraout_EDX_08) [16];
  undefined4 extraout_EDX_09;
  int extraout_EDX_10;
  undefined1 (*extraout_EDX_11) [16];
  ushort uVar35;
  undefined1 (*pauVar36) [16];
  int iVar37;
  int iVar38;
  uint *puVar39;
  undefined1 (*pauVar40) [16];
  uint uVar41;
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  float10 fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  ulonglong uVar78;
  longlong lVar79;
  int iVar80;
  undefined4 uVar81;
  undefined *puVar82;
  undefined1 (*pauStack_6a8) [16];
  undefined1 (*pauStack_6a4) [16];
  undefined1 (*pauStack_6a0) [16];
  char cStack_69c;
  undefined1 (*pauStack_690) [16];
  undefined1 (*pauStack_674) [16];
  undefined1 (*pauStack_670) [16];
  undefined1 (*pauStack_660) [16];
  undefined1 (*pauStack_65c) [16];
  undefined1 (*pauStack_658) [16];
  undefined1 (*pauStack_654) [16];
  bool bStack_649;
  bool bStack_648;
  bool bStack_647;
  bool bStack_645;
  ushort uStack_644;
  LPVOID pvStack_640;
  undefined1 (*pauStack_63c) [16];
  undefined1 (*pauStack_638) [16];
  undefined1 (*pauStack_62c) [16];
  undefined1 (*pauStack_628) [16];
  undefined1 (*pauStack_624) [16];
  int iStack_620;
  undefined1 (*pauStack_61c) [16];
  uint uStack_618;
  undefined1 (*pauStack_614) [16];
  undefined1 (*pauStack_610) [16];
  undefined1 (*pauStack_60c) [16];
  uint *puStack_608;
  undefined8 *puStack_604;
  undefined1 (*pauStack_600) [16];
  undefined1 (*pauStack_5fc) [16];
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined1 (*pauStack_5ec) [16];
  undefined1 (*pauStack_5e8) [16];
  undefined1 (*pauStack_5e4) [16];
  undefined1 (*pauStack_5e0) [16];
  undefined1 (*pauStack_5dc) [16];
  undefined1 uStack_5d8;
  undefined1 uStack_5d7;
  undefined2 uStack_5d6;
  undefined1 (*pauStack_5d4) [16];
  undefined1 (*pauStack_5d0) [16];
  undefined2 uStack_5cc;
  undefined2 uStack_5ca;
  undefined8 uStack_5c8;
  int iStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  uint uStack_40c;
  uint uStack_408;
  ushort *puStack_404;
  undefined1 (*pauStack_400) [16];
  undefined1 (*pauStack_3fc) [16];
  undefined1 (*pauStack_3f8) [16];
  void *pvStack_3ec;
  code *pcStack_3e8;
  undefined1 (*pauStack_3e4) [16];
  undefined1 (*pauStack_3e0) [16];
  SIZE_T aSStack_3d4 [3];
  undefined8 uStack_3c8;
  undefined1 (*pauStack_3c0) [16];
  undefined8 uStack_3bc;
  undefined1 (*pauStack_3b4) [16];
  LPVOID pvStack_3b0;
  undefined1 (*pauStack_3ac) [16];
  undefined1 (*pauStack_3a8) [16];
  undefined1 (*pauStack_3a4) [16];
  undefined1 (*pauStack_3a0) [16];
  int aiStack_398 [12];
  int aiStack_368 [8];
  undefined1 auStack_348 [8];
  int iStack_340;
  int aiStack_338 [12];
  int aiStack_308 [12];
  int aiStack_2d8 [12];
  int aiStack_2a8 [12];
  int aiStack_278 [12];
  int aiStack_248 [12];
  int aiStack_218 [8];
  int iStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined1 (*pauStack_1e0) [16];
  undefined1 (*pauStack_1dc) [16];
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d4) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined4 uStack_1cc;
  undefined1 (*pauStack_1c8) [16];

  (*(code *)0x705964)();
  DAT_1016328b = 0;
  pauStack_674 = (undefined1 (*) [16])0x1005fb51;
  puVar11 = FUN_10093010();
  if (puVar11 == (undefined4 *)0x0) {
LAB_100640d2:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pauStack_670 = (undefined1 (*) [16])*puVar11;
  uVar22 = puVar11[1];
  uVar25 = puVar11[2];
  uVar81 = puVar11[3];
  puVar11[1] = puVar11[1] + (uint)((undefined1 (*) [16])0xfffffffe < pauStack_670);
  *puVar11 = *pauStack_670 + 1;
  puVar11 = FUN_10093010();
  if (puVar11 == (undefined4 *)0x0) goto LAB_100640d2;
  pauVar26 = (undefined1 (*) [16])*puVar11;
  uVar3 = puVar11[1];
  uVar4 = puVar11[2];
  uVar5 = puVar11[3];
  puVar11[1] = puVar11[1] + (uint)((undefined1 (*) [16])0xfffffffe < pauVar26);
  *puVar11 = *pauVar26 + 1;
  if (DAT_10163248 != 0) {
    if ((DAT_1016324c != 0) &&
       (uVar33 = DAT_1016324c * 0x28 + 0x37U & 0xfffffff0, DAT_1016324c + uVar33 != -0x11)) {
      pvVar23 = *(LPVOID *)((DAT_10163248 - uVar33) + -4);
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,pvVar23);
      pauStack_690 = pauVar26;
    }
    if ((DAT_1016326c != 0) && (DAT_1016326c * 0x21 != -0x31)) {
      pvVar23 = *(LPVOID *)(DAT_10163268 + DAT_1016326c * -0x20 + -0x24);
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,pvVar23);
      pauStack_690 = pauVar26;
    }
  }
  pauVar43 = (undefined1 (*) [16])&DAT_10159670;
  pauStack_65c = (undefined1 (*) [16])0x0;
  pauStack_658 = (undefined1 (*) [16])0x0;
  pauStack_654 = (undefined1 (*) [16])0x0;
  pvVar1 = (void *)param_2[1];
  pauVar27 = (undefined1 (*) [16])param_2[2];
  _DAT_10163250 = 0;
  _DAT_10163248 = 0x10159670;
  _DAT_10163268 = 0x10159670;
  _DAT_10163270 = 0;
  DAT_10163258 = pauStack_670;
  DAT_1016325c = uVar22;
  DAT_10163260 = uVar25;
  DAT_10163264 = uVar81;
  DAT_10163278 = pauVar26;
  DAT_1016327c = uVar3;
  DAT_10163280 = uVar4;
  DAT_10163284 = uVar5;
  FUN_1006b940((undefined1 *)&uStack_5f0,pvVar1,(SIZE_T)pauVar27);
  if ((char)uStack_5f0 == -1) {
    pauStack_1d4 = (undefined1 (*) [16])CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8));
    bVar46 = true;
    bVar49 = true;
    bStack_645 = true;
    bStack_648 = true;
    bVar45 = true;
    bStack_649 = true;
    pauStack_600 = (undefined1 (*) [16])CONCAT31(pauStack_600._1_3_,1);
    bStack_647 = true;
    bVar47 = true;
    bVar48 = true;
    uStack_408 = 0;
    uStack_1e8 = CONCAT44(pauStack_5e8,pauStack_5ec);
    pauStack_1e0 = pauStack_5e4;
    pauStack_1dc = pauStack_5e0;
    pauStack_1d8 = pauStack_5dc;
    while( true ) {
      FUN_10090ef0((undefined8 *)&pauStack_614,(int *)&uStack_1e8);
      pauVar40 = pauStack_60c;
      pauVar42 = pauStack_610;
      pauVar26 = pauStack_614;
      if (pauStack_614 == (undefined1 (*) [16])0xfffffffe) break;
      pauStack_670 = pauStack_610;
      if (pauStack_614 == (undefined1 (*) [16])0xffffffff) {
        pauStack_690._0_1_ = '\0';
        pauStack_65c = (undefined1 (*) [16])0x0;
        pauStack_658 = (undefined1 (*) [16])0x0;
        pauStack_654 = (undefined1 (*) [16])0x0;
        pauStack_6a0._0_1_ = (byte)pauStack_610;
        pauStack_670 = pauStack_610;
        pauVar43 = pauStack_60c;
        goto joined_r0x10061043;
      }
      uVar33 = _DAT_007907f4;
      if (pauStack_60c == (undefined1 (*) [16])0x0) goto LAB_10060c04;
      pauStack_5ec = pauStack_610;
      pauStack_5e8 = pauStack_60c;
      pauStack_5e4 = (undefined1 (*) [16])0x0;
      pauStack_5e0 = pauStack_60c;
      uStack_5f0._0_1_ = '=';
      uStack_5f0._1_1_ = 0;
      uStack_5f0._2_2_ = 0;
      uStack_5d8 = 1;
      pauStack_5dc = (undefined1 (*) [16])0x3d;
      FUN_10090ba0((undefined4 *)&uStack_3c8,(int)&uStack_5f0);
      if ((undefined1 (*) [16])uStack_3c8 != (undefined1 (*) [16])0x1) {
        if (pauVar27 == (undefined1 (*) [16])0x0) {
          pauVar43 = (undefined1 (*) [16])0x1;
        }
        else {
          pauVar43 = FUN_10107380(0,(SIZE_T)pauVar27);
          if (pauVar43 == (undefined1 (*) [16])0x0) {
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          memcpy(pauVar43,pvVar1,(size_t)pauVar27);
        }
        pauStack_6a0 = (undefined1 (*) [16])&DAT_00000006;
        pauVar36 = pauVar27;
        pauStack_65c = pauVar27;
        pauStack_658 = (undefined1 (*) [16])0x0;
        pauStack_654 = (undefined1 (*) [16])0x0;
        pauStack_690 = pauStack_6a0;
        goto LAB_10060c2a;
      }
      pauStack_660 = pauVar26;
      pauVar30 = uStack_3c8._4_4_;
      if ((byte *)0xa < uStack_3c8._4_4_[-1] + 10) {
switchD_1005fe36_caseD_7:
        pauVar43 = (undefined1 (*) [16])0x1;
        pvStack_640 = (LPVOID)0x1;
        pauVar36 = (undefined1 (*) [16])param_2[2];
        if (pauVar36 != (undefined1 (*) [16])0x0) {
          pvVar1 = (void *)param_2[1];
          pauVar43 = FUN_10107380(0,(SIZE_T)pauVar36);
          if (pauVar43 == (undefined1 (*) [16])0x0) goto LAB_1006498b;
          memcpy(pauVar43,pvVar1,(size_t)pauVar36);
        }
        if (pauVar30 != (undefined1 (*) [16])0x0) {
          pvStack_640 = FUN_10107380(0,(SIZE_T)pauVar30);
          if (pvStack_640 == (LPVOID)0x0) goto LAB_1006498b;
          memcpy(pvStack_640,pauVar42,(size_t)pauVar30);
        }
        pauStack_6a0 = (undefined1 (*) [16])0x7;
        pauStack_65c = pauVar36;
        pauStack_658 = (undefined1 (*) [16])0x0;
        pauStack_654 = pauVar30;
        pauStack_6a4 = pauVar30;
        pauStack_690 = pauStack_6a0;
        goto LAB_10060c2a;
      }
      pauVar40 = (undefined1 (*) [16])((int)pauVar40 - (int)pauStack_3c0);
      pauVar36 = (undefined1 (*) [16])(*pauVar42 + (int)*pauStack_3c0);
      switch(uStack_3c8._4_4_) {
      case (undefined1 (*) [16])0x6:
        uVar33 = *(uint *)*pauVar42 ^ 0x656d6167;
        if (*(short *)(*pauVar42 + 4) != 0x6469 || uVar33 != 0) {
          pauVar30 = (undefined1 (*) [16])&DAT_00000006;
          goto switchD_1005fe36_caseD_7;
        }
        if (pauVar40 == (undefined1 (*) [16])0x1) {
          cVar7 = (*pauVar36)[0];
          pauStack_6a0 = (undefined1 (*) [16])0x656d6101;
          if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_1006297e;
          pauStack_690 = (undefined1 (*) [16])0x656d6109;
        }
        else {
          if (pauVar40 == (undefined1 (*) [16])0x0) goto LAB_10062974;
          pauStack_690 = (undefined1 (*) [16])CONCAT31((int3)(uVar33 >> 8),9);
          cVar7 = (*pauVar36)[0];
        }
        uVar33 = 0;
        uVar21 = (int)pauVar40 - (uint)(cVar7 == '+');
        pauVar36 = (undefined1 (*) [16])(*pauVar36 + (cVar7 == '+'));
        if (uVar21 < 9) {
          for (; uVar21 != 0; uVar21 = uVar21 - 1) {
            uVar41 = (byte)(*pauVar36)[0] - 0x30;
            if (9 < uVar41) goto LAB_10060c24;
            pauVar36 = (undefined1 (*) [16])(*pauVar36 + 1);
            uVar33 = uVar41 + uVar33 * 10;
          }
        }
        else {
          while (bVar50 = uVar21 != 0, uVar21 = uVar21 - 1, bVar50) {
            uVar41 = (uint)((ulonglong)uVar33 * 10);
            if ((int)((ulonglong)uVar33 * 10 >> 0x20) != 0) {
              pauStack_6a0 = (undefined1 (*) [16])
                             (uint)(byte)(((byte)((*pauVar36)[0] - 0x30) < 10) + 1);
              goto LAB_10060c2a;
            }
            uVar13 = (byte)(*pauVar36)[0] - 0x30;
            if (9 < uVar13) goto LAB_10060c24;
            pauVar36 = (undefined1 (*) [16])(*pauVar36 + 1);
            uVar33 = uVar13 + uVar41;
            if (CARRY4(uVar13,uVar41)) goto LAB_10062a1e;
          }
        }
        break;
      default:
        goto switchD_1005fe36_caseD_7;
      case (undefined1 (*) [16])0x9:
        iVar15 = memcmp(pauVar42,"has_fonts",9);
        if (iVar15 != 0) {
          iVar15 = memcmp(pauVar42,"has_paths",9);
          if (iVar15 != 0) {
            pauVar30 = (undefined1 (*) [16])0x9;
            goto switchD_1005fe36_caseD_7;
          }
          if (pauVar40 == (undefined1 (*) [16])0x1) {
            cVar7 = (*pauVar36)[0];
            uVar32 = (undefined3)((uint)extraout_ECX_02 >> 8);
            pauStack_6a0 = (undefined1 (*) [16])CONCAT31(uVar32,1);
            if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_1006297e;
            pauStack_690 = (undefined1 (*) [16])CONCAT31(uVar32,9);
          }
          else {
            if (pauVar40 == (undefined1 (*) [16])0x0) goto LAB_10062974;
            pauStack_690 = (undefined1 (*) [16])0x9;
            cVar7 = (*pauVar36)[0];
          }
          uVar33 = (int)pauVar40 - (uint)(cVar7 == '+');
          pauVar36 = (undefined1 (*) [16])(*pauVar36 + (cVar7 == '+'));
          if (uVar33 < 3) {
            if (uVar33 == 0) {
              uVar21 = 0;
            }
            else {
              pauStack_6a0 = (undefined1 (*) [16])0x1;
              uVar21 = (byte)(*pauVar36)[0] - 0x30;
              if (9 < uVar21) goto LAB_100629c2;
              if (uVar33 != 1) {
                uVar33 = (byte)(*pauVar36)[1] - 0x30;
                if (9 < uVar33) goto LAB_10060c2a;
                uVar21 = (uint)(byte)((char)uVar33 + (char)uVar21 * '\n');
              }
            }
          }
          else {
            uVar21 = 0;
            while (bVar45 = uVar33 != 0, uVar33 = uVar33 - 1, bVar45) {
              bVar9 = (*pauVar36)[0];
              sVar10 = (ushort)(byte)uVar21 * 10;
              if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_10062d32;
              if (9 < bVar9 - 0x30) goto LAB_10060c24;
              pauVar36 = (undefined1 (*) [16])(*pauVar36 + 1);
              bVar8 = (byte)sVar10;
              bVar9 = (byte)(bVar9 - 0x30);
              uVar21 = (uint)(byte)(bVar8 + bVar9);
              if (CARRY1(bVar8,bVar9)) goto LAB_10062a1e;
            }
          }
          bVar45 = (char)uVar21 != '\0';
          uVar33 = _DAT_007907f4;
          break;
        }
        if (pauVar40 == (undefined1 (*) [16])0x1) {
          cVar7 = (*pauVar36)[0];
          uVar32 = (undefined3)((uint)extraout_ECX_01 >> 8);
          pauStack_6a0 = (undefined1 (*) [16])CONCAT31(uVar32,1);
          if ((cVar7 != '+') && (cVar7 != '-')) {
            pauStack_690 = (undefined1 (*) [16])CONCAT31(uVar32,9);
            goto LAB_1006070c;
          }
        }
        else {
          if (pauVar40 != (undefined1 (*) [16])0x0) {
            pauStack_690 = (undefined1 (*) [16])0x9;
            cVar7 = (*pauVar36)[0];
LAB_1006070c:
            uVar33 = (int)pauVar40 - (uint)(cVar7 == '+');
            pauVar36 = (undefined1 (*) [16])(*pauVar36 + (cVar7 == '+'));
            if (uVar33 < 3) {
              if (uVar33 == 0) {
                uVar21 = 0;
              }
              else {
                pauStack_6a0 = (undefined1 (*) [16])0x1;
                uVar21 = (byte)(*pauVar36)[0] - 0x30;
                if (9 < uVar21) goto LAB_100629c2;
                if (uVar33 != 1) {
                  uVar33 = (byte)(*pauVar36)[1] - 0x30;
                  if (9 < uVar33) goto LAB_10060c2a;
                  uVar21 = (uint)(byte)((char)uVar33 + (char)uVar21 * '\n');
                }
              }
            }
            else {
              uVar21 = 0;
              while (bVar50 = uVar33 != 0, uVar33 = uVar33 - 1, bVar50) {
                bVar9 = (*pauVar36)[0];
                sVar10 = (ushort)(byte)uVar21 * 10;
                if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_10062d32;
                if (9 < bVar9 - 0x30) goto LAB_10060c24;
                pauVar36 = (undefined1 (*) [16])(*pauVar36 + 1);
                bVar8 = (byte)sVar10;
                bVar9 = (byte)(bVar9 - 0x30);
                uVar21 = (uint)(byte)(bVar8 + bVar9);
                if (CARRY1(bVar8,bVar9)) goto LAB_10062a1e;
              }
            }
            bStack_645 = (char)uVar21 != '\0';
            uVar33 = _DAT_007907f4;
            break;
          }
LAB_10062974:
          pauStack_6a0 = (undefined1 (*) [16])0x0;
        }
LAB_1006297e:
        pauStack_690 = (undefined1 (*) [16])0x9;
        goto LAB_10060c2a;
      case (undefined1 (*) [16])0xa:
        iVar15 = memcmp(pauVar42,"has_sounds",10);
        if (iVar15 != 0) {
          pauVar30 = (undefined1 (*) [16])0xa;
          goto switchD_1005fe36_caseD_7;
        }
        if (pauVar40 == (undefined1 (*) [16])0x1) {
          cVar7 = (*pauVar36)[0];
          uVar32 = (undefined3)((uint)extraout_ECX_03 >> 8);
          pauStack_6a0 = (undefined1 (*) [16])CONCAT31(uVar32,1);
          if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_1006297e;
          pauStack_690 = (undefined1 (*) [16])CONCAT31(uVar32,9);
        }
        else {
          if (pauVar40 == (undefined1 (*) [16])0x0) goto LAB_10062974;
          pauStack_690 = (undefined1 (*) [16])0x9;
          cVar7 = (*pauVar36)[0];
        }
        uVar33 = (int)pauVar40 - (uint)(cVar7 == '+');
        pauVar36 = (undefined1 (*) [16])(*pauVar36 + (cVar7 == '+'));
        if (uVar33 < 3) {
          if (uVar33 == 0) {
            uVar21 = 0;
          }
          else {
            pauStack_6a0 = (undefined1 (*) [16])0x1;
            uVar21 = (byte)(*pauVar36)[0] - 0x30;
            if (9 < uVar21) {
LAB_100629c2:
              pauStack_6a0 = (undefined1 (*) [16])0x1;
              goto LAB_10060c2a;
            }
            if (uVar33 != 1) {
              uVar33 = (byte)(*pauVar36)[1] - 0x30;
              if (9 < uVar33) goto LAB_10060c2a;
              uVar21 = (uint)(byte)((char)uVar33 + (char)uVar21 * '\n');
            }
          }
        }
        else {
          uVar21 = 0;
          while (bVar50 = uVar33 != 0, uVar33 = uVar33 - 1, bVar50) {
            bVar9 = (*pauVar36)[0];
            sVar10 = (ushort)(byte)uVar21 * 10;
            if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_10062d32;
            if (9 < bVar9 - 0x30) goto LAB_10060c24;
            pauVar36 = (undefined1 (*) [16])(*pauVar36 + 1);
            bVar8 = (byte)sVar10;
            bVar9 = (byte)(bVar9 - 0x30);
            uVar21 = (uint)(byte)(bVar8 + bVar9);
            if (CARRY1(bVar8,bVar9)) goto LAB_10062a1e;
          }
        }
        pauStack_600 = (undefined1 (*) [16])CONCAT31(pauStack_600._1_3_,(char)uVar21 != '\0');
        uVar33 = _DAT_007907f4;
        break;
      case (undefined1 (*) [16])0xb:
        iVar15 = memcmp(pauVar42,"info_author",0xb);
        if (iVar15 == 0) {
          iVar15 = FUN_10003510((byte *)pauVar36,(int)pauVar40);
          uStack_5f0._0_1_ = (char)iVar15;
          uStack_5f0._1_1_ = (byte)((uint)iVar15 >> 8);
          uStack_5f0._2_2_ = (ushort)((uint)iVar15 >> 0x10);
          (*(code *)0x407eb8)();
          (*(code *)0x407ea8)();
          uVar33 = _DAT_007907f4;
        }
        else {
          iVar15 = memcmp(pauVar42,"exe_company",0xb);
          if (iVar15 == 0) {
            iVar15 = FUN_10003510((byte *)pauVar36,(int)pauVar40);
            uStack_5f0._0_1_ = (char)iVar15;
            uStack_5f0._1_1_ = (byte)((uint)iVar15 >> 8);
            uStack_5f0._2_2_ = (ushort)((uint)iVar15 >> 0x10);
            (*(code *)0x407eb8)();
            (*(code *)0x407ea8)();
            uVar33 = _DAT_007907f4;
          }
          else {
            iVar15 = memcmp(pauVar42,"exe_product",0xb);
            if (iVar15 == 0) {
              iVar15 = FUN_10003510((byte *)pauVar36,(int)pauVar40);
              uStack_5f0._0_1_ = (char)iVar15;
              uStack_5f0._1_1_ = (byte)((uint)iVar15 >> 8);
              uStack_5f0._2_2_ = (ushort)((uint)iVar15 >> 0x10);
              (*(code *)0x407eb8)();
              (*(code *)0x407ea8)();
              uVar33 = _DAT_007907f4;
            }
            else {
              iVar15 = memcmp(pauVar42,"exe_version",0xb);
              if (iVar15 == 0) {
                uStack_5f0._0_1_ = '.';
                uStack_5f0._1_1_ = 0;
                uStack_5f0._2_2_ = 0;
                pauStack_5e4 = (undefined1 (*) [16])0x0;
                pauStack_5dc = (undefined1 (*) [16])0x2e;
                uStack_5d8 = 1;
                pauStack_5d4 = (undefined1 (*) [16])0x0;
                uStack_5cc = 1;
                pauStack_5ec = pauVar36;
                pauStack_5e8 = pauVar40;
                pauStack_5e0 = pauVar40;
                pauStack_5d0 = pauVar40;
                pcVar14 = (char *)FUN_100533e0((int)&uStack_5f0);
                if (pcVar14 == (char *)0x0) {
LAB_10060b41:
                  FUN_10037820((undefined1 *)&uStack_3c8,pauVar36,(SIZE_T)pauVar40);
                  uStack_644 = uStack_3c8._2_2_;
                  pauVar43 = pauStack_3c0;
                  pauStack_65c = (undefined1 (*) [16])uStack_3bc;
                  pauStack_658 = uStack_3bc._4_4_;
                  pauStack_654 = pauStack_3b4;
                  uVar33 = _DAT_007907f4;
                  if ((char)uStack_3c8 == -1) break;
                  pauStack_690 = (undefined1 (*) [16])uStack_3c8;
                  pauStack_6a0 = (undefined1 (*) [16])(uint)(byte)((ulonglong)uStack_3c8 >> 8);
                  pauVar36 = uStack_3c8._4_4_;
                  pauStack_6a8 = pauStack_3a8;
                  pauStack_6a4 = pauStack_3ac;
                  pvStack_640 = pvStack_3b0;
                }
                else {
                  FUN_100528c0((undefined1 *)&pauStack_62c,pcVar14,extraout_EDX);
                  if ((char)pauStack_62c == '\0') {
                    _DAT_0077f5b4 = pauStack_628;
                    pcVar14 = (char *)FUN_100533e0((int)&uStack_5f0);
                    if (pcVar14 == (char *)0x0) goto LAB_10060b41;
                    FUN_100528c0((undefined1 *)&pauStack_62c,pcVar14,extraout_EDX_00);
                    if ((char)pauStack_62c == '\0') {
                      _DAT_0077f5b8 = pauStack_628;
                      pcVar14 = (char *)FUN_100533e0((int)&uStack_5f0);
                      if (pcVar14 == (char *)0x0) goto LAB_10060b41;
                      FUN_100528c0((undefined1 *)&pauStack_62c,pcVar14,extraout_EDX_01);
                      if ((char)pauStack_62c == '\0') {
                        _DAT_0077f5bc = pauStack_628;
                        pcVar14 = (char *)FUN_100533e0((int)&uStack_5f0);
                        if (pcVar14 == (char *)0x0) goto LAB_10060b41;
                        FUN_100528c0((undefined1 *)&pauStack_62c,pcVar14,extraout_EDX_02);
                        if ((char)pauStack_62c == '\0') {
                          _DAT_0077f5c0 = pauStack_628;
                          iVar15 = FUN_100533e0((int)&uStack_5f0);
                          uVar33 = _DAT_007907f4;
                          if (iVar15 != 0) {
                            FUN_1002c180((SIZE_T *)&uStack_3c8,pauVar36,(SIZE_T)pauVar40);
                            pauStack_658 = (undefined1 (*) [16])0x0;
                            pauStack_654 = (undefined1 (*) [16])0x0;
                            pauStack_6a0 = (undefined1 (*) [16])0xb;
                            pauVar36 = (undefined1 (*) [16])uStack_3c8;
                            pauVar43 = uStack_3c8._4_4_;
                            pauStack_65c = pauStack_3c0;
                            pauStack_690 = pauStack_6a0;
                            goto LAB_10060c2a;
                          }
                          break;
                        }
                      }
                    }
                  }
                  pauStack_6a0 = (undefined1 (*) [16])((uint)pauStack_62c >> 8 & 0xff);
                  pauStack_690 = (undefined1 (*) [16])0x9;
                }
                goto LAB_10060c2a;
              }
              iVar15 = memcmp(pauVar42,"has_objects",0xb);
              if (iVar15 == 0) {
                uVar78 = FUN_100540a0((byte *)pauVar36,(int)pauVar40);
                if ((uVar78 & 1) != 0) {
LAB_10062e5c:
                  pauStack_6a0 = (undefined1 (*) [16])(uVar78 >> 0x20);
                  goto LAB_1006297e;
                }
                bStack_648 = (char)(uVar78 >> 0x20) != '\0';
                uVar33 = _DAT_007907f4;
              }
              else {
                iVar15 = memcmp(pauVar42,"has_scripts",0xb);
                if (iVar15 == 0) {
                  uVar78 = FUN_100540a0((byte *)pauVar36,(int)pauVar40);
                  if ((uVar78 & 1) != 0) goto LAB_10062e5c;
                  bStack_649 = (char)(uVar78 >> 0x20) != '\0';
                  uVar33 = _DAT_007907f4;
                }
                else {
                  iVar15 = memcmp(pauVar42,"has_sprites",0xb);
                  if (iVar15 != 0) {
                    pauVar30 = (undefined1 (*) [16])0xb;
                    goto switchD_1005fe36_caseD_7;
                  }
                  uVar78 = FUN_100540a0((byte *)pauVar36,(int)pauVar40);
                  if ((uVar78 & 1) != 0) goto LAB_10062e5c;
                  bStack_647 = (char)(uVar78 >> 0x20) != '\0';
                  uVar33 = _DAT_007907f4;
                }
              }
            }
          }
        }
        break;
      case (undefined1 (*) [16])0xc:
        iVar15 = memcmp(pauVar42,"gm82_version",0xc);
        if (iVar15 == 0) {
          if (pauVar40 == (undefined1 (*) [16])0x1) {
            uVar21 = (uint)(byte)(*pauVar36)[0];
            uVar32 = (undefined3)((uint)extraout_ECX_04 >> 8);
            pauStack_6a0 = (undefined1 (*) [16])CONCAT31(uVar32,1);
            if ((uVar21 == 0x2b) || (uVar21 == 0x2d)) goto LAB_1006297e;
            pauStack_690 = (undefined1 (*) [16])CONCAT31(uVar32,9);
          }
          else {
            if (pauVar40 == (undefined1 (*) [16])0x0) goto LAB_10062974;
            pauStack_690 = (undefined1 (*) [16])0x9;
            uVar21 = (uint)(byte)(*pauVar36)[0];
          }
          uVar33 = (uint)((char)uVar21 == '+');
          uVar41 = (int)pauVar40 - uVar33;
          pauVar36 = (undefined1 (*) [16])(*pauVar36 + uVar33);
          uVar33 = _DAT_007907f4;
          if (uVar41 < 3) {
            if (uVar41 != 0) {
              pauStack_6a0 = (undefined1 (*) [16])0x1;
              uVar21 = (byte)(*pauVar36)[0] - 0x30;
              if (9 < uVar21) goto LAB_100629c2;
              if (uVar41 != 1) {
                uVar41 = (byte)(*pauVar36)[1] - 0x30;
                if (9 < uVar41) goto LAB_10060c2a;
                uVar21 = CONCAT31((int3)(uVar41 >> 8),(char)uVar41 + (char)uVar21 * '\n');
              }
              goto LAB_100607dc;
            }
          }
          else {
            uVar21 = 0;
            while (bVar50 = uVar41 != 0, uVar41 = uVar41 - 1, bVar50) {
              bVar9 = (*pauVar36)[0];
              sVar10 = (ushort)(byte)uVar21 * 10;
              if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_10062d32;
              if (9 < bVar9 - 0x30) goto LAB_10060c24;
              pauVar36 = (undefined1 (*) [16])(*pauVar36 + 1);
              bVar8 = (byte)sVar10;
              bVar9 = (byte)(bVar9 - 0x30);
              uVar21 = (uint)(byte)(bVar8 + bVar9);
              if (CARRY1(bVar8,bVar9)) goto LAB_10062a1e;
            }
LAB_100607dc:
            if (5 < (byte)uVar21) {
              pauStack_6a0 = (undefined1 (*) [16])0x12;
              pauStack_690 = pauStack_6a0;
              goto LAB_10060c2a;
            }
            if ((byte)uVar21 == 5) break;
          }
          uStack_408 = CONCAT31((int3)(uVar21 >> 8),1);
        }
        else {
          iVar15 = memcmp(pauVar42,"info_version",0xc);
          if (iVar15 == 0) {
            iVar15 = FUN_10003510((byte *)pauVar36,(int)pauVar40);
            uStack_5f0._0_1_ = (char)iVar15;
            uStack_5f0._1_1_ = (byte)((uint)iVar15 >> 8);
            uStack_5f0._2_2_ = (ushort)((uint)iVar15 >> 0x10);
            (*(code *)0x407eb8)();
            (*(code *)0x407ea8)();
            uVar33 = _DAT_007907f4;
          }
          else {
            iVar15 = memcmp(pauVar42,"has_triggerssrc\\font_render.rs",0xc);
            if (iVar15 != 0) {
              pauVar30 = (undefined1 (*) [16])&DAT_0000000c;
              goto switchD_1005fe36_caseD_7;
            }
            if (pauVar40 == (undefined1 (*) [16])0x1) {
              cVar7 = (*pauVar36)[0];
              uVar32 = (undefined3)((uint)extraout_ECX_05 >> 8);
              pauStack_6a0 = (undefined1 (*) [16])CONCAT31(uVar32,1);
              if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_1006297e;
              pauStack_690 = (undefined1 (*) [16])CONCAT31(uVar32,9);
            }
            else {
              if (pauVar40 == (undefined1 (*) [16])0x0) goto LAB_10062974;
              pauStack_690 = (undefined1 (*) [16])0x9;
              cVar7 = (*pauVar36)[0];
            }
            uVar33 = (int)pauVar40 - (uint)(cVar7 == '+');
            pauVar36 = (undefined1 (*) [16])(*pauVar36 + (cVar7 == '+'));
            if (uVar33 < 3) {
              if (uVar33 == 0) {
                uVar21 = 0;
              }
              else {
                pauStack_6a0 = (undefined1 (*) [16])0x1;
                uVar21 = (byte)(*pauVar36)[0] - 0x30;
                if (9 < uVar21) goto LAB_100629c2;
                if (uVar33 != 1) {
                  uVar33 = (byte)(*pauVar36)[1] - 0x30;
                  if (9 < uVar33) goto LAB_10060c2a;
                  uVar21 = (uint)(byte)((char)uVar33 + (char)uVar21 * '\n');
                }
              }
            }
            else {
              uVar21 = 0;
              while (bVar48 = uVar33 != 0, uVar33 = uVar33 - 1, bVar48) {
                bVar9 = (*pauVar36)[0];
                sVar10 = (ushort)(byte)uVar21 * 10;
                if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_10062d32;
                if (9 < bVar9 - 0x30) goto LAB_10060c24;
                pauVar36 = (undefined1 (*) [16])(*pauVar36 + 1);
                bVar8 = (byte)sVar10;
                bVar9 = (byte)(bVar9 - 0x30);
                uVar21 = (uint)(byte)(bVar8 + bVar9);
                if (CARRY1(bVar8,bVar9)) goto LAB_10062a1e;
              }
            }
            bVar48 = (char)uVar21 != '\0';
            uVar33 = _DAT_007907f4;
          }
        }
        break;
      case (undefined1 (*) [16])0xd:
        iVar15 = memcmp(pauVar42,"exe_copyright",0xd);
        if (iVar15 == 0) {
          iVar15 = FUN_10003510((byte *)pauVar36,(int)pauVar40);
          uStack_5f0._0_1_ = (char)iVar15;
          uStack_5f0._1_1_ = (byte)((uint)iVar15 >> 8);
          uStack_5f0._2_2_ = (ushort)((uint)iVar15 >> 0x10);
          (*(code *)0x407eb8)();
          (*(code *)0x407ea8)();
          uVar33 = _DAT_007907f4;
        }
        else {
          iVar15 = memcmp(pauVar42,"has_datafiles",0xd);
          if (iVar15 == 0) {
            if (pauVar40 == (undefined1 (*) [16])0x1) {
              cVar7 = (*pauVar36)[0];
              uVar32 = (undefined3)((uint)extraout_ECX >> 8);
              pauStack_6a0 = (undefined1 (*) [16])CONCAT31(uVar32,1);
              if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_1006297e;
              pauStack_690 = (undefined1 (*) [16])CONCAT31(uVar32,9);
            }
            else {
              if (pauVar40 == (undefined1 (*) [16])0x0) goto LAB_10062974;
              pauStack_690 = (undefined1 (*) [16])0x9;
              cVar7 = (*pauVar36)[0];
            }
            uVar33 = (int)pauVar40 - (uint)(cVar7 == '+');
            pauVar36 = (undefined1 (*) [16])(*pauVar36 + (cVar7 == '+'));
            if (uVar33 < 3) {
              if (uVar33 == 0) {
                uVar21 = 0;
              }
              else {
                pauStack_6a0 = (undefined1 (*) [16])0x1;
                uVar21 = (byte)(*pauVar36)[0] - 0x30;
                if (9 < uVar21) goto LAB_100629c2;
                if (uVar33 != 1) {
                  uVar33 = (byte)(*pauVar36)[1] - 0x30;
                  if (9 < uVar33) goto LAB_10060c2a;
                  uVar21 = (uint)(byte)((char)uVar33 + (char)uVar21 * '\n');
                }
              }
            }
            else {
              uVar21 = 0;
              while (bVar49 = uVar33 != 0, uVar33 = uVar33 - 1, bVar49) {
                bVar9 = (*pauVar36)[0];
                sVar10 = (ushort)(byte)uVar21 * 10;
                if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_10062d32;
                if (9 < bVar9 - 0x30) goto LAB_10060c24;
                pauVar36 = (undefined1 (*) [16])(*pauVar36 + 1);
                bVar8 = (byte)sVar10;
                bVar9 = (byte)(bVar9 - 0x30);
                uVar21 = (uint)(byte)(bVar8 + bVar9);
                if (CARRY1(bVar8,bVar9)) goto LAB_10062a1e;
              }
            }
            bVar49 = (char)uVar21 != '\0';
            uVar33 = _DAT_007907f4;
          }
          else {
            iVar15 = memcmp(pauVar42,"has_timelines",0xd);
            if (iVar15 != 0) {
              pauVar30 = (undefined1 (*) [16])0xd;
              goto switchD_1005fe36_caseD_7;
            }
            if (pauVar40 == (undefined1 (*) [16])0x1) {
              cVar7 = (*pauVar36)[0];
              uVar32 = (undefined3)((uint)extraout_ECX_00 >> 8);
              pauStack_6a0 = (undefined1 (*) [16])CONCAT31(uVar32,1);
              if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_1006297e;
              pauStack_690 = (undefined1 (*) [16])CONCAT31(uVar32,9);
            }
            else {
              if (pauVar40 == (undefined1 (*) [16])0x0) goto LAB_10062974;
              pauStack_690 = (undefined1 (*) [16])0x9;
              cVar7 = (*pauVar36)[0];
            }
            uVar33 = (int)pauVar40 - (uint)(cVar7 == '+');
            pauVar36 = (undefined1 (*) [16])(*pauVar36 + (cVar7 == '+'));
            if (uVar33 < 3) {
              if (uVar33 == 0) {
                uVar21 = 0;
              }
              else {
                pauStack_6a0 = (undefined1 (*) [16])0x1;
                uVar21 = (byte)(*pauVar36)[0] - 0x30;
                if (9 < uVar21) goto LAB_100629c2;
                if (uVar33 != 1) {
                  uVar33 = (byte)(*pauVar36)[1] - 0x30;
                  if (9 < uVar33) goto LAB_10060c2a;
                  uVar21 = (uint)(byte)((char)uVar33 + (char)uVar21 * '\n');
                }
              }
            }
            else {
              uVar21 = 0;
              while (bVar47 = uVar33 != 0, uVar33 = uVar33 - 1, bVar47) {
                bVar9 = (*pauVar36)[0];
                sVar10 = (ushort)(byte)uVar21 * 10;
                if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_10062d32;
                if (9 < bVar9 - 0x30) goto LAB_10060c24;
                pauVar36 = (undefined1 (*) [16])(*pauVar36 + 1);
                bVar8 = (byte)sVar10;
                bVar9 = (byte)(bVar9 - 0x30);
                uVar21 = (uint)(byte)(bVar8 + bVar9);
                if (CARRY1(bVar8,bVar9)) goto LAB_10062a1e;
              }
            }
            bVar47 = (char)uVar21 != '\0';
            uVar33 = _DAT_007907f4;
          }
        }
        break;
      case (undefined1 (*) [16])0xe:
        iVar15 = memcmp(pauVar42,"info_timestamp",0xe);
        if (iVar15 != 0) {
          pauVar30 = (undefined1 (*) [16])0xe;
          goto switchD_1005fe36_caseD_7;
        }
        FUN_10098960((undefined1 *)&uStack_5f0,(uint *)pauVar36,(uint)pauVar40);
        if ((char)uStack_5f0 != '\0') {
          pauStack_6a0 = (undefined1 (*) [16])(uint)uStack_5f0._1_1_;
          pauStack_690 = (undefined1 (*) [16])0xa;
          goto LAB_10060c2a;
        }
        _DAT_0079081c = CONCAT44(pauStack_5e4,pauStack_5e8);
        uVar33 = _DAT_007907f4;
        break;
      case (undefined1 (*) [16])0xf:
        iVar15 = memcmp(pauVar42,"exe_description",0xf);
        if (iVar15 == 0) {
          iVar15 = FUN_10003510((byte *)pauVar36,(int)pauVar40);
          uStack_5f0._0_1_ = (char)iVar15;
          uStack_5f0._1_1_ = (byte)((uint)iVar15 >> 8);
          uStack_5f0._2_2_ = (ushort)((uint)iVar15 >> 0x10);
          (*(code *)0x407eb8)();
          (*(code *)0x407ea8)();
          uVar33 = _DAT_007907f4;
        }
        else {
          iVar15 = memcmp(pauVar42,"has_backgrounds",0xf);
          if (iVar15 != 0) {
            pauVar30 = (undefined1 (*) [16])0xf;
            goto switchD_1005fe36_caseD_7;
          }
          if (pauVar40 == (undefined1 (*) [16])0x1) {
            cVar7 = (*pauVar36)[0];
            uVar32 = (undefined3)((uint)extraout_ECX_06 >> 8);
            pauStack_6a0 = (undefined1 (*) [16])CONCAT31(uVar32,1);
            if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_1006297e;
            pauStack_690 = (undefined1 (*) [16])CONCAT31(uVar32,9);
          }
          else {
            if (pauVar40 == (undefined1 (*) [16])0x0) goto LAB_10062974;
            pauStack_690 = (undefined1 (*) [16])0x9;
            cVar7 = (*pauVar36)[0];
          }
          uVar33 = (int)pauVar40 - (uint)(cVar7 == '+');
          pauVar36 = (undefined1 (*) [16])(*pauVar36 + (cVar7 == '+'));
          if (uVar33 < 3) {
            if (uVar33 == 0) {
              uVar21 = 0;
            }
            else {
              pauStack_6a0 = (undefined1 (*) [16])0x1;
              uVar21 = (byte)(*pauVar36)[0] - 0x30;
              if (9 < uVar21) goto LAB_100629c2;
              if (uVar33 != 1) {
                uVar33 = (byte)(*pauVar36)[1] - 0x30;
                if (9 < uVar33) goto LAB_10060c2a;
                uVar21 = (uint)(byte)((char)uVar33 + (char)uVar21 * '\n');
              }
            }
          }
          else {
            uVar21 = 0;
            while (bVar46 = uVar33 != 0, uVar33 = uVar33 - 1, bVar46) {
              bVar9 = (*pauVar36)[0];
              sVar10 = (ushort)(byte)uVar21 * 10;
              if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_10062d32;
              if (9 < bVar9 - 0x30) goto LAB_10060c24;
              pauVar36 = (undefined1 (*) [16])(*pauVar36 + 1);
              bVar8 = (byte)sVar10;
              bVar9 = (byte)(bVar9 - 0x30);
              uVar21 = (uint)(byte)(bVar8 + bVar9);
              if (CARRY1(bVar8,bVar9)) goto LAB_10062a1e;
            }
          }
          bVar46 = (char)uVar21 != '\0';
          uVar33 = _DAT_007907f4;
        }
        break;
      case (undefined1 (*) [16])0x10:
        auVar52[0] = -((*pauVar42)[0] == 'i');
        auVar52[1] = -((*pauVar42)[1] == 'n');
        auVar52[2] = -((*pauVar42)[2] == 'f');
        auVar52[3] = -((*pauVar42)[3] == 'o');
        auVar52[4] = -((*pauVar42)[4] == '_');
        auVar52[5] = -((*pauVar42)[5] == 'i');
        auVar52[6] = -((*pauVar42)[6] == 'n');
        auVar52[7] = -((*pauVar42)[7] == 'f');
        auVar52[8] = -((*pauVar42)[8] == 'o');
        auVar52[9] = -((*pauVar42)[9] == 'r');
        auVar52[10] = -((*pauVar42)[10] == 'm');
        auVar52[0xb] = -((*pauVar42)[0xb] == 'a');
        auVar52[0xc] = -((*pauVar42)[0xc] == 't');
        auVar52[0xd] = -((*pauVar42)[0xd] == 'i');
        auVar52[0xe] = -((*pauVar42)[0xe] == 'o');
        auVar52[0xf] = -((*pauVar42)[0xf] == 'n');
        if ((ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar52[0xf] >> 7) << 0xf) != 0xffff) {
          pauVar30 = (undefined1 (*) [16])&DAT_00000010;
          goto switchD_1005fe36_caseD_7;
        }
        FUN_1006ba50(&uStack_5f0,(int)pauVar36,(SIZE_T)pauVar40);
        pauVar40 = pauStack_5ec;
        iVar15 = FUN_10003510((byte *)pauStack_5ec,(int)pauStack_5e8);
        uStack_3c8 = CONCAT44(uStack_3c8._4_4_,iVar15);
        (*(code *)0x407eb8)();
        (*(code *)0x407ea8)();
        uVar33 = _DAT_007907f4;
        if (CONCAT22(uStack_5f0._2_2_,CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0)) != 0) {
          pvVar12 = GetProcessHeap();
          HeapFree(pvVar12,0,pauVar40);
          uVar33 = _DAT_007907f4;
        }
      }
LAB_10060c04:
      _DAT_007907f4 = uVar33;
      if (pauVar26 != (undefined1 (*) [16])0x0) {
        pvVar12 = GetProcessHeap();
        HeapFree(pvVar12,0,pauVar42);
      }
    }
    if (uStack_1e8._4_4_ != (undefined1 (*) [16])0x0) {
      pvVar23 = (undefined1 (*) [16])uStack_1e8;
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,pvVar23);
    }
    CloseHandle(pauStack_1d4);
    iVar15 = FUN_10110f10((byte *)param_2[1],param_2[2]);
    if (iVar15 != 0) {
      FUN_10110e70((int)param_2,extraout_EDX_03);
    }
    (*(code *)0x6ca2ac)();
    FUN_10111020(param_2,&DAT_101402ac,8);
    FUN_10111020(param_2,&DAT_10142012,0xd);
    FUN_1011c880((undefined8 *)&uStack_5f0,param_2[1],param_2[2]);
    pauVar27 = pauStack_5e8;
    pauVar26 = pauStack_5ec;
    iVar15 = CONCAT22(uStack_5f0._2_2_,CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
    if (iVar15 == -1) {
      pauStack_6a4 = (undefined1 (*) [16])param_2[2];
      if (pauStack_6a4 == (undefined1 (*) [16])0x0) {
        pvVar23 = (LPVOID)0x1;
      }
      else {
        pvVar1 = (void *)param_2[1];
        pvVar23 = FUN_10107380(0,(SIZE_T)pauStack_6a4);
        if (pvVar23 == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        memcpy(pvVar23,pvVar1,(size_t)pauStack_6a4);
      }
      pauStack_690 = (undefined1 (*) [16])0x0;
      uVar78 = CONCAT44(pauStack_6a4,pvVar23);
      pauVar43 = pauStack_6a4;
      cStack_69c = '\x01';
    }
    else {
      iVar16 = FUN_10110f10((byte *)param_2[1],param_2[2]);
      if (iVar16 != 0) {
        FUN_10110e70((int)param_2,extraout_EDX_04);
      }
      uStack_5f0._0_1_ = '\0';
      uStack_5f0._1_1_ = 0;
      uStack_5f0._2_2_ = 0;
      pauStack_5ec = (undefined1 (*) [16])&DAT_00000004;
      pauStack_5e8 = (undefined1 (*) [16])0x0;
      FUN_1002cc00(&uStack_5f0,(int)pauVar26,(int)pauVar27);
      pauVar27 = pauStack_5e8;
      pauVar43 = pauStack_5ec;
      uStack_618 = CONCAT22(uStack_5f0._2_2_,CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
      _DAT_0077f3c4 = pauStack_5e8;
      (*(code *)0x409be0)(pauStack_5e8);
      (*(code *)0x409be0)(pauVar27);
      iVar16 = _DAT_0078c14c;
      if (_DAT_0078c14c == 0) {
        iVar16 = 4;
      }
      if (pauVar27 != (undefined1 (*) [16])0x0) {
        pauVar27 = (undefined1 (*) [16])((int)pauVar27 << 3);
        iVar20 = 4;
        if (_DAT_0078c150 != 0) {
          iVar20 = _DAT_0078c150;
        }
        pauStack_6a0 = (undefined1 (*) [16])((int)_DAT_0077f3c4 << 2);
        pauVar42 = (undefined1 (*) [16])0x0;
        do {
          if (pauStack_6a0 == pauVar42) break;
          pauVar40 = *(undefined1 (**) [16])(*pauVar43 + (int)pauVar42 * 2 + 4);
          if (pauVar40 != (undefined1 (*) [16])0x0) {
            pauVar36 = *(undefined1 (**) [16])(*pauVar43 + (int)pauVar42 * 2);
            pvVar1 = (void *)param_2[1];
            pauStack_670 = (undefined1 (*) [16])param_2[2];
            pauStack_5e4 = (undefined1 (*) [16])0x0;
            uStack_5f0._0_1_ = '=';
            uStack_5f0._1_1_ = 0;
            uStack_5f0._2_2_ = 0;
            uStack_5d8 = 1;
            pauStack_5dc = (undefined1 (*) [16])0x3d;
            pauStack_5ec = pauVar36;
            pauStack_5e8 = pauVar40;
            pauStack_5e0 = pauVar40;
            FUN_10090ba0((undefined4 *)&uStack_3c8,(int)&uStack_5f0);
            pauStack_690 = pauVar27;
            if ((undefined1 (*) [16])uStack_3c8 != (undefined1 (*) [16])0x1) {
              FUN_10110c20(&uStack_5f0,pvVar1,(SIZE_T)pauStack_670);
              pauVar40 = pauStack_5e4;
              pauVar27 = pauStack_5ec;
              pauVar42 = (undefined1 (*) [16])
                         CONCAT22(uStack_5f0._2_2_,CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
              pauStack_61c = pauStack_5e8;
              pauStack_6a4 = extraout_EDX_05;
              if (uStack_618 != 0) {
                pvVar12 = GetProcessHeap();
                HeapFree(pvVar12,0,pauVar43);
                pauStack_6a4 = extraout_EDX_06;
              }
              uVar78 = ZEXT48(pauVar40);
              if (iVar15 != 0) {
                pauStack_600 = pauVar40;
                pauStack_5fc = (undefined1 (*) [16])0x0;
                uStack_5f8 = 0;
                uStack_5f4 = 0;
                pvVar12 = GetProcessHeap();
                HeapFree(pvVar12,0,pauVar26);
                uVar78 = CONCAT44(pauStack_5fc,pauStack_600);
                pauStack_6a4 = extraout_EDX_07;
              }
              pauVar26 = pauVar42;
              pauVar43 = pauStack_61c;
              cStack_69c = '\x06';
              goto LAB_10063d78;
            }
            iVar38 = (int)pauVar40 - (int)pauStack_3c0;
            pbVar31 = *pauStack_3c0;
            pauStack_670 = (undefined1 (*) [16])(*pauVar42 + iVar16);
            pauStack_660 = (undefined1 (*) [16])FUN_10003510((byte *)pauVar36,(int)uStack_3c8._4_4_)
            ;
            (*(code *)0x407ea8)();
            *(undefined1 (**) [16])*pauStack_670 = pauStack_660;
            iVar38 = FUN_10003510(*pauVar36 + (int)pbVar31,iVar38);
            (*(code *)0x407ea8)();
            *(int *)(*pauVar42 + iVar20) = iVar38;
          }
          pauVar42 = (undefined1 (*) [16])(*pauVar42 + 4);
          pauVar27 = (undefined1 (*) [16])(pauVar27[-1] + 8);
        } while (pauVar27 != (undefined1 (*) [16])0x0);
      }
      if (uStack_618 != 0) {
        pvVar12 = GetProcessHeap();
        HeapFree(pvVar12,0,pauVar43);
      }
      if (iVar15 != 0) {
        pvVar12 = GetProcessHeap();
        HeapFree(pvVar12,0,pauVar26);
      }
      FUN_10111020(param_2,&DAT_10141fb3,0xc);
      _DAT_0077f54c = 0;
      pvVar1 = (void *)param_2[1];
      pauVar27 = (undefined1 (*) [16])param_2[2];
      FUN_1006b940((undefined1 *)&uStack_5f0,pvVar1,(SIZE_T)pauVar27);
      if ((char)uStack_5f0 == -1) {
        uStack_3c8 = CONCAT44(pauStack_5e8,pauStack_5ec);
        pauStack_3b4 = (undefined1 (*) [16])CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8));
        uStack_3bc = CONCAT44(pauStack_5dc,pauStack_5e0);
        auVar66._8_8_ = 0;
        auVar66._0_8_ = uStack_3bc;
        bVar6 = false;
        bVar50 = false;
        uStack_618 = 0;
        uStack_40c = 0;
        pauStack_3c0 = pauStack_5e4;
        pvStack_3ec = pvVar1;
        while (FUN_10090ef0((undefined8 *)&pauStack_614,(int *)&uStack_3c8), pauVar40 = pauStack_60c
              , pauVar42 = pauStack_610, pauVar43 = pauStack_614,
              pauStack_614 != (undefined1 (*) [16])0xfffffffe) {
          if (pauStack_614 == (undefined1 (*) [16])0xffffffff) {
            pauStack_660 = pauStack_60c;
            cStack_69c = '\0';
            pauStack_6a4 = pauStack_614;
            pauVar36 = pauStack_610;
            pauVar26 = pauStack_610;
            goto LAB_10063d16;
          }
          pauVar30 = _DAT_0077f524;
          pbVar18 = _DAT_0077f530;
          pbVar17 = _DAT_0077f540;
          pbVar31 = _DAT_0077f56c;
          if (pauStack_60c == (undefined1 (*) [16])0x0) goto LAB_10062931;
          pauStack_5ec = pauStack_610;
          pauStack_5e8 = pauStack_60c;
          pauStack_5e4 = (undefined1 (*) [16])0x0;
          pauStack_5e0 = pauStack_60c;
          uStack_5f0._0_1_ = '=';
          uStack_5f0._1_1_ = 0;
          uStack_5f0._2_2_ = 0;
          uStack_5d8 = 1;
          pauStack_690 = pauStack_614;
          pauStack_5dc = (undefined1 (*) [16])0x3d;
          FUN_10090ba0((undefined4 *)&uStack_1e8,(int)&uStack_5f0);
          if ((undefined1 (*) [16])uStack_1e8 != (undefined1 (*) [16])0x1) {
            FUN_10110c20(&uStack_5f0,pvStack_3ec,(SIZE_T)pauVar27);
            pauVar26 = (undefined1 (*) [16])
                       CONCAT22(uStack_5f0._2_2_,CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
            pauStack_6a4 = (undefined1 (*) [16])&DAT_00000006;
            pauVar36 = pauVar27;
LAB_10063cd1:
            cStack_69c = (char)pauStack_6a4;
            pauVar28 = pauStack_5e4;
            pauStack_660 = pauStack_5ec;
            pauStack_61c = pauStack_5e8;
            goto LAB_10063cd5;
          }
          pauStack_670 = uStack_1e8._4_4_;
          if ((byte *)0x16 < uStack_1e8._4_4_[-1] + 0xb) {
switchD_10061321_caseD_6:
            FUN_10110c20(&uStack_5f0,(void *)param_2[1],param_2[2]);
            if (pauStack_670 == (undefined1 (*) [16])0x0) {
              pauVar36 = (undefined1 (*) [16])0x1;
            }
            else {
              pauVar36 = FUN_10107380(0,(SIZE_T)pauStack_670);
              if (pauVar36 == (undefined1 (*) [16])0x0) {
LAB_1006498b:
                FUN_101366bc(1);
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              memcpy(pauVar36,pauVar42,(size_t)pauStack_670);
            }
            pauVar26 = (undefined1 (*) [16])
                       CONCAT22(uStack_5f0._2_2_,CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
            pauStack_6a4 = (undefined1 (*) [16])0x7;
            goto LAB_10063cd1;
          }
          pauStack_6a0 = (undefined1 (*) [16])(*pauStack_1e0 + (int)*pauVar42);
          pauVar36 = (undefined1 (*) [16])((int)pauVar40 - (int)pauStack_1e0);
          uVar32 = (undefined3)((uint)pauStack_1e0 >> 8);
          pauVar26 = pauStack_6a0;
          pauVar28 = pauStack_1e0;
          pauVar30 = _DAT_0077f524;
          pbVar18 = _DAT_0077f530;
          pbVar17 = _DAT_0077f540;
          pbVar31 = _DAT_0077f56c;
          switch(uStack_1e8._4_4_) {
          case (undefined1 (*) [16])0x5:
            pauVar28 = (undefined1 (*) [16])0x6e797376;
            if ((*pauVar42)[4] != 99 || *(int *)*pauVar42 != 0x6e797376) {
              pauStack_670 = (undefined1 (*) [16])0x5;
              goto switchD_10061321_caseD_6;
            }
            cStack_69c = '\t';
            pauStack_670 = (undefined1 (*) [16])0x5;
            if (pauVar36 == (undefined1 (*) [16])0x1) {
              bVar9 = (*pauStack_6a0)[0];
              pauVar28 = (undefined1 (*) [16])0x6e797301;
              pauStack_6a4 = (undefined1 (*) [16])0x6e797301;
              if ((bVar9 != 0x2b) && (bVar9 != 0x2d)) goto LAB_10061a83;
            }
            else {
              if (pauVar36 != (undefined1 (*) [16])0x0) {
                bVar9 = (*pauStack_6a0)[0];
LAB_10061a83:
                pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
                pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
                pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
                if (pauVar36 < (undefined1 (*) [16])0x3) {
                  if (pauVar36 == (undefined1 (*) [16])0x0) {
                    uVar33 = 0;
                  }
                  else {
                    uVar33 = (byte)(*pauVar26)[0] - 0x30;
                    if (9 < uVar33) goto LAB_10062ebb;
                    if (pauVar36 != (undefined1 (*) [16])0x1) {
                      pauVar28 = (undefined1 (*) [16])0x1;
                      pauStack_6a4 = (undefined1 (*) [16])0x1;
                      uVar21 = (byte)(*pauVar26)[1] - 0x30;
                      if (9 < uVar21) goto LAB_10063cd5;
                      uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                    }
                  }
                }
                else {
                  uVar33 = 0;
                  while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                        pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                    bVar9 = (*pauVar26)[0];
                    sVar10 = (ushort)(byte)uVar33 * 10;
                    if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                    pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                    if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                    pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                    bVar9 = (byte)sVar10;
                    uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                    if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063231;
                  }
                }
                _DAT_0077f54c = _DAT_0077f54c | (char)uVar33 != '\0';
                break;
              }
LAB_10062e90:
              pauStack_6a4 = (undefined1 (*) [16])0x0;
            }
            goto LAB_10062ec5;
          default:
            goto switchD_10061321_caseD_6;
          case (undefined1 (*) [16])0x7:
            pauStack_660 = pauVar40;
            if (*(int *)(*pauVar42 + 3) != 0x676e696c || *(int *)*pauVar42 != 0x6c616373) {
              pauStack_670 = (undefined1 (*) [16])0x7;
              goto switchD_10061321_caseD_6;
            }
            pauVar26 = (undefined1 (*) [16])0x0;
            if (pauVar36 != (undefined1 (*) [16])0x0) {
              if (pauVar36 == (undefined1 (*) [16])0x1) {
                bVar9 = (*pauStack_6a0)[0];
                if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_1006167a;
              }
              else {
                bVar9 = (*pauStack_6a0)[0];
              }
              if (bVar9 == 0x2d) {
                pauVar26 = (undefined1 (*) [16])(*pauStack_6a0 + 1);
                if ((undefined1 (*) [16])&DAT_00000008 < pauVar36) {
                  pauVar30 = (undefined1 (*) [16])0x0;
                  pbVar29 = (byte *)((int)pauStack_1e0 + (1 - (int)pauVar40));
                  do {
                    iVar15 = (int)((longlong)(int)pauVar30 * 10);
                    if ((((longlong)iVar15 != (longlong)(int)pauVar30 * 10) ||
                        (uVar33 = (byte)(*pauVar26)[0] - 0x30, 9 < uVar33)) ||
                       (pauVar30 = (undefined1 (*) [16])(iVar15 - uVar33), SBORROW4(iVar15,uVar33)))
                    goto LAB_1006167a;
                    pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                    pbVar29 = pbVar29 + 1;
                  } while (pbVar29 != (byte *)0x0);
                }
                else if (pauVar36 == (undefined1 (*) [16])0x1) {
                  pauVar30 = (undefined1 (*) [16])0x0;
                }
                else {
                  pauVar30 = (undefined1 (*) [16])0x0;
                  pbVar29 = (byte *)((int)pauStack_1e0 + (1 - (int)pauVar40));
                  do {
                    uVar33 = (byte)(*pauVar26)[0] - 0x30;
                    if (9 < uVar33) goto LAB_1006167a;
                    pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                    pauVar30 = (undefined1 (*) [16])((int)pauVar30 * 10 - uVar33);
                    pbVar29 = pbVar29 + 1;
                  } while (pbVar29 != (byte *)0x0);
                }
              }
              else {
                pauVar40 = pauVar36;
                pauVar26 = pauStack_6a0;
                if (bVar9 == 0x2b) {
                  pauVar26 = (undefined1 (*) [16])(*pauStack_6a0 + 1);
                  pauVar40 = (undefined1 (*) [16])(pauVar36[-1] + 0xf);
                }
                pauVar30 = (undefined1 (*) [16])0x0;
                if (pauVar40 < (undefined1 (*) [16])0x8) {
                  for (; pauVar40 != (undefined1 (*) [16])0x0;
                      pauVar40 = (undefined1 (*) [16])(pauVar40[-1] + 0xf)) {
                    uVar33 = (byte)(*pauVar26)[0] - 0x30;
                    if (9 < uVar33) goto LAB_1006167a;
                    pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                    pauVar30 = (undefined1 (*) [16])(uVar33 + (int)pauVar30 * 10);
                  }
                }
                else {
                  do {
                    iVar15 = (int)((longlong)(int)pauVar30 * 10);
                    if ((((longlong)iVar15 != (longlong)(int)pauVar30 * 10) ||
                        (uVar33 = (byte)(*pauVar26)[0] - 0x30, 9 < uVar33)) ||
                       (pauVar30 = (undefined1 (*) [16])(iVar15 + uVar33), SCARRY4(iVar15,uVar33)))
                    goto LAB_1006167a;
                    pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                    pauVar40 = (undefined1 (*) [16])(pauVar40[-1] + 0xf);
                  } while (pauVar40 != (undefined1 (*) [16])0x0);
                }
              }
              break;
            }
LAB_1006167a:
            FUN_100528c0((undefined1 *)&uStack_5f0,(char *)pauStack_6a0,(int)pauVar36);
            pauVar30 = pauStack_5ec;
            pbVar18 = _DAT_0077f530;
            pbVar17 = _DAT_0077f540;
            pbVar31 = _DAT_0077f56c;
            if ((char)uStack_5f0 == '\0') break;
            pauStack_6a4 = (undefined1 (*) [16])(uint)uStack_5f0._1_1_;
            pauStack_670 = (undefined1 (*) [16])0x7;
            pauVar28 = extraout_ECX_14;
            goto LAB_100629bd;
          case (undefined1 (*) [16])0x8:
            pauVar28 = (undefined1 (*) [16])0x6f697270;
            if (*(int *)(*pauVar42 + 4) != 0x79746972 || *(int *)*pauVar42 != 0x6f697270) {
              pauStack_670 = (undefined1 (*) [16])&DAT_00000008;
              goto switchD_10061321_caseD_6;
            }
            pauStack_670 = (undefined1 (*) [16])&DAT_00000008;
            if (pauVar36 == (undefined1 (*) [16])0x1) {
              bVar9 = (*pauStack_6a0)[0];
              if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) {
LAB_10062ebb:
                pauStack_6a4 = (undefined1 (*) [16])0x1;
                goto LAB_10062ec5;
              }
            }
            else {
              if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
              bVar9 = (*pauStack_6a0)[0];
            }
            pbVar31 = (byte *)0x0;
            pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (uint)(bVar9 == 0x2b));
            pauVar26 = (undefined1 (*) [16])(*pauStack_6a0 + (bVar9 == 0x2b));
            if ((undefined1 (*) [16])&DAT_00000008 < pauVar36) {
              while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                    pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                pauVar28 = (undefined1 (*) [16])(ZEXT48(pbVar31) * 10);
                bVar9 = (*pauVar26)[0];
                if ((int)(ZEXT48(pbVar31) * 10 >> 0x20) != 0) goto LAB_10063b4f;
                uVar33 = bVar9 - 0x30;
                if (9 < uVar33) goto LAB_100629b3;
                pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                pbVar31 = pauVar28[-3] + bVar9;
                if (CARRY4(uVar33,(uint)pauVar28)) goto LAB_10063231;
              }
            }
            else {
              for (; pauVar36 != (undefined1 (*) [16])0x0;
                  pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf)) {
                pauVar28 = (undefined1 (*) [16])((byte)(*pauVar26)[0] - 0x30);
                if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                pbVar31 = *pauVar28 + (int)pbVar31 * 10;
              }
            }
            break;
          case (undefined1 (*) [16])0x9:
            iVar15 = memcmp(pauVar42,"frequency",9);
            if (iVar15 != 0) {
              pauStack_670 = (undefined1 (*) [16])0x9;
              goto switchD_10061321_caseD_6;
            }
            pauStack_670 = (undefined1 (*) [16])0x9;
            pauVar28 = extraout_ECX_15;
            if (pauVar36 == (undefined1 (*) [16])0x1) {
              bVar9 = (*pauStack_6a0)[0];
              if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ebb;
            }
            else {
              if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
              bVar9 = (*pauStack_6a0)[0];
            }
            pbVar17 = (byte *)0x0;
            pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (uint)(bVar9 == 0x2b));
            pauVar26 = (undefined1 (*) [16])(*pauStack_6a0 + (bVar9 == 0x2b));
            pauVar30 = _DAT_0077f524;
            pbVar18 = _DAT_0077f530;
            pbVar31 = _DAT_0077f56c;
            if ((undefined1 (*) [16])&DAT_00000008 < pauVar36) {
              while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                    pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                pauVar28 = (undefined1 (*) [16])(ZEXT48(pbVar17) * 10);
                bVar9 = (*pauVar26)[0];
                if ((int)(ZEXT48(pbVar17) * 10 >> 0x20) != 0) goto LAB_10063b4f;
                uVar33 = bVar9 - 0x30;
                if (9 < uVar33) goto LAB_100629b3;
                pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                pbVar17 = pauVar28[-3] + bVar9;
                if (CARRY4(uVar33,(uint)pauVar28)) goto LAB_10063231;
              }
            }
            else {
              for (; pauVar36 != (undefined1 (*) [16])0x0;
                  pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf)) {
                pauVar28 = (undefined1 (*) [16])((byte)(*pauVar26)[0] - 0x30);
                if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                pbVar17 = *pauVar28 + (int)pbVar17 * 10;
              }
            }
            break;
          case (undefined1 (*) [16])0xa:
            iVar15 = memcmp(pauVar42,"fullscreen",10);
            if (iVar15 != 0) {
              iVar15 = memcmp(pauVar42,"resolution",10);
              if (iVar15 == 0) {
                FUN_100528c0((undefined1 *)&uStack_5f0,(char *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_23;
                if ((char)uStack_5f0 != '\0') {
LAB_10063b33:
                  uVar78 = (ulonglong)uStack_5f0._1_1_ << 0x20;
LAB_10063b7a:
                  pauStack_6a4 = (undefined1 (*) [16])(uVar78 >> 0x20);
                  pauStack_670 = (undefined1 (*) [16])0xa;
                  goto LAB_100629bd;
                }
                _DAT_0077f53c = pauStack_5ec;
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
              else {
                iVar15 = memcmp(pauVar42,"custom_bar",10);
                if (iVar15 == 0) {
                  FUN_100528c0((undefined1 *)&uStack_5f0,(char *)pauStack_6a0,(int)pauVar36);
                  pauVar28 = extraout_ECX_30;
                  if ((char)uStack_5f0 != '\0') goto LAB_10063b33;
                  bVar50 = pauStack_5ec == (undefined1 (*) [16])0x2;
                  _DAT_0077f570 = pauStack_5ec;
                  pauVar30 = _DAT_0077f524;
                  pbVar18 = _DAT_0077f530;
                  pbVar17 = _DAT_0077f540;
                  pbVar31 = _DAT_0077f56c;
                }
                else {
                  iVar15 = memcmp(pauVar42,"bar_has_bg",10);
                  if (iVar15 == 0) {
                    uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                    pauVar28 = extraout_ECX_32;
                    if ((uVar78 & 1) != 0) goto LAB_10063b7a;
                    uStack_618 = CONCAT31((int3)(uVar78 >> 8),(char)(uVar78 >> 0x20) != '\0');
                    pauVar30 = _DAT_0077f524;
                    pbVar18 = _DAT_0077f530;
                    pbVar17 = _DAT_0077f540;
                    pbVar31 = _DAT_0077f56c;
                  }
                  else {
                    iVar15 = memcmp(pauVar42,"bar_has_fg",10);
                    if (iVar15 == 0) {
                      uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                      pauVar28 = extraout_ECX_33;
                      if ((uVar78 & 1) != 0) goto LAB_10063b7a;
                      uStack_40c = CONCAT31((int3)(uVar78 >> 8),(char)(uVar78 >> 0x20) != '\0');
                      pauVar30 = _DAT_0077f524;
                      pbVar18 = _DAT_0077f530;
                      pbVar17 = _DAT_0077f540;
                      pbVar31 = _DAT_0077f56c;
                    }
                    else {
                      iVar15 = memcmp(pauVar42,"log_errors",10);
                      if (iVar15 != 0) {
                        pauStack_670 = (undefined1 (*) [16])0xa;
                        goto switchD_10061321_caseD_6;
                      }
                      uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                      pauVar28 = extraout_ECX_08;
                      if ((uVar78 & 1) != 0) goto LAB_10063b7a;
                      DAT_0077f598 = (char)(uVar78 >> 0x20) != '\0';
                      pauVar30 = _DAT_0077f524;
                      pbVar18 = _DAT_0077f530;
                      pbVar17 = _DAT_0077f540;
                      pbVar31 = _DAT_0077f56c;
                    }
                  }
                }
              }
              break;
            }
            pauStack_670 = (undefined1 (*) [16])0xa;
            cStack_69c = '\t';
            if (pauVar36 == (undefined1 (*) [16])0x1) {
              bVar9 = (*pauStack_6a0)[0];
              pauVar28 = (undefined1 (*) [16])CONCAT31((int3)((uint)extraout_ECX_07 >> 8),1);
              pauStack_6a4 = pauVar28;
              if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
            }
            else {
              pauVar28 = extraout_ECX_07;
              if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
              bVar9 = (*pauStack_6a0)[0];
            }
            pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
            pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
            pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
            if ((undefined1 (*) [16])0x2 < pauVar36) {
              uVar33 = 0;
              while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                    pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                bVar9 = (*pauVar26)[0];
                sVar10 = (ushort)(byte)uVar33 * 10;
                if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                bVar9 = (byte)sVar10;
                uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063b2c;
              }
LAB_100628d2:
              DAT_0077f514 = (char)uVar33 != '\0';
              pauVar30 = _DAT_0077f524;
              pbVar18 = _DAT_0077f530;
              pbVar17 = _DAT_0077f540;
              pbVar31 = _DAT_0077f56c;
              break;
            }
            if (pauVar36 == (undefined1 (*) [16])0x0) {
              uVar33 = 0;
              goto LAB_100628d2;
            }
            uVar33 = (byte)(*pauVar26)[0] - 0x30;
            if (9 < uVar33) goto LAB_10062ebb;
            pauVar28 = (undefined1 (*) [16])0x1;
            pauStack_6a4 = (undefined1 (*) [16])0x1;
            if (pauVar36 == (undefined1 (*) [16])0x1) goto LAB_100628d2;
            uVar21 = (byte)(*pauVar26)[1] - 0x30;
            if (uVar21 < 10) {
              uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
              goto LAB_100628d2;
            }
            goto LAB_10063cd5;
          case (undefined1 (*) [16])0xb:
            iVar15 = memcmp(pauVar42,"clear_color",0xb);
            if (iVar15 == 0) {
              pauStack_670 = (undefined1 (*) [16])0xb;
              pauVar28 = extraout_ECX_17;
              if (pauVar36 == (undefined1 (*) [16])0x1) {
                bVar9 = (*pauStack_6a0)[0];
                if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ebb;
              }
              else {
                if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
                bVar9 = (*pauStack_6a0)[0];
              }
              pbVar18 = (byte *)0x0;
              pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (uint)(bVar9 == 0x2b));
              pauVar26 = (undefined1 (*) [16])(*pauStack_6a0 + (bVar9 == 0x2b));
              pauVar30 = _DAT_0077f524;
              pbVar17 = _DAT_0077f540;
              pbVar31 = _DAT_0077f56c;
              if ((undefined1 (*) [16])&DAT_00000008 < pauVar36) {
                while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                      pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                  pauVar28 = (undefined1 (*) [16])(ZEXT48(pbVar18) * 10);
                  bVar9 = (*pauVar26)[0];
                  if ((int)(ZEXT48(pbVar18) * 10 >> 0x20) != 0) goto LAB_10063b4f;
                  uVar33 = bVar9 - 0x30;
                  if (9 < uVar33) goto LAB_100629b3;
                  pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                  pbVar18 = pauVar28[-3] + bVar9;
                  if (CARRY4(uVar33,(uint)pauVar28)) goto LAB_10063b2c;
                }
              }
              else {
                for (; pauVar36 != (undefined1 (*) [16])0x0;
                    pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf)) {
                  pauVar28 = (undefined1 (*) [16])((byte)(*pauVar26)[0] - 0x30);
                  if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                  pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                  pbVar18 = *pauVar28 + (int)pbVar18 * 10;
                }
              }
            }
            else {
              iVar15 = memcmp(pauVar42,"color_depth",0xb);
              if (iVar15 == 0) {
                FUN_100528c0((undefined1 *)&uStack_5f0,(char *)pauStack_6a0,(int)pauVar36);
                if ((char)uStack_5f0 != '\0') {
                  uVar78 = (ulonglong)uStack_5f0._1_1_ << 0x20;
                  pauVar28 = extraout_ECX_26;
LAB_10063b99:
                  pauStack_6a4 = (undefined1 (*) [16])(uVar78 >> 0x20);
                  pauStack_670 = (undefined1 (*) [16])0xb;
                  goto LAB_100629bd;
                }
                _DAT_0077f538 = pauStack_5ec;
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
              else {
                iVar15 = memcmp(pauVar42,"transparent",0xb);
                if (iVar15 != 0) {
                  pauStack_670 = (undefined1 (*) [16])0xb;
                  goto switchD_10061321_caseD_6;
                }
                uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_18;
                if ((uVar78 & 1) != 0) goto LAB_10063b99;
                DAT_0077f584 = (char)(uVar78 >> 0x20) != '\0';
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
            }
            break;
          case (undefined1 (*) [16])0xc:
            iVar15 = memcmp(pauVar42,"allow_resize",0xc);
            if (iVar15 == 0) {
              pauStack_670 = (undefined1 (*) [16])&DAT_0000000c;
              cStack_69c = '\t';
              if (pauVar36 == (undefined1 (*) [16])0x1) {
                bVar9 = (*pauStack_6a0)[0];
                pauVar28 = (undefined1 (*) [16])CONCAT31((int3)((uint)extraout_ECX_12 >> 8),1);
                pauStack_6a4 = pauVar28;
                if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
              }
              else {
                pauVar28 = extraout_ECX_12;
                if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
                bVar9 = (*pauStack_6a0)[0];
              }
              pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
              pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
              pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
              if (pauVar36 < (undefined1 (*) [16])0x3) {
                if (pauVar36 == (undefined1 (*) [16])0x0) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = (byte)(*pauVar26)[0] - 0x30;
                  if (9 < uVar33) goto LAB_10062ebb;
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  if (pauVar36 != (undefined1 (*) [16])0x1) {
                    uVar21 = (byte)(*pauVar26)[1] - 0x30;
                    if (9 < uVar21) goto LAB_10063cd5;
                    uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                  }
                }
              }
              else {
                uVar33 = 0;
                while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                      pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                  bVar9 = (*pauVar26)[0];
                  sVar10 = (ushort)(byte)uVar33 * 10;
                  if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                  pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                  if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                  pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                  bVar9 = (byte)sVar10;
                  uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                  if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063b2c;
                }
              }
              DAT_0077f528 = (char)uVar33 != '\0';
              pauVar30 = _DAT_0077f524;
              pbVar18 = _DAT_0077f530;
              pbVar17 = _DAT_0077f540;
              pbVar31 = _DAT_0077f56c;
            }
            else {
              iVar15 = memcmp(pauVar42,"f1_help_menu",0xc);
              if (iVar15 == 0) {
                uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_25;
                if ((uVar78 & 1) != 0) {
LAB_10063c2d:
                  pauStack_6a4 = (undefined1 (*) [16])(uVar78 >> 0x20);
                  pauStack_670 = (undefined1 (*) [16])&DAT_0000000c;
                  goto LAB_100629bd;
                }
                DAT_0077f558 = (char)(uVar78 >> 0x20) != '\0';
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
              else {
                iVar15 = memcmp(pauVar42,"translucency",0xc);
                if (iVar15 == 0) {
                  FUN_100528c0((undefined1 *)&uStack_5f0,(char *)pauStack_6a0,(int)pauVar36);
                  if ((char)uStack_5f0 != '\0') {
                    uVar78 = (ulonglong)uStack_5f0._1_1_ << 0x20;
                    pauVar28 = extraout_ECX_31;
                    goto LAB_10063c2d;
                  }
                  _DAT_0077f588 = pauStack_5ec;
                  pauVar30 = _DAT_0077f524;
                  pbVar18 = _DAT_0077f530;
                  pbVar17 = _DAT_0077f540;
                  pbVar31 = _DAT_0077f56c;
                }
                else {
                  iVar15 = memcmp(pauVar42,"always_abort",0xc);
                  if (iVar15 != 0) {
                    pauStack_670 = (undefined1 (*) [16])&DAT_0000000c;
                    goto switchD_10061321_caseD_6;
                  }
                  uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                  pauVar28 = extraout_ECX_13;
                  if ((uVar78 & 1) != 0) goto LAB_10063c2d;
                  DAT_0077f59c = (char)(uVar78 >> 0x20) != '\0';
                  pauVar30 = _DAT_0077f524;
                  pbVar18 = _DAT_0077f530;
                  pbVar17 = _DAT_0077f540;
                  pbVar31 = _DAT_0077f56c;
                }
              }
            }
            break;
          case (undefined1 (*) [16])0xd:
            iVar15 = memcmp(pauVar42,"window_on_top",0xd);
            if (iVar15 == 0) {
              pauStack_670 = (undefined1 (*) [16])0xd;
              cStack_69c = '\t';
              if (pauVar36 == (undefined1 (*) [16])0x1) {
                bVar9 = (*pauStack_6a0)[0];
                pauVar28 = (undefined1 (*) [16])CONCAT31((int3)((uint)extraout_ECX_20 >> 8),1);
                pauStack_6a4 = pauVar28;
                if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
              }
              else {
                pauVar28 = extraout_ECX_20;
                if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
                bVar9 = (*pauStack_6a0)[0];
              }
              pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
              pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
              pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
              if (pauVar36 < (undefined1 (*) [16])0x3) {
                if (pauVar36 == (undefined1 (*) [16])0x0) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = (byte)(*pauVar26)[0] - 0x30;
                  if (9 < uVar33) goto LAB_10062ebb;
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  if (pauVar36 != (undefined1 (*) [16])0x1) {
                    uVar21 = (byte)(*pauVar26)[1] - 0x30;
                    if (9 < uVar21) goto LAB_10063cd5;
                    uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                  }
                }
              }
              else {
                uVar33 = 0;
                while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                      pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                  bVar9 = (*pauVar26)[0];
                  sVar10 = (ushort)(byte)uVar33 * 10;
                  if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                  pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                  if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                  pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                  bVar9 = (byte)sVar10;
                  uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                  if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063b2c;
                }
              }
              DAT_0077f52c = (char)uVar33 != '\0';
              pauVar30 = _DAT_0077f524;
              pbVar18 = _DAT_0077f530;
              pbVar17 = _DAT_0077f540;
              pbVar31 = _DAT_0077f56c;
            }
            else {
              iVar15 = memcmp(pauVar42,"f9_screenshot",0xd);
              if (iVar15 == 0) {
                uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_28;
                if ((uVar78 & 1) != 0) {
LAB_100632b2:
                  pauStack_6a4 = (undefined1 (*) [16])(uVar78 >> 0x20);
                  pauStack_670 = (undefined1 (*) [16])0xd;
                  goto LAB_100629bd;
                }
                DAT_0077f564 = (char)(uVar78 >> 0x20) != '\0';
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
              else {
                iVar15 = memcmp(pauVar42,"custom_loader",0xd);
                if (iVar15 != 0) {
                  pauStack_670 = (undefined1 (*) [16])0xd;
                  goto switchD_10061321_caseD_6;
                }
                uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_21;
                if ((uVar78 & 1) != 0) goto LAB_100632b2;
                DAT_0077f574 = (char)(uVar78 >> 0x20) != '\0';
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
                bVar6 = (bool)DAT_0077f574;
              }
            }
            break;
          case (undefined1 (*) [16])0xe:
            iVar15 = memcmp(pauVar42,"display_cursor",0xe);
            if (iVar15 == 0) {
              pauStack_670 = (undefined1 (*) [16])0xe;
              cStack_69c = '\t';
              if (pauVar36 == (undefined1 (*) [16])0x1) {
                bVar9 = (*pauStack_6a0)[0];
                pauVar28 = (undefined1 (*) [16])CONCAT31((int3)((uint)extraout_ECX_09 >> 8),1);
                pauStack_6a4 = pauVar28;
                if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
              }
              else {
                pauVar28 = extraout_ECX_09;
                if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
                bVar9 = (*pauStack_6a0)[0];
              }
              pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
              pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
              pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
              if (pauVar36 < (undefined1 (*) [16])0x3) {
                if (pauVar36 == (undefined1 (*) [16])0x0) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = (byte)(*pauVar26)[0] - 0x30;
                  if (9 < uVar33) goto LAB_10062ebb;
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  if (pauVar36 != (undefined1 (*) [16])0x1) {
                    uVar21 = (byte)(*pauVar26)[1] - 0x30;
                    if (9 < uVar21) goto LAB_10063cd5;
                    uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                  }
                }
              }
              else {
                uVar33 = 0;
                while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                      pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                  bVar9 = (*pauVar26)[0];
                  sVar10 = (ushort)(byte)uVar33 * 10;
                  if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                  pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                  if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                  pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                  bVar9 = (byte)sVar10;
                  uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                  if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063b2c;
                }
              }
              DAT_0077f520 = (char)uVar33 != '\0';
              pauVar30 = _DAT_0077f524;
              pbVar18 = _DAT_0077f530;
              pbVar17 = _DAT_0077f540;
              pbVar31 = _DAT_0077f56c;
            }
            else {
              iVar15 = memcmp(pauVar42,"set_resolution",0xe);
              if (iVar15 == 0) {
                uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_24;
                if ((uVar78 & 1) != 0) {
LAB_10063284:
                  pauStack_6a4 = (undefined1 (*) [16])(uVar78 >> 0x20);
                  pauStack_670 = (undefined1 (*) [16])0xe;
                  goto LAB_100629bd;
                }
                DAT_0077f534 = (char)(uVar78 >> 0x20) != '\0';
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
              else {
                iVar15 = memcmp(pauVar42,"esc_close_game",0xe);
                if (iVar15 != 0) {
                  pauStack_670 = (undefined1 (*) [16])0xe;
                  goto switchD_10061321_caseD_6;
                }
                uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_10;
                if ((uVar78 & 1) != 0) goto LAB_10063284;
                DAT_0077f55c = (char)(uVar78 >> 0x20) != '\0';
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
            }
            break;
          case (undefined1 (*) [16])0xf:
            iVar15 = memcmp(pauVar42,"f5_save_f6_load",0xf);
            if (iVar15 != 0) {
              pauStack_670 = (undefined1 (*) [16])0xf;
              goto switchD_10061321_caseD_6;
            }
            pauStack_670 = (undefined1 (*) [16])0xf;
            cStack_69c = '\t';
            if (pauVar36 == (undefined1 (*) [16])0x1) {
              bVar9 = (*pauStack_6a0)[0];
              pauVar28 = (undefined1 (*) [16])CONCAT31((int3)((uint)extraout_ECX_16 >> 8),1);
              pauStack_6a4 = pauVar28;
              if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
            }
            else {
              pauVar28 = extraout_ECX_16;
              if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
              bVar9 = (*pauStack_6a0)[0];
            }
            pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
            pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
            pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
            if (pauVar36 < (undefined1 (*) [16])0x3) {
              if (pauVar36 == (undefined1 (*) [16])0x0) {
                uVar33 = 0;
              }
              else {
                uVar33 = (byte)(*pauVar26)[0] - 0x30;
                if (9 < uVar33) goto LAB_10062ebb;
                if (pauVar36 != (undefined1 (*) [16])0x1) {
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  uVar21 = (byte)(*pauVar26)[1] - 0x30;
                  if (9 < uVar21) goto LAB_10063cd5;
                  uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                }
              }
            }
            else {
              uVar33 = 0;
              while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                    pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                bVar9 = (*pauVar26)[0];
                sVar10 = (ushort)(byte)uVar33 * 10;
                if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                bVar9 = (byte)sVar10;
                uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063231;
              }
            }
            DAT_0077f560 = (char)uVar33 != '\0';
            pauVar30 = _DAT_0077f524;
            pbVar18 = _DAT_0077f530;
            pbVar17 = _DAT_0077f540;
            pbVar31 = _DAT_0077f56c;
            break;
          case (undefined1 (*) [16])0x10:
            auVar60[0] = -((*pauVar42)[0] == 'd');
            auVar60[1] = -((*pauVar42)[1] == 'o');
            auVar60[2] = -((*pauVar42)[2] == 'n');
            auVar60[3] = -((*pauVar42)[3] == 't');
            auVar60[4] = -((*pauVar42)[4] == '_');
            auVar60[5] = -((*pauVar42)[5] == 'd');
            auVar60[6] = -((*pauVar42)[6] == 'r');
            auVar60[7] = -((*pauVar42)[7] == 'a');
            auVar60[8] = -((*pauVar42)[8] == 'w');
            auVar60[9] = -((*pauVar42)[9] == '_');
            auVar60[10] = -((*pauVar42)[10] == 'b');
            auVar60[0xb] = -((*pauVar42)[0xb] == 'o');
            auVar60[0xc] = -((*pauVar42)[0xc] == 'r');
            auVar60[0xd] = -((*pauVar42)[0xd] == 'd');
            auVar60[0xe] = -((*pauVar42)[0xe] == 'e');
            auVar60[0xf] = -((*pauVar42)[0xf] == 'r');
            if ((ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar60[0xf] >> 7) << 0xf) == 0xffff) {
              pauStack_670 = (undefined1 (*) [16])&DAT_00000010;
              cStack_69c = '\t';
              if (pauVar36 == (undefined1 (*) [16])0x1) {
                pauVar28 = (undefined1 (*) [16])CONCAT31(uVar32,1);
                bVar9 = (*pauStack_6a0)[0];
                pauStack_6a4 = pauVar28;
                if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
              }
              else {
                if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
                bVar9 = (*pauStack_6a0)[0];
              }
              pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
              pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
              pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
              if (pauVar36 < (undefined1 (*) [16])0x3) {
                if (pauVar36 == (undefined1 (*) [16])0x0) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = (byte)(*pauVar26)[0] - 0x30;
                  if (9 < uVar33) goto LAB_10062ebb;
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  if (pauVar36 != (undefined1 (*) [16])0x1) {
                    uVar21 = (byte)(*pauVar26)[1] - 0x30;
                    if (9 < uVar21) goto LAB_10063cd5;
                    uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                  }
                }
              }
              else {
                uVar33 = 0;
                while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                      pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                  bVar9 = (*pauVar26)[0];
                  sVar10 = (ushort)(byte)uVar33 * 10;
                  if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                  pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                  if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                  pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                  bVar9 = (byte)sVar10;
                  uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                  if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063b2c;
                }
              }
              DAT_0077f51c = (char)uVar33 != '\0';
            }
            else {
              auVar61[0] = -((*pauVar42)[0] == 'f');
              auVar61[1] = -((*pauVar42)[1] == 'o');
              auVar61[2] = -((*pauVar42)[2] == 'r');
              auVar61[3] = -((*pauVar42)[3] == 'c');
              auVar61[4] = -((*pauVar42)[4] == 'e');
              auVar61[5] = -((*pauVar42)[5] == '_');
              auVar61[6] = -((*pauVar42)[6] == 'c');
              auVar61[7] = -((*pauVar42)[7] == 'p');
              auVar61[8] = -((*pauVar42)[8] == 'u');
              auVar61[9] = -((*pauVar42)[9] == '_');
              auVar61[10] = -((*pauVar42)[10] == 'r');
              auVar61[0xb] = -((*pauVar42)[0xb] == 'e');
              auVar61[0xc] = -((*pauVar42)[0xc] == 'n');
              auVar61[0xd] = -((*pauVar42)[0xd] == 'd');
              auVar61[0xe] = -((*pauVar42)[0xe] == 'e');
              auVar61[0xf] = -((*pauVar42)[0xf] == 'r');
              if ((ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar61[0xf] >> 7) << 0xf) != 0xffff) {
                pauStack_670 = (undefined1 (*) [16])&DAT_00000010;
                goto switchD_10061321_caseD_6;
              }
            }
            break;
          case (undefined1 (*) [16])0x11:
            auVar53[0] = -((*pauVar42)[0] == 'd');
            auVar53[1] = -((*pauVar42)[1] == 'o');
            auVar53[2] = -((*pauVar42)[2] == 'n');
            auVar53[3] = -((*pauVar42)[3] == 't');
            auVar53[4] = -((*pauVar42)[4] == '_');
            auVar53[5] = -((*pauVar42)[5] == 's');
            auVar53[6] = -((*pauVar42)[6] == 'h');
            auVar53[7] = -((*pauVar42)[7] == 'o');
            auVar53[8] = -((*pauVar42)[8] == 'w');
            auVar53[9] = -((*pauVar42)[9] == '_');
            auVar53[10] = -((*pauVar42)[10] == 'b');
            auVar53[0xb] = -((*pauVar42)[0xb] == 'u');
            auVar53[0xc] = -((*pauVar42)[0xc] == 't');
            auVar53[0xd] = -((*pauVar42)[0xd] == 't');
            auVar53[0xe] = -((*pauVar42)[0xe] == 'o');
            auVar53[0xf] = -((*pauVar42)[0xf] == 'n');
            auVar67[0] = -(pauVar42[1][0] == 's');
            auVar67[1] = 0xff;
            auVar67[2] = 0xff;
            auVar67[3] = 0xff;
            auVar67[4] = 0xff;
            auVar67[5] = 0xff;
            auVar67[6] = 0xff;
            auVar67[7] = 0xff;
            auVar67[8] = 0xff;
            auVar67[9] = 0xff;
            auVar67[10] = 0xff;
            auVar67[0xb] = 0xff;
            auVar67[0xc] = 0xff;
            auVar67[0xd] = 0xff;
            auVar67[0xe] = 0xff;
            auVar67[0xf] = 0xff;
            auVar66 = auVar67 & auVar53;
            if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) != 0xffff) {
              pauStack_670 = (undefined1 (*) [16])&DAT_00000011;
              goto switchD_10061321_caseD_6;
            }
            pauStack_670 = (undefined1 (*) [16])&DAT_00000011;
            cStack_69c = '\t';
            if (pauVar36 == (undefined1 (*) [16])0x1) {
              bVar9 = (*pauStack_6a0)[0];
              pauVar28 = (undefined1 (*) [16])CONCAT31(uVar32,1);
              pauStack_6a4 = pauVar28;
              if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
            }
            else {
              if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
              bVar9 = (*pauStack_6a0)[0];
            }
            pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
            pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
            pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
            if (pauVar36 < (undefined1 (*) [16])0x3) {
              if (pauVar36 == (undefined1 (*) [16])0x0) {
                uVar33 = 0;
              }
              else {
                uVar33 = (byte)(*pauVar26)[0] - 0x30;
                if (9 < uVar33) goto LAB_10062ebb;
                if (pauVar36 != (undefined1 (*) [16])0x1) {
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  uVar21 = (byte)(*pauVar26)[1] - 0x30;
                  if (9 < uVar21) goto LAB_10063cd5;
                  uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                }
              }
            }
            else {
              uVar33 = 0;
              while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                    pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                bVar9 = (*pauVar26)[0];
                sVar10 = (ushort)(byte)uVar33 * 10;
                if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                bVar9 = (byte)sVar10;
                uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063231;
              }
            }
            DAT_0077f544 = (char)uVar33 != '\0';
            break;
          case (undefined1 (*) [16])0x12:
            auVar56[0] = -((*pauVar42)[0] == 'i');
            auVar56[1] = -((*pauVar42)[1] == 'n');
            auVar56[2] = -((*pauVar42)[2] == 't');
            auVar56[3] = -((*pauVar42)[3] == 'e');
            auVar56[4] = -((*pauVar42)[4] == 'r');
            auVar56[5] = -((*pauVar42)[5] == 'p');
            auVar56[6] = -((*pauVar42)[6] == 'o');
            auVar56[7] = -((*pauVar42)[7] == 'l');
            auVar56[8] = -((*pauVar42)[8] == 'a');
            auVar56[9] = -((*pauVar42)[9] == 't');
            auVar56[10] = -((*pauVar42)[10] == 'e');
            auVar56[0xb] = -((*pauVar42)[0xb] == '_');
            auVar56[0xc] = -((*pauVar42)[0xc] == 'p');
            auVar56[0xd] = -((*pauVar42)[0xd] == 'i');
            auVar56[0xe] = -((*pauVar42)[0xe] == 'x');
            auVar56[0xf] = -((*pauVar42)[0xf] == 'e');
            auVar70[0] = -((char)*(undefined2 *)pauVar42[1] == 'l');
            auVar70[1] = -((char)((ushort)*(undefined2 *)pauVar42[1] >> 8) == 's');
            auVar70[2] = 0xff;
            auVar70[3] = 0xff;
            auVar70[4] = 0xff;
            auVar70[5] = 0xff;
            auVar70[6] = 0xff;
            auVar70[7] = 0xff;
            auVar70[8] = 0xff;
            auVar70[9] = 0xff;
            auVar70[10] = 0xff;
            auVar70[0xb] = 0xff;
            auVar70[0xc] = 0xff;
            auVar70[0xd] = 0xff;
            auVar70[0xe] = 0xff;
            auVar70[0xf] = 0xff;
            auVar66 = auVar70 & auVar56;
            if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) == 0xffff) {
              pauStack_670 = (undefined1 (*) [16])0x12;
              cStack_69c = '\t';
              if (pauVar36 == (undefined1 (*) [16])0x1) {
                bVar9 = (*pauStack_6a0)[0];
                pauVar28 = (undefined1 (*) [16])CONCAT31(uVar32,1);
                pauStack_6a4 = pauVar28;
                if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
              }
              else {
                if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
                bVar9 = (*pauStack_6a0)[0];
              }
              pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
              pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
              pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
              if (pauVar36 < (undefined1 (*) [16])0x3) {
                if (pauVar36 == (undefined1 (*) [16])0x0) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = (byte)(*pauVar26)[0] - 0x30;
                  if (9 < uVar33) goto LAB_10062ebb;
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  if (pauVar36 != (undefined1 (*) [16])0x1) {
                    uVar21 = (byte)(*pauVar26)[1] - 0x30;
                    if (9 < uVar21) goto LAB_10063cd5;
                    uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                  }
                }
              }
              else {
                uVar33 = 0;
                while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                      pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                  bVar9 = (*pauVar26)[0];
                  sVar10 = (ushort)(byte)uVar33 * 10;
                  if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                  pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                  if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                  pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                  bVar9 = (byte)sVar10;
                  uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                  if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063b2c;
                }
              }
              DAT_0077f518 = (char)uVar33 != '\0';
            }
            else {
              auVar57[0] = -((*pauVar42)[0] == 't');
              auVar57[1] = -((*pauVar42)[1] == 'r');
              auVar57[2] = -((*pauVar42)[2] == 'e');
              auVar57[3] = -((*pauVar42)[3] == 'a');
              auVar57[4] = -((*pauVar42)[4] == 't');
              auVar57[5] = -((*pauVar42)[5] == '_');
              auVar57[6] = -((*pauVar42)[6] == 'c');
              auVar57[7] = -((*pauVar42)[7] == 'l');
              auVar57[8] = -((*pauVar42)[8] == 'o');
              auVar57[9] = -((*pauVar42)[9] == 's');
              auVar57[10] = -((*pauVar42)[10] == 'e');
              auVar57[0xb] = -((*pauVar42)[0xb] == '_');
              auVar57[0xc] = -((*pauVar42)[0xc] == 'a');
              auVar57[0xd] = -((*pauVar42)[0xd] == 's');
              auVar57[0xe] = -((*pauVar42)[0xe] == '_');
              auVar57[0xf] = -((*pauVar42)[0xf] == 'e');
              auVar71[0] = -((char)*(undefined2 *)pauVar42[1] == 's');
              auVar71[1] = -((char)((ushort)*(undefined2 *)pauVar42[1] >> 8) == 'c');
              auVar71[2] = 0xff;
              auVar71[3] = 0xff;
              auVar71[4] = 0xff;
              auVar71[5] = 0xff;
              auVar71[6] = 0xff;
              auVar71[7] = 0xff;
              auVar71[8] = 0xff;
              auVar71[9] = 0xff;
              auVar71[10] = 0xff;
              auVar71[0xb] = 0xff;
              auVar71[0xc] = 0xff;
              auVar71[0xd] = 0xff;
              auVar71[0xe] = 0xff;
              auVar71[0xf] = 0xff;
              auVar66 = auVar71 & auVar57;
              if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) == 0xffff) {
                uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_27;
                if ((uVar78 & 1) != 0) {
LAB_1006329b:
                  pauStack_6a4 = (undefined1 (*) [16])(uVar78 >> 0x20);
                  pauStack_670 = (undefined1 (*) [16])0x12;
                  pauVar26 = pauVar42;
                  goto LAB_100629bd;
                }
                DAT_0077f568 = (char)(uVar78 >> 0x20) != '\0';
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
              else {
                auVar58[0] = -((*pauVar42)[0] == 's');
                auVar58[1] = -((*pauVar42)[1] == 'c');
                auVar58[2] = -((*pauVar42)[2] == 'a');
                auVar58[3] = -((*pauVar42)[3] == 'l');
                auVar58[4] = -((*pauVar42)[4] == 'e');
                auVar58[5] = -((*pauVar42)[5] == '_');
                auVar58[6] = -((*pauVar42)[6] == 'p');
                auVar58[7] = -((*pauVar42)[7] == 'r');
                auVar58[8] = -((*pauVar42)[8] == 'o');
                auVar58[9] = -((*pauVar42)[9] == 'g');
                auVar58[10] = -((*pauVar42)[10] == 'r');
                auVar58[0xb] = -((*pauVar42)[0xb] == 'e');
                auVar58[0xc] = -((*pauVar42)[0xc] == 's');
                auVar58[0xd] = -((*pauVar42)[0xd] == 's');
                auVar58[0xe] = -((*pauVar42)[0xe] == '_');
                auVar58[0xf] = -((*pauVar42)[0xf] == 'b');
                auVar72[0] = -((char)*(undefined2 *)pauVar42[1] == 'a');
                auVar72[1] = -((char)((ushort)*(undefined2 *)pauVar42[1] >> 8) == 'r');
                auVar72[2] = 0xff;
                auVar72[3] = 0xff;
                auVar72[4] = 0xff;
                auVar72[5] = 0xff;
                auVar72[6] = 0xff;
                auVar72[7] = 0xff;
                auVar72[8] = 0xff;
                auVar72[9] = 0xff;
                auVar72[10] = 0xff;
                auVar72[0xb] = 0xff;
                auVar72[0xc] = 0xff;
                auVar72[0xd] = 0xff;
                auVar72[0xe] = 0xff;
                auVar72[0xf] = 0xff;
                auVar66 = auVar72 & auVar58;
                if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) != 0xffff) {
                  pauStack_670 = (undefined1 (*) [16])0x12;
                  goto switchD_10061321_caseD_6;
                }
                uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_19;
                if ((uVar78 & 1) != 0) goto LAB_1006329b;
                DAT_0077f58c = (char)(uVar78 >> 0x20) != '\0';
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
            }
            break;
          case (undefined1 (*) [16])0x13:
            auVar54[0] = -((*pauVar42)[0] == 'd');
            auVar54[1] = -((*pauVar42)[1] == 'i');
            auVar54[2] = -((*pauVar42)[2] == 's');
            auVar54[3] = -((*pauVar42)[3] == 'a');
            auVar54[4] = -((*pauVar42)[4] == 'b');
            auVar54[5] = -((*pauVar42)[5] == 'l');
            auVar54[6] = -((*pauVar42)[6] == 'e');
            auVar54[7] = -((*pauVar42)[7] == '_');
            auVar54[8] = -((*pauVar42)[8] == 's');
            auVar54[9] = -((*pauVar42)[9] == 'c');
            auVar54[10] = -((*pauVar42)[10] == 'r');
            auVar54[0xb] = -((*pauVar42)[0xb] == 'e');
            auVar54[0xc] = -((*pauVar42)[0xc] == 'e');
            auVar54[0xd] = -((*pauVar42)[0xd] == 'n');
            auVar54[0xe] = -((*pauVar42)[0xe] == 's');
            auVar54[0xf] = -((*pauVar42)[0xf] == 'a');
            auVar68[0] = -((*pauVar42)[3] == 'a');
            auVar68[1] = -((*pauVar42)[4] == 'b');
            auVar68[2] = -((*pauVar42)[5] == 'l');
            auVar68[3] = -((*pauVar42)[6] == 'e');
            auVar68[4] = -((*pauVar42)[7] == '_');
            auVar68[5] = -((*pauVar42)[8] == 's');
            auVar68[6] = -((*pauVar42)[9] == 'c');
            auVar68[7] = -((*pauVar42)[10] == 'r');
            auVar68[8] = -((*pauVar42)[0xb] == 'e');
            auVar68[9] = -((*pauVar42)[0xc] == 'e');
            auVar68[10] = -((*pauVar42)[0xd] == 'n');
            auVar68[0xb] = -((*pauVar42)[0xe] == 's');
            auVar68[0xc] = -((*pauVar42)[0xf] == 'a');
            auVar68[0xd] = -(pauVar42[1][0] == 'v');
            auVar68[0xe] = -(pauVar42[1][1] == 'e');
            auVar68[0xf] = -(pauVar42[1][2] == 'r');
            auVar66 = auVar68 & auVar54;
            if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) == 0xffff) {
              pauStack_670 = (undefined1 (*) [16])&DAT_00000013;
              cStack_69c = '\t';
              if (pauVar36 == (undefined1 (*) [16])0x1) {
                bVar9 = (*pauStack_6a0)[0];
                pauVar28 = (undefined1 (*) [16])CONCAT31(uVar32,1);
                pauStack_6a4 = pauVar28;
                if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
              }
              else {
                if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
                bVar9 = (*pauStack_6a0)[0];
              }
              pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
              pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
              pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
              if (pauVar36 < (undefined1 (*) [16])0x3) {
                if (pauVar36 == (undefined1 (*) [16])0x0) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = (byte)(*pauVar26)[0] - 0x30;
                  if (9 < uVar33) goto LAB_10062ebb;
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  if (pauVar36 != (undefined1 (*) [16])0x1) {
                    uVar21 = (byte)(*pauVar26)[1] - 0x30;
                    if (9 < uVar21) goto LAB_10063cd5;
                    uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                  }
                }
              }
              else {
                uVar33 = 0;
                while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                      pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                  bVar9 = (*pauVar26)[0];
                  sVar10 = (ushort)(byte)uVar33 * 10;
                  if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                  pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                  if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                  pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                  bVar9 = (byte)sVar10;
                  uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                  if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063b2c;
                }
              }
              DAT_0077f550 = (char)uVar33 != '\0';
            }
            else {
              auVar55[0] = -((*pauVar42)[0] == 's');
              auVar55[1] = -((*pauVar42)[1] == 'h');
              auVar55[2] = -((*pauVar42)[2] == 'o');
              auVar55[3] = -((*pauVar42)[3] == 'w');
              auVar55[4] = -((*pauVar42)[4] == '_');
              auVar55[5] = -((*pauVar42)[5] == 'e');
              auVar55[6] = -((*pauVar42)[6] == 'r');
              auVar55[7] = -((*pauVar42)[7] == 'r');
              auVar55[8] = -((*pauVar42)[8] == 'o');
              auVar55[9] = -((*pauVar42)[9] == 'r');
              auVar55[10] = -((*pauVar42)[10] == '_');
              auVar55[0xb] = -((*pauVar42)[0xb] == 'm');
              auVar55[0xc] = -((*pauVar42)[0xc] == 'e');
              auVar55[0xd] = -((*pauVar42)[0xd] == 's');
              auVar55[0xe] = -((*pauVar42)[0xe] == 's');
              auVar55[0xf] = -((*pauVar42)[0xf] == 'a');
              auVar69[0] = -((*pauVar42)[3] == 'w');
              auVar69[1] = -((*pauVar42)[4] == '_');
              auVar69[2] = -((*pauVar42)[5] == 'e');
              auVar69[3] = -((*pauVar42)[6] == 'r');
              auVar69[4] = -((*pauVar42)[7] == 'r');
              auVar69[5] = -((*pauVar42)[8] == 'o');
              auVar69[6] = -((*pauVar42)[9] == 'r');
              auVar69[7] = -((*pauVar42)[10] == '_');
              auVar69[8] = -((*pauVar42)[0xb] == 'm');
              auVar69[9] = -((*pauVar42)[0xc] == 'e');
              auVar69[10] = -((*pauVar42)[0xd] == 's');
              auVar69[0xb] = -((*pauVar42)[0xe] == 's');
              auVar69[0xc] = -((*pauVar42)[0xf] == 'a');
              auVar69[0xd] = -(pauVar42[1][0] == 'g');
              auVar69[0xe] = -(pauVar42[1][1] == 'e');
              auVar69[0xf] = -(pauVar42[1][2] == 's');
              auVar66 = auVar69 & auVar55;
              if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) != 0xffff) {
                pauStack_670 = (undefined1 (*) [16])&DAT_00000013;
                goto switchD_10061321_caseD_6;
              }
              uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
              pauStack_6a4 = (undefined1 (*) [16])(uVar78 >> 0x20);
              if ((uVar78 & 1) != 0) {
                pauStack_670 = (undefined1 (*) [16])&DAT_00000013;
                pauVar28 = extraout_ECX_11;
                pauVar26 = pauVar42;
                goto LAB_100629bd;
              }
              DAT_0077f594 = (char)(uVar78 >> 0x20) != '\0';
              pauVar30 = _DAT_0077f524;
              pbVar18 = _DAT_0077f530;
              pbVar17 = _DAT_0077f540;
              pbVar31 = _DAT_0077f56c;
            }
            break;
          case (undefined1 (*) [16])0x14:
            uVar22 = *(undefined4 *)pauVar42[1];
            auVar62[0] = -((*pauVar42)[0] == 's');
            auVar62[1] = -((*pauVar42)[1] == 'w');
            auVar62[2] = -((*pauVar42)[2] == 'a');
            auVar62[3] = -((*pauVar42)[3] == 'p');
            auVar62[4] = -((*pauVar42)[4] == '_');
            auVar62[5] = -((*pauVar42)[5] == 'c');
            auVar62[6] = -((*pauVar42)[6] == 'r');
            auVar62[7] = -((*pauVar42)[7] == 'e');
            auVar62[8] = -((*pauVar42)[8] == 'a');
            auVar62[9] = -((*pauVar42)[9] == 't');
            auVar62[10] = -((*pauVar42)[10] == 'i');
            auVar62[0xb] = -((*pauVar42)[0xb] == 'o');
            auVar62[0xc] = -((*pauVar42)[0xc] == 'n');
            auVar62[0xd] = -((*pauVar42)[0xd] == '_');
            auVar62[0xe] = -((*pauVar42)[0xe] == 'e');
            auVar62[0xf] = -((*pauVar42)[0xf] == 'v');
            auVar74[0] = -((char)uVar22 == 'e');
            auVar74[1] = -((char)((uint)uVar22 >> 8) == 'n');
            auVar74[2] = -((char)((uint)uVar22 >> 0x10) == 't');
            auVar74[3] = -((char)((uint)uVar22 >> 0x18) == 's');
            auVar74[4] = 0xff;
            auVar74[5] = 0xff;
            auVar74[6] = 0xff;
            auVar74[7] = 0xff;
            auVar74[8] = 0xff;
            auVar74[9] = 0xff;
            auVar74[10] = 0xff;
            auVar74[0xb] = 0xff;
            auVar74[0xc] = 0xff;
            auVar74[0xd] = 0xff;
            auVar74[0xe] = 0xff;
            auVar74[0xf] = 0xff;
            auVar66 = auVar74 & auVar62;
            if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) == 0xffff) {
              cStack_69c = '\t';
              pauStack_670 = (undefined1 (*) [16])&DAT_00000014;
              if (pauVar36 == (undefined1 (*) [16])0x1) {
                bVar9 = (*pauStack_6a0)[0];
                pauVar28 = (undefined1 (*) [16])CONCAT31(uVar32,1);
                pauStack_6a4 = pauVar28;
                if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
              }
              else {
                if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
                bVar9 = (*pauStack_6a0)[0];
              }
              pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
              pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
              pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
              if (pauVar36 < (undefined1 (*) [16])0x3) {
                if (pauVar36 != (undefined1 (*) [16])0x0) {
                  uVar33 = (byte)(*pauVar26)[0] - 0x30;
                  if (9 < uVar33) goto LAB_10062ebb;
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  if (pauVar36 != (undefined1 (*) [16])0x1) {
                    uVar21 = (byte)(*pauVar26)[1] - 0x30;
                    if (9 < uVar21) goto LAB_10063cd5;
                    uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                  }
                  goto LAB_10062611;
                }
LAB_1006261a:
                uVar21 = 0;
              }
              else {
                uVar33 = 0;
                while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                      pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                  bVar9 = (*pauVar26)[0];
                  sVar10 = (ushort)(byte)uVar33 * 10;
                  if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                  pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                  if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                  pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                  bVar9 = (byte)sVar10;
                  uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                  if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063b2c;
                }
LAB_10062611:
                uVar21 = 0x80000000;
                if ((char)uVar33 == '\0') goto LAB_1006261a;
              }
              _DAT_0077f54c = _DAT_0077f54c | uVar21;
            }
            else {
              uVar22 = *(undefined4 *)pauVar42[1];
              auVar63[0] = -((*pauVar42)[0] == 'f');
              auVar63[1] = -((*pauVar42)[1] == '4');
              auVar63[2] = -((*pauVar42)[2] == '_');
              auVar63[3] = -((*pauVar42)[3] == 'f');
              auVar63[4] = -((*pauVar42)[4] == 'u');
              auVar63[5] = -((*pauVar42)[5] == 'l');
              auVar63[6] = -((*pauVar42)[6] == 'l');
              auVar63[7] = -((*pauVar42)[7] == 's');
              auVar63[8] = -((*pauVar42)[8] == 'c');
              auVar63[9] = -((*pauVar42)[9] == 'r');
              auVar63[10] = -((*pauVar42)[10] == 'e');
              auVar63[0xb] = -((*pauVar42)[0xb] == 'e');
              auVar63[0xc] = -((*pauVar42)[0xc] == 'n');
              auVar63[0xd] = -((*pauVar42)[0xd] == '_');
              auVar63[0xe] = -((*pauVar42)[0xe] == 't');
              auVar63[0xf] = -((*pauVar42)[0xf] == 'o');
              auVar75[0] = -((char)uVar22 == 'g');
              auVar75[1] = -((char)((uint)uVar22 >> 8) == 'g');
              auVar75[2] = -((char)((uint)uVar22 >> 0x10) == 'l');
              auVar75[3] = -((char)((uint)uVar22 >> 0x18) == 'e');
              auVar75[4] = 0xff;
              auVar75[5] = 0xff;
              auVar75[6] = 0xff;
              auVar75[7] = 0xff;
              auVar75[8] = 0xff;
              auVar75[9] = 0xff;
              auVar75[10] = 0xff;
              auVar75[0xb] = 0xff;
              auVar75[0xc] = 0xff;
              auVar75[0xd] = 0xff;
              auVar75[0xe] = 0xff;
              auVar75[0xf] = 0xff;
              auVar66 = auVar75 & auVar63;
              if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) == 0xffff) {
                uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_29;
                if ((uVar78 & 1) != 0) {
LAB_1006326d:
                  pauStack_6a4 = (undefined1 (*) [16])(uVar78 >> 0x20);
                  pauStack_670 = (undefined1 (*) [16])&DAT_00000014;
                  pauVar26 = pauVar42;
                  goto LAB_100629bd;
                }
                DAT_0077f554 = (char)(uVar78 >> 0x20) != '\0';
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
              else {
                uVar22 = *(undefined4 *)pauVar42[1];
                auVar64[0] = -((*pauVar42)[0] == 'f');
                auVar64[1] = -((*pauVar42)[1] == 'r');
                auVar64[2] = -((*pauVar42)[2] == 'e');
                auVar64[3] = -((*pauVar42)[3] == 'e');
                auVar64[4] = -((*pauVar42)[4] == 'z');
                auVar64[5] = -((*pauVar42)[5] == 'e');
                auVar64[6] = -((*pauVar42)[6] == '_');
                auVar64[7] = -((*pauVar42)[7] == 'o');
                auVar64[8] = -((*pauVar42)[8] == 'n');
                auVar64[9] = -((*pauVar42)[9] == '_');
                auVar64[10] = -((*pauVar42)[10] == 'l');
                auVar64[0xb] = -((*pauVar42)[0xb] == 'o');
                auVar64[0xc] = -((*pauVar42)[0xc] == 's');
                auVar64[0xd] = -((*pauVar42)[0xd] == 'e');
                auVar64[0xe] = -((*pauVar42)[0xe] == '_');
                auVar64[0xf] = -((*pauVar42)[0xf] == 'f');
                auVar76[0] = -((char)uVar22 == 'o');
                auVar76[1] = -((char)((uint)uVar22 >> 8) == 'c');
                auVar76[2] = -((char)((uint)uVar22 >> 0x10) == 'u');
                auVar76[3] = -((char)((uint)uVar22 >> 0x18) == 's');
                auVar76[4] = 0xff;
                auVar76[5] = 0xff;
                auVar76[6] = 0xff;
                auVar76[7] = 0xff;
                auVar76[8] = 0xff;
                auVar76[9] = 0xff;
                auVar76[10] = 0xff;
                auVar76[0xb] = 0xff;
                auVar76[0xc] = 0xff;
                auVar76[0xd] = 0xff;
                auVar76[0xe] = 0xff;
                auVar76[0xf] = 0xff;
                auVar66 = auVar76 & auVar64;
                if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) != 0xffff) {
                  pauStack_670 = (undefined1 (*) [16])&DAT_00000014;
                  goto switchD_10061321_caseD_6;
                }
                uVar78 = FUN_100540a0((byte *)pauStack_6a0,(int)pauVar36);
                pauVar28 = extraout_ECX_22;
                if ((uVar78 & 1) != 0) goto LAB_1006326d;
                DAT_0077f548 = (char)(uVar78 >> 0x20) != '\0';
                pauVar30 = _DAT_0077f524;
                pbVar18 = _DAT_0077f530;
                pbVar17 = _DAT_0077f540;
                pbVar31 = _DAT_0077f56c;
              }
            }
            break;
          case (undefined1 (*) [16])0x17:
            auVar59[0] = -((*pauVar42)[0] == 'z');
            auVar59[1] = -((*pauVar42)[1] == 'e');
            auVar59[2] = -((*pauVar42)[2] == 'r');
            auVar59[3] = -((*pauVar42)[3] == 'o');
            auVar59[4] = -((*pauVar42)[4] == '_');
            auVar59[5] = -((*pauVar42)[5] == 'u');
            auVar59[6] = -((*pauVar42)[6] == 'n');
            auVar59[7] = -((*pauVar42)[7] == 'i');
            auVar59[8] = -((*pauVar42)[8] == 'n');
            auVar59[9] = -((*pauVar42)[9] == 'i');
            auVar59[10] = -((*pauVar42)[10] == 't');
            auVar59[0xb] = -((*pauVar42)[0xb] == 'i');
            auVar59[0xc] = -((*pauVar42)[0xc] == 'a');
            auVar59[0xd] = -((*pauVar42)[0xd] == 'l');
            auVar59[0xe] = -((*pauVar42)[0xe] == 'i');
            auVar59[0xf] = -((*pauVar42)[0xf] == 'z');
            auVar73[0] = -((*pauVar42)[7] == 'i');
            auVar73[1] = -((*pauVar42)[8] == 'n');
            auVar73[2] = -((*pauVar42)[9] == 'i');
            auVar73[3] = -((*pauVar42)[10] == 't');
            auVar73[4] = -((*pauVar42)[0xb] == 'i');
            auVar73[5] = -((*pauVar42)[0xc] == 'a');
            auVar73[6] = -((*pauVar42)[0xd] == 'l');
            auVar73[7] = -((*pauVar42)[0xe] == 'i');
            auVar73[8] = -((*pauVar42)[0xf] == 'z');
            auVar73[9] = -(pauVar42[1][0] == 'e');
            auVar73[10] = -(pauVar42[1][1] == 'd');
            auVar73[0xb] = -(pauVar42[1][2] == '_');
            auVar73[0xc] = -(pauVar42[1][3] == 'v');
            auVar73[0xd] = -(pauVar42[1][4] == 'a');
            auVar73[0xe] = -(pauVar42[1][5] == 'r');
            auVar73[0xf] = -(pauVar42[1][6] == 's');
            auVar66 = auVar73 & auVar59;
            if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) != 0xffff) {
              pauStack_670 = (undefined1 (*) [16])0x17;
              goto switchD_10061321_caseD_6;
            }
            cStack_69c = '\t';
            pauStack_670 = (undefined1 (*) [16])0x17;
            if (pauVar36 == (undefined1 (*) [16])0x1) {
              bVar9 = (*pauStack_6a0)[0];
              pauVar28 = (undefined1 (*) [16])CONCAT31(uVar32,1);
              pauStack_6a4 = pauVar28;
              if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
            }
            else {
              if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
              bVar9 = (*pauStack_6a0)[0];
            }
            pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
            pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
            pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
            if (pauVar36 < (undefined1 (*) [16])0x3) {
              if (pauVar36 == (undefined1 (*) [16])0x0) {
                uVar33 = 0;
              }
              else {
                uVar33 = (byte)(*pauVar26)[0] - 0x30;
                if (9 < uVar33) goto LAB_10062ebb;
                if (pauVar36 != (undefined1 (*) [16])0x1) {
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  uVar21 = (byte)(*pauVar26)[1] - 0x30;
                  if (9 < uVar21) goto LAB_10063cd5;
                  uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                }
              }
            }
            else {
              uVar33 = 0;
              while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                    pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                bVar9 = (*pauVar26)[0];
                sVar10 = (ushort)(byte)uVar33 * 10;
                if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                bVar9 = (byte)sVar10;
                uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063231;
              }
            }
            DAT_0077f5a0 = (char)uVar33 != '\0';
            break;
          case (undefined1 (*) [16])0x1b:
            auVar65[0] = -((*pauVar42)[0] == 'e');
            auVar65[1] = -((*pauVar42)[1] == 'r');
            auVar65[2] = -((*pauVar42)[2] == 'r');
            auVar65[3] = -((*pauVar42)[3] == 'o');
            auVar65[4] = -((*pauVar42)[4] == 'r');
            auVar65[5] = -((*pauVar42)[5] == '_');
            auVar65[6] = -((*pauVar42)[6] == 'o');
            auVar65[7] = -((*pauVar42)[7] == 'n');
            auVar65[8] = -((*pauVar42)[8] == '_');
            auVar65[9] = -((*pauVar42)[9] == 'u');
            auVar65[10] = -((*pauVar42)[10] == 'n');
            auVar65[0xb] = -((*pauVar42)[0xb] == 'i');
            auVar65[0xc] = -((*pauVar42)[0xc] == 'n');
            auVar65[0xd] = -((*pauVar42)[0xd] == 'i');
            auVar65[0xe] = -((*pauVar42)[0xe] == 't');
            auVar65[0xf] = -((*pauVar42)[0xf] == 'i');
            auVar77[0] = -((*pauVar42)[0xb] == 'i');
            auVar77[1] = -((*pauVar42)[0xc] == 'n');
            auVar77[2] = -((*pauVar42)[0xd] == 'i');
            auVar77[3] = -((*pauVar42)[0xe] == 't');
            auVar77[4] = -((*pauVar42)[0xf] == 'i');
            auVar77[5] = -(pauVar42[1][0] == 'a');
            auVar77[6] = -(pauVar42[1][1] == 'l');
            auVar77[7] = -(pauVar42[1][2] == 'i');
            auVar77[8] = -(pauVar42[1][3] == 'z');
            auVar77[9] = -(pauVar42[1][4] == 'e');
            auVar77[10] = -(pauVar42[1][5] == 'd');
            auVar77[0xb] = -(pauVar42[1][6] == '_');
            auVar77[0xc] = -(pauVar42[1][7] == 'a');
            auVar77[0xd] = -(pauVar42[1][8] == 'r');
            auVar77[0xe] = -(pauVar42[1][9] == 'g');
            auVar77[0xf] = -(pauVar42[1][10] == 's');
            auVar66 = auVar77 & auVar65;
            if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) != 0xffff) {
              pauStack_670 = (undefined1 (*) [16])&DAT_0000001b;
              goto switchD_10061321_caseD_6;
            }
            cStack_69c = '\t';
            pauStack_670 = (undefined1 (*) [16])&DAT_0000001b;
            if (pauVar36 == (undefined1 (*) [16])0x1) {
              bVar9 = (*pauStack_6a0)[0];
              pauVar28 = (undefined1 (*) [16])CONCAT31(uVar32,1);
              pauStack_6a4 = pauVar28;
              if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_10062ec5;
            }
            else {
              if (pauVar36 == (undefined1 (*) [16])0x0) goto LAB_10062e90;
              bVar9 = (*pauStack_6a0)[0];
            }
            pauVar28 = (undefined1 (*) [16])(uint)(bVar9 == 0x2b);
            pauVar36 = (undefined1 (*) [16])((int)pauVar36 - (int)pauVar28);
            pauVar26 = (undefined1 (*) [16])(*pauVar28 + (int)*pauStack_6a0);
            if (pauVar36 < (undefined1 (*) [16])0x3) {
              if (pauVar36 == (undefined1 (*) [16])0x0) {
                uVar33 = 0;
              }
              else {
                uVar33 = (byte)(*pauVar26)[0] - 0x30;
                if (9 < uVar33) goto LAB_10062ebb;
                if (pauVar36 != (undefined1 (*) [16])0x1) {
                  pauVar28 = (undefined1 (*) [16])0x1;
                  pauStack_6a4 = (undefined1 (*) [16])0x1;
                  uVar21 = (byte)(*pauVar26)[1] - 0x30;
                  if (9 < uVar21) goto LAB_10063cd5;
                  uVar33 = (uint)(byte)((char)uVar21 + (char)uVar33 * '\n');
                }
              }
            }
            else {
              uVar33 = 0;
              while (bVar44 = pauVar36 != (undefined1 (*) [16])0x0,
                    pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf), bVar44) {
                bVar9 = (*pauVar26)[0];
                sVar10 = (ushort)(byte)uVar33 * 10;
                if ((char)((ushort)sVar10 >> 8) != '\0') goto LAB_100631f5;
                pauVar28 = (undefined1 (*) [16])(bVar9 - 0x30);
                if ((undefined1 (*) [16])0x9 < pauVar28) goto LAB_100629b3;
                pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                bVar9 = (byte)sVar10;
                uVar33 = (uint)(byte)(bVar9 + (byte)pauVar28);
                if (CARRY1(bVar9,(byte)pauVar28)) goto LAB_10063231;
              }
            }
            DAT_0077f5a4 = (char)uVar33 != '\0';
          }
LAB_10062931:
          _DAT_0077f56c = pbVar31;
          _DAT_0077f540 = pbVar17;
          _DAT_0077f530 = pbVar18;
          _DAT_0077f524 = pauVar30;
          if (pauVar43 != (undefined1 (*) [16])0x0) {
            pvVar12 = GetProcessHeap();
            HeapFree(pvVar12,0,pauVar42);
          }
        }
        if (uStack_3c8._4_4_ != (undefined1 (*) [16])0x0) {
          pvVar23 = (undefined1 (*) [16])uStack_3c8;
          pvVar12 = GetProcessHeap();
          HeapFree(pvVar12,0,pvVar23);
        }
        CloseHandle(pauStack_3b4);
        FUN_1011b820((int)param_2);
        if (bVar50) {
          if ((uStack_618 & 1) == 0) {
LAB_10062b15:
            if ((uStack_40c & 1) != 0) {
              FUN_10111020(param_2,&DAT_10141fc7,9);
              FUN_1005b040((undefined1 *)&uStack_5f0,(void *)param_2[1],param_2[2]);
              if ((char)uStack_5f0 != -1) goto LAB_10063119;
              iVar15 = (*(code *)0x462144)();
              iVar16 = FUN_10003510((byte *)param_2[1],param_2[2]);
              uStack_5f0._0_1_ = (char)iVar16;
              uStack_5f0._1_1_ = (byte)((uint)iVar16 >> 8);
              uStack_5f0._2_2_ = (ushort)((uint)iVar16 >> 0x10);
              (*(code *)0x45e64c)();
              (*(code *)0x407ea8)();
              if (_DAT_0077f57c != 0) {
                (*(code *)0x405a7c)();
              }
              _DAT_0077f57c = iVar15;
              FUN_1011b820((int)param_2);
            }
            goto LAB_10062bbc;
          }
          FUN_10111020(param_2,&DAT_10141fbf,8);
          FUN_1005b040((undefined1 *)&uStack_5f0,(void *)param_2[1],param_2[2]);
          if ((char)uStack_5f0 == -1) {
            iVar15 = (*(code *)0x462144)();
            iVar16 = FUN_10003510((byte *)param_2[1],param_2[2]);
            uStack_5f0._0_1_ = (char)iVar16;
            uStack_5f0._1_1_ = (byte)((uint)iVar16 >> 8);
            uStack_5f0._2_2_ = (ushort)((uint)iVar16 >> 0x10);
            (*(code *)0x45e64c)();
            (*(code *)0x407ea8)();
            if (_DAT_0077f580 != 0) {
              (*(code *)0x405a7c)();
            }
            _DAT_0077f580 = iVar15;
            FUN_1011b820((int)param_2);
            goto LAB_10062b15;
          }
        }
        else {
LAB_10062bbc:
          if (bVar6) {
            FUN_10111020(param_2,&DAT_10141fd0,10);
            iVar15 = (*(code *)0x462144)();
            iVar16 = FUN_10003510((byte *)param_2[1],param_2[2]);
            uStack_5f0._0_1_ = (char)iVar16;
            uStack_5f0._1_1_ = (byte)((uint)iVar16 >> 8);
            uStack_5f0._2_2_ = (ushort)((uint)iVar16 >> 0x10);
            (*(code *)0x45e64c)();
            (*(code *)0x407ea8)();
            if (_DAT_0077f578 != 0) {
              (*(code *)0x405a7c)();
            }
            _DAT_0077f578 = iVar15;
            FUN_1011b820((int)param_2);
          }
          FUN_10111020(param_2,&DAT_10141fda,8);
          FUN_1005b040((undefined1 *)&uStack_5f0,(void *)param_2[1],param_2[2]);
          if ((char)uStack_5f0 == -1) {
            iVar15 = FUN_10003510((byte *)param_2[1],param_2[2]);
            uStack_5f0._0_1_ = (char)iVar15;
            uStack_5f0._1_1_ = (byte)((uint)iVar15 >> 8);
            uStack_5f0._2_2_ = (ushort)((uint)iVar15 >> 0x10);
            (*(code *)0x45e64c)();
            (*(code *)0x407ea8)();
            FUN_1011b820((int)param_2);
            FUN_10111020(param_2,&DAT_10141fe2,0xe);
            FUN_1006b940((undefined1 *)&uStack_5f0,(void *)param_2[1],param_2[2]);
            pauVar26 = pauStack_5ec;
            if ((char)uStack_5f0 != -1) {
              pauStack_690 = (undefined1 (*) [16])
                             CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8));
              pauStack_670 = pauStack_5d4;
              pauStack_6a4 = (undefined1 (*) [16])(uint)uStack_5f0._1_1_;
              uVar78 = CONCAT44(pauStack_5dc,pauStack_5e0);
              pauStack_674 = pauStack_5d0;
              pauStack_6a0 = (undefined1 (*) [16])(uint)uStack_5f0._2_2_;
              pauVar43 = pauStack_5e4;
              pauVar27 = pauStack_5e8;
              cStack_69c = (char)uStack_5f0;
              goto LAB_10063d78;
            }
            pauStack_6a0 = (undefined1 (*) [16])0x0;
            pauStack_5ec = pauStack_5e8;
            uStack_5f0._0_1_ = (char)pauVar26;
            uStack_5f0._1_1_ = (byte)((uint)pauVar26 >> 8);
            uStack_5f0._2_2_ = (ushort)((uint)pauVar26 >> 0x10);
            pauStack_5e8 = pauStack_5e4;
            pauStack_5e4 = pauStack_5e0;
            pauStack_5e0 = pauStack_5dc;
            pauStack_5dc = (undefined1 (*) [16])CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8))
            ;
            while (FUN_10090ef0((undefined8 *)&pauStack_614,&uStack_5f0), pauVar43 = pauStack_60c,
                  pauVar26 = pauStack_610, pauStack_614 != (undefined1 (*) [16])0xfffffffe) {
              if (pauStack_614 == (undefined1 (*) [16])0xffffffff) {
                FUN_10005380(&uStack_5f0);
                uVar78 = auVar66._0_8_;
                pauStack_6a4 = extraout_EDX_08;
                pauVar27 = pauVar43;
                cStack_69c = '\0';
                goto LAB_10063d78;
              }
              uStack_1e8 = CONCAT44(pauStack_610,pauStack_614);
              pauStack_1e0 = pauStack_60c;
              iVar15 = -1;
              pauStack_690 = _DAT_0077f5d4;
              if (_DAT_0077f5d4 == (undefined1 (*) [16])0x0) {
                pauStack_690 = (undefined1 (*) [16])&DAT_00000004;
              }
              pauStack_674 = _DAT_00790a14;
              if (_DAT_00790a14 == (undefined1 (*) [16])0x0) {
                pauStack_674 = (undefined1 (*) [16])0x1;
              }
              pauStack_670 = (undefined1 (*) [16])-_DAT_0077f5d8;
              do {
                if (*pauStack_670 + iVar15 == (byte *)0xffffffff) {
                  uStack_3c8._0_4_ = (undefined1 (*) [16])&uStack_1e8;
                  uStack_3c8._4_4_ = (undefined1 (*) [16])&LAB_100922c0;
                  FUN_10093970((undefined8 *)&pauStack_62c,(ushort *)&DAT_10141ff0,(uint)&uStack_3c8
                              );
                  iVar15 = FUN_100033c0((int *)&pauStack_62c);
                  uStack_3c8 = CONCAT44(uStack_3c8._4_4_,iVar15);
                  (*(code *)0x4d43f8)();
                  (*(code *)0x407ea8)();
                  goto LAB_100630aa;
                }
                puVar34 = *(ushort **)(*(int *)(*pauStack_690 + iVar15 * 4 + 4) + 4);
                if (puVar34 == (ushort *)0x0) {
                  puVar34 = (ushort *)0x2;
                  SVar19 = 0;
                }
                else {
                  SVar19 = *(SIZE_T *)(puVar34 + -2);
                }
                FUN_10093310(&uStack_3c8,puVar34,SVar19);
                bVar50 = true;
                if (pauStack_3c0 == pauVar43) {
                  iVar16 = memcmp(uStack_3c8._4_4_,pauVar26,(size_t)pauVar43);
                  bVar50 = iVar16 != 0;
                }
                if ((undefined1 (*) [16])uStack_3c8 != (undefined1 (*) [16])0x0) {
                  pvVar23 = uStack_3c8._4_4_;
                  pvVar12 = GetProcessHeap();
                  HeapFree(pvVar12,0,pvVar23);
                }
                iVar15 = iVar15 + 1;
              } while (bVar50);
              (*pauStack_674)[iVar15] = 1;
              pauStack_6a0 = (undefined1 (*) [16])CONCAT31((int3)((uint)pauStack_674 >> 8),1);
LAB_100630aa:
              if ((undefined1 (*) [16])uStack_1e8 != (undefined1 (*) [16])0x0) {
                pvVar23 = uStack_1e8._4_4_;
                pvVar12 = GetProcessHeap();
                HeapFree(pvVar12,0,pvVar23);
              }
            }
            FUN_10005380(&uStack_5f0);
            if (((uint)pauStack_6a0 & 1) != 0) {
              (*(code *)0x7149c4)();
            }
            FUN_1011b820((int)param_2);
            FUN_1005ea70(&uStack_5f0,param_2);
            if ((char)uStack_5f0 != -1) goto LAB_10063119;
            FUN_1011b820((int)param_2);
            (*(code *)0x6ca2ac)();
            pauStack_690 = (undefined1 (*) [16])(uint)bStack_645;
            FUN_1005b7a0((undefined8 *)&uStack_5f0,param_2,bVar48,bStack_647,(byte)pauStack_600 & 1,
                         bVar46,bVar45,bStack_649,bStack_648,bStack_645,bVar47);
            if (iStack_420 == -1) {
              pauStack_1c8 = pauStack_5d0;
              pauStack_1d0 = (undefined1 (*) [16])
                             CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8));
              uStack_1e8 = CONCAT44(pauStack_5ec,
                                    CONCAT22(uStack_5f0._2_2_,
                                             CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0)));
              uStack_1cc = pauStack_5d4;
              pauStack_1d8 = pauStack_5e0;
              pauStack_1d4 = pauStack_5dc;
              pauStack_1e0 = pauStack_5e8;
              pauStack_1dc = pauStack_5e4;
              *(undefined1 (**) [16])(param_1 + 0x20) = pauStack_5d0;
              *(ulonglong *)(param_1 + 0x18) = CONCAT44(pauStack_5d4,pauStack_1d0);
              *(ulonglong *)(param_1 + 0x10) = CONCAT44(pauStack_5dc,pauStack_5e0);
              *(ulonglong *)(param_1 + 8) = CONCAT44(pauStack_5e4,pauStack_5e8);
              *(undefined8 *)param_1 = uStack_1e8;
              goto LAB_10060cc2;
            }
            memcpy(&uStack_1e8,&uStack_5f0,0x1d0);
            uStack_1f4 = uStack_41c;
            uStack_1f0 = uStack_418;
            uStack_1ec = uStack_414;
            memcpy(&uStack_3c8,&uStack_1e8,0x1d0);
            iStack_1f8 = iStack_420;
            (*(code *)0x6ca2ac)();
            pauStack_674 = pauStack_3a4;
            FUN_10111020(param_2,&DAT_101402ca,8);
            _DAT_0077f3f8 = pauStack_3a0;
            (*(code *)0x409be0)(pauStack_3a0);
            iVar15 = 4;
            if (_DAT_0077f3f4 != 0) {
              iVar15 = _DAT_0077f3f4;
            }
            pauStack_638 = pauStack_3a0;
            if (_DAT_0077f3f8 < pauStack_3a0) {
              pauStack_638 = _DAT_0077f3f8;
            }
            if (pauStack_638 != (undefined1 (*) [16])0x0) {
              pauStack_660 = (undefined1 (*) [16])0x0;
LAB_1006346f:
              if (*(int *)(*pauStack_3a4 + (int)pauStack_660 * 0xc + 8) == 0) goto LAB_1006383e;
              pauVar26 = (undefined1 (*) [16])(*pauStack_3a4 + (int)pauStack_660 * 0xc);
              iVar16 = (*(code *)0x62d200)();
              iVar20 = FUN_10003510(*(byte **)(*pauVar26 + 4),*(int *)(*pauVar26 + 8));
              (*(code *)0x407ea8)();
              *(int *)(iVar16 + 4) = iVar20;
              FUN_10111020(param_2,*(byte **)(*pauVar26 + 4),*(uint *)(*pauVar26 + 8));
              FUN_10110c70(param_2,"txt",3);
              SVar19 = param_2[2];
              pvVar1 = (void *)param_2[1];
              FUN_1006b940((undefined1 *)&uStack_5f0,pvVar1,SVar19);
              pauStack_6a0._0_1_ = (char)uStack_5f0;
              if ((char)uStack_5f0 == -1) {
                pauStack_1d4 = (undefined1 (*) [16])
                               CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8));
                uStack_1e8 = CONCAT44(pauStack_5e8,pauStack_5ec);
                pauStack_1e0 = pauStack_5e4;
                pauStack_1dc = pauStack_5e0;
                pauStack_1d8 = pauStack_5dc;
                pauStack_63c = (undefined1 (*) [16])(iVar16 + 0xc);
                while (FUN_10090ef0((undefined8 *)&pauStack_62c,(int *)&uStack_1e8),
                      pauVar27 = pauStack_624, pauVar42 = pauStack_628, pauVar43 = pauStack_62c,
                      pauStack_62c != (undefined1 (*) [16])0xfffffffe) {
                  pauStack_670 = pauStack_628;
                  if (pauStack_62c == (undefined1 (*) [16])0xffffffff) {
                    pauStack_600 = pauStack_628;
                    pauStack_6a0._0_1_ = '\0';
                    goto LAB_10064753;
                  }
                  if (pauStack_624 != (undefined1 (*) [16])0x0) {
                    pauStack_5ec = pauStack_628;
                    pauStack_5e8 = pauStack_624;
                    pauStack_5e4 = (undefined1 (*) [16])0x0;
                    pauStack_5e0 = pauStack_624;
                    uStack_5f0._0_1_ = '=';
                    uStack_5f0._1_1_ = 0;
                    uStack_5f0._2_2_ = 0;
                    uStack_5d8 = 1;
                    pauStack_5dc = (undefined1 (*) [16])0x3d;
                    FUN_10090ba0(&pauStack_614,(int)&uStack_5f0);
                    pauVar40 = pauStack_610;
                    if (pauStack_614 != (undefined1 (*) [16])0x1) {
                      FUN_10110c20(&uStack_5f0,pvVar1,SVar19);
                      pauStack_674 = (undefined1 (*) [16])
                                     CONCAT22(uStack_5f0._2_2_,
                                              CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
                      pauStack_6a0 = (undefined1 (*) [16])
                                     CONCAT31((int3)((uint)pauStack_5e4 >> 8),6);
                      pauVar27 = pauStack_5ec;
                      pauStack_63c = pauStack_5e4;
                      pauStack_638 = pauStack_5e8;
                      pauStack_600 = pauStack_6a0;
                      goto LAB_10064724;
                    }
                    pauVar27 = (undefined1 (*) [16])((int)pauVar27 - (int)pauStack_60c);
                    pbVar31 = *pauVar42 + (int)*pauStack_60c;
                    pauStack_690 = pauStack_610;
                    if (pauStack_610 == (undefined1 (*) [16])&DAT_00000004) {
                      if (*(int *)*pauVar42 != 0x646e696b) {
LAB_1006412b:
                        FUN_10110c20(&uStack_5f0,pvVar1,SVar19);
LAB_100646c9:
                        pauVar26 = FUN_10107380(0,(SIZE_T)pauVar40);
                        if (pauVar26 == (undefined1 (*) [16])0x0) {
                          FUN_101366bc(1);
                    /* WARNING: Does not return */
                          pcVar2 = (code *)invalidInstructionException();
                          (*pcVar2)();
                        }
                        memcpy(pauVar26,pauVar42,(size_t)pauVar40);
                        goto LAB_100646ef;
                      }
                      pauStack_6a0 = (undefined1 (*) [16])0x9;
                      pauStack_690 = (undefined1 (*) [16])&DAT_00000004;
                      if (pauVar27 == (undefined1 (*) [16])0x1) {
                        bVar9 = *pbVar31;
                        pauStack_600 = (undefined1 (*) [16])
                                       CONCAT31((int3)((uint)extraout_EDX_09 >> 8),1);
                        if ((bVar9 != 0x2b) && (bVar9 != 0x2d)) goto LAB_100636bd;
                      }
                      else {
                        if (pauVar27 != (undefined1 (*) [16])0x0) {
                          bVar9 = *pbVar31;
LAB_100636bd:
                          uVar33 = 0;
                          pauVar27 = (undefined1 (*) [16])((int)pauVar27 - (uint)(bVar9 == 0x2b));
                          pbVar31 = pbVar31 + (bVar9 == 0x2b);
                          if ((undefined1 (*) [16])&DAT_00000008 < pauVar27) {
                            while (bVar45 = pauVar27 != (undefined1 (*) [16])0x0,
                                  pauVar27 = (undefined1 (*) [16])(pauVar27[-1] + 0xf), bVar45) {
                              uVar21 = (uint)((ulonglong)uVar33 * 10);
                              if ((int)((ulonglong)uVar33 * 10 >> 0x20) != 0) {
                                pauStack_600 = (undefined1 (*) [16])
                                               (uint)(byte)(((byte)(*pbVar31 - 0x30) < 10) + 1);
                                goto LAB_10064724;
                              }
                              uVar33 = *pbVar31 - 0x30;
                              if (9 < uVar33) goto LAB_10063c40;
                              pbVar31 = pbVar31 + 1;
                              bVar45 = CARRY4(uVar33,uVar21);
                              uVar33 = uVar33 + uVar21;
                              if (bVar45) {
                                pauStack_600 = (undefined1 (*) [16])CONCAT31((int3)(uVar33 >> 8),2);
                                goto LAB_10064724;
                              }
                            }
                          }
                          else {
                            for (; pauVar27 != (undefined1 (*) [16])0x0;
                                pauVar27 = (undefined1 (*) [16])(pauVar27[-1] + 0xf)) {
                              bVar9 = *pbVar31;
                              if (9 < bVar9 - 0x30) goto LAB_10063c40;
                              pbVar31 = pbVar31 + 1;
                              uVar33 = (bVar9 - 0x30) + uVar33 * 10;
                            }
                          }
                          *(uint *)(iVar16 + 0x10) = uVar33;
                          goto LAB_100636f3;
                        }
                        pauStack_600 = (undefined1 (*) [16])0x0;
                      }
                    }
                    else {
                      if (pauStack_610 == (undefined1 (*) [16])&DAT_00000008) {
                        if (*(int *)(*pauVar42 + 4) == 0x746e6174 && *(int *)*pauVar42 == 0x736e6f63
                           ) {
                          iVar20 = FUN_10003510(pbVar31,(int)pauVar27);
                          (*(code *)0x407ea8)();
                          *(int *)*pauStack_63c = iVar20;
                          pauVar26 = pauStack_63c;
                          goto LAB_100636f3;
                        }
                        goto LAB_1006412b;
                      }
                      FUN_10110c20(&uStack_5f0,pvVar1,SVar19);
                      if (pauVar40 != (undefined1 (*) [16])0x0) goto LAB_100646c9;
                      pauVar26 = (undefined1 (*) [16])0x1;
                      pauStack_690 = (undefined1 (*) [16])0x0;
LAB_100646ef:
                      pauStack_674 = (undefined1 (*) [16])
                                     CONCAT22(uStack_5f0._2_2_,
                                              CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
                      pauStack_6a0 = (undefined1 (*) [16])
                                     CONCAT31((int3)((uint)pauStack_5e4 >> 8),7);
                      pauVar27 = pauStack_5ec;
                      pauStack_63c = pauStack_5e4;
                      pauStack_638 = pauStack_5e8;
                      pauStack_600 = pauStack_6a0;
                    }
                    goto LAB_10064724;
                  }
LAB_100636f3:
                  if (pauVar43 != (undefined1 (*) [16])0x0) {
                    pvVar12 = GetProcessHeap();
                    HeapFree(pvVar12,0,pauVar42);
                  }
                }
                if (uStack_1e8._4_4_ != (undefined1 (*) [16])0x0) {
                  pvVar23 = (undefined1 (*) [16])uStack_1e8;
                  pvVar12 = GetProcessHeap();
                  HeapFree(pvVar12,0,pvVar23);
                }
                CloseHandle(pauStack_1d4);
                FUN_10110c70(param_2,"gml",3);
                FUN_1011c880(&uStack_1e8,param_2[1],param_2[2]);
                pauVar27 = pauStack_1e0;
                pauVar26 = (undefined1 (*) [16])uStack_1e8;
                pauVar43 = uStack_1e8._4_4_;
                if ((undefined1 (*) [16])uStack_1e8 != (undefined1 (*) [16])0xffffffff) {
                  pauStack_5e4 = pauStack_1e0;
                  pauStack_5ec = (undefined1 (*) [16])uStack_1e8;
                  pauStack_5e8 = uStack_1e8._4_4_;
                  uVar22 = FUN_10064e50(uStack_1e8._4_4_,(SIZE_T)pauStack_1e0);
                  (*(code *)0x407ea8)();
                  *(undefined4 *)(iVar16 + 8) = uVar22;
                  if (pauVar26 != (undefined1 (*) [16])0x0) {
                    pvVar12 = GetProcessHeap();
                    HeapFree(pvVar12,0,pauVar43);
                  }
                  FUN_1011b820((int)param_2);
                  if (*(int *)(iVar15 + (int)pauStack_660 * 4) != 0) {
                    (*(code *)0x405a7c)();
                  }
                  *(int *)(iVar15 + (int)pauStack_660 * 4) = iVar16;
                  goto LAB_1006383e;
                }
                pauStack_670 = uStack_1e8._4_4_;
                FUN_10110c20((SIZE_T *)&pauStack_5e4,(void *)param_2[1],param_2[2]);
                pauStack_600 = (undefined1 (*) [16])(uint)uStack_5f0._1_1_;
                pauVar26 = (undefined1 (*) [16])CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8))
                ;
                pauStack_638 = pauStack_5e4;
                pauStack_63c = pauStack_5e0;
                pauStack_690 = pauStack_5dc;
                pauStack_660 = pauStack_5d0;
                pauStack_674 = pauStack_5d4;
                pauStack_6a0._0_1_ = '\x01';
                uVar35 = uStack_5f0._2_2_;
              }
              else {
                pauStack_670 = pauStack_5ec;
                pauStack_600 = (undefined1 (*) [16])(uint)uStack_5f0._1_1_;
                pauVar26 = (undefined1 (*) [16])CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8))
                ;
                pauStack_638 = pauStack_5e4;
                pauStack_63c = pauStack_5e0;
                pauStack_690 = pauStack_5dc;
                pauStack_660 = pauStack_5d0;
                pauStack_674 = pauStack_5d4;
                pauVar27 = pauStack_5e8;
                uVar35 = uStack_5f0._2_2_;
              }
              goto LAB_10064781;
            }
LAB_10063851:
            FUN_1011b820((int)param_2);
            (*(code *)0x6ca2ac)();
            pcStack_3e8 = FUN_10057c80;
            FUN_10111020(param_2,&DAT_101402b4,6);
            _DAT_0077f2c8 = iStack_340;
            (*(code *)0x409be0)(iStack_340);
            (*(code *)0x409be0)(iStack_340);
            (*(code *)0x409be0)(iStack_340);
            (*(code *)0x409be0)(iStack_340);
            pauStack_614 = (undefined1 (*) [16])auStack_348;
            pauStack_690 = (undefined1 (*) [16])iStack_340;
            pauStack_60c = (undefined1 (*) [16])&pcStack_3e8;
            pauStack_610 = (undefined1 (*) [16])&DAT_10140490;
            puStack_604 = &uStack_3c8;
            puStack_608 = param_2;
            if (iStack_340 == 0) {
LAB_10063e83:
              FUN_1011b820((int)param_2);
              (*(code *)0x6ca2ac)();
              FUN_100095d0(&uStack_5f0,(int)aiStack_398,param_2,&uStack_3c8);
              if ((char)uStack_5f0 == -1) {
                (*(code *)0x6ca2ac)();
                FUN_10007930(&uStack_5f0,(int)aiStack_338,param_2,&uStack_3c8);
                if ((char)uStack_5f0 == -1) {
                  (*(code *)0x6ca2ac)();
                  pauStack_600 = (undefined1 (*) [16])(uint)*(uint3 *)(_DAT_0079a9e8 + 0x6c);
                  FUN_1010f2e0();
                  iVar16 = _DAT_0077f4d8;
                  iVar20 = _DAT_0077f4c4;
                  if (_DAT_0077f4c4 == 0) {
                    iVar20 = 4;
                  }
                  iVar38 = _DAT_0077f4d4;
                  if (_DAT_0077f4d4 == 0) {
                    iVar38 = 4;
                  }
                  if (_DAT_0077f4d8 != 0) {
                    iVar37 = 0;
                    do {
                      iVar80 = *(int *)(iVar20 + iVar37 * 4);
                      if (iVar80 != 0) {
                        if (*(int *)(iVar80 + 4) == 0) {
LAB_10063fbb:
                          (*(code *)0x40e008)(0x10,0x10,1,0x20,&DAT_101413ac);
                          uVar81 = 0x10;
                          uVar25 = 0x10;
                          uVar22 = (*(code *)0x40e008)(0x10,0x10,1,1,&DAT_101417ac);
                          iVar80 = iVar15;
                          (*(code *)0x40f8ec)(*(undefined4 *)(_DAT_00789b38 + 0x40),iVar15,uVar22,
                                              uVar25,uVar81,uVar22);
                          (*(code *)0x40e098)(iVar15);
                          (*(code *)0x40e098)(iVar80);
                        }
                        else {
                          piVar24 = *(int **)(iVar80 + 0x30);
                          if (piVar24 == (int *)0x0) {
                            piVar24 = (int *)&DAT_00000004;
                          }
                          iVar80 = *piVar24;
                          if ((*(int *)(iVar80 + 4) == 0) || (*(int *)(iVar80 + 8) == 0))
                          goto LAB_10063fbb;
                          pauStack_690 = (undefined1 (*) [16])
                                         FUN_1004d150(iVar80,(uint)pauStack_600);
                        }
                        *(undefined1 (**) [16])(iVar38 + iVar37 * 4) = pauStack_690;
                        FUN_1010f430(&uStack_5f0,(uint *)&pcStack_3e8);
                        uVar33 = CONCAT22(uStack_5f0._2_2_,
                                          CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
                        bVar46 = pauStack_5ec != (undefined1 (*) [16])0x0 ||
                                 (uint)-(int)pauStack_5ec < (uint)(1 < uVar33);
                        pauStack_690 = (undefined1 (*) [16])CONCAT31(pauStack_690._1_3_,bVar46);
                        bVar45 = pauStack_5e8 != (undefined1 (*) [16])0x0;
                        if (uVar33 != 1 || pauStack_5ec != (undefined1 (*) [16])0x0) {
                          bVar45 = bVar46;
                        }
                        if (bVar45) {
                          (*(code *)0x6ca2ac)();
                          FUN_1010f2e0();
                          pcStack_3e8 = (code *)CONCAT22(uStack_5f0._2_2_,
                                                         CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0)
                                                        );
                          pauStack_3e4 = pauStack_5ec;
                          pauStack_3e0 = pauStack_5e8;
                        }
                      }
                      iVar37 = iVar37 + 1;
                    } while (iVar16 != iVar37);
                  }
                  (*(code *)0x6ca2ac)();
                  FUN_1010f2e0();
                  iVar15 = _DAT_0077f1c0;
                  iVar16 = _DAT_0077f1ac;
                  if (_DAT_0077f1ac == 0) {
                    iVar16 = 4;
                  }
                  iVar20 = _DAT_0077f1bc;
                  if (_DAT_0077f1bc == 0) {
                    iVar20 = 4;
                  }
                  if (_DAT_0077f1c0 != 0) {
                    iVar38 = 0;
                    do {
                      iVar37 = *(int *)(iVar16 + iVar38 * 4);
                      if (iVar37 != 0) {
                        iVar37 = *(int *)(iVar37 + 4);
                        if ((*(int *)(iVar37 + 4) == 0) || (*(int *)(iVar37 + 8) == 0)) {
                          uVar22 = (*(code *)0x40e008)(0x10,0x10,1,0x20,&DAT_101413ac);
                          puVar82 = &DAT_101417ac;
                          uVar25 = (*(code *)0x40e008)(0x10,0x10,1,1,&DAT_101417ac);
                          uVar22 = (*(code *)0x40f8ec)(*(undefined4 *)(_DAT_00789b38 + 0x40),uVar22,
                                                       uVar25);
                          (*(code *)0x40e098)(iVar20);
                          (*(code *)0x40e098)(puVar82);
                        }
                        else {
                          uVar22 = FUN_1004d150(iVar37,(uint)pauStack_600);
                        }
                        *(undefined4 *)(iVar20 + iVar38 * 4) = uVar22;
                        FUN_1010f430(&uStack_5f0,(uint *)&pauStack_400);
                        uVar33 = CONCAT22(uStack_5f0._2_2_,
                                          CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
                        bVar45 = pauStack_5e8 != (undefined1 (*) [16])0x0;
                        if (uVar33 != 1 || pauStack_5ec != (undefined1 (*) [16])0x0) {
                          bVar45 = pauStack_5ec != (undefined1 (*) [16])0x0 ||
                                   (uint)-(int)pauStack_5ec < (uint)(1 < uVar33);
                        }
                        if (bVar45) {
                          (*(code *)0x6ca2ac)();
                          FUN_1010f2e0();
                          pauStack_400 = (undefined1 (*) [16])
                                         CONCAT22(uStack_5f0._2_2_,
                                                  CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
                          pauStack_3fc = pauStack_5ec;
                          pauStack_3f8 = pauStack_5e8;
                        }
                      }
                      iVar38 = iVar38 + 1;
                    } while (iVar15 != iVar38);
                  }
                  (*(code *)0x5081b8)();
                  (*(code *)0x6ca2ac)();
                  FUN_100082b0(&uStack_5f0,(int)aiStack_308,param_2,&uStack_3c8);
                  if ((char)uStack_5f0 == -1) {
                    (*(code *)0x6ca2ac)();
                    FUN_10009120(&uStack_5f0,(int)aiStack_2d8,param_2,&uStack_3c8);
                    if ((char)uStack_5f0 == -1) {
                      (*(code *)0x6ca2ac)();
                      FUN_10007e00(&uStack_5f0,(int)aiStack_248,param_2,&uStack_3c8);
                      if ((char)uStack_5f0 == -1) {
                        (*(code *)0x6ca2ac)();
                        FUN_10009aa0(&uStack_5f0,(int)aiStack_218,param_2,&uStack_3c8);
                        if ((char)uStack_5f0 == -1) {
                          (*(code *)0x6ca2ac)();
                          FUN_10008c10(&uStack_5f0,(int)aiStack_2a8,param_2,&uStack_3c8);
                          if ((char)uStack_5f0 == -1) {
                            (*(code *)0x6ca2ac)();
                            FUN_10008760(&uStack_5f0,(int)aiStack_278,param_2,&uStack_3c8);
                            if (((((char)uStack_5f0 == -1) &&
                                 (((((*(code *)0x6ca2ac)(), !bVar49 ||
                                    (FUN_1005d9c0((char *)&uStack_5f0,param_2),
                                    (char)uStack_5f0 == -1)) &&
                                   (FUN_1005d240((char *)&uStack_5f0,(undefined4 *)&DAT_0079a9c0,3,
                                                 &DAT_101402b4,6,aiStack_368,param_2),
                                   (char)uStack_5f0 == -1)) &&
                                  ((FUN_1005d240((char *)&uStack_5f0,(undefined4 *)&DAT_0079a9bc,2,
                                                 &DAT_101402ba,7,aiStack_398,param_2),
                                   (char)uStack_5f0 == -1 &&
                                   (FUN_1005d240((char *)&uStack_5f0,(undefined4 *)&DAT_0079a9c8,6,
                                                 &DAT_1014028c,0xb,aiStack_338,param_2),
                                   (char)uStack_5f0 == -1)))))) &&
                                (FUN_1005d240((char *)&uStack_5f0,(undefined4 *)&DAT_0079a9cc,8,
                                              (byte *)"paths",5,aiStack_308,param_2),
                                (char)uStack_5f0 == -1)) &&
                               (((FUN_1005d240((char *)&uStack_5f0,(undefined4 *)&DAT_0079a9d0,7,
                                               &DAT_101402a5,7,aiStack_2d8,param_2),
                                 (char)uStack_5f0 == -1 &&
                                 (FUN_1005d240((char *)&uStack_5f0,(undefined4 *)&DAT_0079a9d4,9,
                                               &DAT_101402a0,5,aiStack_248,param_2),
                                 (char)uStack_5f0 == -1)) &&
                                ((FUN_1005d240((char *)&uStack_5f0,(undefined4 *)&DAT_0079a9d8,0xc,
                                               &DAT_101402c1,9,aiStack_218,param_2),
                                 (char)uStack_5f0 == -1 &&
                                 ((FUN_1005d240((char *)&uStack_5f0,(undefined4 *)&DAT_0079a9b8,1,
                                                &DAT_1013f3d8,7,aiStack_2a8,param_2),
                                  (char)uStack_5f0 == -1 &&
                                  (FUN_1005d240((char *)&uStack_5f0,(undefined4 *)&DAT_0079a9c4,4,
                                                &DAT_1013f3df,5,aiStack_278,param_2),
                                  (char)uStack_5f0 == -1)))))))) {
                              DAT_0077f5f4 = 0;
                              DAT_0078a0d4 = 0;
                              DAT_0078a1b0 = 0;
                              DAT_00790170 = 0;
                              DAT_0078a1f8 = 0;
                              DAT_0078a168 = 0;
                              DAT_007a4658 = 0;
                              DAT_0078a1b8 = 0;
                              DAT_00790190 = 0;
                              DAT_00790188 = 0;
                              DAT_0078895c = 0;
                              DAT_00790824 = 0;
                              DAT_00790a0c = 0;
                              DAT_007900a0 = 0;
                              DAT_00790058 = 0;
                              DAT_0078c154 = 0;
                              (*(code *)0x6ca2ac)();
                              (*(code *)0x6fb55c)();
                              FUN_10002aa0(&uStack_5f0);
                              pauStack_1d8 = (undefined1 (*) [16])
                                             CONCAT22(uStack_5f0._2_2_,
                                                      CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
                              pauStack_1e0 = (undefined1 (*) [16])0x0;
                              pauStack_1dc = (undefined1 (*) [16])0x0;
                              uStack_1e8 = 0x10159670;
                              pauStack_1d4 = pauStack_5ec;
                              pauStack_1d0 = pauStack_5e8;
                              uStack_1cc = pauStack_5e4;
                              piVar24 = (int *)&DAT_00000004;
                              if (_DAT_0077f4fc != (int *)0x0) {
                                piVar24 = _DAT_0077f4fc;
                              }
                              for (iVar15 = _DAT_0077f50c << 2; iVar15 != 0; iVar15 = iVar15 + -4) {
                                if ((*piVar24 != 0) && (iVar16 = (*(code *)0x43ee44)(), iVar16 < 0))
                                {
                                  puVar39 = *(uint **)(*piVar24 + 4);
                                  (*(code *)0x407ea0)();
                                  FUN_1004c8d0((undefined4 *)&uStack_1e8,puVar39);
                                }
                                piVar24 = piVar24 + 1;
                              }
                              (*(code *)0x405a7c)();
                              pauVar26 = pauStack_1dc;
                              if (pauStack_1dc == (undefined1 (*) [16])0x0) {
                                FUN_10005900((int *)&uStack_1e8);
                              }
                              else {
                                FUN_1002c180(aSStack_3d4,
                                             "Warning: this game uses the following fonts, which are not installed:"
                                             ,0x45);
                                auVar66 = *(undefined1 (*) [16])uStack_1e8;
                                if (uStack_1e8._4_4_ == (undefined1 (*) [16])0x0) {
                                  uStack_5f0._0_1_ = '\0';
                                  pauStack_5e8 = (undefined1 (*) [16])0x0;
                                  pauStack_5ec = (undefined1 (*) [16])extraout_EDX_10;
                                }
                                else {
                                  uVar33 = (int)uStack_1e8._4_4_ * 4 + 0x13U & 0xfffffff0;
                                  pauStack_5ec = (undefined1 (*) [16])
                                                 ((int)uStack_1e8._4_4_ + 0x11 + uVar33);
                                  pauStack_5e8 = (undefined1 (*) [16])
                                                 ((int)(undefined1 (*) [16])uStack_1e8 - uVar33);
                                  uStack_5f0._0_1_ = '\x10';
                                }
                                uStack_5f0._1_1_ = 0;
                                uStack_5f0._2_2_ = 0;
                                pauVar27 = (undefined1 (*) [16])uStack_1e8 + 1;
                                pauStack_5dc = (undefined1 (*) [16])
                                               (*(undefined1 (*) [16])uStack_1e8 +
                                               (int)uStack_1e8._4_4_ + 1);
                                pauStack_5e4 = (undefined1 (*) [16])uStack_1e8;
                                uVar35 = ~((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                                           (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                                           (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                                           (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                                           (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                                           (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                                           (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                                           (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                                           (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                                           (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                                           (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                                           (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                                           (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                                          (ushort)(byte)(auVar66[0xf] >> 7) << 0xf);
                                uStack_5d8 = (undefined1)uVar35;
                                uStack_5d7 = (undefined1)(uVar35 >> 8);
                                pauStack_5d4 = pauVar26;
                                pauStack_5e0 = pauVar27;
                                while( true ) {
                                  lVar79 = FUN_10090690((int)&uStack_5f0,(uint)pauVar27);
                                  if ((int)lVar79 != 1) break;
                                  puStack_404 = (ushort *)((ulonglong)lVar79 >> 0x20);
                                  FUN_1008f070(aSStack_3d4,&DAT_10157df0,&DAT_10157df1);
                                  if (puStack_404 == (ushort *)0x0) {
                                    puVar34 = (ushort *)0x2;
                                    SVar19 = 0;
                                  }
                                  else {
                                    SVar19 = *(SIZE_T *)(puStack_404 + -2);
                                    puVar34 = puStack_404;
                                  }
                                  FUN_10093310((undefined8 *)&pauStack_614,puVar34,SVar19);
                                  FUN_10093270((undefined8 *)&pauStack_62c,
                                               (undefined8 *)&pauStack_614);
                                  pauVar27 = pauStack_624;
                                  pauVar26 = pauStack_628;
                                  if (pauStack_62c != (undefined1 (*) [16])0xffffffff) {
                                    pauStack_614 = pauStack_62c;
                                    pauStack_610 = pauStack_628;
                                    pauStack_60c = pauStack_624;
                                    puStack_608 = (uint *)iStack_620;
                                    FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,
                                                 &pauStack_614,&PTR_FUN_101403f8,
                                                 &PTR_s_src_load_rs_101420c4);
                    /* WARNING: Does not return */
                                    pcVar2 = (code *)invalidInstructionException();
                                    (*pcVar2)();
                                  }
                                  FUN_1008f070(aSStack_3d4,pauStack_624,*pauStack_624 + iStack_620);
                                  if (pauVar26 != (undefined1 (*) [16])0x0) {
                                    pvVar12 = GetProcessHeap();
                                    HeapFree(pvVar12,0,pauVar27);
                                  }
                                  (*(code *)0x407ea8)();
                                  pauVar27 = extraout_EDX_11;
                                }
                                FUN_100059f0(&uStack_5f0);
                                iVar15 = FUN_100033c0((int *)aSStack_3d4);
                                uStack_5f0._0_1_ = (char)iVar15;
                                uStack_5f0._1_1_ = (byte)((uint)iVar15 >> 8);
                                uStack_5f0._2_2_ = (ushort)((uint)iVar15 >> 0x10);
                                (*(code *)0x4d43f8)();
                                (*(code *)0x407ea8)();
                              }
                              uStack_5f0._0_1_ = '\0';
                              uStack_5f0._1_1_ = 0;
                              uStack_5f0._2_2_ = 0;
                              pauStack_5ec = (undefined1 (*) [16])0x0;
                              (*(code *)PTR_FUN_101631b4)(&uStack_5f0);
                              DAT_10163014 = CONCAT22(uStack_5f0._2_2_,
                                                      CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
                              DAT_10163010 = uStack_5f4;
                              fVar51 = (float10)(*(code *)0x4199b0)();
                              DAT_10163290 = (double)fVar51;
                              if ((uStack_408 & 1) == 0) {
                                FUN_10079850(param_2);
                              }
                              *param_1 = -1;
                              FUN_10007170((int *)&uStack_3c8);
                              goto LAB_10060cc2;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              *(ulonglong *)(param_1 + 0x10) = CONCAT44(pauStack_5dc,pauStack_5e0);
              *(undefined1 (**) [16])(param_1 + 0x20) = pauStack_5d0;
              *(ulonglong *)(param_1 + 0x18) =
                   CONCAT44(pauStack_5d4,CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8)));
              *(ulonglong *)param_1 =
                   CONCAT44(pauStack_5ec,
                            CONCAT22(uStack_5f0._2_2_,CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0)));
              *(ulonglong *)(param_1 + 8) = CONCAT44(pauStack_5e4,pauStack_5e8);
            }
            else {
              pvVar23 = FUN_10107380(0,0x140);
              if (pvVar23 == (LPVOID)0x0) {
                FUN_1013679e(0x40,0x100);
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              uVar33 = (uint)pvVar23 & 0xffffffc0;
              *(LPVOID *)(uVar33 + 0x3c) = pvVar23;
              *(undefined4 *)(uVar33 + 0x40) = 0;
              *(undefined4 *)(uVar33 + 0x44) = 0;
              *(undefined4 *)(uVar33 + 0x80) = 0;
              *(undefined4 *)(uVar33 + 0x84) = 0;
              *(undefined4 *)(uVar33 + 0xc0) = 0;
              *(undefined4 *)(uVar33 + 0xc4) = 0;
              *(undefined4 *)(uVar33 + 200) = 4;
              *(undefined4 *)(uVar33 + 0xcc) = 0;
              *(undefined4 *)(uVar33 + 0xd0) = 0;
              *(undefined4 *)(uVar33 + 0xd4) = 4;
              *(undefined4 *)(uVar33 + 0xd8) = 0;
              *(undefined1 *)(uVar33 + 0xdc) = 1;
              *(undefined4 *)(uVar33 + 0x100) = 1;
              *(undefined4 *)(uVar33 + 0x104) = 1;
              *(undefined1 *)(uVar33 + 0x108) = 0;
              puVar11 = FUN_10107380(0,0xc);
              if (puVar11 == (undefined4 *)0x0) {
                FUN_1013679e(4,0xc);
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              puVar39 = (uint *)(uVar33 + 0x40);
              *puVar11 = 1;
              puVar11[1] = puVar39;
              puVar11[2] = &pauStack_614;
              pauVar26 = (undefined1 (*) [16])0x10063a03;
              FUN_100190a0(&pauStack_62c,puVar11,&PTR_LAB_1013f12c);
              do {
                while( true ) {
                  uStack_5c8 = 0;
                  pauStack_5d0 = (undefined1 (*) [16])0x0;
                  uStack_5cc = 0;
                  uStack_5ca = 0;
                  uVar22 = FUN_1004e150(puVar39,(int)&uStack_5f0);
                  if ((char)uVar22 != '\0') break;
                  (*(code *)0x6ca2ac)();
                  FUN_1010f2e0();
                  uVar33 = CONCAT22(uStack_5f0._2_2_,CONCAT11(uStack_5f0._1_1_,(char)uStack_5f0));
                  if (pauStack_5e8 < (undefined1 (*) [16])0x3a699d00) {
                    pauVar27 = pauStack_5e8 + 0x1312d0;
                    pauVar26 = pauStack_5ec;
                  }
                  else if ((uVar33 & (uint)pauStack_5ec) == 0xffffffff) {
                    pauVar27 = (undefined1 (*) [16])0xffffffff;
                  }
                  else {
                    bVar45 = 0xfffffffe < uVar33;
                    uVar33 = uVar33 + 1;
                    pauVar27 = pauStack_5e8 + -0x3a699d0;
                    pauVar26 = (undefined1 (*) [16])(*pauStack_5ec + bVar45);
                  }
                  FUN_1004e780(puVar39,uVar33,(uint)pauVar26,(uint)pauVar27);
                }
                bVar45 = FUN_1004e300((LPVOID)uStack_5c8,uStack_5c8._4_4_);
              } while (!bVar45);
              FUN_1004ec40((char *)&uStack_5f0,&pauStack_62c);
              cVar7 = (char)uStack_5f0;
              if ((char)uStack_5f0 == -2) {
                pauStack_400 = pauStack_5ec;
                pauStack_3fc = pauStack_5e8;
                FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&pauStack_400,
                             &PTR_LAB_1013f0dc,&PTR_s_src_lib_rs_1013f0ec);
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              pauStack_1d0 = (undefined1 (*) [16])
                             CONCAT13(pauStack_5d4._0_1_,CONCAT21(uStack_5d6,uStack_5d7));
              uStack_1cc = (undefined1 (*) [16])CONCAT13(pauStack_5d0._0_1_,pauStack_5d4._1_3_);
              pauStack_1d8 = (undefined1 (*) [16])CONCAT43(pauStack_5dc,pauStack_5e0._1_3_);
              pauStack_1d4 = (undefined1 (*) [16])
                             (CONCAT17(uStack_5d8,CONCAT43(pauStack_5dc,pauStack_5e0._1_3_)) >> 0x20
                             );
              pauStack_1c8._0_3_ = (undefined3)((uint)pauStack_5d0 >> 8);
              uStack_1e8 = CONCAT44(CONCAT13(pauStack_5e8._0_1_,pauStack_5ec._1_3_),
                                    CONCAT13(pauStack_5ec._0_1_,
                                             CONCAT21(uStack_5f0._2_2_,uStack_5f0._1_1_)));
              pauStack_1e0 = (undefined1 (*) [16])CONCAT43(pauStack_5e4,pauStack_5e8._1_3_);
              pauStack_1dc = (undefined1 (*) [16])
                             (CONCAT17(pauStack_5e0._0_1_,CONCAT43(pauStack_5e4,pauStack_5e8._1_3_))
                             >> 0x20);
              FUN_10004630(puVar39);
              if (cVar7 == -1) goto LAB_10063e83;
              *(ulonglong *)(param_1 + 0x11) = CONCAT44(pauStack_1d4,pauStack_1d8);
              *(uint *)(param_1 + 0x20) = CONCAT31(pauStack_1c8._0_3_,uStack_1cc._3_1_);
              *(ulonglong *)(param_1 + 0x19) = CONCAT44(uStack_1cc,pauStack_1d0);
              *(undefined8 *)(param_1 + 1) = uStack_1e8;
              *(ulonglong *)(param_1 + 9) = CONCAT44(pauStack_1dc,pauStack_1e0);
              *param_1 = cVar7;
            }
LAB_100647d4:
            FUN_10007040((int *)&uStack_3c8);
            FUN_10007040(aiStack_398);
            FUN_10007040(aiStack_368);
            FUN_10007040(aiStack_338);
            FUN_10007040(aiStack_308);
            FUN_10007040(aiStack_2d8);
            FUN_10007040(aiStack_2a8);
            FUN_10007040(aiStack_278);
            FUN_10007040(aiStack_248);
            FUN_10007040(aiStack_218);
            goto LAB_10060cc2;
          }
        }
LAB_10063119:
        pauStack_690 = (undefined1 (*) [16])CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8));
        pauStack_6a4 = (undefined1 (*) [16])(uint)uStack_5f0._1_1_;
        uVar78 = CONCAT44(pauStack_5dc,pauStack_5e0);
        pauStack_6a0 = (undefined1 (*) [16])(uint)uStack_5f0._2_2_;
        pauStack_674 = pauStack_5d0;
        pauStack_670 = pauStack_5d4;
        pauVar26 = pauStack_5ec;
        pauVar43 = pauStack_5e4;
        pauVar27 = pauStack_5e8;
        cStack_69c = (char)uStack_5f0;
      }
      else {
        pauStack_690 = (undefined1 (*) [16])CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8));
        pauStack_6a4 = (undefined1 (*) [16])(uint)uStack_5f0._1_1_;
        uVar78 = CONCAT44(pauStack_5dc,pauStack_5e0);
        pauStack_6a0 = (undefined1 (*) [16])(uint)uStack_5f0._2_2_;
        pauStack_674 = pauStack_5d0;
        pauStack_670 = pauStack_5d4;
        pauVar26 = pauStack_5ec;
        pauVar43 = pauStack_5e4;
        pauVar27 = pauStack_5e8;
        cStack_69c = (char)uStack_5f0;
      }
    }
    goto LAB_10063d78;
  }
  pvStack_640 = (LPVOID)CONCAT22(uStack_5d6,CONCAT11(uStack_5d7,uStack_5d8));
  pauStack_670 = pauStack_5ec;
  pauStack_6a8 = pauStack_5d0;
  pauStack_6a4 = pauStack_5d4;
  uStack_644 = uStack_5f0._2_2_;
  pauStack_6a0._0_1_ = uStack_5f0._1_1_;
  pauVar43 = pauStack_5e8;
  pauStack_65c = pauStack_5e4;
  pauStack_658 = pauStack_5e0;
  pauStack_654 = pauStack_5dc;
  pauStack_690._0_1_ = (char)uStack_5f0;
  goto LAB_10060c98;
LAB_10063b2c:
  pauStack_6a4 = (undefined1 (*) [16])0x2;
LAB_10062ec5:
  cStack_69c = '\t';
  goto LAB_10063cd5;
LAB_10063b4f:
  cStack_69c = '\t';
  pauVar28 = (undefined1 (*) [16])(uint)(byte)(((byte)(bVar9 - 0x30) < 10) + 1);
  pauStack_6a4 = pauVar28;
  goto LAB_10063cd5;
LAB_100631f5:
  pauVar28 = (undefined1 (*) [16])(uint)(byte)(bVar9 - 0x30);
  pauStack_6a4 = (undefined1 (*) [16])(uint)(byte)(((byte)(bVar9 - 0x30) < 10) + 1);
  goto LAB_100629bd;
LAB_100629b3:
  pauStack_6a4 = (undefined1 (*) [16])0x1;
  goto LAB_100629bd;
LAB_10063231:
  pauStack_6a4 = (undefined1 (*) [16])0x2;
LAB_100629bd:
  cStack_69c = '\t';
LAB_10063cd5:
  pauStack_674 = (undefined1 (*) [16])0x0;
  pauStack_5fc = pauStack_670;
  uStack_5f8 = 0;
  uStack_5f4 = 0;
  pauStack_600 = pauVar28;
  if (pauVar43 != (undefined1 (*) [16])0x0) {
    pvVar12 = GetProcessHeap();
    HeapFree(pvVar12,0,pauVar42);
  }
LAB_10063d16:
  if (uStack_3c8._4_4_ != (undefined1 (*) [16])0x0) {
    pvVar23 = (undefined1 (*) [16])uStack_3c8;
    pvVar12 = GetProcessHeap();
    HeapFree(pvVar12,0,pvVar23);
  }
  CloseHandle(pauStack_3b4);
  uVar78 = CONCAT44(pauStack_5fc,pauStack_600);
  pauVar43 = pauStack_61c;
  pauVar27 = pauStack_660;
  pauStack_690 = pauVar36;
LAB_10063d78:
  *param_1 = cStack_69c;
  param_1[1] = (char)pauStack_6a4;
  *(undefined2 *)(param_1 + 2) = pauStack_6a0._0_2_;
  *(undefined1 (**) [16])(param_1 + 8) = pauVar27;
  *(undefined1 (**) [16])(param_1 + 4) = pauVar26;
  *(undefined1 (**) [16])(param_1 + 0xc) = pauVar43;
  *(ulonglong *)(param_1 + 0x10) = uVar78;
  *(undefined1 (**) [16])(param_1 + 0x18) = pauStack_690;
  *(undefined1 (**) [16])(param_1 + 0x1c) = pauStack_670;
  *(undefined1 (**) [16])(param_1 + 0x20) = pauStack_674;
  goto LAB_10060cc2;
LAB_10063c40:
  pauStack_600 = (undefined1 (*) [16])CONCAT31((int3)(uVar33 >> 8),1);
LAB_10064724:
  pauStack_660 = (undefined1 (*) [16])0x0;
  if (pauVar43 != (undefined1 (*) [16])0x0) {
    pvVar12 = GetProcessHeap();
    HeapFree(pvVar12,0,pauVar42);
  }
  pauStack_670 = pauStack_674;
  pauStack_674 = pauStack_690;
LAB_10064753:
  if (uStack_1e8._4_4_ != (undefined1 (*) [16])0x0) {
    pauVar43 = (undefined1 (*) [16])uStack_1e8;
    pvVar12 = GetProcessHeap();
    HeapFree(pvVar12,0,pauVar43);
  }
  CloseHandle(pauStack_1d4);
  uVar35 = (ushort)pauVar43;
LAB_10064781:
  (*(code *)0x405a7c)();
  *param_1 = (byte)pauStack_6a0;
  param_1[1] = (char)pauStack_600;
  *(ushort *)(param_1 + 2) = uVar35;
  *(undefined1 (**) [16])(param_1 + 4) = pauStack_670;
  *(undefined1 (**) [16])(param_1 + 8) = pauVar27;
  *(undefined1 (**) [16])(param_1 + 0xc) = pauStack_638;
  *(undefined1 (**) [16])(param_1 + 0x10) = pauStack_63c;
  *(undefined1 (**) [16])(param_1 + 0x14) = pauStack_690;
  *(undefined1 (**) [16])(param_1 + 0x18) = pauVar26;
  *(undefined1 (**) [16])(param_1 + 0x20) = pauStack_660;
  *(undefined1 (**) [16])(param_1 + 0x1c) = pauStack_674;
  goto LAB_100647d4;
LAB_1006383e:
  pauStack_660 = (undefined1 (*) [16])(*pauStack_660 + 1);
  if (pauStack_660 == pauStack_638) goto LAB_10063851;
  goto LAB_1006346f;
LAB_10062d32:
  pauStack_6a0 = (undefined1 (*) [16])(uint)(byte)(((byte)(bVar9 - 0x30) < 10) + 1);
  goto LAB_10060c2a;
LAB_10062a1e:
  pauStack_6a0 = (undefined1 (*) [16])0x2;
  goto LAB_10060c2a;
LAB_10060c24:
  pauStack_6a0 = (undefined1 (*) [16])0x1;
LAB_10060c2a:
  if (pauVar26 != (undefined1 (*) [16])0x0) {
    pvVar12 = GetProcessHeap();
    HeapFree(pvVar12,0,pauVar42);
  }
  pauStack_670 = pauVar36;
joined_r0x10061043:
  if (uStack_1e8._4_4_ != (undefined1 (*) [16])0x0) {
    pvVar23 = (undefined1 (*) [16])uStack_1e8;
    pvVar12 = GetProcessHeap();
    HeapFree(pvVar12,0,pvVar23);
  }
  CloseHandle(pauStack_1d4);
LAB_10060c98:
  *param_1 = (char)pauStack_690;
  param_1[1] = (byte)pauStack_6a0;
  *(ushort *)(param_1 + 2) = uStack_644;
  *(undefined1 (**) [16])(param_1 + 4) = pauStack_670;
  *(undefined1 (**) [16])(param_1 + 8) = pauVar43;
  *(undefined1 (**) [16])(param_1 + 0xc) = pauStack_65c;
  *(undefined1 (**) [16])(param_1 + 0x10) = pauStack_658;
  *(undefined1 (**) [16])(param_1 + 0x14) = pauStack_654;
  *(LPVOID *)(param_1 + 0x18) = pvStack_640;
  *(undefined1 (**) [16])(param_1 + 0x1c) = pauStack_6a4;
  *(undefined1 (**) [16])(param_1 + 0x20) = pauStack_6a8;
LAB_10060cc2:
  if (*param_2 != 0) {
    pvVar23 = (LPVOID)param_2[1];
    pvVar12 = GetProcessHeap();
    HeapFree(pvVar12,0,pvVar23);
  }
  return;
}
