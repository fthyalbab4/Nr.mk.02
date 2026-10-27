// rea decompile_all
// name: FUN_100c95e0
// address: 0x100c95e0
// body: available
// range: 0x100c95e0-0x100c9641 inclusive
// range: 0x100c9650-0x100c96a9 inclusive
// range: 0x100c96b0-0x100c96ec inclusive
// range: 0x100c96f0-0x100cafda inclusive
// range: 0x100cb03c-0x100cb055 inclusive
// range: 0x100cb78f-0x100cb7c1 inclusive
// range: 0x100cb7d0-0x100cb848 inclusive
// range: 0x100cb850-0x100cb865 inclusive
// range: 0x100cb870-0x100cb8c1 inclusive
// range: 0x100cb8d0-0x100cb931 inclusive
// range: 0x100cb950-0x100cb961 inclusive
// range: 0x100cba4e-0x100cbb74 inclusive
// range: 0x100cbb80-0x100cbcf6 inclusive
// range: 0x100cbd00-0x100cbd86 inclusive
// range: 0x100cbd90-0x100cbe40 inclusive
// range: 0x100cbf6b-0x100cc54a inclusive
// range: 0x100cc58f-0x100cc5cf inclusive
// range: 0x100cc5dc-0x100cc63f inclusive
// range: 0x100cc679-0x100cc72f inclusive
// range: 0x100cc762-0x100cc7cb inclusive
// range: 0x100cc88b-0x100cc8c0 inclusive
// range: 0x100cc8cf-0x100cc90b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100c9aff) */
/* WARNING: Removing unreachable block (ram,0x100cbdd1) */
/* WARNING: Removing unreachable block (ram,0x100cc62b) */
/* WARNING: Removing unreachable block (ram,0x100cbddb) */
/* WARNING: Removing unreachable block (ram,0x100cbd90) */
/* WARNING: Removing unreachable block (ram,0x100cbd00) */
/* WARNING: Removing unreachable block (ram,0x100cbf81) */
/* WARNING: Removing unreachable block (ram,0x100c9a4c) */
/* WARNING: Removing unreachable block (ram,0x100cb812) */
/* WARNING: Removing unreachable block (ram,0x100cb820) */
/* WARNING: Removing unreachable block (ram,0x100cb830) */
/* WARNING: Removing unreachable block (ram,0x100cb835) */
/* WARNING: Removing unreachable block (ram,0x100cb839) */
/* WARNING: Removing unreachable block (ram,0x100cb844) */
/* WARNING: Removing unreachable block (ram,0x100cb850) */
/* WARNING: Removing unreachable block (ram,0x100cb870) */
/* WARNING: Removing unreachable block (ram,0x100cc6f9) */
/* WARNING: Removing unreachable block (ram,0x100cb87c) */
/* WARNING: Removing unreachable block (ram,0x100cc6e4) */
/* WARNING: Removing unreachable block (ram,0x100cb888) */
/* WARNING: Removing unreachable block (ram,0x100cb8a0) */
/* WARNING: Removing unreachable block (ram,0x100cb8b0) */
/* WARNING: Removing unreachable block (ram,0x100cb8d0) */
/* WARNING: Removing unreachable block (ram,0x100cb8da) */
/* WARNING: Removing unreachable block (ram,0x100cb8b5) */
/* WARNING: Removing unreachable block (ram,0x100cb8bd) */
/* WARNING: Removing unreachable block (ram,0x100cb8dd) */
/* WARNING: Removing unreachable block (ram,0x100cc60c) */
/* WARNING: Removing unreachable block (ram,0x100cb8e7) */
/* WARNING: Removing unreachable block (ram,0x100cb8ff) */
/* WARNING: Removing unreachable block (ram,0x100cb856) */
/* WARNING: Removing unreachable block (ram,0x100cb861) */
/* WARNING: Removing unreachable block (ram,0x100cb7f1) */
/* WARNING: Removing unreachable block (ram,0x100cb7fb) */
/* WARNING: Removing unreachable block (ram,0x100cc6cd) */
/* WARNING: Removing unreachable block (ram,0x100cc6cf) */
/* WARNING: Removing unreachable block (ram,0x100cb7d0) */
/* WARNING: Removing unreachable block (ram,0x100cc20a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100c95e0(uint *param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined1 auVar6 [4];
  undefined1 auVar7 [4];
  BOOLEAN BVar8;
  HANDLE pvVar9;
  undefined2 *puVar10;
  int *piVar11;
  undefined1 (*pauVar12) [16];
  LPVOID pvVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  LPVOID pvVar17;
  int *piVar18;
  uint uVar19;
  undefined1 uVar20;
  bool bVar21;
  char cVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  undefined4 *puVar30;
  undefined1 auVar31 [4];
  uint *puVar32;
  uint uVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  SIZE_T SVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  char cVar48;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  undefined1 auVar49 [16];
  char cVar65;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar66;
  uint *puVar67;
  undefined **ppuVar68;
  undefined4 *lpMem;
  undefined1 auVar69 [4];
  undefined1 in_stack_fffffacc [4];
  uint local_530;
  uint *local_528;
  int iStack_524;
  uint *local_520;
  undefined1 auStack_51c [8];
  undefined4 uStack_514;
  undefined4 uStack_510;
  int *local_504;
  int *local_500;
  uint *local_4fc;
  uint uStack_4f8;
  uint *puStack_4f4;
  uint *puStack_4f0;
  undefined1 auStack_4ec [20];
  undefined8 local_4d8;
  uint *local_4d0;
  uint uStack_4cc;
  uint *local_4c8;
  undefined8 *puStack_4c4;
  int iStack_4c0;
  undefined4 *puStack_4bc;
  int iStack_4b8;
  int *piStack_4b4;
  uint *puStack_4b0;
  uint *puStack_4ac;
  int *piStack_4a8;
  uint *puStack_4a4;
  int iStack_4a0;
  uint *puStack_49c;
  int *local_498;
  int iStack_494;
  undefined4 local_490;
  undefined1 local_48c [4];
  undefined1 local_488 [4];
  undefined8 local_484;
  undefined1 local_47c [8];
  undefined8 local_474;
  undefined1 local_46c [16];
  undefined1 local_45c [16];
  undefined1 auStack_44c [16];
  undefined1 auStack_43c [16];
  undefined1 auStack_42c [16];
  undefined1 auStack_41c [16];
  undefined1 auStack_40c [16];
  undefined1 auStack_3fc [16];
  undefined1 auStack_3ec [16];
  undefined1 auStack_3dc [16];
  undefined1 auStack_3cc [16];
  undefined1 auStack_3bc [16];
  undefined1 auStack_3ac [16];
  undefined1 auStack_39c [16];
  undefined4 uStack_31c;
  char cStack_318;
  char cStack_317;
  char cStack_316;
  char cStack_315;
  char cStack_314;
  char cStack_313;
  char cStack_312;
  char cStack_311;
  char cStack_310;
  char cStack_30f;
  char cStack_30e;
  char cStack_30d;
  uint uStack_30c;
  int iStack_308;
  uint uStack_304;
  uint *local_300;
  uint *local_2fc;
  undefined1 *puStack_2f8;
  uint *local_2f4;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined1 auStack_1fc [16];
  undefined1 auStack_1ec [16];
  undefined1 auStack_1dc [16];
  undefined4 uStack_1cc;
  int *piStack_1c8;
  undefined4 uStack_1c4;
  int *piStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  uint *puStack_1b4;
  int iStack_1b0;
  undefined1 uStack_1ac;
  undefined2 uStack_1ab;
  undefined1 uStack_1a9;
  undefined1 uStack_1a8;
  undefined1 auStack_19c [16];
  undefined1 auStack_18c [16];
  uint *puStack_17c;
  uint *puStack_178;
  uint *puStack_174;
  uint *puStack_170;
  undefined1 *puStack_16c;
  uint *puStack_168;
  uint *puStack_164;
  undefined1 *puStack_160;
  uint *puStack_15c;
  int iStack_158;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  uint uStack_144;
  uint auStack_7c [14];
  uint uStack_44;
  undefined1 *puStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint *puStack_34;
  int iStack_30;
  undefined1 uStack_2a;

  local_498 = (int *)0x100c95f8;
  if (((*(byte *)((int)param_2 + 0xb) & 1) != 0) && (*(char *)((int)param_2 + 0xd) != '\x02')) {
    *param_1 = 0x28;
    return;
  }
  if (param_2[8] != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_101518b0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_2[8] = -1;
  param_2[9] = 0;
  iVar37 = param_2[0xf];
  param_2[0xf] = 0;
  local_4c8 = param_1;
  if (iVar37 != 0) {
    puVar30 = (undefined4 *)(param_2[0xe] + 8);
    do {
      iVar26 = puVar30[-2];
      if ((((iVar26 == 7) || (iVar26 == 6)) || (iVar26 == 2)) && (puVar30[-1] != 0)) {
        pvVar13 = (LPVOID)*puVar30;
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,pvVar13);
      }
      puVar30 = puVar30 + 4;
      iVar37 = iVar37 + -1;
    } while (iVar37 != 0);
  }
  param_2[0x12] = 0;
  iVar37 = param_2[0x15];
  puVar67 = (uint *)param_2[0x14];
  param_2[0x15] = 0;
  if (iVar37 != 0) {
    iVar26 = 0;
    do {
      puVar30 = (undefined4 *)puVar67[iVar26 * 3 + 1];
      lpMem = puVar30;
      for (uVar38 = puVar67[iVar26 * 3 + 2]; uVar38 != 0; uVar38 = uVar38 - 1) {
        piVar11 = (int *)*puVar30;
        if (piVar11 != (int *)0x0) {
          LOCK();
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (*piVar11 == 0) {
            FUN_100d4100((LPVOID)*puVar30,puVar30[1]);
          }
        }
        puVar30 = puVar30 + 2;
      }
      if (puVar67[iVar26 * 3] != 0) {
        pvVar9 = GetProcessHeap();
        HeapFree(pvVar9,0,lpMem);
      }
      iVar26 = iVar26 + 1;
      local_520 = puVar67;
    } while (iVar26 != iVar37);
  }
  param_2[0x16] = 0;
  piVar11 = param_2 + 8;
  *piVar11 = *piVar11 + 1;
  if (*piVar11 != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_101518a0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *(byte *)(param_2 + 0x17) = *(byte *)((int)param_2 + 10) == 2 | *(byte *)((int)param_2 + 10) & 1;
  *(byte *)((int)param_2 + 0x5d) = *(byte *)((int)param_2 + 0xb) & 1;
  uVar20 = 10;
  if ((char)param_2[2] != '\0') {
    uVar20 = *(undefined1 *)((int)param_2 + 9);
  }
  *(undefined1 *)((int)param_2 + 0x5e) = uVar20;
  param_2[8] = -1;
  uVar38 = param_2[1];
  iVar37 = 0;
  if (*param_2 != -1) {
    iVar37 = *param_2;
  }
  param_2[0xb] = iVar37;
  param_2[0xc] = uVar38;
  if ((iVar37 == 1) && (uVar38 < (uint)(param_2[0xf] << 4))) {
    *local_4c8 = 0x26;
    local_4c8[1] = uVar38;
    param_2[8] = 0;
    return;
  }
  param_2[8] = 0;
  if (*(byte *)((int)param_2 + 0xb) == 1) {
    iVar26 = param_4 * 4;
    piVar11 = param_3;
    do {
      if (iVar26 == 0) goto LAB_100c98f5;
      iVar15 = *piVar11;
      piVar11 = piVar11 + 1;
      iVar26 = iVar26 + -4;
    } while ((*(byte *)(*(int *)(iVar15 + 0x18) + 0x20) & 2) != 0);
  }
  else {
    iVar26 = param_4 * 4;
    piVar11 = param_3;
    do {
      if (iVar26 == 0) goto LAB_100c98f5;
      iVar15 = *piVar11;
      piVar11 = piVar11 + 1;
      iVar26 = iVar26 + -4;
    } while ((*(byte *)(*(int *)(iVar15 + 0x18) + 0x1c) & 1) != 0);
  }
  puVar10 = FUN_10107380(0,2);
  if (puVar10 == (undefined2 *)0x0) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *puVar10 = 0xff00;
  local_4d8 = CONCAT44(puVar10,1);
  local_4d0 = (uint *)0x1;
  uStack_4cc = uStack_4cc & 0xffffff00;
  FUN_100dbbb0((uint *)&local_4d8);
  local_2f4 = local_4d0;
  uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uStack_4cc);
  local_2fc = (uint *)local_4d8;
  puStack_2f8 = (undefined1 *)(local_4d8 >> 0x20);
  local_300 = (uint *)0x1;
  FUN_100db7d0((undefined4 *)(auStack_18c + 0xc),(int *)&local_300);
  FUN_100d4130(&local_490,param_2,(int *)(auStack_18c + 0xc),'\0',0);
  if (local_490 != 0xfffffffe) {
    *(undefined8 *)(local_4c8 + 0xb) = local_46c._8_8_;
    *(undefined8 *)(local_4c8 + 9) = local_46c._0_8_;
    local_4c8[0xf] = local_45c._8_4_;
    *(undefined8 *)(local_4c8 + 0xd) = local_45c._0_8_;
    *(undefined8 *)(local_4c8 + 7) = local_474;
    *(undefined8 *)(local_4c8 + 3) = local_484;
    *(undefined1 (*) [8])(local_4c8 + 5) = local_47c;
    *local_4c8 = local_490;
    local_4c8[1] = (uint)local_48c;
    local_4c8[2] = (uint)local_488;
    FUN_100e81b0((int *)(auStack_18c + 0xc));
    FUN_100c88d0((int *)(auStack_18c + 0xc));
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,puStack_168);
    return;
  }
  local_530 = (uint)local_488;
  auVar69 = local_48c;
  FUN_100e81b0((int *)(auStack_18c + 0xc));
  FUN_100c88d0((int *)(auStack_18c + 0xc));
  puVar67 = puStack_168;
  pvVar9 = GetProcessHeap();
  HeapFree(pvVar9,0,puVar67);
LAB_100c996f:
  local_500 = param_3 + param_4;
  local_504 = param_3;
  local_4fc = (uint *)param_2;
  FUN_100d4970(&local_490,(int *)&local_504);
  if (local_490 == 0xfffffffd) {
    if (param_2[8] != 0) {
      FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152524);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    param_2[8] = -1;
    auVar31 = (undefined1  [4])param_2[0xf];
    if (auVar31 == (undefined1  [4])param_2[0xd]) {
      FUN_10135f30((uint *)(param_2 + 0xd));
    }
    *(undefined4 *)(param_2[0xe] + (int)auVar31 * 0x10) = 8;
    param_2[0xf] = (int)auVar31 + 1;
    if ((param_2[0xb] == 1) &&
       ((uint *)param_2[0xc] < (uint *)((int)((int)auVar31 + 1) * 0x10 + param_2[0x16]))) {
      param_2[8] = param_2[8] + 1;
      local_490 = 0x26;
      local_48c = (undefined1  [4])param_2[0xc];
      goto LAB_100cadc8;
    }
    param_2[8] = param_2[8] + 1;
  }
  else {
    auVar31 = local_48c;
    puVar67 = (uint *)local_48c;
    auVar6 = local_488;
    if (local_490 == 0xfffffffe) {
      FUN_100d4970(&local_490,(int *)&local_504);
      if (local_490 == 0xfffffffd) goto LAB_100c9b8d;
      local_520 = (uint *)auVar31;
      auVar7 = local_488;
      if (local_490 == 0xfffffffe) {
        puStack_4f0 = (uint *)auVar6;
        if (param_2[8] != 0) {
          FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152574);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        param_2[8] = -1;
        auVar31 = (undefined1  [4])param_2[0xf];
        in_stack_fffffacc = local_48c;
        if (auVar31 == (undefined1  [4])param_2[0xd]) {
          FUN_10135f30((uint *)(param_2 + 0xd));
        }
        puVar30 = (undefined4 *)(param_2[0xe] + (int)auVar31 * 0x10);
        *puVar30 = 6;
        puVar30[1] = 0;
        puVar30[2] = 4;
        puVar30[3] = 0;
        param_2[0xf] = (int)((int)auVar31 + 1);
        iVar37 = param_2[0xb];
        if ((iVar37 == 1) &&
           ((uint *)param_2[0xc] < (uint *)((int)((int)auVar31 + 1) * 0x10 + param_2[0x16]))) {
          param_2[8] = param_2[8] + 1;
          param_3 = (int *)0x0;
          local_490 = 0x26;
          local_48c = (undefined1  [4])param_2[0xc];
        }
        else {
          piVar11 = param_2 + 8;
          *piVar11 = *piVar11 + 1;
          if (*piVar11 != 0) {
            FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152544);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          param_2[8] = -1;
          if ((undefined1 *)((int)auVar31 + 1) == (undefined1 *)param_2[0xd]) {
            FUN_10135f30((uint *)(param_2 + 0xd));
            iVar37 = param_2[0xb];
          }
          iVar26 = param_2[0xe];
          iVar15 = (int)((int)auVar31 + 1) * 0x10;
          *(undefined4 *)(iVar26 + iVar15) = 0;
          *(undefined4 *)(iVar26 + 4 + iVar15) = 0;
          param_2[0xf] = (int)auVar31 + 2;
          if ((iVar37 == 0) ||
             ((uint *)((int)((int)auVar31 + 2) * 0x10 + param_2[0x16]) <= (uint *)param_2[0xc])) {
            param_2[8] = param_2[8] + 1;
            FUN_100d4cb0(&local_490,(int)param_2,(uint)auVar31);
            if (local_490 == 0xfffffffe) {
              FUN_100d4cb0(&local_490,(int)param_2,(uint)puStack_4f0);
              if (local_490 == 0xfffffffe) {
                FUN_100d4cb0(&local_490,(int)param_2,(uint)auVar31);
                if (local_490 == 0xfffffffe) {
                  FUN_100d4cb0(&local_490,(int)param_2,(uint)auVar7);
                  if (local_490 == 0xfffffffe) {
                    local_4d8 = CONCAT44(local_500,local_504);
                    local_4d0 = local_4fc;
                    do {
                      FUN_100d4970((uint *)(auStack_18c + 0xc),(int *)&local_4d8);
                      puVar67 = puStack_178;
                      if (auStack_18c._12_4_ == 0xfffffffd) {
                        iVar37 = param_2[8];
                        goto joined_r0x100cc3ea;
                      }
                      if (auStack_18c._12_4_ != 0xfffffffe) {
                        uStack_2e0 = uStack_154;
                        uStack_2e8 = CONCAT44(iStack_158,puStack_15c);
                        uStack_2d0 = uStack_144;
                        uStack_2d8 = uStack_14c;
                        uStack_2f0 = CONCAT44(puStack_160,puStack_164);
                        local_300 = puStack_174;
                        local_2fc = puStack_170;
                        puStack_2f8 = puStack_16c;
                        local_2f4 = puStack_168;
                        local_490 = auStack_18c._12_4_;
                        param_3 = (int *)puStack_178;
                        local_48c = (undefined1  [4])puStack_17c;
                        goto LAB_100cadc8;
                      }
                      local_520 = puStack_17c;
                      stack0xfffffae8 = 0;
                      auStack_51c._0_4_ = puStack_178;
                      FUN_100d4cb0(&local_490,(int)param_2,(uint)auVar31);
                      if (local_490 != 0xfffffffe) break;
                      FUN_100d4cb0(&local_490,(int)param_2,(uint)puVar67);
                    } while (local_490 == 0xfffffffe);
                  }
                }
              }
            }
            puStack_2f8 = local_47c._0_4_;
            local_2f4 = local_47c._4_4_;
            uStack_2f0 = local_474;
            local_300 = local_48c._8_4_;
            local_2fc = local_48c._12_4_;
            uStack_2d0 = local_45c._8_4_;
            uStack_2e8 = local_46c._0_8_;
            uStack_2e0 = local_46c._8_8_;
            uStack_2d8 = local_45c._0_8_;
            param_3 = (int *)local_488;
          }
          else {
            param_2[8] = param_2[8] + 1;
            param_3 = (int *)0x0;
            local_490 = 0x26;
            local_48c = (undefined1  [4])param_2[0xc];
          }
        }
        goto LAB_100cadc8;
      }
      param_3 = (int *)local_488;
      auVar31 = local_48c;
      local_520 = puVar67;
    }
    else {
      param_3 = (int *)local_488;
    }
    uStack_2f0 = local_474;
    local_300 = local_48c._8_4_;
    local_2fc = local_48c._12_4_;
    puStack_2f8 = local_47c._0_4_;
    local_2f4 = local_47c._4_4_;
    local_48c = auVar31;
    uStack_2e8 = local_46c._0_8_;
    uStack_2e0 = local_46c._8_8_;
    uStack_2d8 = local_45c._0_8_;
    uStack_2d0 = local_45c._8_4_;
    if (local_490 != 0xfffffffe) {
LAB_100cadc8:
      *(undefined8 *)(local_4c8 + 0xb) = uStack_2e0;
      *(undefined8 *)(local_4c8 + 9) = uStack_2e8;
      local_4c8[0xf] = uStack_2d0;
      *(undefined8 *)(local_4c8 + 0xd) = uStack_2d8;
      *(undefined8 *)(local_4c8 + 7) = uStack_2f0;
      *(ulonglong *)(local_4c8 + 3) = CONCAT44(local_2fc,local_300);
      *(ulonglong *)(local_4c8 + 5) = CONCAT44(local_2f4,puStack_2f8);
      *local_4c8 = local_490;
      local_4c8[1] = (uint)local_48c;
      local_4c8[2] = (uint)param_3;
                    /* WARNING: Read-only address (ram,0x1013e2e0) is written */
                    /* WARNING: Read-only address (ram,0x1013e2f0) is written */
      return;
    }
  }
