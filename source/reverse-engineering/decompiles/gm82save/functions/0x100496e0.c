// rea decompile_all
// name: FUN_100496e0
// address: 0x100496e0
// body: available
// range: 0x100496e0-0x1004987a inclusive
// range: 0x10049950-0x100499b2 inclusive
// range: 0x100499c0-0x100499e4 inclusive
// range: 0x100499f0-0x10049af3 inclusive
// range: 0x10049baf-0x10049e19 inclusive
// range: 0x10049ea2-0x1004b617 inclusive
// range: 0x1004b629-0x1004b789 inclusive
// range: 0x1004b79f-0x1004b83f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1004a4b2) */
/* WARNING: Removing unreachable block (ram,0x1004ab07) */
/* WARNING: Removing unreachable block (ram,0x1004b14f) */
/* WARNING: Removing unreachable block (ram,0x1004b069) */
/* WARNING: Removing unreachable block (ram,0x1004b079) */
/* WARNING: Removing unreachable block (ram,0x1004b07f) */
/* WARNING: Removing unreachable block (ram,0x1004b085) */
/* WARNING: Removing unreachable block (ram,0x1004b08f) */
/* WARNING: Removing unreachable block (ram,0x1004a6cc) */
/* WARNING: Removing unreachable block (ram,0x1004aee9) */
/* WARNING: Removing unreachable block (ram,0x1004aef8) */
/* WARNING: Removing unreachable block (ram,0x1004acd6) */
/* WARNING: Removing unreachable block (ram,0x1004aa7e) */
/* WARNING: Removing unreachable block (ram,0x1004ac22) */
/* WARNING: Removing unreachable block (ram,0x1004ace5) */
/* WARNING: Removing unreachable block (ram,0x1004ab6e) */
/* WARNING: Removing unreachable block (ram,0x1004a792) */
/* WARNING: Removing unreachable block (ram,0x1004ac06) */
/* WARNING: Removing unreachable block (ram,0x1004ae79) */
/* WARNING: Removing unreachable block (ram,0x1004a66a) */
/* WARNING: Removing unreachable block (ram,0x1004b100) */
/* WARNING: Removing unreachable block (ram,0x1004ab3e) */
/* WARNING: Removing unreachable block (ram,0x1004a6d9) */
/* WARNING: Removing unreachable block (ram,0x1004afa0) */
/* WARNING: Removing unreachable block (ram,0x1004adeb) */
/* WARNING: Removing unreachable block (ram,0x1004af23) */
/* WARNING: Removing unreachable block (ram,0x1004b017) */
/* WARNING: Removing unreachable block (ram,0x1004ae3f) */
/* WARNING: Removing unreachable block (ram,0x1004a822) */
/* WARNING: Removing unreachable block (ram,0x1004a328) */
/* WARNING: Removing unreachable block (ram,0x1004a8d6) */
/* WARNING: Removing unreachable block (ram,0x1004ac52) */
/* WARNING: Removing unreachable block (ram,0x1004ae9f) */
/* WARNING: Removing unreachable block (ram,0x1004a920) */
/* WARNING: Removing unreachable block (ram,0x1004a93c) */
/* WARNING: Removing unreachable block (ram,0x1004a93e) */
/* WARNING: Removing unreachable block (ram,0x1004a946) */

