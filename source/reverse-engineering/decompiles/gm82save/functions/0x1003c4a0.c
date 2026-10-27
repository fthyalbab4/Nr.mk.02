// rea decompile_all
// name: FUN_1003c4a0
// address: 0x1003c4a0
// body: available
// range: 0x1003c4a0-0x1003c7ce inclusive
// range: 0x1003c7d0-0x1003c873 inclusive
// range: 0x1003c880-0x1003c90e inclusive
// range: 0x1003c910-0x1003c961 inclusive
// range: 0x1003c970-0x1003ca14 inclusive
// range: 0x1003ca20-0x1003cabb inclusive
// range: 0x1003cac0-0x1003ce6c inclusive
// range: 0x1003ce70-0x1003d0b0 inclusive
// range: 0x1003d0c0-0x1003d190 inclusive
// range: 0x1003d1d0-0x1003d278 inclusive
// range: 0x1003d2c2-0x1003d2d6 inclusive
// range: 0x1003d2e0-0x1003d532 inclusive
// range: 0x1003d580-0x1003d624 inclusive
// range: 0x1003d630-0x1003d656 inclusive
// range: 0x1003d660-0x1003d6e9 inclusive
// range: 0x1003d6f0-0x1003d78b inclusive
// range: 0x1003d790-0x1003d8a4 inclusive
// range: 0x1003d8b0-0x1003d953 inclusive
// range: 0x1003d960-0x1003da04 inclusive
// range: 0x1003da10-0x1003daa6 inclusive
// range: 0x1003dabb-0x1003db1d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1003c4a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  byte *_Buf1;
  LPVOID pvVar4;
  int *piVar5;
  ushort uVar6;
  code *pcVar7;
  ushort uVar8;
  short sVar9;
  bool bVar10;
  undefined1 (*pauVar11) [16];
  byte *pbVar12;
  byte *_Size;
  size_t _Size_00;
  SIZE_T SVar13;
  bool bVar14;
  uint *puVar15;
  LPVOID pvVar16;
  HANDLE pvVar17;
  int iVar18;
  HANDLE hHeap;
  int iVar19;
  BOOL BVar20;
  byte bVar21;
  uint uVar22;
  undefined1 (*pauVar23) [16];
  byte bVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  uint uVar28;
  undefined1 (*pauVar29) [16];
  uint uVar30;
  void *pvVar31;
  int iVar32;
  SIZE_T _Size_01;
  undefined4 *puVar33;
  undefined1 (*pauVar34) [16];
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uVar42;
  undefined8 uVar43;
  byte *pbVar44;
  undefined1 (*pauStack_690) [16];
  int iStack_68c;
  uint uStack_688;
  int iStack_684;
  int iStack_67c;
  uint uStack_660;
  uint uStack_65c;
  void *pvStack_658;
  int iStack_64c;
  undefined1 (*pauStack_648) [16];
  int iStack_640;
  int iStack_62c;
  undefined8 uStack_61c;
  undefined2 local_614;
  undefined2 uStack_612;
  undefined4 local_610;
  undefined4 local_60c;
  undefined2 local_608;
  int iStack_5fc;
  undefined1 *local_5f8;
  HANDLE local_5f4;
  byte *pbStack_5f0;
  int iStack_5ec;
  int iStack_5e8;
  undefined1 (*pauStack_5e4) [16];
  void *pvStack_5e0;
  undefined8 uStack_5dc;
  int iStack_5d4;
  void *local_5d0;
  uint local_5cc;
  uint local_5c8;
  uint local_5c4;
  uint local_5c0;
  uint uStack_5bc;
  uint uStack_5b8;
  uint uStack_5b4;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  int local_590;
  int iStack_57c;
  HANDLE pvStack_578;
  int iStack_574;
  LPVOID pvStack_570;
  int iStack_56c;
  int local_568;
  undefined1 *local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined8 uStack_554;
  uint uStack_54c;
  undefined1 uStack_548;
  undefined4 uStack_547;
  undefined7 uStack_543;
  undefined4 uStack_53c;
  undefined2 uStack_538;
  undefined1 uStack_536;
  byte *pbStack_450;
  byte *pbStack_44c;
  byte *pbStack_448;
  int local_444;
  undefined4 local_440;
  undefined4 uStack_43c;
  int iStack_438;
  undefined8 uStack_434;
  undefined1 auStack_42c [520];
  byte abStack_224 [4];
  void *pvStack_220;
  size_t sStack_21c;
  uint uStack_124;
  void *pvStack_120;
  size_t sStack_11c;

  local_614 = 0;
  uStack_61c = (ulonglong)(uint)uStack_61c;
  local_5f8 = (undefined1 *)param_1;
  local_5f4 = (HANDLE)param_2;
  puVar15 = FUN_10093010();
  if (puVar15 == (uint *)0x0) {
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  uVar25 = *puVar15;
  uVar28 = puVar15[1];
  uVar30 = puVar15[2];
  uVar22 = puVar15[3];
  puVar15[1] = puVar15[1] + (uint)(0xfffffffe < uVar25);
  *puVar15 = uVar25 + 1;
  pvVar16 = FUN_10107380(0,0x42420);
  if (pvVar16 == (LPVOID)0x0) {
    FUN_1013679e(0x10,0x42410);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  *(LPVOID *)(((uint)pvVar16 & 0xfffffff0) + 0xc) = pvVar16;
  pvVar31 = (void *)(((uint)pvVar16 & 0xfffffff0) + 0x42010);
  memset(pvVar31,0xff,0x410);
  local_610 = 0x1000000;
  local_444 = 0;
  local_440 = 0;
  local_5b0 = 0;
  local_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0;
  local_5cc = 0x3ff;
  local_5c8 = 0x380;
  local_5c4 = 0;
  local_60c = uStack_61c._4_4_;
  local_590 = 0;
  local_568 = 0;
  local_564 = &DAT_00000008;
  local_560 = 0;
  local_55c = 0xffffffff;
  uStack_554 = (ulonglong)(uint)uStack_554;
  local_608 = local_614;
  local_5d0 = pvVar31;
  local_5c0 = uVar25;
  uStack_5bc = uVar28;
  uStack_5b8 = uVar30;
  uStack_5b4 = uVar22;
  (*(code *)PTR_FUN_101631b4)(&local_444);
  uVar42 = 0;
  if ((SBORROW4(local_444,0x19db1de) !=
      SBORROW4(local_444 + -0x19db1de,(uint)(pbStack_448 < (byte *)0xd53e8000))) ==
      (int)((local_444 + -0x19db1de) - (uint)(pbStack_448 < (byte *)0xd53e8000)) < 0) {
    uVar42 = __aulldiv((uint)(pbStack_448 + 0x2ac18000),
                       local_444 + -0x19db1df + (uint)((byte *)0xd53e7fff < pbStack_448),10000000,0)
    ;
  }
  pvVar17 = (HANDLE)CreateToolhelp32Snapshot(2,0);
  if (0xfffffffd < (int)pvVar17 - 1U) {
    GetLastError();
    iStack_68c = iStack_5d4;
    pvVar31 = local_5d0;
    goto joined_r0x1003cfbe;
  }
  memset(auStack_42c,0,0x208);
  pbStack_450 = (byte *)0x22c;
  pbStack_44c = (byte *)0x0;
  pbStack_448 = (byte *)0x0;
  local_444 = 0;
  local_440 = 0;
  uStack_43c = 0;
  iStack_438 = 0;
  uStack_434 = 0;
  iVar18 = Process32FirstW(pvVar17,&pbStack_450);
  if (iVar18 != 0) {
LAB_1003c6f0:
    pbVar12 = pbStack_448;
    uStack_660 = (uint)((ulonglong)uVar42 >> 0x20);
    uStack_65c = (uint)uVar42;
    if (local_5d0 != (void *)0x0) {
      uVar43 = FUN_1002e000(local_5cc,local_5c8,local_5c4,local_5c0,(uint)pbStack_448);
      uVar25 = (uint)uVar43;
      iVar18 = 0;
      bVar21 = (byte)((ulonglong)uVar43 >> 0x18) >> 1;
      auVar36 = ZEXT216(CONCAT11(bVar21,bVar21));
      auVar36 = pshuflw(auVar36,auVar36,0);
      while( true ) {
        uVar25 = uStack_5dc._4_4_ & uVar25;
        auVar41 = *(undefined1 (*) [16])((int)(undefined1 (*) [16])uStack_5dc + uVar25);
        auVar39[0] = -(auVar41[0] == auVar36[0]);
        auVar39[1] = -(auVar41[1] == auVar36[1]);
        auVar39[2] = -(auVar41[2] == auVar36[2]);
        auVar39[3] = -(auVar41[3] == auVar36[3]);
        auVar39[4] = -(auVar41[4] == auVar36[4]);
        auVar39[5] = -(auVar41[5] == auVar36[5]);
        auVar39[6] = -(auVar41[6] == auVar36[6]);
        auVar39[7] = -(auVar41[7] == auVar36[7]);
        auVar39[8] = -(auVar41[8] == auVar36[0]);
        auVar39[9] = -(auVar41[9] == auVar36[1]);
        auVar39[10] = -(auVar41[10] == auVar36[2]);
        auVar39[0xb] = -(auVar41[0xb] == auVar36[3]);
        auVar39[0xc] = -(auVar41[0xc] == auVar36[4]);
        auVar39[0xd] = -(auVar41[0xd] == auVar36[5]);
        auVar39[0xe] = -(auVar41[0xe] == auVar36[6]);
        auVar39[0xf] = -(auVar41[0xf] == auVar36[7]);
        uVar28 = (uint)(ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar39[0xf] >> 7) << 0xf);
        while ((short)uVar28 != 0) {
          iVar32 = 0;
          for (uVar30 = uVar28; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
            iVar32 = iVar32 + 1;
          }
          uVar28 = uVar28 - 1 & uVar28;
          iVar32 = (iVar32 + uVar25 & uStack_5dc._4_4_) * -0x108;
          if (pbVar12 == *(byte **)((int)(undefined1 (*) [16])uStack_5dc + -0x108 + iVar32)) {
            iVar32 = (int)(undefined1 (*) [16])uStack_5dc + iVar32;
            FUN_1011d860((uint *)(iVar32 + -0x100),(char *)&uStack_61c,0,0,uStack_65c,uStack_660);
            *(uint *)(iVar32 + -0x100) = (uint)(iStack_438 != 0);
            *(int *)(iVar32 + -0xfc) = iStack_438;
            goto LAB_1003c80e;
          }
        }
        auVar37[0] = -(auVar41[0] == -1);
        auVar37[1] = -(auVar41[1] == -1);
        auVar37[2] = -(auVar41[2] == -1);
        auVar37[3] = -(auVar41[3] == -1);
        auVar37[4] = -(auVar41[4] == -1);
        auVar37[5] = -(auVar41[5] == -1);
        auVar37[6] = -(auVar41[6] == -1);
        auVar37[7] = -(auVar41[7] == -1);
        auVar37[8] = -(auVar41[8] == -1);
        auVar37[9] = -(auVar41[9] == -1);
        auVar37[10] = -(auVar41[10] == -1);
        auVar37[0xb] = -(auVar41[0xb] == -1);
        auVar37[0xc] = -(auVar41[0xc] == -1);
        auVar37[0xd] = -(auVar41[0xd] == -1);
        auVar37[0xe] = -(auVar41[0xe] == -1);
        auVar37[0xf] = -(auVar41[0xf] == -1);
        if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x1f,0) & 1) != 0) || (SUB161(auVar37 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
        uVar25 = uVar25 + 0x10 + iVar18;
        iVar18 = iVar18 + 0x10;
      }
    }
    uStack_554 = 0x100000000;
    uStack_54c = 0;
    FUN_101359e0((uint *)&uStack_554,0,0x82,(LPVOID)0x1,1);
    bVar14 = false;
    iStack_67c = 0x24;
    do {
      uVar25 = uStack_54c;
      if (bVar14) {
        uVar28 = uStack_688 & 0xffff;
        if ((uStack_688 & 0xf800) != 0xd800) goto LAB_1003c945;
LAB_1003c8ae:
        uVar30 = 0xfffd;
        if (iStack_67c == 0x22c || 0xdbff < uVar28) {
LAB_1003c9a3:
          uVar28 = uVar30;
          bVar27 = false;
        }
        else {
          uVar6 = *(ushort *)((int)&pbStack_450 + iStack_67c);
          iStack_67c = iStack_67c + 2;
          if (0xfbff < (ushort)(uVar6 + 0x2000)) {
            uVar30 = (uVar28 & 0x3ff) * 0x400 + 0x10000 + (uVar6 & 0x3ff);
            goto LAB_1003c9a3;
          }
          uStack_688 = CONCAT22(uStack_688._2_2_,uVar6);
          uVar28 = uVar30;
          bVar27 = true;
        }
LAB_1003c9ac:
        uVar30 = 4 - (uVar28 < 0x10000);
        bVar10 = false;
        bVar14 = bVar27;
      }
      else {
        if (iStack_67c == 0x22c) goto LAB_1003ca9d;
        uVar28 = (uint)*(ushort *)((int)&pbStack_450 + iStack_67c);
        iStack_67c = iStack_67c + 2;
        if ((uVar28 & 0xf800) == 0xd800) goto LAB_1003c8ae;
LAB_1003c945:
        if (uVar28 < 0x80) {
          uVar30 = 1;
          bVar10 = true;
          bVar14 = false;
        }
        else {
          uVar30 = 2;
          bVar14 = false;
          bVar10 = false;
          bVar27 = bVar10;
          if (0x7ff < uVar28) goto LAB_1003c9ac;
        }
      }
      if ((uint)uStack_554 - uStack_54c < uVar30) {
        FUN_101359e0((uint *)&uStack_554,uStack_54c,uVar30,(LPVOID)0x1,1);
      }
      if (bVar10) {
        *(byte *)((int)uStack_554._4_4_ + uVar25) = (byte)uVar28;
      }
      else {
        bVar21 = (byte)uVar28 & 0x3f | 0x80;
        bVar35 = (byte)(uVar28 >> 6);
        if (uVar28 < 0x800) {
          *(byte *)((int)uStack_554._4_4_ + uVar25) = bVar35 | 0xc0;
          *(byte *)((int)uStack_554._4_4_ + 1 + uVar25) = bVar21;
        }
        else {
          bVar24 = bVar35 & 0x3f | 0x80;
          bVar35 = (byte)(uVar28 >> 0xc);
          if (uVar28 < 0x10000) {
            *(byte *)((int)uStack_554._4_4_ + uVar25) = bVar35 | 0xe0;
            *(byte *)((int)uStack_554._4_4_ + 1 + uVar25) = bVar24;
            *(byte *)((int)uStack_554._4_4_ + 2 + uVar25) = bVar21;
          }
          else {
            *(byte *)((int)uStack_554._4_4_ + uVar25) = (byte)(uVar28 >> 0x12) | 0xf0;
            *(byte *)((int)uStack_554._4_4_ + 1 + uVar25) = bVar35 & 0x3f | 0x80;
            *(byte *)((int)uStack_554._4_4_ + 2 + uVar25) = bVar24;
            *(byte *)((int)uStack_554._4_4_ + 3 + uVar25) = bVar21;
          }
        }
      }
      uStack_54c = uVar30 + uVar25;
    } while( true );
  }
  GetLastError();