LAB_100c9b8d:
  iVar37 = param_2[8];
joined_r0x100cc3ea:
  if (iVar37 != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152514);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_2[8] = -1;
  puVar67 = (uint *)auVar31;
  FUN_100d4cf0(&local_490,(int)(param_2 + 9),local_530);
  iVar37 = param_2[8];
  param_2[8] = iVar37 + 1;
  if (local_48c != (undefined1  [4])0xfffffffe) {
    puStack_4c4[6] = local_45c._0_8_;
    puStack_4c4[5] = local_46c._8_8_;
    puStack_4c4[7] = local_45c._8_8_;
    puStack_4c4[4] = local_46c._0_8_;
    puStack_4c4[3] = local_474;
    puStack_4c4[2] = local_47c;
    *puStack_4c4 = _local_48c;
    puStack_4c4[1] = local_484;
    return;
  }
  if (iVar37 + 1 != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10151890);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  param_2[8] = -1;
  if (param_2[9] != 0) {
    FUN_101369c0(&DAT_10152988,0x41,&PTR_s_C__Users_runneradmin__cargo_regi_10152a08);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar38 = 0;
  piVar11 = FUN_10107380(0,0x30);
  if (piVar11 == (int *)0x0) goto LAB_100cc485;
  *piVar11 = 1;
  piVar11[1] = 1;
  piVar11[2] = 0;
  piVar11[3] = 4;
  piVar11[4] = 0;
  piVar11[5] = 0;
  piVar11[6] = 8;
  piVar11[7] = 0;
  piVar11[8] = 0;
  piVar11[9] = 4;
  piVar11[10] = 0;
  piVar11[0xb] = 0;
  uStack_1c4 = 0;
  piStack_1c0 = (int *)&DAT_00000004;
  iStack_1bc = 0;
  iStack_1b8 = 0;
  puStack_1b4 = (uint *)&DAT_00000004;
  iStack_1b0 = 0;
  auStack_1fc = (undefined1  [16])0x0;
  auStack_1ec = (undefined1  [16])0x0;
  local_2fc = (uint *)0x3020100;
  puStack_2f8 = (undefined1 *)0x7060504;
  local_2f4 = (uint *)0xb0a0908;
  uStack_2f0 = 0x131211100f0e0d0c;
  uStack_2e8 = 0x1b1a191817161514;
  uStack_2e0 = 0x232221201f1e1d1c;
  uStack_2d8 = 0x2b2a292827262524;
  uStack_2d0 = 0x2f2e2d2c;
  uStack_2cc = 0x33323130;
  uStack_2c8 = 0x37363534;
  uStack_2c4 = 0x3b3a3938;
  uStack_2c0 = 0x3f3e3d3c;
  uStack_2bc = 0x43424140;
  uStack_2b8 = 0x47464544;
  uStack_2b4 = 0x4b4a4948;
  uStack_2b0 = 0x4f4e4d4c;
  uStack_2ac = 0x53525150;
  uStack_2a8 = 0x57565554;
  uStack_2a4 = 0x5b5a5958;
  uStack_2a0 = 0x5f5e5d5c;
  uStack_29c = 0x63626160;
  uStack_298 = 0x67666564;
  uStack_294 = 0x6b6a6968;
  uStack_290 = 0x6f6e6d6c;
  uStack_28c = 0x73727170;
  uStack_288 = 0x77767574;
  uStack_284 = 0x7b7a7978;
  uStack_280 = 0x7f7e7d7c;
  uStack_27c = 0x83828180;
  uStack_278 = 0x87868584;
  uStack_274 = 0x8b8a8988;
  uStack_270 = 0x8f8e8d8c;
  uStack_26c = 0x93929190;
  uStack_268 = 0x97969594;
  uStack_264 = 0x9b9a9998;
  uStack_260 = 0x9f9e9d9c;
  uStack_25c = 0xa3a2a1a0;
  uStack_258 = 0xa7a6a5a4;
  uStack_254 = 0xabaaa9a8;
  uStack_250 = 0xafaeadac;
  uStack_24c = 0xb3b2b1b0;
  uStack_248 = 0xb7b6b5b4;
  uStack_244 = 0xbbbab9b8;
  uStack_240 = 0xbfbebdbc;
  uStack_23c = 0xc3c2c1c0;
  uStack_238 = 0xc7c6c5c4;
  uStack_234 = 0xcbcac9c8;
  uStack_230 = 0xcfcecdcc;
  uStack_22c = 0xd3d2d1d0;
  uStack_228 = 0xd7d6d5d4;
  uStack_224 = 0xdbdad9d8;
  uStack_220 = 0xdfdedddc;
  uStack_21c = 0xe3e2e1e0;
  uStack_218 = 0xe7e6e5e4;
  uStack_214 = 0xebeae9e8;
  uStack_210 = 0xefeeedec;
  uStack_20c = 0xf3f2f1f0;
  uStack_208 = 0xf7f6f5f4;
  uStack_204 = 0xfbfaf9f8;
  uStack_200 = 0xfffefdfc;
  uStack_1ab = 0;
  auStack_1dc = (undefined1  [16])0x0;
  uStack_1cc = 0;
  uStack_1a9 = *(undefined1 *)(iStack_524 + 0x5c);
  uStack_1a8 = *(undefined1 *)(iStack_524 + 0x5d);
  uStack_1ac = *(undefined1 *)(iStack_524 + 0x5e);
  iStack_4c0 = 0;
  puStack_4bc = (undefined4 *)&DAT_00000004;
  local_500 = (int *)0x0;
  local_4fc = (uint *)&DAT_00000004;
  iStack_4b8 = 0;
  uStack_4f8 = 0;
  uVar1 = *(uint *)(iStack_524 + 0x3c);
  piStack_1c8 = piVar11;
  if (uVar1 != 0) {
    puVar67 = (uint *)&DAT_00000004;
    FUN_101359e0((uint *)&local_500,0,uVar1,&DAT_00000004,4);
    uVar38 = uStack_4f8;
    puVar35 = local_4fc;
    puVar32 = local_4fc + uStack_4f8;
    if (uVar1 != 1) {
      puVar67 = (uint *)0x0;
      memset(puVar32,0,uVar1 * 4 - 4);
      uStack_4f8 = uVar38 + -1 + uVar1;
      puVar32 = puVar35 + uVar38 + uVar1 + -1;
    }
    *puVar32 = 0;
    uVar38 = uStack_4f8 + 1;
  }
  auStack_51c._0_4_ = 4;
  iVar37 = *(int *)(iStack_524 + 0x48);
  puVar32 = (uint *)&DAT_00000004;
  auStack_1dc._4_4_ = in_stack_fffffacc;
  auStack_1dc._0_4_ = auVar31;
  uStack_4f8 = uVar38;
  if (iVar37 != 0) {
    puVar67 = *(uint **)(iStack_524 + 0x44);
    puVar32 = FUN_10107380(0,iVar37 * 4);
    if (puVar32 == (uint *)0x0) goto LAB_100cc11c;
    memcpy(puVar32,puVar67,iVar37 * 4);
  }
  iVar26 = *(int *)(iStack_524 + 0x50);
  puStack_17c = (uint *)0x0;
  puStack_178 = (uint *)&DAT_00000004;
  puStack_174 = (uint *)0x0;
  puStack_170 = (uint *)0x0;
  puStack_16c = &DAT_00000008;
  puStack_168 = (uint *)0x0;
  puStack_164 = (uint *)0x0;
  puStack_160 = &DAT_00000004;
  puStack_15c = (uint *)0x0;
  iStack_158 = 0;
  iStack_1b8 = iVar37;
  puStack_1b4 = puVar32;
  iStack_1b0 = iVar37;
  if (*(int *)(iStack_524 + 0x54) == 0) {
    auVar3._12_4_ = 0;
    auVar3._0_12_ = auStack_4ec._4_12_;
    auStack_4ec._0_16_ = auVar3 << 0x20;
LAB_100caaf8:
    puVar67 = (uint *)0x0;
  }
  else {
    puStack_49c = (uint *)(iVar26 + *(int *)(iStack_524 + 0x54) * 0xc);
    puVar32 = (uint *)0x0;
    puVar35 = (uint *)0x0;
    do {
      puVar23 = puVar35;
      iVar37 = *(int *)(iVar26 + 8);
      puVar35 = puStack_4f4;
      if (iVar37 == 0) {
        local_528 = (uint *)0x80000002;
        goto LAB_100cc288;
      }
      piVar11 = *(int **)(iVar26 + 4);
      iStack_4a0 = iVar26;
      if (*piVar11 != 0) {
        local_528 = (uint *)0x80000003;
        goto LAB_100cc288;
      }
      local_48c = (undefined1  [4])puStack_174;
      puStack_4a4 = puVar32;
      if (puVar32 != puStack_174) {
        ppuVar68 = &PTR_s_C__Users_runneradmin__cargo_regi_10152788;
LAB_100cc4b6:
        FUN_101369ea(0,&puStack_4a4,local_48c,0,puVar67,ppuVar68);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_4d8 = CONCAT44(puVar32,(uint *)local_4d8);
      local_48c = (undefined1  [4])puStack_168;
      if (puVar32 != puStack_168) {
        ppuVar68 = &PTR_s_C__Users_runneradmin__cargo_regi_10152798;
LAB_100cc4fa:
        FUN_101369ea(0,(int)&local_4d8 + 4,local_48c,0,puVar67,ppuVar68);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_4d8 = CONCAT44(puVar32,(uint *)local_4d8);
      local_48c = (undefined1  [4])puVar23;
      if (puVar32 != puVar23) {
        ppuVar68 = &PTR_s_C__Users_runneradmin__cargo_regi_101527a8;
        goto LAB_100cc4fa;
      }
      if (puVar23 == (uint *)0x0) {
        uVar38 = 0;
        if (puStack_17c == (uint *)0x0) goto LAB_100ca932;
      }
      else {
        uVar38 = puStack_178[(int)puVar23 * 2 + -1];
        if (puVar23 == puStack_17c) {
LAB_100ca932:
          FUN_10135ee0((uint *)&puStack_17c);
        }
      }
      puStack_4ac = (uint *)((int)puVar32 + 1);
      puStack_178[(int)puVar23 * 2] = uVar38;
      puStack_178[(int)puVar23 * 2 + 1] = uVar38;
      puStack_174 = puStack_4ac;
      if (DAT_101631c0 == 0) {
        puVar32 = (uint *)FUN_1013be20(&DAT_101631c0);
      }
      else {
        puVar32 = (uint *)(DAT_101631c0 + -1);
      }
      puVar67 = (uint *)0x100c9fd2;
      pauVar12 = TlsGetValue((DWORD)puVar32);
      if (pauVar12 < (undefined1 (*) [16])0x2) {
        if (pauVar12 == (undefined1 (*) [16])0x1) {
          FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        _local_48c = (undefined1  [16])0x0;
        BVar8 = SystemFunction036(local_48c,0x10);
        auVar45 = _local_48c;
        if (BVar8 == '\0') {
          FUN_101369c0("failed to generate random dataC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\std\\src\\sys\\random\\windows.rs"
                       ,0x3d,&DAT_101589e8);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar5 = local_484._4_4_;
        _auStack_51c = _local_48c;
        pauVar12 = FUN_10107380(0,0x18);
        if (pauVar12 == (undefined1 (*) [16])0x0) {
          FUN_1013679e(8,0x18);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        auStack_51c._0_4_ = auVar45._0_4_;
        auStack_51c._4_4_ = auVar45._4_4_;
        uStack_514 = auVar45._8_4_;
        *(undefined4 *)*pauVar12 = auStack_51c._0_4_;
        *(undefined4 *)(*pauVar12 + 4) = auStack_51c._4_4_;
        *(undefined4 *)(*pauVar12 + 8) = uStack_514;
        *(undefined4 *)(*pauVar12 + 0xc) = uVar5;
        *(uint **)pauVar12[1] = puVar32;
        pvVar13 = TlsGetValue((DWORD)puVar32);
        TlsSetValue((DWORD)puVar32,pauVar12);
        puVar67 = puVar32;
        _auStack_51c = auVar45;
        if (pvVar13 != (LPVOID)0x0) {
          pvVar9 = GetProcessHeap();
          puVar67 = (uint *)0x0;
          HeapFree(pvVar9,0,pvVar13);
        }
      }
      puVar32 = puStack_168;
      auVar45 = *pauVar12;
      *(uint *)*pauVar12 = auVar45._0_4_ + 1;
      *(uint *)(*pauVar12 + 4) = *(int *)(*pauVar12 + 4) + (uint)(0xfffffffe < auVar45._0_4_);
      if (puStack_168 == puStack_170) {
        FUN_1013bb60((uint *)&puStack_170);
        _auStack_51c = auVar45;
      }
      puStack_168 = (uint *)((int)puVar32 + 1);
      iVar26 = (int)puVar32 * 0x20;
      *(undefined8 *)(puStack_16c + iVar26 + 8) = 0;
      *(undefined8 *)(puStack_16c + iVar26) = 0x10159670;
      *(undefined1 (*) [16])(puStack_16c + iVar26 + 0x10) = auVar45;
      puVar30 = FUN_10107380(0,8);
      puVar32 = puStack_15c;
      if (puVar30 == (undefined4 *)0x0) {
        FUN_1013679e(4,8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *puVar30 = 0;
      if (puStack_15c == puStack_164) {
        FUN_10135e90((uint *)&puStack_164);
      }
      puStack_15c = (uint *)((int)puVar32 + 1);
      *(undefined4 *)(puStack_160 + (int)puVar32 * 0xc) = 1;
      *(undefined4 **)(puStack_160 + (int)puVar32 * 0xc + 4) = puVar30;
      *(undefined4 *)(puStack_160 + (int)puVar32 * 0xc + 8) = 1;
      iStack_158 = iStack_158 + 8;
      auStack_51c._0_4_ = puStack_160;
      puVar35 = puStack_15c;
      local_520 = puVar23;
      if (iVar37 != 1) {
        piStack_4a8 = piVar11 + iVar37 * 2;
        piVar18 = piVar11 + 2;
        puStack_4f4 = (uint *)0x1;
        puVar29 = puStack_174;
LAB_100ca16c:
        if (puVar29 <= puVar23) {
          FUN_10136b52(puVar23,puVar29,&PTR_s_C__Users_runneradmin__cargo_regi_10151948);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        puVar32 = puVar23;
        if (puStack_178[(int)puVar23 * 2 + 1] + 2 < 0x7fffffff) {
          iVar37 = piVar11[2];
          puStack_178[(int)puVar23 * 2 + 1] = puStack_178[(int)puVar23 * 2 + 1] + 2;
          local_498 = piVar18;
          if (iVar37 != 0) {
            local_528 = (uint *)piVar11[3];
            if ((uint *)0x7ffffff4 < local_528) {
              FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,(int)&local_490 + 3,
                           &DAT_10143fa0,&PTR_s_C__Users_runneradmin__rustup_too_10144028);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            iVar37 = piVar11[2];
            uVar38 = (uint)((int)local_528 + 0xb) & 0x7ffffffc;
            puVar67 = FUN_10107380(0,uVar38);
            if (puVar67 == (uint *)0x0) {
              FUN_1013679e(4,uVar38);
            }
            else {
              *puVar67 = 1;
              puVar67[1] = 1;
              local_4d8 = CONCAT44(local_4d8._4_4_,puVar67 + 2);
              puStack_4f0 = puVar67;
              memcpy(puVar67 + 2,(void *)(iVar37 + 8),(size_t)local_528);
              if (puStack_168 <= puVar23) {
                FUN_10136b52(puVar23,puStack_168,&PTR_s_C__Users_runneradmin__cargo_regi_10151958);
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              piStack_4b4 = (int *)(puStack_16c + (int)puVar23 * 0x20);
              if (*(int *)(puStack_16c + (int)puVar23 * 0x20 + 0xc) != 0) {
                local_46c = *(undefined1 (*) [16])(piStack_4b4 + 4);
                auVar43._0_8_ = local_46c._0_8_;
                auVar43._8_4_ = local_46c._0_4_;
                auVar43._12_4_ = local_46c._4_4_;
                auVar49._0_8_ = local_46c._8_8_;
                auVar49._8_4_ = local_46c._8_4_;
                auVar49._12_4_ = local_46c._12_4_;
                _local_48c = auVar43 ^ _DAT_1013e2e0;
                _local_47c = auVar49 ^ _DAT_1013e2f0;
                local_45c = ZEXT816(0);
                FUN_100a8280((uint *)local_48c,(uint *)local_4d8,(uint)local_528);
                local_4d8._0_5_ = CONCAT14(0xff,(uint *)local_4d8);
                FUN_100a8280((uint *)local_48c,(uint *)((int)&local_4d8 + 4),1);
                uStack_31c = local_45c._0_4_;
                puStack_4b0 = (uint *)(local_45c._8_4_ << 0x18 | local_45c._4_4_);
                uVar39 = local_474._4_4_ ^ (uint)puStack_4b0;
                uVar25 = (uint)local_474 ^ local_45c._0_4_;
                uVar36 = (int)local_488 + local_47c._4_4_ +
                         (uint)CARRY4((uint)local_48c,local_47c._0_4_);
                uVar27 = (int)(uint *)local_484 + uVar25;
                uVar38 = local_484._4_4_ + uVar39 + (uint)CARRY4((uint)(uint *)local_484,uVar25);
                uVar14 = (local_47c._0_4_ << 0xd | (uint)local_47c._4_4_ >> 0x13) ^
                         (int)local_48c + local_47c._0_4_;
                uVar24 = (uVar25 >> 0x10 | uVar39 << 0x10) ^ uVar38;
                uVar39 = (uVar25 << 0x10 | uVar39 >> 0x10) ^ uVar27;
                uVar33 = (local_47c._4_4_ << 0xd | (uint)local_47c._0_4_ >> 0x13) ^ uVar36;
                uVar38 = uVar38 + uVar33 + (uint)CARRY4(uVar27,uVar14);
                uVar25 = (int)local_48c + local_47c._0_4_ + uVar24 + (uint)CARRY4(uVar36,uVar39);
                uVar40 = (uVar14 << 0x11 | uVar33 >> 0xf) ^ uVar27 + uVar14;
                uVar19 = (uVar39 >> 0xb | uVar24 << 0x15) ^ uVar25;
                uVar28 = (uVar39 << 0x15 | uVar24 >> 0xb) ^ uVar36 + uVar39;
                uVar39 = uVar36 + uVar39 ^ local_45c._0_4_;
                uVar36 = (uVar14 >> 0xf | uVar33 << 0x11) ^ uVar38;
                uVar38 = uVar38 ^ 0xff;
                uVar34 = uVar39 + uVar40;
                uVar25 = (uVar25 ^ (uint)puStack_4b0) + uVar36 + (uint)CARRY4(uVar39,uVar40);
                uVar24 = uVar38 + uVar28;
                uVar38 = uVar27 + uVar14 + uVar19 + (uint)CARRY4(uVar38,uVar28);
                uVar39 = (uVar40 >> 0x13 | uVar36 << 0xd) ^ uVar25;
                uVar27 = (uVar40 << 0xd | uVar36 >> 0x13) ^ uVar34;
                uVar33 = (uVar28 >> 0x10 | uVar19 << 0x10) ^ uVar38;
                uVar19 = (uVar28 << 0x10 | uVar19 >> 0x10) ^ uVar24;
                uVar14 = uVar38 + uVar39 + (uint)CARRY4(uVar24,uVar27);
                uVar38 = uVar25 + uVar19;
                uVar25 = uVar34 + uVar33 + (uint)CARRY4(uVar25,uVar19);
                uVar36 = (uVar27 << 0x11 | uVar39 >> 0xf) ^ uVar24 + uVar27;
                uVar28 = (uVar27 >> 0xf | uVar39 << 0x11) ^ uVar14;
                uVar39 = (uVar19 << 0x15 | uVar33 >> 0xb) ^ uVar38;
                uVar33 = (uVar19 >> 0xb | uVar33 << 0x15) ^ uVar25;
                uVar34 = uVar25 + uVar28 + (uint)CARRY4(uVar38,uVar36);
                uVar25 = uVar14 + uVar39;
                uVar24 = uVar24 + uVar27 + uVar33 + (uint)CARRY4(uVar14,uVar39);
                uVar40 = (uVar36 << 0xd | uVar28 >> 0x13) ^ uVar38 + uVar36;
                uVar19 = (uVar39 >> 0x10 | uVar33 << 0x10) ^ uVar24;
                uVar14 = (uVar36 >> 0x13 | uVar28 << 0xd) ^ uVar34;
                uVar39 = (uVar39 << 0x10 | uVar33 >> 0x10) ^ uVar25;
                auStack_4ec._0_4_ = uVar25 + uVar40;
                uVar27 = uVar24 + uVar14 + (uint)CARRY4(uVar25,uVar40);
                uVar25 = uVar34 + uVar39;
                uVar38 = uVar38 + uVar36 + uVar19 + (uint)CARRY4(uVar34,uVar39);
                uVar28 = (uVar40 << 0x11 | uVar14 >> 0xf) ^ auStack_4ec._0_4_;
                uVar33 = (uVar40 >> 0xf | uVar14 << 0x11) ^ uVar27;
                uVar24 = (uVar39 >> 0xb | uVar19 << 0x15) ^ uVar38;
                uVar36 = (uVar39 << 0x15 | uVar19 >> 0xb) ^ uVar25;
                uVar39 = uVar27 + uVar36;
                auStack_51c._0_4_ = uVar25 + uVar28;
                uVar19 = auStack_4ec._0_4_ + uVar24 + (uint)CARRY4(uVar27,uVar36);
                uVar14 = (uVar28 << 0xd | uVar33 >> 0x13) ^ uVar25 + uVar28;
                uVar38 = (uVar28 >> 0x13 | uVar33 << 0xd) ^
                         uVar38 + uVar33 + (uint)CARRY4(uVar25,uVar28);
                uVar38 = ((uVar24 >> 0x10 ^ uVar39) << 0x15 |
                         ((uVar36 >> 0x10 | uVar24 << 0x10) ^ uVar19) >> 0xb) ^
                         (uVar38 >> 0xf | uVar14 << 0x11) ^
                         uVar19 + uVar38 + (uint)CARRY4(uVar39,uVar14) ^ uVar39 + uVar14;
                iVar37 = *piStack_4b4;
                uVar25 = piStack_4b4[1];
                bVar42 = (byte)(uVar38 >> 0x19);
                auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
                auVar43 = pshuflw(auVar45,auVar45,0);
                auVar45._0_8_ = auVar43._0_8_;
                auVar45._8_4_ = auVar43._0_4_;
                auVar45._12_4_ = auVar43._4_4_;
                iVar26 = 0;
                while( true ) {
                  uVar38 = uVar25 & uVar38;
                  puVar67 = (uint *)(iVar37 + uVar38);
                  cVar22 = (char)puVar67[1];
                  cVar55 = *(char *)((int)puVar67 + 5);
                  cVar56 = *(char *)((int)puVar67 + 6);
                  cVar57 = *(char *)((int)puVar67 + 7);
                  cVar58 = (char)puVar67[2];
                  cVar59 = *(char *)((int)puVar67 + 9);
                  cVar60 = *(char *)((int)puVar67 + 10);
                  cVar61 = *(char *)((int)puVar67 + 0xb);
                  cVar62 = (char)puVar67[3];
                  cVar63 = *(char *)((int)puVar67 + 0xd);
                  cVar64 = *(char *)((int)puVar67 + 0xe);
                  cVar65 = *(char *)((int)puVar67 + 0xf);
                  auVar44[0] = -((char)*puVar67 == auVar45[0]);
                  auVar44[1] = -(*(char *)((int)puVar67 + 1) == auVar45[1]);
                  auVar44[2] = -(*(char *)((int)puVar67 + 2) == auVar45[2]);
                  auVar44[3] = -(*(char *)((int)puVar67 + 3) == auVar45[3]);
                  auVar44[4] = -(cVar22 == auVar45[4]);
                  auVar44[5] = -(cVar55 == auVar45[5]);
                  auVar44[6] = -(cVar56 == auVar45[6]);
                  auVar44[7] = -(cVar57 == auVar45[7]);
                  auVar44[8] = -(cVar58 == auVar45[8]);
                  auVar44[9] = -(cVar59 == auVar45[9]);
                  auVar44[10] = -(cVar60 == auVar45[10]);
                  auVar44[0xb] = -(cVar61 == auVar45[0xb]);
                  auVar44[0xc] = -(cVar62 == auVar45[0xc]);
                  auVar44[0xd] = -(cVar63 == auVar45[0xd]);
                  auVar44[0xe] = -(cVar64 == auVar45[0xe]);
                  auVar44[0xf] = -(cVar65 == auVar45[0xf]);
                  uVar36 = (uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                                          (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                                          (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                                          (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                                          (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                                          (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                                          (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                                          (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                                          (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                                          (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                                          (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                                          (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                                          (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                                          (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                                          (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(auVar44[0xf] >> 7) << 0xf);
                  cVar48 = (char)*puVar67;
                  cVar52 = *(char *)((int)puVar67 + 1);
                  cVar53 = *(char *)((int)puVar67 + 2);
                  cVar54 = *(char *)((int)puVar67 + 3);
                  if (uVar36 != 0) {
                    auStack_51c._0_4_ = uVar25;
                    auStack_4ec._0_16_ = auVar45;
                    uStack_31c = *puVar67;
                    cStack_318 = cVar22;
                    cStack_317 = cVar55;
                    cStack_316 = cVar56;
                    cStack_315 = cVar57;
                    cStack_314 = cVar58;
                    cStack_313 = cVar59;
                    cStack_312 = cVar60;
                    cStack_311 = cVar61;
                    cStack_310 = cVar62;
                    cStack_30f = cVar63;
                    cStack_30e = cVar64;
                    cStack_30d = cVar65;
                    do {
                      iVar15 = 0;
                      for (uVar14 = uVar36; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                        iVar15 = iVar15 + 1;
                      }
                      uVar14 = iVar15 + uVar38 & uVar25;
                      if (local_528 == *(uint **)(iVar37 + -8 + uVar14 * -0xc)) {
                        iVar15 = memcmp((uint *)local_4d8,
                                        (void *)(*(int *)(iVar37 + uVar14 * -0xc + -0xc) + 8),
                                        (size_t)local_528);
                        if (iVar15 == 0) {
                          if (local_528 == (uint *)0x0) {
                            puVar32 = (uint *)0x1;
                            LOCK();
                            *puStack_4f0 = *puStack_4f0 - 1;
                            uVar38 = *puStack_4f0;
                            UNLOCK();
                          }
                          else {
                            puVar32 = FUN_10107380(0,(SIZE_T)local_528);
                            if (puVar32 == (uint *)0x0) {
                              FUN_101366bc(1);
                    /* WARNING: Does not return */
                              pcVar2 = (code *)invalidInstructionException();
                              (*pcVar2)();
                            }
                            memcpy(puVar32,(uint *)local_4d8,(size_t)local_528);
                            LOCK();
                            *puStack_4f0 = *puStack_4f0 - 1;
                            uVar38 = *puStack_4f0;
                            UNLOCK();
                          }
                          puVar35 = local_528;
                          if (uVar38 == 0) {
                    /* WARNING: Read-only address (ram,0x1013e2e0) is written */
                    /* WARNING: Read-only address (ram,0x1013e2f0) is written */
                            FUN_100d4100(puStack_4f0,(int)local_528);
                            puVar35 = local_528;
                          }
                          goto LAB_100cc288;
                        }
                      }
                      uVar36 = uVar36 - 1 & uVar36;
                      auVar45 = auStack_4ec._0_16_;
                      cVar48 = (char)uStack_31c;
                      cVar52 = uStack_31c._1_1_;
                      cVar53 = uStack_31c._2_1_;
                      cVar54 = uStack_31c._3_1_;
                      cVar22 = cStack_318;
                      cVar55 = cStack_317;
                      cVar56 = cStack_316;
                      cVar57 = cStack_315;
                      cVar58 = cStack_314;
                      cVar59 = cStack_313;
                      cVar60 = cStack_312;
                      cVar61 = cStack_311;
                      cVar62 = cStack_310;
                      cVar63 = cStack_30f;
                      cVar64 = cStack_30e;
                      cVar65 = cStack_30d;
                    } while ((short)uVar36 != 0);
                  }
                  auVar50[0] = -(cVar48 == -1);
                  auVar50[1] = -(cVar52 == -1);
                  auVar50[2] = -(cVar53 == -1);
                  auVar50[3] = -(cVar54 == -1);
                  auVar50[4] = -(cVar22 == -1);
                  auVar50[5] = -(cVar55 == -1);
                  auVar50[6] = -(cVar56 == -1);
                  auVar50[7] = -(cVar57 == -1);
                  auVar50[8] = -(cVar58 == -1);
                  auVar50[9] = -(cVar59 == -1);
                  auVar50[10] = -(cVar60 == -1);
                  auVar50[0xb] = -(cVar61 == -1);
                  auVar50[0xc] = -(cVar62 == -1);
                  auVar50[0xd] = -(cVar63 == -1);
                  auVar50[0xe] = -(cVar64 == -1);
                  auVar50[0xf] = -(cVar65 == -1);
                  if ((((((((((((((((SUB161(auVar50 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar50 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar50 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar50 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar50 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar50 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar50 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar50 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar50 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar50 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar50 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar50 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar50 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar50 >> 0x6f,0) & 1) != 0) || (SUB161(auVar50 >> 0x77,0) & 1) != 0
                      ) || auVar50[0xf] < '\0') break;
                  uVar38 = uVar38 + 0x10 + iVar26;
                  iVar26 = iVar26 + 0x10;
                }
              }
              piVar11 = piStack_4b4;
              LOCK();
              uVar38 = *puStack_4f0;
              *puStack_4f0 = *puStack_4f0 + 1;
              UNLOCK();
              if (*puStack_4f0 != 0 && SCARRY4(uVar38,1) == (int)*puStack_4f0 < 0) {
                puVar67 = puStack_4f0;
                uVar66 = FUN_100c10b0(piStack_4b4[4],piStack_4b4[5],piStack_4b4[6],piStack_4b4[7],
                                      (int)puStack_4f0,(uint)local_528);
                if (piVar11[2] == 0) {
                  FUN_1013b390(piVar11,(uint *)(piVar11 + 4));
                }
                uVar38 = piVar11[1];
                pauVar12 = (undefined1 (*) [16])*piVar11;
                bVar21 = false;
                auStack_51c._0_4_ = 0;
                uVar36 = uVar38 & (uint)uVar66;
                puVar32 = (uint *)((uint)uVar66 >> 0x19);
                bVar42 = (byte)((ulonglong)uVar66 >> 0x18) >> 1;
                auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
                auVar45 = pshuflw(auVar45,auVar45,0);
                auVar47._0_8_ = auVar45._0_8_;
                auVar47._8_4_ = auVar45._0_4_;
                auVar47._12_4_ = auVar45._4_4_;
                uVar25 = uVar38;
                do {
                  auVar45 = *(undefined1 (*) [16])(*pauVar12 + uVar36);
                  auVar46[0] = -(auVar45[0] == auVar47[0]);
                  auVar46[1] = -(auVar45[1] == auVar47[1]);
                  auVar46[2] = -(auVar45[2] == auVar47[2]);
                  auVar46[3] = -(auVar45[3] == auVar47[3]);
                  auVar46[4] = -(auVar45[4] == auVar47[4]);
                  auVar46[5] = -(auVar45[5] == auVar47[5]);
                  auVar46[6] = -(auVar45[6] == auVar47[6]);
                  auVar46[7] = -(auVar45[7] == auVar47[7]);
                  auVar46[8] = -(auVar45[8] == auVar47[8]);
                  auVar46[9] = -(auVar45[9] == auVar47[9]);
                  auVar46[10] = -(auVar45[10] == auVar47[10]);
                  auVar46[0xb] = -(auVar45[0xb] == auVar47[0xb]);
                  auVar46[0xc] = -(auVar45[0xc] == auVar47[0xc]);
                  auVar46[0xd] = -(auVar45[0xd] == auVar47[0xd]);
                  auVar46[0xe] = -(auVar45[0xe] == auVar47[0xe]);
                  auVar46[0xf] = -(auVar45[0xf] == auVar47[0xf]);
                  uVar14 = (uint)(ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                                          (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                                          (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                                          (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                                          (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                                          (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                                          (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                                          (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                                          (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                                          (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                                          (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                                          (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                                          (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                                          (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                                          (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                                         (ushort)(auVar46[0xf] >> 7) << 0xf);
                  if (uVar14 != 0) {
                    do {
                      auStack_18c = auVar45;
                      auStack_19c = auVar47;
                      puStack_4b0 = puVar32;
                      iVar37 = 0;
                      for (uVar39 = uVar14; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
                        iVar37 = iVar37 + 1;
                      }
                      uVar39 = iVar37 + uVar36 & uVar38;
                      puVar32 = *(uint **)((int)pauVar12 + uVar39 * -0xc + -0xc);
                      puVar35 = *(uint **)((int)pauVar12 + uVar39 * -0xc + -8);
                      uStack_31c = uVar14;
                      if ((puStack_4f0 == puVar32) || (local_528 != puVar35)) {
                        uVar38 = uVar25;
                        if ((puStack_4f0 == puVar32) && (local_528 == puVar35)) goto LAB_100ca77c;
                      }
                      else {
                        puVar67 = puVar32 + 2;
                        iVar37 = memcmp((uint *)local_4d8,puVar67,(size_t)local_528);
                        uVar38 = uVar25;
                        if (iVar37 == 0) {
LAB_100ca77c:
                          *(uint **)((int)pauVar12 + uVar39 * -0xc + -4) = puStack_4f4;
                          LOCK();
                          *puStack_4f0 = *puStack_4f0 - 1;
                          UNLOCK();
                          if (*puStack_4f0 == 0) {
                            FUN_100d4100(puStack_4f0,(int)local_528);
                          }
                          goto LAB_100ca7f4;
                        }
                      }
                      uVar14 = uStack_31c - 1 & uStack_31c;
                      puVar32 = puStack_4b0;
                      auVar47 = auStack_19c;
                      auVar45 = auStack_18c;
                      uVar25 = uVar38;
                    } while ((short)uVar14 != 0);
                  }
                  if (bVar21) {
LAB_100ca6e8:
                    auVar51[0] = -(auVar45[0] == -1);
                    auVar51[1] = -(auVar45[1] == -1);
                    auVar51[2] = -(auVar45[2] == -1);
                    auVar51[3] = -(auVar45[3] == -1);
                    auVar51[4] = -(auVar45[4] == -1);
                    auVar51[5] = -(auVar45[5] == -1);
                    auVar51[6] = -(auVar45[6] == -1);
                    auVar51[7] = -(auVar45[7] == -1);
                    auVar51[8] = -(auVar45[8] == -1);
                    auVar51[9] = -(auVar45[9] == -1);
                    auVar51[10] = -(auVar45[10] == -1);
                    auVar51[0xb] = -(auVar45[0xb] == -1);
                    auVar51[0xc] = -(auVar45[0xc] == -1);
                    auVar51[0xd] = -(auVar45[0xd] == -1);
                    auVar51[0xe] = -(auVar45[0xe] == -1);
                    auVar51[0xf] = -(auVar45[0xf] == 0xff);
                    if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar51 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar51 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar51 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar51 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar51 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar51 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar51 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0')
                    goto LAB_100ca7a6;
                    bVar21 = true;
                    uVar38 = uVar25;
                  }
                  else {
                    uVar14 = (uint)(ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(byte)(auVar45[0xf] >> 7) << 0xf);
                    if (uVar14 != 0) {
                      iVar37 = 0;
                      for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                        iVar37 = iVar37 + 1;
                      }
                      auStack_4ec._0_4_ = iVar37 + uVar36 & uVar38;
                      goto LAB_100ca6e8;
                    }
                    bVar21 = false;
                  }
                  iVar37 = auStack_51c._0_4_ + 0x10;
                  auStack_51c._0_4_ = auStack_51c._0_4_ + 0x10;
                  uVar36 = iVar37 + uVar36 & uVar38;
                } while( true );
              }
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          auStack_4ec._0_4_ = puVar35;
          if (puVar35 <= puVar23) {
            FUN_10136b52(puVar23,puVar35,&PTR_s_C__Users_runneradmin__cargo_regi_10151978);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          iVar37 = *(int *)(auStack_51c._0_4_ + 8 + (int)puVar23 * 0xc);
          puVar32 = (uint *)(auStack_51c._0_4_ + (int)puVar23 * 0xc);
          if (iVar37 == *(int *)(auStack_51c._0_4_ + (int)puVar23 * 0xc)) {
            FUN_10135ee0(puVar32);
          }
          *(undefined4 *)(puVar32[1] + iVar37 * 8) = 0;
          puVar35 = (uint *)(iVar37 + 1);
          puVar32[2] = (uint)puVar35;
          iStack_158 = iStack_158 + 8;
          goto LAB_100ca854;
        }
        goto LAB_100cc05d;
      }
LAB_100ca123:
      iVar26 = iStack_4a0 + 0xc;
      puVar32 = puStack_4ac;
    } while ((uint *)iVar26 != puStack_49c);
    auStack_4ec._0_4_ = puVar35;
    if (puStack_174 == (uint *)0x0) goto LAB_100caaf8;
    iVar37 = (int)puStack_174 * 8;
    puVar32 = (uint *)0x0;
    do {
      if (puStack_174 == puVar32) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10151f10);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar38 = puStack_178[(int)puVar32 * 2 + 1];
      uVar36 = uVar38 + (int)puStack_174 * 2;
      uVar25 = puStack_178[(int)puVar32 * 2];
      if (0x7ffffffe < uVar36 || CARRY4(uVar38,(int)puStack_174 * 2)) {
        local_520 = (uint *)0x0;
        puStack_4f4 = (uint *)((uVar38 - uVar25 >> 1) + 1);
LAB_100cc05d:
        local_528 = (uint *)0x80000001;
        puVar35 = puStack_4f4;
LAB_100cc288:
        puStack_4f4 = puVar35;
        FUN_100d3f20((int *)&puStack_17c);
        puVar67 = local_4fc;
        if (local_500 != (int *)0x0) {
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,puVar67);
        }
        puVar30 = puStack_4bc;
        if (iStack_4c0 != 0) {
          pvVar9 = GetProcessHeap();
          HeapFree(pvVar9,0,puVar30);
        }
        FUN_100d3e20((int)&local_2fc);
        *(uint **)(puStack_4c4 + 1) = local_528;
        *(uint **)((int)puStack_4c4 + 0xc) = puVar32;
        *(uint **)((int)puStack_4c4 + 0x14) = local_520;
        *(uint **)(puStack_4c4 + 2) = puStack_4f4;
        *(undefined4 *)puStack_4c4 = 0x22;
        *(int *)(iStack_524 + 0x20) = *(int *)(iStack_524 + 0x20) + 1;
        return;
      }
      puStack_178[(int)puVar32 * 2 + 1] = uVar36;
      uVar25 = uVar25 + (int)puStack_174 * 2;
      if (0x7ffffffe < uVar25) {
        local_488 = (undefined1  [4])0x0;
        local_48c = (undefined1  [4])uVar25;
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,local_48c,&DAT_101527b8,
                     &PTR_s_C__Users_runneradmin__cargo_regi_101527c8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      puStack_178[(int)puVar32 * 2] = uVar25;
      puVar32 = (uint *)((int)puVar32 + 1);
      iVar37 = iVar37 + -8;
      puVar67 = puStack_174;
    } while (iVar37 != 0);
  }
  puVar32 = puStack_178;
  puVar35 = puStack_17c;
  if (puVar67 < puStack_17c) {
    puVar35 = puVar67;
    if (puVar67 == (uint *)0x0) {
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,puVar32);
      puVar32 = (uint *)&DAT_00000004;
    }
    else {
      pvVar9 = GetProcessHeap();
      puVar32 = HeapReAlloc(pvVar9,0,puVar32,(int)puVar67 * 8);
      if (puVar32 == (uint *)0x0) {
        FUN_101366bc(4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
  }
  puStack_178 = puVar32;
  puStack_17c = puVar35;
  puVar67 = puStack_168;
  puVar16 = puStack_16c;
  if (puStack_168 < puStack_170) {
    if (puStack_168 == (uint *)0x0) {
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,puVar16);
      puVar16 = &DAT_00000008;
    }
    else {
      SVar41 = (int)puStack_168 << 5;
      pvVar9 = GetProcessHeap();
      puVar16 = HeapReAlloc(pvVar9,0,puVar16,SVar41);
      if (puVar16 == (undefined1 *)0x0) {
        FUN_101366bc(8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    puStack_170 = puVar67;
    puStack_16c = puVar16;
  }
  uVar5 = auStack_4ec._0_4_;
  if ((uint)auStack_4ec._0_4_ < puStack_164) {
    if ((uint *)auStack_4ec._0_4_ == (uint *)0x0) {
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,(LPVOID)auStack_51c._0_4_);
      puVar16 = &DAT_00000004;
    }
    else {
      SVar41 = auStack_4ec._0_4_ * 0xc;
      pvVar9 = GetProcessHeap();
      puVar16 = HeapReAlloc(pvVar9,0,(LPVOID)auStack_51c._0_4_,SVar41);
      if (puVar16 == (undefined1 *)0x0) goto LAB_100cc11c;
    }
    puStack_164 = (uint *)uVar5;
    puStack_160 = puVar16;
  }
  piVar11 = FUN_10107380(0,0x30);
  if (piVar11 == (int *)0x0) {
LAB_100cc485:
    FUN_1013679e(4,0x30);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  *piVar11 = 1;
  piVar11[1] = 1;
  *(ulonglong *)(piVar11 + 10) = CONCAT44(iStack_158,puStack_15c);
  *(ulonglong *)(piVar11 + 8) = CONCAT44(puStack_160,puStack_164);
  *(ulonglong *)(piVar11 + 6) = CONCAT44(puStack_168,puStack_16c);
  *(ulonglong *)(piVar11 + 4) = CONCAT44(puStack_170,puStack_174);
  *(ulonglong *)(piVar11 + 2) = CONCAT44(puStack_178,puStack_17c);
  LOCK();
  *piStack_1c8 = *piStack_1c8 + -1;
  UNLOCK();
  if (*piStack_1c8 == 0) {
    FUN_100d3ef0(piStack_1c8);
  }
  auVar45 = auStack_1dc;
  piStack_1c8 = piVar11;
  if (uVar1 != 0) {
    if (uVar1 == 0) {
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10151ee0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
                    /* WARNING: Could not recover jumptable at 0x100cb054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(&DAT_100cc994 + **(int **)(iStack_524 + 0x38) * 4) + iStack_494))
              (auVar69,*(int **)(iStack_524 + 0x38) + uVar1 * 4);
    return;
  }
  local_4d8 = CONCAT44(local_4d8._4_4_,1);
  if (iStack_4b8 != 0) {
    auStack_4ec._0_4_ = puStack_4bc + iStack_4b8 * 2;
    FUN_10136b52(*puStack_4bc,0,&PTR_s_C__Users_runneradmin__cargo_regi_10152a18);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (iStack_1bc != 0) {
                    /* WARNING: Could not recover jumptable at 0x100cb960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(&DAT_100cc9bc + *piStack_1c0 * 4) + iStack_494))();
    return;
  }
  if (uStack_4f8 <= (uint)auStack_1dc._0_4_) {
    FUN_10136b52(auStack_1dc._0_4_,uStack_4f8,&PTR_s_C__Users_runneradmin__cargo_regi_10151e24);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  puVar67 = local_4fc + auStack_1dc._0_4_;
  auStack_1dc._0_4_ = *puVar67;
  auVar43 = auStack_1dc;
  auStack_1dc._4_4_ = auVar45._4_4_;
  uVar5 = auStack_1dc._4_4_;
  if (uStack_4f8 <= (uint)auStack_1dc._4_4_) {
    auStack_1dc = auVar43;
    FUN_10136b52(uVar5,uStack_4f8,&PTR_s_C__Users_runneradmin__cargo_regi_10151e34);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  auStack_1dc._8_8_ = auVar45._8_8_;
  auStack_1dc._4_4_ = local_4fc[auStack_1dc._4_4_];
  if (iStack_1b0 != 0) {
    iVar37 = iStack_1b0 << 2;
    puVar67 = puStack_1b4;
    do {
      uVar38 = *puVar67;
      if (uStack_4f8 <= uVar38) {
        FUN_10136b52(uVar38,uStack_4f8,&PTR_s_C__Users_runneradmin__cargo_regi_10151e44);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      *puVar67 = local_4fc[uVar38];
      puVar67 = puVar67 + 1;
      iVar37 = iVar37 + -4;
    } while (iVar37 != 0);
  }
  memcpy(&puStack_17c,&local_2fc,0x160);
  uVar38 = 0;
  cVar22 = '\0';
  auStack_39c = (undefined1  [16])0x0;
  auStack_3ac = (undefined1  [16])0x0;
  auStack_3bc = (undefined1  [16])0x0;
  auStack_3cc = (undefined1  [16])0x0;
  auStack_3dc = (undefined1  [16])0x0;
  auStack_3ec = (undefined1  [16])0x0;
  auStack_3fc = (undefined1  [16])0x0;
  auStack_40c = (undefined1  [16])0x0;
  auStack_41c = (undefined1  [16])0x0;
  auStack_42c = (undefined1  [16])0x0;
  auStack_43c = (undefined1  [16])0x0;
  auStack_44c = (undefined1  [16])0x0;
  local_45c = (undefined1  [16])0x0;
  local_46c = (undefined1  [16])0x0;
  _local_47c = (undefined1  [16])0x0;
  _local_48c = (undefined1  [16])0x0;
  do {
    if ((*(uint *)((int)auStack_7c + ((uVar38 & 0x60) >> 3) + (uVar38 >> 3 & 0x10)) >>
         (uVar38 & 0x1f) & 1) != 0) {
      if (cVar22 == -1) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101527f8);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      cVar22 = cVar22 + '\x01';
    }
    local_48c[uVar38 + 1] = cVar22;
    uVar38 = uVar38 + 1;
  } while (uVar38 != 0xff);
  memcpy(&puStack_17c,local_48c,0x100);
  local_4d8 = local_4d8 & 0xffffffff;
  local_4d0 = (uint *)&DAT_00000004;
  local_474._0_4_ = 0;
  _local_48c = ZEXT816(0x400000000);
  uStack_4cc = 0;
  local_47c = (undefined1  [8])0x4;
  FUN_100cf1b0((uint *)local_48c,uStack_3c);
  auStack_4ec._0_4_ = local_488;
  iStack_308 = local_484._4_4_;
  uStack_30c = (uint)local_48c;
  auStack_18c._0_4_ = iStack_30;
  auStack_19c._0_4_ = puStack_34;
  if (iStack_30 != 0) {
    puVar67 = (uint *)local_484;
    auStack_51c._0_4_ = &DAT_00000004;
    piStack_4b4 = (int *)uStack_3c;
    puStack_4f4 = (uint *)local_47c._4_4_;
    puStack_49c = puStack_34 + iStack_30;
    local_498 = (int *)puStack_40;
    uVar38 = *puStack_34;
    pvVar13 = (LPVOID)local_47c._0_4_;
    if (local_4d8._4_4_ == 0) {
      FUN_10135e40((uint *)((int)&local_4d8 + 4));
      auStack_51c._0_4_ = local_4d0;
    }
    puStack_4b0 = puStack_34 + 1;
    piStack_4a8 = (int *)0x0;
    *(uint *)auStack_51c._0_4_ = uVar38;
    iStack_4a0 = CONCAT31(iStack_4a0._1_3_,uStack_2a);
    uStack_4cc = 0;
    uStack_304 = *local_4d0;
    if (puStack_4f4 <= uStack_304) {
      FUN_10136b52(uStack_304,puStack_4f4,&PTR_s_C__Users_runneradmin__cargo_regi_10152958);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    local_300 = (uint *)0x0;
    if (puVar67 == (uint *)0x0) {
      local_488 = (undefined1  [4])&LAB_100908e0;
      local_48c = (undefined1  [4])&local_300;
      local_484._0_4_ = (uint *)&puStack_4a4;
      local_484._4_4_ = (int)&LAB_100908e0;
      local_47c._4_4_ = &LAB_100ceed0;
      local_47c._0_4_ = &uStack_304;
      puStack_4a4 = puVar67;
      FUN_101369c0(&DAT_101528e4,local_48c,&PTR_s_C__Users_runneradmin__cargo_regi_10152910);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    puStack_4f0 = (uint *)0x1;
    *(uint *)auStack_4ec._0_4_ = uStack_304;
    *(undefined4 *)((int)pvVar13 + uStack_304 * 4) = 0;
    if (piStack_4b4 <= uStack_304) {
      FUN_10136b52(uStack_304,piStack_4b4,&PTR_s_C__Users_runneradmin__cargo_regi_10151e54);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
                    /* WARNING: Could not recover jumptable at 0x100cbe3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(&DAT_100cc9e0 + *(int *)((int)local_498 + uStack_304 * 0x14) * 4) +
              iStack_494))();
    return;
  }
  uVar38 = 0;
  pvVar13 = (LPVOID)local_47c._0_4_;
  if (uStack_3c < uStack_44) {
    if (uStack_3c == 0) {
      pvVar9 = GetProcessHeap();
      HeapFree(pvVar9,0,puStack_40);
      puStack_40 = &DAT_00000004;
    }
    else {
      pvVar9 = GetProcessHeap();
      puStack_40 = HeapReAlloc(pvVar9,0,puStack_40,uStack_3c * 0x14);
      if (puStack_40 == (undefined1 *)0x0) {
        FUN_101366bc(4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    uVar38 = auStack_18c._0_4_;
  }
  if (uVar38 < uStack_38) {
    pvVar9 = GetProcessHeap();
    uStack_38 = uVar38;
    if (uVar38 == 0) {
      HeapFree(pvVar9,0,(LPVOID)auStack_19c._0_4_);
      puStack_34 = (uint *)&DAT_00000004;
    }
    else {
      puStack_34 = HeapReAlloc(pvVar9,0,(LPVOID)auStack_19c._0_4_,uVar38 * 4);
      if (puStack_34 == (uint *)0x0) {
LAB_100cc11c:
        FUN_101366bc(4);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
  }
  memcpy(&local_484,&puStack_17c,0x160);
  pvVar17 = FUN_10107380(0,0x180);
  if (pvVar17 == (LPVOID)0x0) {
    FUN_1013679e(0x10,0x170);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar38 = (uint)pvVar17 & 0xfffffff0;
  *(LPVOID *)(uVar38 + 0xc) = pvVar17;
  *(undefined4 *)(uVar38 + 0x10) = 1;
  *(undefined4 *)(uVar38 + 0x14) = 1;
  memcpy((void *)(uVar38 + 0x18),local_48c,0x168);
  if (uStack_30c != 0) {
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,(LPVOID)auStack_4ec._0_4_);
  }
  if (iStack_308 != 0) {
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,pvVar13);
  }
  puVar67 = local_4d0;
  if (local_4d8._4_4_ != 0) {
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,puVar67);
  }
  puVar67 = local_4fc;
  if (local_500 != (int *)0x0) {
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,puVar67);
  }
  puVar30 = puStack_4bc;
  if (iStack_4c0 != 0) {
    pvVar9 = GetProcessHeap();
    HeapFree(pvVar9,0,puVar30);
  }
  *(int *)(iStack_524 + 0x20) = *(int *)(iStack_524 + 0x20) + 1;
  *(uint *)((int)puStack_4c4 + 4) = uVar38 + 0x10;
  *(undefined4 *)puStack_4c4 = 0xfffffffe;
  return;
LAB_100c98f5:
  param_2[8] = -1;
  auVar69 = (undefined1  [4])param_2[0xf];
  if (auVar69 == (undefined1  [4])param_2[0xd]) {
    FUN_10135f30((uint *)(param_2 + 0xd));
    iVar37 = param_2[0xb];
  }
  iVar26 = param_2[0xe];
  *(undefined4 *)(iVar26 + (int)auVar69 * 0x10) = 0;
  *(undefined4 *)(iVar26 + 4 + (int)auVar69 * 0x10) = 0;
  param_2[0xf] = (int)auVar69 + 1U;
  if ((iVar37 == 1) && (uVar38 = param_2[0xc], uVar38 < ((int)auVar69 + 1U) * 0x10 + param_2[0x16]))
  {
    param_2[8] = param_2[8] + 1;
    *local_4c8 = 0x26;
    local_4c8[1] = uVar38;
    local_4c8[2] = (uint)auVar69;
    return;
  }
  param_2[8] = param_2[8] + 1;
  local_530 = (uint)auVar69;
  goto LAB_100c996f;
LAB_100ca7a6:
  bVar42 = (*pauVar12)[auStack_4ec._0_4_];
  iVar37 = auStack_4ec._0_4_;
  if (-1 < (char)bVar42) {
    auVar45 = *pauVar12;
    iVar37 = 0;
    for (uVar38 = (uint)(ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar45[0xf] >> 7) << 0xf); (uVar38 & 1) == 0;
        uVar38 = uVar38 >> 1 | 0x80000000) {
      iVar37 = iVar37 + 1;
    }
    bVar42 = (*pauVar12)[iVar37];
  }
  piStack_4b4[2] = piStack_4b4[2] - (uint)(bVar42 & 1);
  (*pauVar12)[iVar37] = (char)puVar32;
  pauVar12[1][iVar37 - 0x10U & uVar25] = (char)puVar32;
  piStack_4b4[3] = piStack_4b4[3] + 1;
  *(uint **)((int)pauVar12 + iVar37 * -0xc + -0xc) = puStack_4f0;
  *(uint **)((int)pauVar12 + iVar37 * -0xc + -8) = local_528;
  *(uint **)((int)pauVar12 + iVar37 * -0xc + -4) = puStack_4f4;
LAB_100ca7f4:
  auStack_4ec._0_4_ = puStack_15c;
  if (puStack_15c <= puVar23) {
    FUN_10136b52(puVar23,puStack_15c,&PTR_s_C__Users_runneradmin__cargo_regi_10151968);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar37 = *(int *)(puStack_160 + (int)puVar23 * 0xc + 8);
  puVar32 = (uint *)(puStack_160 + (int)puVar23 * 0xc);
  auStack_51c._0_4_ = puStack_160;
  if (iVar37 == *(int *)(puStack_160 + (int)puVar23 * 0xc)) {
    FUN_10135ee0(puVar32);
  }
  uVar38 = puVar32[1];
  *(uint **)(uVar38 + iVar37 * 8) = puStack_4f0;
  *(uint **)(uVar38 + 4 + iVar37 * 8) = local_528;
  puVar35 = (uint *)(iVar37 + 1);
  puVar32[2] = (uint)puVar35;
  iStack_158 = iStack_158 + 0x14 + (int)local_528 * 2;
  puVar29 = puStack_174;
LAB_100ca854:
  puStack_4a4 = (uint *)((int)puStack_4f4 + 1);
  if (puVar23 < puVar29) {
    puVar32 = (uint *)(puStack_178[(int)puVar23 * 2 + 1] - puStack_178[(int)puVar23 * 2] >> 1);
    local_48c = (undefined1  [4])((int)puVar32 + 1);
    if (puStack_4f4 == puVar32) {
      local_4d8 = CONCAT44(puStack_4a4,(uint *)local_4d8);
      if ((uint)auStack_4ec._0_4_ <= puVar23) {
        FUN_10136b52(puVar23,auStack_4ec._0_4_,&PTR_s_C__Users_runneradmin__cargo_regi_10151998);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      local_48c = (undefined1  [4])puVar35;
      if (puStack_4a4 != puVar35) {
        ppuVar68 = &PTR_s_C__Users_runneradmin__cargo_regi_101519a8;
        goto LAB_100cc4fa;
      }
      piVar18 = local_498 + 2;
      piVar11 = local_498;
      puVar35 = (uint *)auStack_4ec._0_4_;
      puStack_4f4 = puStack_4a4;
      if (piVar18 == piStack_4a8) goto LAB_100ca123;
      goto LAB_100ca16c;
    }
  }
  else {
    auVar4._12_4_ = 0;
    auVar4._0_12_ = _local_488;
    _local_48c = auVar4 << 0x20;
  }
  ppuVar68 = &PTR_s_C__Users_runneradmin__cargo_regi_10151988;
  goto LAB_100cc4b6;
}