void __fastcall FUN_100496e0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  SIZE_T _Size;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined1 auVar8 [14];
  int iVar9;
  uint3 uVar10;
  undefined1 auVar11 [14];
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined2 uVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  undefined **ppuVar21;
  LPVOID pvVar22;
  undefined4 uVar23;
  byte bVar25;
  HANDLE pvVar24;
  ushort uVar26;
  undefined1 (*pauVar27) [16];
  uint *puVar28;
  uint *puVar29;
  char cVar33;
  uint uVar30;
  undefined1 (*extraout_ECX) [16];
  undefined1 (*extraout_ECX_00) [16];
  undefined1 (*pauVar31) [16];
  uint uVar32;
  uint *puVar34;
  uint uVar35;
  undefined1 (*pauVar36) [16];
  byte bVar37;
  byte bVar38;
  SIZE_T SVar39;
  uint *puVar40;
  ushort uVar41;
  undefined1 *puVar42;
  uint uVar43;
  undefined **ppuVar44;
  uint *puVar45;
  undefined1 (*unaff_EDI) [16];
  undefined1 (*pauVar46) [16];
  int in_XMM0_Da;
  int in_XMM0_Db;
  int in_XMM0_Dc;
  int in_XMM0_Dd;
  undefined8 in_XMM1_Qa;
  ulonglong uVar47;
  uint *in_stack_0000001c;
  undefined1 (*pauVar48) [16];
  char cVar49;
  void *pvVar50;
  byte in_stack_ffffff44;
  byte in_stack_ffffff45;
  undefined1 in_stack_ffffff46;
  undefined1 in_stack_ffffff47;
  undefined1 in_stack_ffffff48;
  undefined1 uVar51;
  undefined1 in_stack_ffffff49;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 in_stack_ffffff4a;
  undefined1 uVar55;
  undefined1 in_stack_ffffff4b;
  undefined1 uVar56;
  byte bStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined1 (*pauStack_b0) [16];
  undefined4 local_a4;
  undefined4 *local_a0;
  undefined1 (*local_9c) [16];
  undefined1 (*local_98) [16];
  uint local_94;
  undefined1 (*local_8c) [16];
  undefined1 (*local_88) [16];
  undefined4 local_84;
  undefined1 (*pauStack_80) [16];
  uint local_7c;
  undefined1 (*pauStack_78) [16];
  undefined1 (*local_74) [16];
  undefined1 (*pauStack_70) [16];
  uint local_6c;
  undefined1 (*local_68) [16];
  int local_64;
  undefined1 (*local_60) [16];
  undefined2 local_5c;
  undefined1 local_5a;
  undefined2 local_56;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 (*local_50) [16];
  undefined2 *local_4c;
  undefined1 (*local_48) [16];
  undefined1 (*local_44) [16];
  undefined1 (*local_40) [16];
  undefined1 (*local_3c) [16];
  int local_38;
  int iStack_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 (*local_28) [16];
  int local_24;

  pauVar46 = *(undefined1 (**) [16])(param_2[0x1b] + 8);
  uVar18 = *(uint *)param_2[0x1c];
  uVar43 = *(uint *)(param_2[0x1c] + 4);
  if (*(uint *)(param_2[0x1c] + 4) <= uVar18) {
    pauStack_80 = *(undefined1 (**) [16])(param_2[0x1b] + 0xc);
    local_7c = 0;
    pauStack_78 = (undefined1 (*) [16])CONCAT31(pauStack_78._1_3_,param_2[0x1c][8]);
    local_84 = pauVar46;
    FUN_10112420((undefined8 *)&stack0xffffff44,*(HANDLE *)(param_2[0x1c] + 0xc),&local_84);
    *(undefined4 *)param_2[0x1c] = 0;
    *(uint *)(param_2[0x1c] + 4) = local_7c;
    param_2[0x1c][8] = pauStack_78._0_1_;
    if (in_stack_ffffff44 != 0xff) {
      (*param_1)[0] = 0x22;
      *(ulonglong *)(*param_1 + 4) =
           CONCAT17(in_stack_ffffff4b,
                    CONCAT16(in_stack_ffffff4a,
                             CONCAT15(in_stack_ffffff49,
                                      CONCAT14(in_stack_ffffff48,
                                               CONCAT13(in_stack_ffffff47,
                                                        CONCAT12(in_stack_ffffff46,
                                                                 CONCAT11(in_stack_ffffff45,
                                                                          in_stack_ffffff44)))))));
      goto LAB_1004978a;
    }
    uVar18 = 0;
    in_stack_ffffff44 = 0xff;
    uVar43 = local_7c;
  }
  local_98 = (undefined1 (*) [16])(uVar43 - uVar18);
  if (local_98 != (undefined1 (*) [16])0x0) {
    local_3c = local_98;
    local_28 = param_1;
    if (param_2[5][0] == -1) {
      local_9c = (undefined1 (*) [16])0x2;
      local_3c = (undefined1 (*) [16])&DAT_00000024;
      bVar38 = 0xff;
    }
    else {
      pauVar46 = (undefined1 (*) [16])((int)*pauVar46 + uVar18);
      local_68 = (undefined1 (*) [16])0x1015;
      local_64 = 0x11fc0000;
      local_2c = 0;
      local_4c = (undefined2 *)(param_2[5] + 5);
      local_44 = param_2 + 3;
      local_48 = (undefined1 (*) [16])&pauStack_80;
      local_50 = local_98;
      pauVar48 = param_2;
      local_98 = (undefined1 (*) [16])&pauStack_80;
      local_88 = pauVar46;
      do {
        uVar15 = uStack_b1;
        uVar14 = uStack_b2;
        uVar13 = uStack_b3;
        bVar25 = bStack_b4;
        puVar45 = (uint *)0x100496ef;
        bVar38 = param_2[5][0];
        SVar39 = (SIZE_T)bVar38;
        pauVar31 = *(undefined1 (**) [16])((int)param_2[5] + 1);
        local_52 = *(undefined1 *)(local_4c + 1);
        local_94 = *(undefined4 *)((int)param_2[5] + 8);
        local_54 = *local_4c;
        uVar18 = *(uint *)((int)param_2[5] + 0xc);
        param_2[5][0] = 0xff;
        if (bVar38 == 0xff) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1015047c);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        pauVar27 = (undefined1 (*) [16])0x0;
        iVar19 = (byte)(bVar38 - 6) + 1;
        if (bVar38 < 6) {
          iVar19 = 0;
        }
        pbVar20 = (byte *)((&DAT_1004b840)[iVar19] + 0x100496ef);
        uVar51 = 0;
        uVar54 = 0;
        uVar55 = 0;
        uVar52 = (undefined1)local_64;
        uVar56 = (undefined1)((uint)local_64 >> 8);
        bStack_b4 = (byte)((uint)local_64 >> 0x10);
        uStack_b3 = (undefined1)((uint)local_64 >> 0x18);
        uStack_b2 = SUB41(local_68,0);
        uStack_b1 = (undefined1)((uint)local_68 >> 8);
        pauVar36 = pauVar31;
        bVar16 = bVar38;
        bVar37 = bVar38;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar38) {
        case 6:
          pauVar46 = *(undefined1 (**) [16])param_2[2];
          if (pauVar46 == (undefined1 (*) [16])0x0) {
            bVar38 = 2;
            param_2[5][0] = 4;
            *(undefined4 *)((int)param_2[5] + 8) = 0;
            *(undefined4 *)((int)param_2[5] + 0xc) = 0;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
          }
          else {
            iVar19 = *(int *)((int)param_2[1] + 8);
            pauVar27 = (undefined1 (*) [16])(*(int *)param_2[1] - iVar19);
            if (local_50 <= pauVar27) {
              pauVar27 = local_50;
            }
            if (pauVar46 <= pauVar27) {
              pauVar27 = pauVar46;
            }
            if (*(int *)param_2[1] != iVar19) {
              if (*(char *)((int)param_2[0x1a] + 0xd) == '\0') {
                puVar45 = (uint *)((int)*param_2 + 8);
                uVar43 = *puVar45;
                *puVar45 = (uint)((int)*pauVar27 + *puVar45);
                *(int *)((int)*param_2 + 0xc) =
                     *(int *)((int)*param_2 + 0xc) + (uint)CARRY4(uVar43,(uint)pauVar27);
                if (*(int *)*param_2 == 1) {
                  uVar43 = FUN_1009d660(*(uint *)((int)*param_2 + 4),local_88,(uint)pauVar27);
                }
                else {
                  uVar43 = FUN_1009d850(*(uint *)((int)*param_2 + 4),(byte *)local_88,(uint)pauVar27
                                       );
                }
                *(uint *)((int)*param_2 + 4) = uVar43;
              }
              memcpy((void *)(*(int *)((int)param_2[1] + 4) + iVar19),local_88,(size_t)pauVar27);
              *(undefined1 **)((int)param_2[1] + 8) = (undefined1 *)((int)*pauVar27 + iVar19);
              pauVar46 = param_2 + 2;
              *(int *)*pauVar46 = *(int *)*pauVar46 - (int)pauVar27;
              bVar16 = 7;
              if (*(int *)*pauVar46 != 0) {
                *(undefined1 *)(local_4c + 1) = local_52;
                *local_4c = local_54;
                *(uint *)((int)param_2[5] + 8) = local_94;
                *(uint *)((int)param_2[5] + 0xc) = uVar18;
                bVar16 = bVar38;
              }
              param_2[5][0] = bVar16;
              bVar38 = 2;
              pauVar46 = (undefined1 (*) [16])((uint)pauVar27 >> 0x10);
              *(undefined1 (**) [16])((int)param_2[5] + 1) = pauVar31;
              local_98 = (undefined1 (*) [16])((uint)pauVar27 >> 8 & 0xff);
              bStack_b4 = bVar25;
              uStack_b3 = uVar13;
              uStack_b2 = uVar14;
              uStack_b1 = uVar15;
              goto LAB_1004ad6f;
            }
            param_2[5][0] = 7;
            bVar38 = 2;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
          }
          goto LAB_1004ad6d;
        case 7:
          if (*(int *)param_2[2] == 0) {
            bVar37 = 0xb;
            bVar16 = 0xb;
            bVar38 = 0xb;
            param_2[5][0] = 4;
            *(undefined4 *)((int)param_2[5] + 8) = 0;
            *(undefined4 *)((int)param_2[5] + 0xc) = 0;
            uVar43 = ((uint)pauVar31 & 0xff) - 0x49;
            pauVar27 = pauVar31;
            if (uVar43 < 0x32) {
              pauVar46 = (undefined1 (*) [16])&stack0xffffff45;
              uVar18 = (uint)pauVar31 >> 0x10;
              pbVar20 = (byte *)((uint)pauVar31 >> 0x18);
              pauVar36 = (undefined1 (*) [16])
                         ((&switchD_10049bef::switchdataD_1004b850)[uVar43] + 0x100496ef);
              switch((uint)pauVar31 & 0xff) {
              case 0x49:
                goto switchD_10049879_caseD_10049bf1;
              case 0x50:
                goto switchD_10049879_caseD_1004a1a6;
              case 0x61:
                goto switchD_10049879_caseD_1004a166;
              case 0x62:
                goto switchD_10049879_caseD_1004a100;
              case 99:
                goto switchD_10049879_caseD_10049f92;
              case 0x66:
                goto switchD_10049879_caseD_1004a04b;
              case 0x67:
                goto switchD_10049879_caseD_1004a1f9;
              case 0x69:
                goto switchD_10049879_caseD_1004a23a;
              case 0x6d:
                goto switchD_10049879_caseD_1004a2c4;
              case 0x70:
                goto switchD_10049879_caseD_1004a282;
              case 0x73:
                goto switchD_10049879_caseD_10049f55;
              case 0x74:
                goto switchD_10049879_caseD_1004a0c3;
              case 0x7a:
                goto switchD_10049879_caseD_10049fdc;
              }
            }
            else {
              pauVar46 = (undefined1 (*) [16])&stack0xffffff45;
            }
            break;
          }
          uVar18 = *(uint *)((int)param_2[0x1a] + 4);
          uVar43 = *(uint *)param_2[1];
          uVar32 = *(uint *)((int)param_2[1] + 8);
          uVar30 = uVar18 - uVar43;
          if (uVar18 < uVar43) {
            uVar30 = 0;
          }
          if (uVar32 < uVar30) {
            uVar30 = uVar32;
          }
          *(uint *)((int)param_2[0x1a] + 4) = uVar18 - uVar30;
          if (uVar43 - uVar32 < uVar30) {
            uVar30 = uVar30 + uVar32;
            FUN_10136460(&local_84,uVar43,*(LPVOID *)((int)param_2[1] + 4),uVar30,(LPVOID)0x1,1);
            if (local_84 == (undefined1 (*) [16])0x1) {
              FUN_101366bc((int)pauStack_80);
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            *(undefined1 (**) [16])((int)param_2[1] + 4) = pauStack_80;
            *(uint *)param_2[1] = uVar30;
            uVar43 = uVar30;
          }
          if (uVar43 != uVar32) {
            param_2[5][0] = 6;
            *(undefined1 (**) [16])((int)param_2[5] + 1) = pauVar31;
            bVar38 = 0xb;
            pauVar46 = (undefined1 (*) [16])0x0;
            local_98 = (undefined1 (*) [16])0x0;
            pauVar27 = (undefined1 (*) [16])0x0;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
            local_9c = pauVar31;
            goto LAB_1004ad6f;
          }
          local_3c = (undefined1 (*) [16])0x25;
          goto LAB_1004b74f;
        case 8:
          puVar45 = *(uint **)((int)param_2[3] + 0xc);
          pauVar27 = *(undefined1 (**) [16])param_2[2];
          if (local_50 <= *(undefined1 (**) [16])param_2[2]) {
            pauVar27 = local_50;
          }
          pauVar36 = local_88;
          if (*(char *)((int)puVar45 + 0x3a3) != '\a') {
            puVar29 = *(uint **)param_2[4];
            puVar40 = *(uint **)((int)param_2[4] + 8);
            if (puVar40 <= puVar29) {
              puVar40 = (uint *)0xffffffff;
              *(undefined4 *)((int)param_2[4] + 8) = 0xffffffff;
            }
            puVar34 = *(uint **)((int)param_2[3] + 8);
            puVar28 = puVar29 + 0x2000;
            if ((uint *)0xffff7fff < puVar29) {
              puVar28 = (uint *)0xffffffff;
            }
            if (puVar40 < puVar28) {
              puVar28 = puVar40;
            }
            local_40 = pauVar46;
            if (puVar34 < puVar28) {
              puVar28 = (uint *)0x8000;
              if ((uint *)0x8000 < puVar34) {
                puVar28 = puVar34;
              }
              puVar29 = (uint *)((int)puVar28 + (int)puVar34);
              if (puVar40 <= (uint *)((int)puVar28 + (int)puVar34)) {
                puVar29 = puVar40;
              }
              if ((uint *)0x7ffffffe < puVar29) {
                puVar29 = (uint *)0x7fffffff;
              }
              uVar43 = (int)puVar29 - (int)puVar34;
              if (puVar34 <= puVar29 && uVar43 != 0) {
                if ((uint)(*(int *)*local_44 - (int)puVar34) < uVar43) {
                  FUN_10137980((uint *)local_44,(uint)puVar34,uVar43);
                  puVar34 = *(uint **)((int)param_2[3] + 8);
                }
                iVar19 = *(int *)((int)param_2[3] + 4);
                puVar42 = (undefined1 *)(iVar19 + (int)puVar34);
                param_2 = pauVar48;
                if (1 < uVar43) {
                  memset(puVar42,0,uVar43 - 1);
                  puVar34 = (uint *)((int)puVar34 + (uVar43 - 1));
                  puVar42 = (undefined1 *)(iVar19 + (int)puVar34);
                  param_2 = pauVar48;
                }
                *puVar42 = 0;
                puVar29 = (uint *)((int)puVar34 + 1);
                puVar45 = *(uint **)((int)param_2[3] + 0xc);
                pauVar48 = param_2;
              }
              *(uint **)((int)param_2[3] + 8) = puVar29;
              cVar33 = *(char *)((int)param_2[4] + 0xc);
            }
            else {
              cVar33 = *(char *)((int)param_2[4] + 0xc);
              puVar29 = puVar34;
            }
            if ((cVar33 == '\0') && (*(char *)((int)param_2[4] + 0xd) != '\0')) {
              *(undefined1 *)((int)puVar45 + 0x3a6) = 1;
            }
            local_24 = *(int *)((int)param_2[3] + 4);
            puVar40 = *(uint **)param_2[4];
            FUN_1009e580(&local_84,puVar45,(uint *)local_88,(uint *)pauVar27,local_24,puVar29,
                         puVar40,'\0');
            if ((char)local_6c != '\0') {
              local_98 = (undefined1 (*) [16])(local_6c >> 8 & 0xff);
              local_3c = (undefined1 (*) [16])&DAT_0000001c;
              local_8c = local_74;
              pauVar46 = local_28;
              goto LAB_1004b74f;
            }
            puVar40 = (uint *)((int)puVar40 + local_64);
            *(undefined1 *)((int)param_2[4] + 0xc) = 1;
            *(uint **)param_2[4] = puVar40;
            local_28 = local_68;
            puVar45 = *(uint **)((int)param_2[4] + 4);
            if ((puVar29 < puVar40) || (uVar43 = (int)puVar40 - (int)puVar45, puVar40 < puVar45)) {
              FUN_10136a50((uint)puVar45,(uint)puVar40,(uint)puVar29,
                           &PTR_s_C__Users_runneradmin__cargo_regi_10150428);
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            uVar32 = in_stack_0000001c[2];
            uVar54 = (undefined1)uVar43;
            uVar52 = (undefined1)(uVar43 >> 8);
            uVar55 = (undefined1)(uVar43 >> 0x10);
            uVar56 = (undefined1)(uVar43 >> 0x18);
            if (*in_stack_0000001c - uVar32 < uVar43) {
              FUN_10137980(in_stack_0000001c,uVar32,uVar43);
              uVar32 = in_stack_0000001c[2];
LAB_10049d18:
              puVar42 = (undefined1 *)((int)puVar45 + (int)unaff_EDI);
              pauVar31 = (undefined1 (*) [16])(in_stack_0000001c[1] + uVar32);
              in_stack_ffffff44 = (byte)puVar42;
              in_stack_ffffff45 = (byte)((uint)puVar42 >> 8);
              in_stack_ffffff46 = (undefined1)((uint)puVar42 >> 0x10);
              in_stack_ffffff47 = (undefined1)((uint)puVar42 >> 0x18);
              uVar18 = 0x10049d35;
              memcpy(pauVar31,puVar42,uVar43);
              in_stack_ffffff48 = uVar54;
              in_stack_ffffff49 = uVar52;
              in_stack_ffffff4a = uVar55;
              in_stack_ffffff4b = uVar56;
            }
            else if (puVar40 != puVar45) goto LAB_10049d18;
            in_stack_0000001c[2] = uVar32 + uVar43;
            *(uint **)((int)pauStack_b0[4] + 4) = puVar40;
            if ((uint *)0x20000 < puVar40) {
              puVar42 = (undefined1 *)((int)unaff_EDI[-0x800] + (int)puVar40);
              in_stack_ffffff48 = 0;
              in_stack_ffffff49 = 0x80;
              in_stack_ffffff4a = 0;
              in_stack_ffffff4b = 0;
              in_stack_ffffff44 = (byte)puVar42;
              in_stack_ffffff45 = (byte)((uint)puVar42 >> 8);
              in_stack_ffffff46 = (undefined1)((uint)puVar42 >> 0x10);
              in_stack_ffffff47 = (undefined1)((uint)puVar42 >> 0x18);
              uVar18 = 0x10049d6f;
              pauVar31 = unaff_EDI;
              memmove(unaff_EDI,puVar42,0x8000);
              *(undefined4 *)((int)pauStack_b0[4] + 4) = 0x8000;
              *(undefined4 *)pauStack_b0[4] = 0x8000;
            }
            pauVar27 = local_28;
            pauVar36 = pauStack_70;
            param_2 = pauStack_b0;
            if (pauStack_80 < local_28) {
              FUN_10136a50(0,(uint)local_28,(uint)pauStack_80,
                           &PTR_s_C__Users_runneradmin__cargo_regi_1015049c);
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
          }
          puVar45 = (uint *)((int)*param_2 + 8);
          uVar43 = *puVar45;
          *puVar45 = (uint)((int)*pauVar27 + *puVar45);
          *(int *)((int)*param_2 + 0xc) =
               *(int *)((int)*param_2 + 0xc) + (uint)CARRY4(uVar43,(uint)pauVar27);
          if (*(int *)*param_2 == 1) {
            uVar43 = FUN_1009d660(*(uint *)((int)*param_2 + 4),pauVar36,(uint)pauVar27);
          }
          else {
            uVar43 = FUN_1009d850(*(uint *)((int)*param_2 + 4),(byte *)pauVar36,(uint)pauVar27);
          }
          *(uint *)((int)*param_2 + 4) = uVar43;
          pauVar46 = param_2 + 2;
          *(int *)*pauVar46 = *(int *)*pauVar46 - (int)pauVar27;
          if (*(int *)*pauVar46 == 0) {
            *(undefined4 *)((int)param_2[5] + 8) = 0;
            uVar18 = 0;
            bVar38 = 4;
          }
          else {
            *(undefined1 *)(local_4c + 1) = local_52;
            *local_4c = local_54;
            *(uint *)((int)param_2[5] + 8) = local_94;
          }
          param_2[5][0] = bVar38;
          *(undefined1 (**) [16])((int)param_2[5] + 1) = pauVar31;
          *(uint *)((int)param_2[5] + 0xc) = uVar18;
          bVar38 = 9;
          local_98 = (undefined1 (*) [16])((uint)pauVar27 >> 8 & 0xff);
          pauVar46 = (undefined1 (*) [16])((uint)pauVar27 >> 0x10);
          bStack_b4 = bVar25;
          uStack_b3 = uVar13;
          uStack_b2 = uVar14;
          uStack_b1 = uVar15;
          goto LAB_1004ad6f;
        case 9:
switchD_10049879_caseD_10049bf1:
          bVar38 = bVar37;
          if (((pbVar20 != (byte *)0x52) || ((char)((uint)pauVar27 >> 8) != 'H')) ||
             ((char)uVar18 != 'D')) break;
          if (*(int *)param_2[6] != -1) {
            in_stack_ffffff44 = 9;
            in_stack_ffffff45 = 0x49;
            in_stack_ffffff46 = 0x48;
            in_stack_ffffff47 = 0x44;
            in_stack_ffffff48 = 0x52;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
            goto LAB_1004a646;
          }
          uVar43 = *(uint *)((int)param_2[1] + 8);
          if ((uVar43 < 4) || (uVar43 < 8)) {
LAB_1004a563:
            in_stack_ffffff48 = 2;
            in_stack_ffffff44 = 0x22;
            bStack_b4 = 0xfc;
            uStack_b3 = 0x11;
            uStack_b2 = 0x15;
            uStack_b1 = 0x10;
            goto LAB_1004a57d;
          }
          piVar2 = *(int **)((int)param_2[1] + 4);
          if ((*piVar2 == 0) || (piVar2[1] == 0)) {
            in_stack_ffffff44 = 0x11;
            uVar52 = in_stack_ffffff4a;
            uVar56 = in_stack_ffffff4b;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
LAB_1004a88e:
            bVar16 = 0xff;
            in_stack_ffffff4a = uVar52;
            in_stack_ffffff4b = uVar56;
            goto LAB_1004a8ab;
          }
          if (uVar43 == 8) {
            in_stack_ffffff44 = 0x22;
            in_stack_ffffff48 = 2;
            in_stack_ffffff49 = 0;
            goto LAB_1004a88e;
          }
          bVar38 = *(byte *)(piVar2 + 2);
          if ((byte)(bVar38 - 1) < (byte)(bVar38 ^ bVar38 - 1)) {
            iVar19 = 0;
            for (uVar43 = (uint)bVar38; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x80000000) {
              iVar19 = iVar19 + 1;
            }
            if ((byte)iVar19 < 5) {
                    /* WARNING: Could not recover jumptable at 0x1004ae23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((&UINT_1004b934)[iVar19] + 0x100496ef))
                        (pauVar48,CONCAT31((int3)(uVar18 >> 8),1));
              return;
            }
          }
          bVar16 = 0xff;
          in_stack_ffffff44 = 0x12;
          bStack_b4 = bVar25;
          uStack_b3 = uVar13;
          uStack_b2 = uVar14;
          uStack_b1 = uVar15;
          goto LAB_1004abc0;
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x24:
        case 0x25:
        case 0x28:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2e:
        case 0x2f:
        case 0x31:
        case 0x32:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          break;
        case 0x10:
switchD_10049879_caseD_1004a1a6:
          if (pbVar20 != (byte *)0x45) goto LAB_1004a494;
          if (((char)((uint)pauVar27 >> 8) != 'L') || ((char)uVar18 != 'T')) {
LAB_1004a331:
            bVar38 = 0xb;
            break;
          }
          if (*(int *)param_2[6] == -1) {
            FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1015058c);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          if (*(int *)((int)param_2[0x13] + 8) != -2) {
            in_stack_ffffff44 = 9;
            in_stack_ffffff45 = 0x50;
            in_stack_ffffff46 = 0x4c;
            in_stack_ffffff47 = 0x54;
            in_stack_ffffff48 = 0x45;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
            goto LAB_1004a646;
          }
          uVar18 = *(uint *)((int)param_2[1] + 8);
          if (*(uint *)((int)param_2[0x1a] + 4) < uVar18) goto LAB_1004a1ef;
          *(uint *)((int)param_2[0x1a] + 4) = *(uint *)((int)param_2[0x1a] + 4) - uVar18;
          if (uVar18 == 0) {
            pvVar22 = (LPVOID)0x1;
LAB_1004a897:
            *(uint *)((int)param_2[0x13] + 8) = uVar18;
            *(LPVOID *)((int)param_2[0x13] + 0xc) = pvVar22;
            *(uint *)param_2[0x14] = uVar18;
            bVar16 = 2;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
            goto LAB_1004a8ab;
          }
          pvVar50 = *(void **)((int)param_2[1] + 4);
          pvVar22 = FUN_10107380(0,uVar18);
          if (pvVar22 != (LPVOID)0x0) {
            memcpy(pvVar22,pvVar50,uVar18);
            goto LAB_1004a897;
          }
          goto LAB_1004b832;
        case 0x21:
switchD_10049879_caseD_1004a166:
          if (pbVar20 != &DAT_0000004c) goto LAB_1004a494;
          if (((char)((uint)pauVar27 >> 8) != 'c') || ((char)uVar18 != 'T')) goto LAB_1004a331;
          if (*(char *)((int)param_2[0x1a] + 8) == '\0') {
            if (3 < *(uint *)((int)param_2[1] + 8)) {
              uVar18 = **(uint **)((int)param_2[1] + 4);
              if (*(uint *)((int)param_2[1] + 8) < 8) {
                in_stack_ffffff44 = 0x22;
                in_stack_ffffff48 = 2;
                bStack_b4 = 0xfc;
                uStack_b3 = 0x11;
                uStack_b2 = 0x15;
                uStack_b1 = 0x10;
                bVar16 = 0xff;
LAB_1004ad0a:
                local_a4 = (uint)CONCAT21(local_a4._2_2_,bVar16) << 8;
                in_stack_ffffff49 = uVar54;
                in_stack_ffffff4a = uVar55;
                in_stack_ffffff4b = uVar51;
              }
              else {
                uVar43 = (*(uint **)((int)param_2[1] + 4))[1];
                if (*(int *)param_2[6] == -1) {
                  FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101504ac);
                    /* WARNING: Does not return */
                  pcVar7 = (code *)invalidInstructionException();
                  (*pcVar7)();
                }
                *(undefined4 *)((int)param_2[8] + 0xc) = 1;
                *(uint *)param_2[9] =
                     uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
                in_stack_ffffff44 = (byte)(uVar18 >> 0x18);
                in_stack_ffffff45 = (byte)((uVar18 & 0xff0000) >> 0x10);
                in_stack_ffffff46 = (undefined1)((uVar18 & 0xff00) >> 8);
                in_stack_ffffff47 = (undefined1)uVar18;
                bVar16 = 7;
                in_stack_ffffff48 = (undefined1)(uVar43 >> 0x18);
                in_stack_ffffff49 = (undefined1)((uVar43 & 0xff0000) >> 0x10);
                in_stack_ffffff4a = (undefined1)((uVar43 & 0xff00) >> 8);
                in_stack_ffffff4b = (undefined1)uVar43;
                *(uint *)((int)param_2[9] + 4) =
                     uVar43 >> 0x18 | (uVar43 & 0xff0000) >> 8 | (uVar43 & 0xff00) << 8 |
                     uVar43 << 0x18;
                local_a4 = CONCAT22(local_a4._2_2_,0x700);
                bStack_b4 = bVar25;
                uStack_b3 = uVar13;
                uStack_b2 = uVar14;
                uStack_b1 = uVar15;
              }
              goto LAB_1004ad10;
            }
LAB_1004a514:
            in_stack_ffffff44 = 0x22;
            in_stack_ffffff48 = 2;
            bStack_b4 = 0xfc;
            uStack_b3 = 0x11;
            uStack_b2 = 0x15;
            uStack_b1 = 0x10;
            in_stack_ffffff49 = uVar54;
            in_stack_ffffff4a = uVar55;
            in_stack_ffffff4b = uVar51;
          }
          else {
            in_stack_ffffff44 = 5;
            in_stack_ffffff45 = 0x61;
            in_stack_ffffff46 = 99;
            in_stack_ffffff47 = 0x54;
            in_stack_ffffff48 = 0x4c;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
          }
LAB_1004a646:
          bVar16 = 0xff;
          local_a4 = CONCAT22(local_a4._2_2_,0xff00);
          goto LAB_1004ad10;
        case 0x22:
switchD_10049879_caseD_1004a100:
          bVar38 = bVar16;
          if (((pbVar20 == (byte *)0x44) && ((char)((uint)pauVar27 >> 8) == 'K')) &&
             ((char)uVar18 == 'G')) {
            if (*(int *)param_2[6] == -1) {
              FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101504bc);
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            if ((*(int *)((int)param_2[0x14] + 4) == -2) &&
               (*(char *)((int)param_2[0x1a] + 8) == '\0')) {
              bVar38 = *(byte *)((int)param_2[0x19] + 0xf);
              SVar39 = 2;
              pbVar20 = (byte *)((&switchD_1004a15a::switchdataD_1004b918)[bVar38] + 0x100496ef);
              pauVar31 = pauVar36;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(bVar38) {
              default:
                goto switchD_10049879_caseD_1004aaa2;
              case 1:
              case 5:
                goto switchD_10049879_caseD_1004b83e;
              case 2:
              case 6:
                goto switchD_10049879_caseD_1004a15c;
              case 3:
                goto switchD_10049879_caseD_1004aa8d;
              case 7:
                goto switchD_10049879_caseD_1004af51;
              case 8:
                goto switchD_10049879_caseD_1004ae25;
              case 9:
                goto switchD_10049879_caseD_1004af39;
              case 10:
                goto switchD_10049879_caseD_1004af42;
              case 0xb:
                goto switchD_10049879_caseD_1004af2a;
              case 0xc:
              case 0xf:
                goto switchD_10049879_caseD_1004af77;
              case 0xd:
              case 0x11:
                goto switchD_10049879_caseD_1004b2e6;
              case 0xe:
                goto switchD_10049879_caseD_1004b2f4;
              case 0x10:
                goto switchD_10049879_caseD_1004b2f8;
              case 0x12:
                goto switchD_10049879_caseD_1004b2fc;
              case 0x13:
                goto switchD_10049879_caseD_1004b704;
              case 0x14:
                goto switchD_10049879_caseD_1004b6a9;
              case 0x15:
              case 0x16:
                goto switchD_10049879_caseD_1004b69b;
              }
            }
LAB_1004a343:
            bVar38 = 2;
          }
          break;
        case 0x23:
switchD_10049879_caseD_10049f92:
          cVar33 = (char)((uint)pauVar27 >> 8);
          cVar49 = (char)uVar18;
          if (cVar33 == 'H') {
            if (pbVar20 == (byte *)0x4d && cVar49 == 'R') {
              FUN_100b86b0(&stack0xffffff44,(int)param_2);
              goto LAB_1004a488;
            }
            goto LAB_1004a494;
          }
          if (cVar33 != 'I') {
            if (cVar33 != 'L') goto LAB_1004a494;
            bVar38 = 0xb;
            if (pbVar20 == (byte *)0x49 && cVar49 == 'L') {
              FUN_100b8b40((int)&local_84,(int)param_2);
              goto LAB_1004a404;
            }
            break;
          }
          bVar38 = 0xb;
          if (pbVar20 != (byte *)0x50 || cVar49 != 'C') break;
          FUN_100b89b0((int)&local_84,(int)param_2);
LAB_1004a404:
          in_XMM1_Qa = CONCAT44(pauStack_78,local_7c);
          local_a4 = local_6c;
          bStack_b4 = (byte)local_7c;
          uStack_b3 = (undefined1)(local_7c >> 8);
          uStack_b2 = (undefined1)(local_7c >> 0x10);
          uStack_b1 = (undefined1)(local_7c >> 0x18);
          pauStack_b0 = pauStack_78;
          in_stack_ffffff44 = (byte)local_84;
          in_stack_ffffff45 = (byte)((uint)local_84 >> 8);
          in_stack_ffffff46 = (undefined1)((uint)local_84 >> 0x10);
          in_stack_ffffff47 = (undefined1)((uint)local_84 >> 0x18);
          in_stack_ffffff48 = SUB41(pauStack_80,0);
          in_stack_ffffff49 = (undefined1)((uint)pauStack_80 >> 8);
          in_stack_ffffff4a = (undefined1)((uint)pauStack_80 >> 0x10);
          in_stack_ffffff4b = (undefined1)((uint)pauStack_80 >> 0x18);
          goto LAB_1004ad18;
        case 0x26:
switchD_10049879_caseD_1004a04b:
          bVar38 = bVar37;
          if (((pbVar20 != &DAT_0000004c) || ((char)((uint)pauVar27 >> 8) != 'c')) ||
             ((char)uVar18 != 'T')) break;
          puVar45 = *(uint **)((int)param_2[1] + 4);
          if (*(uint *)((int)param_2[1] + 8) < 4) {
            pauVar46 = (undefined1 (*) [16])&stack0xffffff45;
            param_2 = pauVar48;
LAB_1004a0a3:
            in_stack_ffffff48 = 2;
            in_stack_ffffff44 = 0x22;
            in_stack_ffffff49 = 0;
            in_stack_ffffff4a = 0;
            bStack_b4 = 0xfc;
            uStack_b3 = 0x11;
            uStack_b2 = 0x15;
            uStack_b1 = 0x10;
            bVar16 = 0xff;
            local_a4 = CONCAT22(local_a4._2_2_,0xff00);
            in_stack_ffffff4b = uVar51;
            goto LAB_1004ad10;
          }
          uVar18 = *puVar45;
          uVar43 = *(uint *)((int)param_2[1] + 8) - 4;
          ppuVar44 = (undefined **)
                     (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18);
          uVar51 = (undefined1)(uVar18 >> 0x18);
          uVar53 = (undefined1)((uVar18 & 0xff0000) >> 0x10);
          uVar52 = (undefined1)((uVar18 & 0xff00) >> 8);
          uVar56 = (undefined1)uVar18;
          if (*(char *)((int)param_2[2] + 8) != '\0') {
            ppuVar21 = (undefined **)(*(int *)((int)pauVar48[2] + 0xc) + 1);
            if (ppuVar44 == ppuVar21) goto LAB_1004a79f;
            in_stack_ffffff44 = 10;
            param_2 = pauVar48;
            uVar54 = uVar53;
            uVar55 = uVar52;
LAB_1004a7f4:
            bStack_b4 = (byte)ppuVar21;
            uStack_b3 = (undefined1)((uint)ppuVar21 >> 8);
            uStack_b2 = (undefined1)((uint)ppuVar21 >> 0x10);
            uStack_b1 = (undefined1)((uint)ppuVar21 >> 0x18);
            in_stack_ffffff48 = uVar51;
            in_stack_ffffff49 = uVar54;
            uVar52 = uVar55;
LAB_1004a7f8:
            bVar16 = 0xff;
            pauVar48 = param_2;
            in_stack_ffffff4a = uVar52;
            in_stack_ffffff4b = uVar56;
LAB_1004a8ab:
            local_a4 = (uint)CONCAT21(local_a4._2_2_,bVar16) << 8;
            pauVar46 = (undefined1 (*) [16])&stack0xffffff45;
            goto LAB_1004ad10;
          }
          if (uVar18 != 0) {
            in_stack_ffffff44 = 10;
            bStack_b4 = 0;
            uStack_b3 = 0;
            uStack_b2 = 0;
            uStack_b1 = 0;
            param_2 = pauVar48;
            in_stack_ffffff48 = uVar51;
            in_stack_ffffff49 = uVar53;
            goto LAB_1004a7f8;
          }
          ppuVar44 = (undefined **)0x0;
LAB_1004a79f:
          *(undefined4 *)((int)pauVar48[2] + 8) = 1;
          *(undefined ***)((int)pauVar48[2] + 0xc) = ppuVar44;
          param_2 = pauVar48;
          FUN_100b7760((int)local_44);
          *(undefined1 *)((int)pauVar48[0x1a] + 10) = 1;
          uVar56 = 0;
          if (uVar43 < 4) {
            in_stack_ffffff44 = 0x22;
            uVar51 = 2;
            ppuVar21 = &PTR_DAT_101511fc;
            goto LAB_1004a7f4;
          }
          uVar18 = puVar45[1];
          uVar32 = uVar43 & 0xfffffffc;
          uVar30 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                   uVar18 << 0x18;
          if (uVar32 == 4) {
LAB_1004ab98:
            in_stack_ffffff4a = 0;
LAB_1004abb1:
            in_stack_ffffff49 = 0;
            in_stack_ffffff48 = 2;
            in_stack_ffffff44 = 0x22;
            bStack_b4 = 0xfc;
            uStack_b3 = 0x11;
            uStack_b2 = 0x15;
            uStack_b1 = 0x10;
            bVar38 = in_stack_ffffff45;
            in_stack_ffffff4b = uVar56;
            goto LAB_1004abba;
          }
          uVar3 = puVar45[2];
          uVar35 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
          if (uVar32 == 8) goto LAB_1004ab98;
          uVar4 = puVar45[3];
          pauVar46 = (undefined1 (*) [16])
                     (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                     uVar4 << 0x18);
          if (uVar32 == 0xc) goto LAB_1004ab98;
          uVar32 = puVar45[4];
          uVar32 = uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                   uVar32 << 0x18;
          if (((uVar43 & 0xfffffffe) == 0x10) || (uVar4 = puVar45[5], (uVar43 & 0xfffffffe) == 0x12)
             ) {
            in_stack_ffffff4a = (undefined1)local_2c;
            uVar56 = (undefined1)((uint)local_2c >> 8);
            goto LAB_1004abb1;
          }
          uVar41 = *(ushort *)((int)puVar45 + 0x16);
          pauVar48 = param_2;
          if (uVar43 == 0x14) goto LAB_1004afb2;
          bVar38 = (byte)puVar45[6];
          if (2 < bVar38) {
            in_stack_ffffff44 = 0x14;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
            goto LAB_1004abba;
          }
          if (uVar43 == 0x15) goto LAB_1004afb2;
          bVar16 = *(byte *)((int)puVar45 + 0x19);
          if (1 < bVar16) {
            in_stack_ffffff44 = 0x15;
            bVar38 = bVar16;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
            goto LAB_1004abba;
          }
          if (*(int *)param_2[6] == -1) {
            FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101504fc);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          in_stack_ffffff44 = 0x11;
          if ((uVar30 == 0) || (uVar35 == 0)) {
LAB_1004ac89:
            bVar16 = 0xff;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
          }
          else {
            in_stack_ffffff44 = 0x1b;
            if ((*(uint *)((int)param_2[0x19] + 8) < uVar32) ||
               (((*(uint *)((int)param_2[0x19] + 8) - uVar32 < uVar35 ||
                 (*(undefined1 (**) [16])((int)param_2[0x19] + 4) < pauVar46)) ||
                ((uint)((int)*(undefined1 (**) [16])((int)param_2[0x19] + 4) - (int)pauVar46) <
                 uVar30)))) goto LAB_1004ac89;
            *(undefined ***)((int)param_2[0x17] + 8) = ppuVar44;
            in_stack_ffffff44 = (byte)ppuVar44;
            in_stack_ffffff45 = (byte)((uint)ppuVar44 >> 8);
            in_stack_ffffff46 = (undefined1)((uint)ppuVar44 >> 0x10);
            in_stack_ffffff47 = (undefined1)((uint)ppuVar44 >> 0x18);
            *(uint *)((int)param_2[0x17] + 0xc) = uVar30;
            in_stack_ffffff48 = (undefined1)(uVar18 >> 0x18);
            in_stack_ffffff49 = (undefined1)((uVar18 & 0xff0000) >> 0x10);
            in_stack_ffffff4a = (undefined1)((uVar18 & 0xff00) >> 8);
            in_stack_ffffff4b = (undefined1)uVar18;
            *(uint *)param_2[0x18] = uVar35;
            bStack_b4 = (byte)(uVar3 >> 0x18);
            uStack_b3 = (undefined1)((uVar3 & 0xff0000) >> 0x10);
            uStack_b2 = (undefined1)((uVar3 & 0xff00) >> 8);
            uStack_b1 = (undefined1)uVar3;
            *(undefined1 (**) [16])((int)param_2[0x18] + 4) = pauVar46;
            *(uint *)((int)param_2[0x18] + 8) = uVar32;
            *(ushort *)((int)param_2[0x18] + 0xc) = (ushort)uVar4 << 8 | (ushort)uVar4 >> 8;
            *(ushort *)((int)param_2[0x18] + 0xe) = uVar41 << 8 | uVar41 >> 8;
            param_2[0x19][0] = bVar38;
            local_a4 = CONCAT31(local_a4._1_3_,bVar38);
            *(byte *)((int)param_2[0x19] + 1) = bVar16;
            pauStack_b0 = pauVar46;
          }
          uVar10 = CONCAT21(local_a4._2_2_,bVar16);
          goto LAB_1004ac93;
        case 0x27:
switchD_10049879_caseD_1004a1f9:
          bVar38 = bVar37;
          if (((pbVar20 == (byte *)0x41) && ((char)((uint)pauVar27 >> 8) == 'A')) &&
             ((char)uVar18 == 'M')) {
            if (*(int *)param_2[6] == -1) {
              FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1015050c);
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            if (*(char *)((int)param_2[0x1a] + 8) == '\0') {
              if (*(int *)param_2[6] != 1) {
                if (3 < *(uint *)((int)param_2[1] + 8)) {
                  uVar18 = **(uint **)((int)param_2[1] + 4);
                  uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                           uVar18 << 0x18;
                  *(undefined4 *)param_2[6] = 1;
                  *(uint *)((int)param_2[6] + 4) = uVar18;
                  bVar16 = 2;
                  if (*(char *)((int)param_2[0x19] + 0xe) == -1) {
                    *(undefined4 *)((int)param_2[9] + 8) = 1;
                    *(uint *)((int)param_2[9] + 0xc) = uVar18;
                  }
                  local_a4 = CONCAT22(local_a4._2_2_,0x200);
                  bStack_b4 = bVar25;
                  uStack_b3 = uVar13;
                  uStack_b2 = uVar14;
                  uStack_b1 = uVar15;
                  goto LAB_1004ad10;
                }
                goto LAB_1004a0a3;
              }
              in_stack_ffffff44 = 9;
            }
            else {
              in_stack_ffffff44 = 5;
            }
            bVar16 = 0xff;
            in_stack_ffffff45 = 0x67;
            in_stack_ffffff46 = 0x41;
            in_stack_ffffff47 = 0x4d;
            in_stack_ffffff48 = 0x41;
            local_a4 = CONCAT22(local_a4._2_2_,0xff00);
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
            goto LAB_1004ad10;
          }
          break;
        case 0x29:
switchD_10049879_caseD_1004a23a:
          bVar38 = bVar16;
          cVar33 = (char)((uint)pauVar27 >> 8);
          if (cVar33 == 'C') {
            if ((pbVar20 != (byte *)0x50) || ((char)uVar18 != 'C')) break;
            if (*(char *)((int)param_2[0x1a] + 0xf) == '\0') {
              FUN_100b8c40(&stack0xffffff44,(uint)param_2);
              goto LAB_1004a488;
            }
          }
          else if ((((cVar33 == 'T') && (pbVar20 == (byte *)0x74)) && ((char)uVar18 == 'X')) &&
                  (*(char *)((int)param_2[0x1a] + 0xe) == '\0')) {
            FUN_100b9140((undefined4 *)&stack0xffffff44,(int)param_2);
            goto LAB_1004a488;
          }
          goto LAB_1004a494;
        case 0x2d:
switchD_10049879_caseD_1004a2c4:
          bVar38 = bVar16;
          if (((pbVar20 != (byte *)0x56) || ((char)((uint)pauVar27 >> 8) != 'D')) ||
             ((char)uVar18 != 'C')) break;
          if (*(int *)param_2[6] == -1) {
            FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1015056c);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          pauVar27 = (undefined1 (*) [16])0x2;
          if (((*(char *)((int)param_2[0x1a] + 8) != '\0') ||
              (*(int *)((int)param_2[0x13] + 8) != -2)) || (*(int *)((int)param_2[0xc] + 4) != 0))
          goto LAB_1004a343;
          uVar18 = *(uint *)((int)param_2[1] + 8);
          puVar29 = *(uint **)((int)param_2[1] + 4);
          puVar40 = puVar29;
          if (((uVar18 < 2) || (uVar18 < 4)) || (uVar18 < 6)) {
LAB_1004b062:
            pauVar27 = (undefined1 (*) [16])0x2;
            uVar23 = 0;
          }
          else {
            uVar41 = (ushort)puVar29[1] << 8 | (ushort)puVar29[1] >> 8;
            param_2 = (undefined1 (*) [16])(uint)uVar41;
            if (((uVar18 < 8) ||
                (uVar26 = *(ushort *)((int)puVar29 + 6) << 8 | *(ushort *)((int)puVar29 + 6) >> 8,
                uVar18 < 10)) || (uVar18 < 0xc)) goto LAB_1004b062;
            puVar45 = puVar29 + 3;
            if ((uVar18 < 0xe) || (uVar43 = *puVar45, uVar18 < 0x10)) goto LAB_1004b062;
            pauVar27 = (undefined1 (*) [16])(uVar18 - 0x10);
            puVar45 = (uint *)((uint)(ushort)(*(ushort *)((int)puVar29 + 0xe) << 8 |
                                             *(ushort *)((int)puVar29 + 0xe) >> 8) * 2);
            puVar40 = puVar29 + 4;
            if (pauVar27 < (undefined1 (*) [16])&DAT_00000004) goto LAB_1004b062;
            uVar18 = puVar29[4];
            puVar40 = (uint *)(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                              uVar18 << 0x18);
            if (pauVar27 < (undefined1 (*) [16])&DAT_00000008) goto LAB_1004b062;
            uVar23 = 0;
            if (pauVar27 == (undefined1 (*) [16])&DAT_00000008) {
              uVar18 = puVar29[5];
              param_2 = (undefined1 (*) [16])
                        (uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                        uVar18 << 0x18);
              uVar23 = 1;
              pauVar27 = (undefined1 (*) [16])
                         ((uint)(ushort)((ushort)uVar43 << 8 | (ushort)uVar43 >> 8) * 2);
              in_XMM1_Qa = CONCAT44((uint)(ushort)(*(ushort *)((int)puVar29 + 10) << 8 |
                                                  *(ushort *)((int)puVar29 + 10) >> 8) * 2,
                                    (uint)(ushort)((ushort)puVar29[2] << 8 | (ushort)puVar29[2] >> 8
                                                  ) * 2);
              auVar8._12_2_ = uVar26;
              auVar8._0_12_ = ZEXT212(uVar26) << 0x30;
              uVar12 = CONCAT44(auVar8._10_4_,CONCAT22(uVar41,uVar26));
              auVar11._6_8_ = 0;
              auVar11._0_6_ = (uint6)((ulonglong)uVar12 >> 0x10);
              in_XMM0_Da = (uint)(ushort)((ushort)*puVar29 << 8 | (ushort)*puVar29 >> 8) * 2;
              in_XMM0_Db = (int)CONCAT82(SUB148(auVar11 << 0x40,6),
                                         *(ushort *)((int)puVar29 + 2) << 8 |
                                         *(ushort *)((int)puVar29 + 2) >> 8) * 2;
              in_XMM0_Dc = (int)((ulonglong)uVar12 >> 0x10) * 2;
              in_XMM0_Dd = (auVar8._10_4_ >> 0x10) * 2;
            }
          }
          *(undefined4 *)((int)pauVar48[0xc] + 4) = uVar23;
          *(undefined1 (**) [16])((int)pauVar48[0xc] + 8) = pauVar27;
          *(uint **)((int)pauVar48[0xc] + 0xc) = puVar45;
          *(int *)pauVar48[0xd] = in_XMM0_Da;
          *(int *)((int)pauVar48[0xd] + 4) = in_XMM0_Db;
          *(int *)((int)pauVar48[0xd] + 8) = in_XMM0_Dc;
          *(int *)((int)pauVar48[0xd] + 0xc) = in_XMM0_Dd;
          *(undefined8 *)pauVar48[0xe] = in_XMM1_Qa;
          *(uint **)((int)pauVar48[0xe] + 8) = puVar40;
          *(undefined1 (**) [16])((int)pauVar48[0xe] + 0xc) = param_2;
          param_2 = pauVar48;
          goto LAB_1004b0d8;
        case 0x30:
switchD_10049879_caseD_1004a282:
          if (pbVar20 == (byte *)0x73) {
            if (((char)((uint)pauVar27 >> 8) != 'H') || ((char)uVar18 != 'Y')) goto LAB_1004a331;
            if (*(int *)param_2[6] == -1) {
              FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1015057c);
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            if (*(char *)((int)param_2[0x1a] + 8) == '\0') {
              if (*(char *)((int)param_2[0x17] + 4) == '\x02') {
                uVar18 = *(uint *)((int)param_2[1] + 8);
                if (uVar18 < 4) goto LAB_1004a514;
                puVar45 = *(uint **)((int)param_2[1] + 4);
                uVar43 = *puVar45;
                if (7 < uVar18) {
                  uVar32 = puVar45[1];
                  if (uVar18 == 8) {
                    in_stack_ffffff44 = 0x22;
                    in_stack_ffffff48 = 2;
                    in_stack_ffffff49 = 0;
                    bVar38 = in_stack_ffffff45;
                    in_stack_ffffff4a = uVar52;
                    in_stack_ffffff4b = uVar56;
                  }
                  else {
                    bVar38 = (byte)puVar45[2];
                    if (bVar38 < 2) {
                      *(uint *)((int)param_2[0x16] + 0xc) =
                           uVar43 >> 0x18 | (uVar43 & 0xff0000) >> 8 | (uVar43 & 0xff00) << 8 |
                           uVar43 << 0x18;
                      in_stack_ffffff44 = (byte)(uVar43 >> 0x18);
                      in_stack_ffffff45 = (byte)((uVar43 & 0xff0000) >> 0x10);
                      in_stack_ffffff46 = (undefined1)((uVar43 & 0xff00) >> 8);
                      in_stack_ffffff47 = (undefined1)uVar43;
                      bVar16 = 6;
                      *(uint *)param_2[0x17] =
                           uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                           uVar32 << 0x18;
                      in_stack_ffffff48 = (undefined1)(uVar32 >> 0x18);
                      uVar54 = (undefined1)((uVar32 & 0xff0000) >> 0x10);
                      uVar55 = (undefined1)((uVar32 & 0xff00) >> 8);
                      uVar51 = (undefined1)uVar32;
                      *(byte *)((int)param_2[0x17] + 4) = bVar38;
                      bStack_b4 = bVar38;
                      uStack_b3 = uVar13;
                      uStack_b2 = uVar14;
                      uStack_b1 = uVar15;
                      goto LAB_1004ad0a;
                    }
                    in_stack_ffffff44 = 0x16;
                    bStack_b4 = bVar25;
                    uStack_b3 = uVar13;
                    uStack_b2 = uVar14;
                    uStack_b1 = uVar15;
                  }
                  bVar16 = 0xff;
                  local_a4 = CONCAT22(local_a4._2_2_,0xff00);
                  in_stack_ffffff45 = bVar38;
                  goto LAB_1004ad10;
                }
                goto LAB_1004a563;
              }
              in_stack_ffffff44 = 9;
            }
            else {
              in_stack_ffffff44 = 5;
            }
            in_stack_ffffff45 = 0x70;
            in_stack_ffffff46 = 0x48;
            in_stack_ffffff47 = 0x59;
            in_stack_ffffff48 = 0x73;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
            goto LAB_1004a646;
          }
          goto LAB_1004a494;
        case 0x33:
switchD_10049879_caseD_10049f55:
          cVar33 = (char)((uint)pauVar27 >> 8);
          if (cVar33 == 'B') {
            if (pbVar20 == (byte *)0x54 && (char)uVar18 == 'I') {
              FUN_100b7ff0((int)&stack0xffffff44,(int)param_2);
              goto LAB_1004a488;
            }
          }
          else if ((cVar33 == 'R') && (pbVar20 == (byte *)0x42 && (char)uVar18 == 'G')) {
            FUN_100b8120(&stack0xffffff44,(int)param_2);
LAB_1004a488:
            bVar16 = local_a4._1_1_;
            bStack_b4 = bVar25;
            uStack_b3 = uVar13;
            uStack_b2 = uVar14;
            uStack_b1 = uVar15;
            goto LAB_1004ad10;
          }
          goto LAB_1004a494;
        case 0x34:
switchD_10049879_caseD_1004a0c3:
          bVar38 = bVar16;
          cVar33 = (char)((uint)pauVar27 >> 8);
          if (cVar33 == 'E') {
            if ((pbVar20 != (byte *)0x74) || ((char)uVar18 != 'X')) break;
            if (*(char *)((int)param_2[0x1a] + 0xe) == '\0') {
              FUN_100b83d0((undefined4 *)&stack0xffffff44,(int)param_2);
              goto LAB_1004a488;
            }
          }
          else if ((cVar33 == 'R') && (pbVar20 == (byte *)0x53 && (char)uVar18 == 'N')) {
            FUN_100b8200(&stack0xffffff44,(int)param_2);
            goto LAB_1004a488;
          }
LAB_1004a494:
          bVar38 = 0xb;
          break;
        case 0x3a:
switchD_10049879_caseD_10049fdc:
          bVar38 = bVar37;
          if ((((pbVar20 == (byte *)0x74) && ((char)((uint)pauVar27 >> 8) == 'T')) &&
              ((char)uVar18 == 'X')) && (*(char *)((int)param_2[0x1a] + 0xe) == '\0')) {
            uVar18 = *(uint *)((int)param_2[1] + 8);
            if (*(uint *)((int)param_2[0x1a] + 4) < uVar18) {
LAB_1004a1ef:
              in_stack_ffffff44 = 0x25;
              uVar54 = in_stack_ffffff49;
              uVar55 = in_stack_ffffff4a;
              uVar51 = in_stack_ffffff4b;
              bStack_b4 = bVar25;
              uStack_b3 = uVar13;
              uStack_b2 = uVar14;
              uStack_b1 = uVar15;
LAB_1004a57d:
              local_a4 = CONCAT22(local_a4._2_2_,0xff00);
              bVar16 = 0xff;
              in_stack_ffffff49 = uVar54;
              in_stack_ffffff4a = uVar55;
              in_stack_ffffff4b = uVar51;
            }
            else {
              iVar19 = *(int *)((int)param_2[1] + 4);
              *(uint *)((int)param_2[0x1a] + 4) = *(uint *)((int)param_2[0x1a] + 4) - uVar18;
              uVar17 = 0x21e;
              if (uVar18 != 0) {
                uVar43 = 0;
LAB_1004a037:
                if (*(char *)(iVar19 + uVar43) != '\0') goto code_r0x1004a041;
                uVar17 = 0x11e;
                if (0xffffffb0 < uVar43 - 0x50) {
                  if (uVar18 != uVar43 + 1) {
                    if (*(int *)pauVar48[6] == -1) {
                      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101505cc);
                    /* WARNING: Does not return */
                      pcVar7 = (code *)invalidInstructionException();
                      (*pcVar7)();
                    }
                    pcVar1 = (char *)(iVar19 + 1 + uVar43);
                    if (*pcVar1 != '\0') goto LAB_1004a914;
                    local_84 = (undefined1 (*) [16])0x0;
                    pauStack_80 = (undefined1 (*) [16])0x1;
                    local_7c = 0;
                    SVar39 = (uVar18 - uVar43) - 2;
                    FUN_10137980(&local_84,0,uVar43);
                    local_94 = 0;
                    param_2 = pauVar48;
                    bVar38 = in_stack_ffffff45;
                    do {
                      uVar18 = local_7c;
                      bVar16 = *(byte *)(iVar19 + local_94);
                      uVar32 = ((char)bVar16 < '\0') + 1;
                      if ((int)local_84 - local_7c < uVar32) {
                        FUN_10137980(&local_84,local_7c,uVar32);
                      }
                      if ((char)bVar16 < '\0') {
                        *(byte *)((int)*pauStack_80 + uVar18 + 1) = bVar16 & 0xbf;
                        bVar16 = bVar16 >> 6 | 0xc0;
                      }
                      *(byte *)((int)*pauStack_80 + uVar18) = bVar16;
                      local_7c = uVar18 + uVar32;
                      local_94 = local_94 + 1;
                    } while (uVar43 != local_94);
                    if (SVar39 != 0) {
                      pvVar22 = FUN_10107380(0,SVar39);
                      if (pvVar22 != (LPVOID)0x0) {
                        memcpy(pvVar22,pcVar1 + 1,SVar39);
                        goto LAB_1004b466;
                      }
                      goto LAB_1004b832;
                    }
                    pvVar22 = (LPVOID)0x1;
LAB_1004b466:
                    uVar18 = local_7c;
                    pauVar46 = local_84;
                    iVar19 = *(int *)param_2[0x11];
                    pauVar48 = pauStack_80;
                    if (iVar19 == *(int *)((int)param_2[0x10] + 8)) {
                      FUN_10138ca0((uint *)((int)param_2[0x10] + 8));
                    }
                    iVar9 = iVar19 * 0x1c;
                    iVar5 = *(int *)((int)param_2[0x10] + 0xc);
                    *(undefined4 *)(iVar5 + iVar9) = 0;
                    *(SIZE_T *)(iVar5 + 4 + iVar9) = SVar39;
                    *(LPVOID *)(iVar5 + 8 + iVar9) = pvVar22;
                    *(SIZE_T *)(iVar5 + 0xc + iVar9) = SVar39;
                    *(undefined1 (**) [16])(iVar5 + 0x10 + iVar9) = pauVar46;
                    *(uint *)(iVar5 + 0x18 + iVar9) = uVar18;
                    *(undefined1 (**) [16])(iVar5 + 0x14 + iVar9) = pauVar48;
                    *(int *)param_2[0x11] = iVar19 + 1;
                    bVar16 = 2;
                    pauVar48 = param_2;
                    bStack_b4 = bVar25;
                    uStack_b3 = uVar13;
                    uStack_b2 = uVar14;
                    uStack_b1 = uVar15;
                    goto LAB_1004abc0;
                  }
LAB_1004a914:
                  in_stack_ffffff44 = 0x1e;
                  in_stack_ffffff45 = 5;
                  goto LAB_1004a723;
                }
              }
LAB_1004a71f:
              in_stack_ffffff44 = (byte)uVar17;
              in_stack_ffffff45 = (byte)((ushort)uVar17 >> 8);
              in_stack_ffffff46 = 0;
              in_stack_ffffff47 = 0;
LAB_1004a723:
              local_a4 = CONCAT22(local_a4._2_2_,0xff00);
              param_2 = pauVar48;
              bVar16 = 0xff;
              bStack_b4 = bVar25;
              uStack_b3 = uVar13;
              uStack_b2 = uVar14;
              uStack_b1 = uVar15;
            }
            goto LAB_1004ad10;
          }
          break;
        case 0x3b:
        case 0x3f:
          goto switchD_10049879_caseD_1004aaa2;
        case 0x3c:
        case 0x40:
          goto switchD_10049879_caseD_1004b83e;
        case 0x3d:
        case 0x41:
switchD_10049879_caseD_1004a15c:
          SVar39 = 6;
switchD_10049879_caseD_1004aaa2:
          _Size = *(SIZE_T *)((int)param_2[1] + 8);
          if (_Size != 0) {
            pvVar50 = *(void **)((int)param_2[1] + 4);
            pvVar22 = FUN_10107380(0,_Size);
            if (pvVar22 == (LPVOID)0x0) {
LAB_1004b832:
              FUN_101366bc(1);
switchD_10049879_caseD_1004b83e:
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            memcpy(pvVar22,pvVar50,_Size);
            if (_Size == SVar39) {
              *(SIZE_T *)((int)pauVar48[0x14] + 4) = SVar39;
              *(LPVOID *)((int)pauVar48[0x14] + 8) = pvVar22;
              *(SIZE_T *)((int)pauVar48[0x14] + 0xc) = SVar39;
              pauVar27 = extraout_ECX;
              param_2 = pauVar48;
            }
            else {
              pvVar24 = GetProcessHeap();
              HeapFree(pvVar24,0,pvVar22);
              pauVar27 = extraout_ECX_00;
              param_2 = pauVar48;
            }
LAB_1004b0d8:
            pauVar46 = (undefined1 (*) [16])&stack0xffffff45;
            pauVar48 = param_2;
          }
          bVar38 = 2;
          break;
        case 0x3e:
switchD_10049879_caseD_1004aa8d:
          SVar39 = 1;
          if (*(int *)((int)param_2[0x13] + 8) != -2) goto switchD_10049879_caseD_1004aaa2;
          bVar38 = 2;
          break;
        case 0x42:
          goto switchD_10049879_caseD_1004af51;
        case 0x43:
switchD_10049879_caseD_1004ae25:
          uVar18 = 2;
          goto LAB_1004af3e;
        case 0x44:
switchD_10049879_caseD_1004af39:
          uVar18 = 4;
LAB_1004af3e:
          pauVar31 = (undefined1 (*) [16])0x1;
LAB_1004af49:
          local_94 = 0;
          goto switchD_10049879_caseD_1004af51;
        case 0x45:
switchD_10049879_caseD_1004af42:
          uVar18 = 8;
          pauVar31 = (undefined1 (*) [16])0x0;
          goto LAB_1004af49;
        case 0x46:
switchD_10049879_caseD_1004af2a:
          local_94 = 1;
          uVar18 = 0x10;
          pauVar31 = (undefined1 (*) [16])0x0;
switchD_10049879_caseD_1004af51:
          pauVar46 = (undefined1 (*) [16])
                     ((uint)pauVar46 >> 0x18 | ((uint)pauVar46 & 0xff0000) >> 8 |
                      ((uint)pauVar46 & 0xff00) << 8 | (int)pauVar46 << 0x18);
          puVar45 = (uint *)0xef960410;
          if (pauVar27 == (undefined1 (*) [16])0x0) {
LAB_1004afb2:
            in_stack_ffffff44 = 0x22;
            in_stack_ffffff48 = 2;
            in_stack_ffffff49 = 0;
            in_stack_ffffff4a = (undefined1)local_64;
            bStack_b4 = (byte)((uint)local_64 >> 0x10);
            uStack_b3 = (undefined1)((uint)local_64 >> 0x18);
            uStack_b2 = SUB41(local_68,0);
            uStack_b1 = (undefined1)((uint)local_68 >> 8);
            param_2 = pauVar48;
            bVar38 = in_stack_ffffff45;
            in_stack_ffffff4b = (char)((uint)local_64 >> 8);
LAB_1004abba:
            bVar16 = 0xff;
            pauVar48 = param_2;
          }
          else {
            pauVar36 = (undefined1 (*) [16])(uint)*pbVar20;
            param_2 = pauVar31;
            local_98 = pauVar36;
            switch(pauVar36) {
            case (undefined1 (*) [16])0x0:
            case (undefined1 (*) [16])0x3:
switchD_10049879_caseD_1004af77:
              bVar38 = (byte)uVar18;
              uVar54 = 3;
              if ((char)local_94 == '\x01' && (char)pauVar36 == '\x03') goto LAB_1004b308;
              goto LAB_1004af8e;
            default:
switchD_10049879_caseD_1004b2e6:
              in_stack_ffffff44 = 0x13;
              param_2 = pauVar48;
              bVar38 = (byte)pauVar36;
              bStack_b4 = bVar25;
              uStack_b3 = uVar13;
              uStack_b2 = uVar14;
              uStack_b1 = uVar15;
              goto LAB_1004abba;
            case (undefined1 (*) [16])0x2:
switchD_10049879_caseD_1004b2f4:
              cVar33 = (char)param_2;
              uVar54 = 2;
              break;
            case (undefined1 (*) [16])0x4:
switchD_10049879_caseD_1004b2f8:
              cVar33 = (char)param_2;
              uVar54 = 4;
              break;
            case (undefined1 (*) [16])0x6:
switchD_10049879_caseD_1004b2fc:
              cVar33 = (char)param_2;
              uVar54 = 6;
            }
            bVar38 = (byte)uVar18;
            if (cVar33 != '\0') {
LAB_1004b308:
              in_stack_ffffff46 = uVar54;
              in_stack_ffffff44 = 0xf;
              param_2 = pauVar48;
              bStack_b4 = bVar25;
              uStack_b3 = uVar13;
              uStack_b2 = uVar14;
              uStack_b1 = uVar15;
              goto LAB_1004abba;
            }
LAB_1004af8e:
            bStack_b4 = (byte)uVar18;
            if (pauVar27 == (undefined1 (*) [16])0x1) goto LAB_1004afb2;
            bVar38 = pbVar20[1];
            if (bVar38 != 0) {
              in_stack_ffffff44 = 0x18;
              param_2 = pauVar48;
              bStack_b4 = bVar25;
              uStack_b3 = uVar13;
              uStack_b2 = uVar14;
              uStack_b1 = uVar15;
              goto LAB_1004abba;
            }
            if (pauVar27 == (undefined1 (*) [16])0x2) goto LAB_1004afb2;
            bVar38 = pbVar20[2];
            if (bVar38 != 0) {
              in_stack_ffffff44 = 0x19;
              param_2 = pauVar48;
              bStack_b4 = bVar25;
              uStack_b3 = uVar13;
              uStack_b2 = uVar14;
              uStack_b1 = uVar15;
              goto LAB_1004abba;
            }
            if (pauVar27 == (undefined1 (*) [16])0x3) goto LAB_1004afb2;
            bVar38 = pbVar20[3];
            if (bVar38 == 0) {
              uVar47 = FUN_100b7fb0((uint)local_98 & 0xff,uVar18 & 0xff,(uint)pauVar46);
              uVar18 = (uint)(uVar47 >> 0x20);
              uStack_b2 = 0;
              uVar13 = 0;
              param_2 = pauVar48;
              if ((uVar47 & 1) != 0) {
LAB_1004b170:
                uStack_b2 = uVar13;
                uVar23 = (undefined4)(ZEXT48(puVar45) * (ulonglong)uVar18);
                if ((int)(ZEXT48(puVar45) * (ulonglong)uVar18 >> 0x20) != 0) {
                  uVar23 = 0xffffffff;
                }
                *(undefined4 *)((int)pauVar48[4] + 8) = uVar23;
                param_2 = pauVar48;
              }
            }
            else {
              if (bVar38 != 1) {
                in_stack_ffffff44 = 0x1a;
                param_2 = pauVar48;
                bStack_b4 = bVar25;
                uStack_b3 = uVar13;
                uStack_b2 = uVar14;
                uStack_b1 = uVar15;
                goto LAB_1004abba;
              }
              uVar47 = FUN_100b7fb0((uint)local_98 & 0xff,uVar18 & 0xff,(uint)pauVar46);
              uStack_b2 = 1;
              param_2 = pauVar48;
              if ((uVar47 & 1) != 0) {
                uVar13 = 1;
                if ((longlong)uVar47 < 0) {
                  uVar18 = 0xffffffff;
                }
                else {
                  uVar18 = (int)(uVar47 >> 0x20) * 2;
                }
                goto LAB_1004b170;
              }
            }
            in_stack_ffffff44 = (byte)pauVar46;
            bVar38 = (byte)((uint)pauVar46 >> 8);
            in_stack_ffffff46 = (undefined1)((uint)pauVar46 >> 0x10);
            in_stack_ffffff47 = (undefined1)((uint)pauVar46 >> 0x18);
            in_stack_ffffff48 = SUB41(puVar45,0);
            in_stack_ffffff49 = (undefined1)((uint)puVar45 >> 8);
            in_stack_ffffff4a = (undefined1)((uint)puVar45 >> 0x10);
            in_stack_ffffff4b = (undefined1)((uint)puVar45 >> 0x18);
            *(undefined4 *)param_2[6] = 0;
            *(undefined4 *)((int)param_2[6] + 8) = 0;
            *(undefined4 *)((int)param_2[8] + 0xc) = 0;
            *(undefined4 *)((int)param_2[9] + 8) = 0;
            *(undefined4 *)param_2[10] = 0;
            *(undefined4 *)((int)param_2[0xc] + 4) = 0;
            *(undefined4 *)param_2[0xf] = 0;
            *(undefined4 *)((int)param_2[0xf] + 0xc) = 0;
            *(undefined4 *)param_2[0x10] = 4;
            *(undefined4 *)((int)param_2[0x10] + 4) = 0;
            *(undefined4 *)((int)param_2[0x10] + 8) = 0;
            *(undefined4 *)((int)param_2[0x10] + 0xc) = 4;
            *(undefined4 *)param_2[0x11] = 0;
            *(undefined4 *)((int)param_2[0x11] + 4) = 0;
            *(undefined4 *)((int)param_2[0x11] + 8) = 4;
            *(undefined4 *)((int)param_2[0x11] + 0xc) = 0;
            *(undefined4 *)param_2[0x12] = 0xfffffffe;
            *(undefined4 *)((int)param_2[0x12] + 0xc) = 0xfffffffe;
            *(undefined4 *)((int)param_2[0x13] + 8) = 0xfffffffe;
            *(undefined4 *)((int)param_2[0x14] + 4) = 0xfffffffe;
            *(undefined4 *)param_2[0x15] = 0xfffffffe;
            *(undefined4 *)((int)param_2[0x15] + 0xc) = 0xfffffffe;
            *(undefined4 *)((int)param_2[0x16] + 8) = 2;
            *(undefined1 *)((int)param_2[0x17] + 4) = 2;
            *(undefined1 *)((int)param_2[0x19] + 1) = 2;
            *(undefined1 (**) [16])((int)param_2[0x19] + 4) = pauVar46;
            *(uint **)((int)param_2[0x19] + 8) = puVar45;
            *(undefined1 *)((int)param_2[0x19] + 0xc) = uStack_b2;
            *(undefined2 *)((int)param_2[0x19] + 0xd) = 0xff01;
            *(undefined1 *)((int)param_2[0x19] + 0xf) = local_98._0_1_;
            param_2[0x1a][0] = bStack_b4;
            bVar16 = 3;
            pauVar48 = param_2;
            uStack_b3 = local_98._0_1_;
            uStack_b1 = uVar15;
          }
LAB_1004abc0:
          uVar10 = CONCAT21(local_a4._2_2_,bVar16);
          in_stack_ffffff45 = bVar38;
LAB_1004ac93:
          local_a4 = (uint)uVar10 << 8;
          pauVar46 = (undefined1 (*) [16])&stack0xffffff45;
LAB_1004ad10:
          if (bVar16 == 0xff) {
            uVar23 = *(undefined4 *)((int)*pauVar46 + 3);
            local_84 = *(undefined1 (**) [16])*pauVar46;
            SVar39 = (SIZE_T)in_stack_ffffff44;
            param_2[5][0] = 0xff;
            pauStack_80._0_3_ = (undefined3)((uint)uVar23 >> 8);
            local_a0 = (undefined4 *)
                       CONCAT13(uStack_b1,CONCAT12(uStack_b2,CONCAT11(uStack_b3,bStack_b4)));
            local_60 = pauStack_b0;
            if (in_stack_ffffff44 == 0x22) {
                    /* WARNING: Could not recover jumptable at 0x1004b699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((&UINT_1004b964)[(uint)local_84 >> 0x18] + 0x100496ef))();
              return;
            }
switchD_10049879_caseD_1004b704:
            in_stack_ffffff44 = (byte)SVar39;
            local_5c = *(undefined2 *)((int)*pauVar46 + 4);
            local_5a = *(undefined1 *)((int)*pauVar46 + 6);
            pauVar36 = local_84;
LAB_1004b719:
            in_stack_ffffff45 = (byte)pauVar36;
            in_stack_ffffff46 = (undefined1)((uint)pauVar36 >> 8);
            in_stack_ffffff47 = (undefined1)((uint)pauVar36 >> 0x10);
            in_stack_ffffff48 = (undefined1)((uint)pauVar36 >> 0x18);
            *(undefined1 *)((int)*pauVar46 + 6) = local_5a;
            *(undefined2 *)((int)*pauVar46 + 4) = local_5c;
          }
          else {
LAB_1004ad18:
            if (local_a4._1_1_ != 0xff) {
              pauVar27 = (undefined1 (*) [16])
                         CONCAT13(in_stack_ffffff47,
                                  CONCAT12(in_stack_ffffff46,
                                           CONCAT11(in_stack_ffffff45,in_stack_ffffff44)));
              bVar38 = local_a4._1_1_;
              bVar25 = bStack_b4;
              uVar13 = uStack_b3;
              uVar14 = uStack_b2;
              uVar15 = uStack_b1;
              break;
            }
            local_a0 = (undefined4 *)
                       CONCAT13(uStack_b1,CONCAT12(uStack_b2,CONCAT11(uStack_b3,bStack_b4)));
            local_60 = pauStack_b0;
          }
          uVar10 = CONCAT12(in_stack_ffffff46,CONCAT11(in_stack_ffffff45,in_stack_ffffff44));
          local_3c = (undefined1 (*) [16])CONCAT13(in_stack_ffffff47,uVar10);
          local_9c = (undefined1 (*) [16])
                     CONCAT13(in_stack_ffffff4b,
                              CONCAT12(in_stack_ffffff4a,
                                       CONCAT11(in_stack_ffffff49,in_stack_ffffff48)));
          local_98 = (undefined1 (*) [16])((uVar10 & 0xff00) >> 8);
          pauVar46 = (undefined1 (*) [16])((uint)local_3c >> 0x10);
LAB_1004b74f:
          bVar38 = 0xff;
          param_1 = local_8c;
          goto LAB_1004b559;
        case 0x47:
        case 0x4a:
          goto switchD_10049879_caseD_1004af77;
        case 0x48:
        case 0x4c:
          goto switchD_10049879_caseD_1004b2e6;
        case 0x49:
          goto switchD_10049879_caseD_1004b2f4;
        case 0x4b:
          goto switchD_10049879_caseD_1004b2f8;
        case 0x4d:
          goto switchD_10049879_caseD_1004b2fc;
        case 0x4e:
          goto switchD_10049879_caseD_1004b704;
        case 0x4f:
          goto switchD_10049879_caseD_1004b6a9;
        default:
switchD_10049879_caseD_1004b69b:
          local_48 = (undefined1 (*) [16])(local_a0 + 2);
switchD_10049879_caseD_1004b6a9:
          if ((*local_48)[0] != '%') goto switchD_10049879_caseD_1004b704;
          in_stack_ffffff44 = 0x21;
          if (local_84._3_1_ == '\x03') {
            puVar6 = (undefined4 *)local_a0[1];
            pvVar22 = (LPVOID)*local_a0;
            if ((code *)*puVar6 != (code *)0x0) {
              (*(code *)*puVar6)(pvVar22);
            }
            if (puVar6[1] != 0) {
              FUN_10093cf0(pvVar22,puVar6[2]);
            }
            pvVar24 = GetProcessHeap();
            HeapFree(pvVar24,0,local_a0);
            pauVar46 = (undefined1 (*) [16])&stack0xffffff45;
          }
          goto LAB_1004b719;
        }
        uStack_b1 = uVar15;
        uStack_b2 = uVar14;
        uStack_b3 = uVar13;
        bStack_b4 = bVar25;
        local_a0 = (undefined4 *)
                   CONCAT13(in_stack_ffffff4b,
                            CONCAT12(in_stack_ffffff4a,CONCAT11(in_stack_ffffff49,in_stack_ffffff48)
                                    ));
        in_XMM0_Da = *(int *)((int)*pauVar46 + 0xf);
        in_XMM0_Db = *(int *)((int)pauVar46[1] + 3);
        in_XMM0_Dc = 0;
        in_XMM0_Dd = 0;
        local_38 = in_XMM0_Da;
        iStack_34 = in_XMM0_Db;
        local_60 = (undefined1 (*) [16])
                   CONCAT13(uStack_b1,CONCAT12(uStack_b2,CONCAT11(uStack_b3,bStack_b4)));
        local_8c = pauStack_b0;
        local_30 = *(undefined1 *)((int)pauVar46[1] + 7);
        local_56 = local_a4._2_2_;
        local_9c = pauVar27;
LAB_1004ad6d:
        pauVar46 = (undefined1 (*) [16])0x0;
        local_98 = (undefined1 (*) [16])0x0;
        pauVar27 = (undefined1 (*) [16])0x0;
LAB_1004ad6f:
        if (bVar38 != 2) {
          pauVar46 = (undefined1 (*) [16])
                     ((uint)pauVar27 & 0xff | (int)local_98 << 8 | (int)pauVar46 << 0x10);
          if (local_50 < pauVar46) {
            FUN_10136a50((uint)pauVar46,(uint)local_50,(uint)local_50,
                         &PTR_s_C__Users_runneradmin__cargo_regi_101505fc);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
          local_3c = (undefined1 (*) [16])(((int)local_3c - (int)local_50) + (int)pauVar46);
          bVar25 = (byte)((uint)local_3c >> 8);
          goto LAB_1004b552;
        }
        pauVar31 = (undefined1 (*) [16])
                   ((uint)pauVar27 & 0xff | (int)local_98 << 8 | (int)pauVar46 << 0x10);
        if (local_50 < pauVar31) {
          FUN_10136a50((uint)pauVar31,(uint)local_50,(uint)local_50,
                       &PTR_s_C__Users_runneradmin__cargo_regi_101505ec);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        local_88 = (undefined1 (*) [16])((int)*pauVar31 + (int)*local_88);
        local_50 = (undefined1 (*) [16])((int)local_50 - (int)pauVar31);
      } while (local_50 != (undefined1 (*) [16])0x0);
      bVar38 = 2;
      bVar25 = (byte)((uint)local_3c >> 8);
LAB_1004b552:
      local_98 = (undefined1 (*) [16])(uint)bVar25;
      pauVar46 = (undefined1 (*) [16])((uint)local_3c >> 0x10);
      param_1 = local_8c;
    }
LAB_1004b559:
    uVar18 = (uint)local_3c & 0xff | ((uint)local_98 & 0xff) << 8 | (int)pauVar46 << 0x10;
    if (bVar38 != 0xff) {
      uVar18 = uVar18 + *(int *)param_2[0x1c];
      if (*(uint *)((int)param_2[0x1c] + 4) < uVar18) {
        uVar18 = *(uint *)((int)param_2[0x1c] + 4);
      }
      *(uint *)param_2[0x1c] = uVar18;
      *(undefined1 (**) [16])*local_28 = local_9c;
      *(undefined4 **)((int)*local_28 + 4) = local_a0;
      *(undefined1 (**) [16])((int)*local_28 + 8) = local_60;
      *(undefined1 (**) [16])((int)*local_28 + 0xc) = param_1;
      *(ulonglong *)local_28[1] = CONCAT44(iStack_34,local_38);
      *(undefined1 *)((int)local_28[1] + 8) = local_30;
      *(byte *)((int)local_28[1] + 9) = bVar38;
      *(undefined2 *)((int)local_28[1] + 10) = local_56;
      return;
    }
    *(undefined1 (**) [16])((int)*local_28 + 4) = local_9c;
    *(undefined4 **)((int)*local_28 + 8) = local_a0;
    *(undefined1 (**) [16])((int)*local_28 + 0xc) = local_60;
    *(uint *)*local_28 = uVar18;
    *(undefined1 *)((int)local_28[1] + 9) = 0xff;
    return;
  }
  (*param_1)[0] = 0x22;
  *(undefined2 *)(*param_1 + 4) = 0x2501;
LAB_1004978a:
  param_1[1][9] = 0xff;
  return;
code_r0x1004a041:
  uVar43 = uVar43 + 1;
  if (uVar18 == uVar43) goto LAB_1004a71f;
  goto LAB_1004a037;
}