LAB_1003cfab:
  CloseHandle(pvVar17);
  iStack_68c = iStack_5d4;
  pvVar31 = local_5d0;
joined_r0x1003cfbe:
  iStack_5d4 = iStack_68c;
  local_5d0 = pvVar31;
  if (pvVar31 == (void *)0x0) {
    pvStack_658 = (void *)0x0;
  }
  else {
    pauVar11 = (undefined1 (*) [16])uStack_5dc;
    uStack_5dc._4_4_ = (uint)((ulonglong)uStack_5dc >> 0x20);
    uVar25 = uStack_5dc._4_4_;
    auVar36 = *(undefined1 (*) [16])uStack_5dc;
    pauVar29 = (undefined1 (*) [16])uStack_5dc + 1;
    uVar28 = ~(uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar36[0xf] >> 7) << 0xf);
    pauVar23 = (undefined1 (*) [16])uStack_5dc;
    pauStack_690 = pvVar31;
    iStack_684 = iStack_68c;
    pvStack_658 = pvVar31;
    do {
      if ((short)uVar28 == 0) {
        do {
          auVar36 = *pauVar29;
          pauVar23 = pauVar23 + -0x108;
          pauVar29 = pauVar29 + 1;
          uVar28 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar28 == 0);
      }
      iVar18 = 0;
      for (uVar30 = uVar28; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
        iVar18 = iVar18 + 1;
      }
      uVar28 = uVar28 - 1 & uVar28;
      iVar32 = iVar18 * -0x108;
      cVar3 = *(char *)((int)pauVar23 + iVar32 + -8);
      *(undefined1 *)((int)pauVar23 + iVar32 + -8) = 0;
      if (cVar3 == '\0') {
        iVar18 = ((int)pauVar11 + (iVar18 * 0x108 - (int)pauVar23) >> 3) * 0x3e0f83e1;
        pcVar2 = (char *)((int)pauVar11 + iVar18);
        uVar30 = iVar18 - 0x10U & uVar25;
        auVar41[0] = -(*pcVar2 == -1);
        auVar41[1] = -(pcVar2[1] == -1);
        auVar41[2] = -(pcVar2[2] == -1);
        auVar41[3] = -(pcVar2[3] == -1);
        auVar41[4] = -(pcVar2[4] == -1);
        auVar41[5] = -(pcVar2[5] == -1);
        auVar41[6] = -(pcVar2[6] == -1);
        auVar41[7] = -(pcVar2[7] == -1);
        auVar41[8] = -(pcVar2[8] == -1);
        auVar41[9] = -(pcVar2[9] == -1);
        auVar41[10] = -(pcVar2[10] == -1);
        auVar41[0xb] = -(pcVar2[0xb] == -1);
        auVar41[0xc] = -(pcVar2[0xc] == -1);
        auVar41[0xd] = -(pcVar2[0xd] == -1);
        auVar41[0xe] = -(pcVar2[0xe] == -1);
        auVar41[0xf] = -(pcVar2[0xf] == -1);
        pcVar2 = *pauVar11 + uVar30;
        auVar36[0] = -(*pcVar2 == -1);
        auVar36[1] = -(pcVar2[1] == -1);
        auVar36[2] = -(pcVar2[2] == -1);
        auVar36[3] = -(pcVar2[3] == -1);
        auVar36[4] = -(pcVar2[4] == -1);
        auVar36[5] = -(pcVar2[5] == -1);
        auVar36[6] = -(pcVar2[6] == -1);
        auVar36[7] = -(pcVar2[7] == -1);
        auVar36[8] = -(pcVar2[8] == -1);
        auVar36[9] = -(pcVar2[9] == -1);
        auVar36[10] = -(pcVar2[10] == -1);
        auVar36[0xb] = -(pcVar2[0xb] == -1);
        auVar36[0xc] = -(pcVar2[0xc] == -1);
        auVar36[0xd] = -(pcVar2[0xd] == -1);
        auVar36[0xe] = -(pcVar2[0xe] == -1);
        auVar36[0xf] = -(pcVar2[0xf] == -1);
        uVar8 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
        uVar6 = 0xf;
        if (uVar8 != 0) {
          for (; uVar8 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        if (uVar8 == 0) {
          uVar6 = 0x1f;
        }
        sVar9 = 0;
        for (uVar22 = (ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar41[0xf] >> 7) << 0xf) | 0x10000; (uVar22 & 1) == 0;
            uVar22 = uVar22 >> 1 | 0x80000000) {
          sVar9 = sVar9 + 1;
        }
        bVar14 = (ushort)(sVar9 + (uVar6 ^ 0xf)) < 0x10;
        iVar1 = iStack_684 + 1;
        if (bVar14) {
          iStack_684 = iVar1;
          iStack_68c = iVar1;
        }
        bVar21 = -bVar14 | 0x80;
        *(byte *)((int)pauVar11 + iVar18) = bVar21;
        pauVar11[1][uVar30] = bVar21;
        pauStack_690 = (undefined1 (*) [16])((int)pauStack_690 + -1);
        FUN_1011f470((int)pauVar23 + iVar32 + -0x100);
        pvStack_658 = pauStack_690;
      }
      pvVar31 = (void *)((int)pvVar31 + -1);
    } while (pvVar31 != (void *)0x0);
    iStack_5d4 = iStack_68c;
    local_5d0 = pvStack_658;
  }
  iVar1 = local_590;
  pauVar11 = local_5a0._4_4_;
  iVar18 = uStack_5dc._4_4_;
  pauVar29 = (undefined1 (*) [16])uStack_5dc;
  iStack_5e8 = iStack_574;
  iStack_62c = iStack_56c;
  iVar32 = (int)local_598;
  iStack_5ec = local_568;
  iStack_64c = local_590;
  local_5f4 = pvStack_578;
  local_5f8 = local_564;
  FUN_10119e60((undefined8 *)&pbStack_450);
  _Size = pbStack_448;
  pbVar12 = pbStack_44c;
  pbStack_5f0 = pbStack_450;
  if (pbStack_450 == (byte *)0xffffffff) {
    uStack_554 = CONCAT44(pbStack_448,pbStack_44c);
    FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_554,&PTR_FUN_1013f548,
                 &PTR_s_src_lib_rs_10140558);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  auVar36 = *pauVar29;
  iStack_5fc = iStack_57c;
  pauStack_648 = pauVar29 + 1;
  uVar25 = 0;
  uVar28 = ~(uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar36[0xf] >> 7) << 0xf);
  pauVar23 = pauStack_648;
  pvVar31 = pvStack_658;
  pauVar34 = pauVar29;
  do {
    if ((short)uVar28 == 0) {
      if (pvVar31 == (void *)0x0) {
        if (uVar25 < 2) {
          (*(code *)0x716b78)();
        }
        if (pbStack_5f0 != (byte *)0x0) {
          pvVar17 = GetProcessHeap();
          HeapFree(pvVar17,0,pbVar12);
        }
        if (iVar18 != 0) {
          if (pvStack_658 != (void *)0x0) {
            auVar36 = *pauVar29;
            pauStack_690 = pauVar29;
            uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar36[0xf] >> 7) << 0xf);
            do {
              if ((short)uVar25 == 0) {
                do {
                  auVar36 = *pauStack_648;
                  pauStack_690 = pauStack_690 + -0x108;
                  pauStack_648 = pauStack_648 + 1;
                  uVar25 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar25 == 0);
              }
              iVar19 = 0;
              for (uVar28 = uVar25; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
                iVar19 = iVar19 + 1;
              }
              iVar19 = iVar19 * -0x108;
              if (*(int *)((int)pauStack_690 + iVar19 + -0xc0) != 0) {
                pvVar16 = *(LPVOID *)((int)pauStack_690 + iVar19 + -0xbc);
                pvVar17 = GetProcessHeap();
                HeapFree(pvVar17,0,pvVar16);
              }
              iVar26 = *(int *)((int)pauStack_690 + iVar19 + -0x30);
              pvVar16 = *(LPVOID *)((int)pauStack_690 + iVar19 + -0x34);
              if (iVar26 != 0) {
                puVar33 = (undefined4 *)((int)pvVar16 + 4);
                do {
                  if (puVar33[-1] != 0) {
                    pvVar4 = (LPVOID)*puVar33;
                    pvVar17 = GetProcessHeap();
                    HeapFree(pvVar17,0,pvVar4);
                  }
                  puVar33 = puVar33 + 4;
                  iVar26 = iVar26 + -1;
                } while (iVar26 != 0);
              }
              if (*(int *)((int)pauStack_690 + iVar19 + -0x38) != 0) {
                pvVar17 = GetProcessHeap();
                HeapFree(pvVar17,0,pvVar16);
              }
              if (0 < *(int *)((int)pauStack_690 + iVar19 + -0xb0)) {
                pvVar16 = *(LPVOID *)((int)pauStack_690 + iVar19 + -0xac);
                pvVar17 = GetProcessHeap();
                HeapFree(pvVar17,0,pvVar16);
              }
              if (0 < *(int *)((int)pauStack_690 + iVar19 + -0x20)) {
                pvVar16 = *(LPVOID *)((int)pauStack_690 + iVar19 + -0x1c);
                pvVar17 = GetProcessHeap();
                HeapFree(pvVar17,0,pvVar16);
              }
              iVar26 = *(int *)((int)pauStack_690 + iVar19 + -0x24);
              pvVar16 = *(LPVOID *)((int)pauStack_690 + iVar19 + -0x28);
              if (iVar26 != 0) {
                puVar33 = (undefined4 *)((int)pvVar16 + 4);
                do {
                  if (puVar33[-1] != 0) {
                    pvVar4 = (LPVOID)*puVar33;
                    pvVar17 = GetProcessHeap();
                    HeapFree(pvVar17,0,pvVar4);
                  }
                  puVar33 = puVar33 + 4;
                  iVar26 = iVar26 + -1;
                } while (iVar26 != 0);
              }
              if (*(int *)((int)pauStack_690 + iVar19 + -0x2c) != 0) {
                pvVar17 = GetProcessHeap();
                HeapFree(pvVar17,0,pvVar16);
              }
              if (0 < *(int *)((int)pauStack_690 + iVar19 + -0xa0)) {
                pvVar16 = *(LPVOID *)((int)pauStack_690 + iVar19 + -0x9c);
                pvVar17 = GetProcessHeap();
                HeapFree(pvVar17,0,pvVar16);
              }
              if (0 < *(int *)((int)pauStack_690 + iVar19 + -0x90)) {
                pvVar16 = *(LPVOID *)((int)pauStack_690 + iVar19 + -0x8c);
                pvVar17 = GetProcessHeap();
                HeapFree(pvVar17,0,pvVar16);
              }
              piVar5 = *(int **)((int)pauStack_690 + iVar19 + -0x10);
              if (piVar5 != (int *)0x0) {
                LOCK();
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (*piVar5 == 0) {
                  FUN_1011f600(*(LPVOID *)((int)pauStack_690 + iVar19 + -0x10));
                }
              }
              uVar25 = uVar25 - 1 & uVar25;
              pvStack_658 = (void *)((int)pvStack_658 + -1);
            } while (pvStack_658 != (void *)0x0);
          }
          uVar25 = iVar18 * 0x108 + 0x117U & 0xfffffff0;
          if (iVar18 + uVar25 != -0x11) {
            pvVar16 = *(LPVOID *)((int)pauVar29 + (-4 - uVar25));
            pvVar17 = GetProcessHeap();
            HeapFree(pvVar17,0,pvVar16);
          }
        }
        if (0 < iStack_5ec) {
          pvVar17 = GetProcessHeap();
          HeapFree(pvVar17,0,local_5f8);
        }
        if (iStack_56c != 0) {
          puVar33 = (undefined4 *)((int)pvStack_570 + 0x34);
          do {
            if (puVar33[-7] != 0) {
              pvVar16 = (LPVOID)puVar33[-6];
              pvVar17 = GetProcessHeap();
              HeapFree(pvVar17,0,pvVar16);
            }
            if (puVar33[-4] != 0) {
              pvVar16 = (LPVOID)puVar33[-3];
              pvVar17 = GetProcessHeap();
              HeapFree(pvVar17,0,pvVar16);
            }
            if (0 < (int)puVar33[-0xd]) {
              pvVar16 = (LPVOID)puVar33[-0xc];
              pvVar17 = GetProcessHeap();
              HeapFree(pvVar17,0,pvVar16);
            }
            if (puVar33[-1] != 0) {
              pvVar16 = (LPVOID)*puVar33;
              pvVar17 = GetProcessHeap();
              HeapFree(pvVar17,0,pvVar16);
            }
            puVar33 = puVar33 + 0x10;
            iStack_62c = iStack_62c + -1;
          } while (iStack_62c != 0);
        }
        if (iStack_5e8 != 0) {
          pvVar17 = GetProcessHeap();
          HeapFree(pvVar17,0,pvStack_570);
        }
        if (pauVar11 != (undefined1 (*) [16])0x0) {
          if (iVar1 != 0) {
            auVar36 = *pauVar11;
            pauVar29 = pauVar11 + 1;
            uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar36[0xf] >> 7) << 0xf);
            iVar18 = iVar1;
            pauVar23 = pauVar11;
            do {
              if ((short)uVar25 == 0) {
                do {
                  auVar36 = *pauVar29;
                  pauVar23 = pauVar23 + -0x10;
                  pauVar29 = pauVar29 + 1;
                  uVar25 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar25 == 0);
              }
              iVar19 = 0;
              for (uVar28 = uVar25; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
                iVar19 = iVar19 + 1;
              }
              uVar25 = uVar25 - 1 & uVar25;
              PdhRemoveCounter(*(undefined4 *)(pauVar23[-1 - iVar19] + 0xc));
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          if (((int)local_5f4 - 1U < 0xfffffffe) && (BVar20 = CloseHandle(local_5f4), BVar20 == 0))
          {
            GetLastError();
          }
          if (iStack_5fc != 0) {
            PdhCloseQuery(iStack_5fc);
          }
          if (iVar32 != 0) {
            if (iVar1 != 0) {
              auVar36 = *pauVar11;
              pauVar29 = pauVar11 + 1;
              uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar36[0xf] >> 7) << 0xf);
              pauVar23 = pauVar11;
              do {
                if ((short)uVar25 == 0) {
                  do {
                    auVar36 = *pauVar29;
                    pauVar23 = pauVar23 + -0x10;
                    pauVar29 = pauVar29 + 1;
                    uVar25 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar25 == 0);
                }
                iVar18 = 0;
                for (uVar28 = uVar25; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
                  iVar18 = iVar18 + 1;
                }
                if (*(int *)pauVar23[-1 - iVar18] != 0) {
                  pvVar16 = *(LPVOID *)(pauVar23[-1 - iVar18] + 4);
                  pvVar17 = GetProcessHeap();
                  HeapFree(pvVar17,0,pvVar16);
                }
                uVar25 = uVar25 - 1 & uVar25;
                iStack_64c = iStack_64c + -1;
              } while (iStack_64c != 0);
            }
            if (iVar32 * 0x11 != -0x21) {
              pvVar16 = *(LPVOID *)(pauVar11[-2 - iVar32] + 0xc);
              pvVar17 = GetProcessHeap();
              HeapFree(pvVar17,0,pvVar16);
            }
          }
        }
        return;
      }
      do {
        auVar36 = *pauVar23;
        pauVar34 = pauVar34 + -0x108;
        pauVar23 = pauVar23 + 1;
        uVar28 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar28 == 0);
    }
    iVar19 = 0;
    for (uVar30 = uVar28; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
      iVar19 = iVar19 + 1;
    }
    iVar19 = iVar19 * -0x108;
    if (*(int *)((int)pauVar34 + iVar19 + -0xb0) == -1) {
      uVar30 = 0;
    }
    else {
      _Buf1 = *(byte **)((int)pauVar34 + iVar19 + -0xac);
      pbVar44 = *(byte **)((int)pauVar34 + iVar19 + -0xa8);
      pvStack_5e0 = pvVar31;
      FUN_1010a5e0((undefined1 *)&pbStack_450,_Buf1,(uint)pbVar44);
      bVar21 = (byte)pbStack_450;
      if (((uint)pbStack_450 & 0xff) < 6) {
                    /* WARNING: Could not recover jumptable at 0x1003d18f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*(int *)(&DAT_1003db20 + ((uint)pbStack_450 & 0xff) * 4) + iStack_640))();
        return;
      }
      if (pbVar44 == (byte *)0x0) {
        bVar14 = false;
      }
      else {
        bVar14 = *_Buf1 == 0x2f || *_Buf1 == 0x5c;
      }
      uStack_61c = CONCAT17(pbStack_448._0_1_,CONCAT43(pbStack_44c,pbStack_450._1_3_));
      local_60c._0_3_ = (undefined3)((uint)local_440 >> 8);
      local_614 = (undefined2)((uint)pbStack_448 >> 8);
      uStack_612 = (undefined2)(CONCAT43(local_444,pbStack_448._1_3_) >> 0x10);
      local_610 = (undefined4)
                  (CONCAT17((undefined1)local_440,CONCAT43(local_444,pbStack_448._1_3_)) >> 0x20);
      pauStack_5e4 = pauVar34;
      FUN_1010a5e0((undefined1 *)&pbStack_450,pbVar12,(uint)_Size);
      bVar35 = (byte)pbStack_450;
      if (((uint)pbStack_450 & 0xff) < 6) {
                    /* WARNING: Could not recover jumptable at 0x1003d277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*(int *)(&DAT_1003db38 + ((uint)pbStack_450 & 0xff) * 4) + iStack_640))();
        return;
      }
      if (_Size == (byte *)0x0) {
        bVar27 = false;
      }
      else {
        bVar27 = *pbVar12 == 0x2f || *pbVar12 == 0x5c;
      }
      uStack_5dc = CONCAT17(pbStack_448._0_1_,CONCAT43(pbStack_44c,pbStack_450._1_3_));
      local_5cc._0_3_ = (undefined3)((uint)local_440 >> 8);
      iStack_5d4 = (int)CONCAT43(local_444,pbStack_448._1_3_);
      local_5d0 = (void *)(CONCAT17((undefined1)local_440,CONCAT43(local_444,pbStack_448._1_3_)) >>
                          0x20);
      if (((pbVar44 == _Size) && ((byte)pbStack_450 < 3 == bVar21 < 3)) &&
         (iVar19 = memcmp(_Buf1,pbVar12,(size_t)_Size), iVar19 == 0)) {
        uVar30 = 1;
        pvVar31 = pvStack_5e0;
        pauVar34 = pauStack_5e4;
      }
      else {
        uStack_554 = CONCAT44(pbVar44,_Buf1);
        uStack_54c._1_3_ = (undefined3)uStack_61c;
        uStack_54c = CONCAT31(uStack_54c._1_3_,bVar21);
        uStack_548 = (undefined1)(uStack_61c >> 0x18);
        uStack_547 = (undefined4)(uStack_61c >> 0x20);
        uStack_543 = (undefined7)CONCAT44(local_610,CONCAT22(uStack_612,local_614));
        uStack_53c._0_1_ = (undefined1)((uint)local_610 >> 0x18);
        uStack_53c = CONCAT31((int3)local_60c,(undefined1)uStack_53c);
        uStack_538 = 0x200;
        pbStack_450 = pbVar12;
        pbStack_44c = _Size;
        uStack_43c = (undefined4)(CONCAT44(local_5d0,iStack_5d4) >> 0x18);
        iStack_438._0_1_ = (undefined1)((uint)local_5d0 >> 0x18);
        iStack_438 = CONCAT31((int3)local_5cc,(undefined1)iStack_438);
        pbStack_448._1_3_ = (undefined3)uStack_5dc;
        pbStack_448 = (byte *)CONCAT31(pbStack_448._1_3_,bVar35);
        local_444 = (int)((ulonglong)uStack_5dc >> 0x18);
        local_440._0_1_ = (undefined1)((ulonglong)uStack_5dc >> 0x38);
        local_440 = CONCAT31((int3)iStack_5d4,(undefined1)local_440);
        uStack_434._0_3_ = CONCAT12(bVar27,0x200);
        uStack_536 = bVar14;
        do {
          while( true ) {
            FUN_101102a0((byte *)&uStack_124,(int *)&uStack_554);
            _Size_00 = sStack_11c;
            bVar21 = (byte)uStack_124;
            uVar30 = (uint)(byte)uStack_124;
            if (uVar30 == 0xff) {
              FUN_101102a0(abStack_224,(int *)&pbStack_450);
              uVar30 = (uint)(abStack_224[0] == 0xff);
              pvVar31 = pvStack_5e0;
              pauVar34 = pauStack_5e4;
              goto LAB_1003d0c2;
            }
            pvVar31 = pvStack_120;
            FUN_101102a0(abStack_224,(int *)&pbStack_450);
            if (abStack_224[0] == 0xff) goto LAB_1003d580;
            iVar19 = uVar30 - 5;
            if (bVar21 < 6) {
              iVar19 = 0;
            }
            iVar26 = abStack_224[0] - 5;
            if (abStack_224[0] < 6) {
              iVar26 = 0;
            }
            if (iVar19 != iVar26) goto LAB_1003d580;
            if (iVar19 != 4) break;
            if ((_Size_00 != sStack_21c) ||
               (iVar19 = memcmp(pvVar31,pvStack_220,_Size_00), iVar19 != 0)) goto LAB_1003d580;
          }
        } while (iVar19 != 0);
        if (bVar21 == abStack_224[0]) {
                    /* WARNING: Could not recover jumptable at 0x1003d512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(*(int *)(&DAT_1003db50 + uVar30 * 4) + iStack_640))();
          return;
        }
LAB_1003d580:
        uVar30 = 0;
        pvVar31 = pvStack_5e0;
        pauVar34 = pauStack_5e4;
      }
    }
LAB_1003d0c2:
    pvVar31 = (void *)((int)pvVar31 + -1);
    uVar28 = uVar28 - 1 & uVar28;
    uVar25 = uVar25 + uVar30;
  } while( true );
LAB_1003ca9d:
  pvVar31 = uStack_554._4_4_;
  SVar13 = uStack_54c;
  do {
    while( true ) {
      _Size_01 = SVar13;
      if (_Size_01 == 0) {
        _Size_01 = 0;
        pvVar16 = (LPVOID)0x1;
        goto LAB_1003cb4c;
      }
      bVar21 = *(byte *)((int)uStack_554._4_4_ + (_Size_01 - 1));
      if (-1 < (char)bVar21) break;
      bVar35 = *(byte *)((int)uStack_554._4_4_ + (_Size_01 - 2));
      if ((char)bVar35 < -0x40) {
        bVar24 = *(byte *)((int)uStack_554._4_4_ + (_Size_01 - 3));
        if ((char)bVar24 < -0x40) {
          SVar13 = _Size_01 - 4;
          uVar25 = bVar24 & 0x3f | (*(byte *)((int)uStack_554._4_4_ + (_Size_01 - 4)) & 7) << 6;
        }
        else {
          SVar13 = _Size_01 - 3;
          uVar25 = bVar24 & 0xf;
        }
        uVar25 = bVar35 & 0x3f | uVar25 << 6;
      }
      else {
        SVar13 = _Size_01 - 2;
        uVar25 = bVar35 & 0x1f;
      }
      if ((bVar21 & 0x3f) != 0 || uVar25 != 0) goto LAB_1003cb25;
    }
    SVar13 = _Size_01 - 1;
  } while (bVar21 == 0);
LAB_1003cb25:
  uVar25 = (uint)uStack_554;
  pvVar16 = FUN_10107380(0,_Size_01);
  if (pvVar16 == (LPVOID)0x0) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  memcpy(pvVar16,pvVar31,_Size_01);
  uStack_554._0_4_ = uVar25;
LAB_1003cb4c:
  bVar14 = (uint)uStack_554 != 0;
  uStack_554 = CONCAT44(pvVar16,_Size_01);
  uStack_548 = 0;
  uStack_54c = _Size_01;
  if (bVar14) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,pvVar31);
  }
  iVar18 = iStack_438;
  if (iStack_438 == 0) {
    iVar18 = 0;
  }
  FUN_1011f090(&uStack_124,(DWORD)pbVar12,(uint)(iStack_438 != 0),iVar18,uStack_65c,uStack_660,
               &uStack_554);
  FUN_1011d860(&uStack_124,(char *)&uStack_61c,0,0,uStack_65c,uStack_660);
  memcpy(abStack_224,&uStack_124,0x100);
  uVar43 = FUN_1002e000(local_5cc,local_5c8,local_5c4,local_5c0,(uint)pbVar12);
  uVar25 = (uint)uVar43;
  if (iStack_5d4 == 0) {
    FUN_1013ce50((undefined4 *)&uStack_5dc,&local_5cc);
  }
  uVar28 = uStack_5dc._4_4_;
  pauVar29 = (undefined1 (*) [16])uStack_5dc;
  bVar14 = false;
  iStack_68c = 0;
  bVar21 = (byte)((ulonglong)uVar43 >> 0x18);
  bVar35 = bVar21 >> 1;
  auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
  auVar36 = pshuflw(auVar36,auVar36,0);
  do {
    uVar25 = uStack_5dc._4_4_ & uVar25;
    auVar41 = *(undefined1 (*) [16])(*(undefined1 (*) [16])uStack_5dc + uVar25);
    auVar40[0] = -(auVar41[0] == auVar36[0]);
    auVar40[1] = -(auVar41[1] == auVar36[1]);
    auVar40[2] = -(auVar41[2] == auVar36[2]);
    auVar40[3] = -(auVar41[3] == auVar36[3]);
    auVar40[4] = -(auVar41[4] == auVar36[4]);
    auVar40[5] = -(auVar41[5] == auVar36[5]);
    auVar40[6] = -(auVar41[6] == auVar36[6]);
    auVar40[7] = -(auVar41[7] == auVar36[7]);
    auVar40[8] = -(auVar41[8] == auVar36[0]);
    auVar40[9] = -(auVar41[9] == auVar36[1]);
    auVar40[10] = -(auVar41[10] == auVar36[2]);
    auVar40[0xb] = -(auVar41[0xb] == auVar36[3]);
    auVar40[0xc] = -(auVar41[0xc] == auVar36[4]);
    auVar40[0xd] = -(auVar41[0xd] == auVar36[5]);
    bVar35 = auVar41[0xf];
    auVar40[0xe] = -(auVar41[0xe] == auVar36[6]);
    auVar40[0xf] = -(bVar35 == auVar36[7]);
    uVar30 = (uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar40[0xf] >> 7) << 0xf);
    while ((short)uVar30 != 0) {
      iVar18 = 0;
      for (uVar22 = uVar30; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x80000000) {
        iVar18 = iVar18 + 1;
      }
      uVar30 = uVar30 - 1 & uVar30;
      iVar18 = (iVar18 + uVar25 & uStack_5dc._4_4_) * -0x108;
      if (pbVar12 == *(byte **)((int)(undefined1 (*) [16])uStack_5dc + iVar18 + -0x108)) {
        pvVar31 = (void *)((int)(undefined1 (*) [16])uStack_5dc + iVar18 + -0x100);
        memcpy(&uStack_554,pvVar31,0x100);
        memcpy(pvVar31,abStack_224,0x100);
        if ((uint)uStack_554 != 0xffffffff) {
          FUN_1011f470((int)&uStack_554);
        }
        goto LAB_1003c80e;
      }
    }
    uVar30 = uStack_688;
    if (bVar14) {
LAB_1003ccd0:
      auVar38[0] = -(auVar41[0] == -1);
      auVar38[1] = -(auVar41[1] == -1);
      auVar38[2] = -(auVar41[2] == -1);
      auVar38[3] = -(auVar41[3] == -1);
      auVar38[4] = -(auVar41[4] == -1);
      auVar38[5] = -(auVar41[5] == -1);
      auVar38[6] = -(auVar41[6] == -1);
      auVar38[7] = -(auVar41[7] == 0xff);
      auVar38[8] = -(auVar41[8] == -1);
      auVar38[9] = -(auVar41[9] == -1);
      auVar38[10] = -(auVar41[10] == -1);
      auVar38[0xb] = -(auVar41[0xb] == -1);
      auVar38[0xc] = -(auVar41[0xc] == -1);
      auVar38[0xd] = -(auVar41[0xd] == -1);
      auVar38[0xe] = -(auVar41[0xe] == -1);
      auVar38[0xf] = -(bVar35 == 0xff);
      if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar38 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar38 >> 0x3f,0) & 1) != 0) || (SUB161(auVar38 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar38 >> 0x4f,0) & 1) != 0) || (SUB161(auVar38 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || (SUB161(auVar38 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar38 >> 0x6f,0) & 1) != 0) || (SUB161(auVar38 >> 0x77,0) & 1) != 0) ||
          auVar38[0xf] < '\0') break;
      bVar14 = true;
      uStack_688 = uVar30;
    }
    else {
      uVar30 = (uint)(ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                             (ushort)(bVar35 >> 7) << 0xf);
      if (uVar30 != 0) {
        iVar18 = 0;
        for (; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
          iVar18 = iVar18 + 1;
        }
        uVar30 = iVar18 + uVar25 & uStack_5dc._4_4_;
        goto LAB_1003ccd0;
      }
      bVar14 = false;
    }
    uVar25 = iStack_68c + 0x10 + uVar25;
    iStack_68c = iStack_68c + 0x10;
  } while( true );
  bVar35 = (*(undefined1 (*) [16])uStack_5dc)[uVar30];
  if (-1 < (char)bVar35) {
    auVar36 = *(undefined1 (*) [16])uStack_5dc;
    uVar30 = 0;
    for (uVar25 = (uint)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar36[0xf] >> 7) << 0xf); (uVar25 & 1) == 0;
        uVar25 = uVar25 >> 1 | 0x80000000) {
      uVar30 = uVar30 + 1;
    }
    bVar35 = (*(undefined1 (*) [16])uStack_5dc)[uVar30];
  }
  memcpy((void *)((int)&uStack_554 + 4),abStack_224,0x100);
  iStack_5d4 = iStack_5d4 - (uint)(bVar35 & 1);
  bVar21 = bVar21 >> 1;
  (*pauVar29)[uVar30] = bVar21;
  pauVar29[1][uVar30 - 0x10 & uVar28] = bVar21;
  local_5d0 = (void *)((int)local_5d0 + 1);
  *(byte **)((int)pauVar29 + uVar30 * -0x108 + -0x108) = pbVar12;
  memcpy((void *)((int)pauVar29 + uVar30 * -0x108 + -0x104),&uStack_554,0x104);
LAB_1003c80e:
  iVar18 = Process32NextW(pvVar17,&pbStack_450);
  if (iVar18 == 0) goto LAB_1003cf98;
  goto LAB_1003c6f0;
LAB_1003cf98:
  GetLastError();
  goto LAB_1003cfab;
}
