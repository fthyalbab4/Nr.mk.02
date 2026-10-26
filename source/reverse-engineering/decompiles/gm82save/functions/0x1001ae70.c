// rea decompile_all
// name: FUN_1001ae70
// address: 0x1001ae70
// body: available
// range: 0x1001ae70-0x1001af6e inclusive
// range: 0x1001af70-0x1001b057 inclusive
// range: 0x1001b060-0x1001b0a6 inclusive
// range: 0x1001b0b0-0x1001b0f9 inclusive
// range: 0x1001b100-0x1001b1a3 inclusive
// range: 0x1001b1b0-0x1001b20a inclusive
// range: 0x1001b210-0x1001b255 inclusive
// range: 0x1001b260-0x1001b293 inclusive
// range: 0x1001b2a0-0x1001b2d7 inclusive
// range: 0x1001b2e0-0x1001b317 inclusive
// range: 0x1001b320-0x1001b418 inclusive
// range: 0x1001b420-0x1001b459 inclusive
// range: 0x1001b460-0x1001b4c3 inclusive
// range: 0x1001b4d0-0x1001b531 inclusive
// range: 0x1001b540-0x1001b572 inclusive
// range: 0x1001b580-0x1001b5b5 inclusive
// range: 0x1001b5c0-0x1001b5f1 inclusive
// range: 0x1001b600-0x1001b639 inclusive
// range: 0x1001b640-0x1001b671 inclusive
// range: 0x1001b680-0x1001b6b4 inclusive
// range: 0x1001b6c0-0x1001b6f5 inclusive
// range: 0x1001b700-0x1001b733 inclusive
// range: 0x1001b740-0x1001b773 inclusive
// range: 0x1001b780-0x1001b7e4 inclusive
// range: 0x1001b7f0-0x1001b826 inclusive
// range: 0x1001b830-0x1001b865 inclusive
// range: 0x1001b870-0x1001b8a6 inclusive
// range: 0x1001b8b0-0x1001b912 inclusive
// range: 0x1001b920-0x1001b953 inclusive
// range: 0x1001b960-0x1001b993 inclusive
// range: 0x1001b9a0-0x1001b9ce inclusive
// range: 0x1001b9d0-0x1001ba06 inclusive
// range: 0x1001ba10-0x1001ba47 inclusive
// range: 0x1001ba50-0x1001ba78 inclusive
// range: 0x1001ba80-0x1001c114 inclusive
// range: 0x1001c120-0x1001c20a inclusive
// range: 0x1001c210-0x1001c396 inclusive
// range: 0x1001c3a0-0x1001c450 inclusive
// range: 0x1001c460-0x1001c55c inclusive
// range: 0x1001c560-0x1001c7cd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_1001ae70(uint *param_1,uint param_2,uint *param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  bool bVar31;
  uint *local_ec;
  uint local_e8;
  uint *local_e4;
  uint local_e0;
  uint local_dc;
  uint *local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c0;
  int *local_bc;
  uint local_ac;
  uint local_98;
  uint local_94 [33];

  if (0x20 < param_2) {
    local_cc = param_4;
    puVar24 = param_1;
LAB_1001c148:
    do {
      if (local_cc == 0) {
        FUN_1001ad20(puVar24,param_2,(int *)*param_5);
        return;
      }
      uVar28 = param_2 >> 3;
      puVar9 = puVar24 + uVar28 * 4;
      puVar7 = puVar24 + uVar28 * 7;
      if (param_2 < 0x40) {
        uVar28 = *puVar24;
        if (uVar28 < 0x100) {
          uVar6 = *puVar9;
          uVar8 = uVar6;
          if ((uVar6 < 0x100) && (uVar8 = *puVar7, uVar8 < 0x100)) {
            local_bc = (int *)*param_5;
            iVar29 = *local_bc;
            iVar2 = local_bc[1];
            iVar23 = -(*(int *)(iVar29 + uVar28 * 4) * *(int *)(iVar2 + uVar28 * 4));
            iVar17 = -(*(int *)(iVar29 + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4));
            iVar29 = -(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4));
            if (iVar17 < iVar29 != iVar23 < iVar17) {
              puVar9 = puVar7;
            }
            if (iVar23 < iVar29 != iVar23 < iVar17) {
              puVar9 = puVar24;
            }
            goto LAB_1001c22c;
          }
        }
        else {
LAB_1001c799:
          uVar8 = uVar28;
        }
        goto LAB_1001c79b;
      }
      puVar9 = FUN_100196e0(puVar24,puVar9,puVar7,uVar28,param_5);
      local_bc = (int *)*param_5;
LAB_1001c22c:
      local_cc = local_cc + -1;
      iVar29 = (int)puVar9 - (int)puVar24;
      if (param_3 == (uint *)0x0) {
        uVar6 = *puVar24;
        uVar8 = *(uint *)((int)puVar24 + iVar29);
      }
      else {
        uVar28 = *param_3;
        if (0xff < uVar28) goto LAB_1001c799;
        uVar8 = *(uint *)((int)puVar24 + iVar29);
        if (0xff < uVar8) goto LAB_1001c79b;
        iVar2 = *local_bc;
        iVar17 = local_bc[1];
        uVar6 = *puVar24;
        if (-(*(int *)(iVar2 + uVar8 * 4) * *(int *)(iVar17 + uVar8 * 4)) <=
            -(*(int *)(iVar2 + uVar28 * 4) * *(int *)(iVar17 + uVar28 * 4))) {
          *puVar24 = uVar8;
          *(uint *)((int)puVar24 + iVar29) = uVar6;
          puVar9 = puVar24 + 2;
          puVar7 = puVar24 + 1;
          uVar6 = puVar24[1];
          uVar5 = *puVar24;
          iVar29 = 0;
          puVar18 = puVar7;
          uVar8 = uVar5;
          if (puVar9 < puVar24 + (param_2 - 1)) {
            if (0xff < uVar5) goto LAB_1001c79b;
            iVar23 = *(int *)(iVar2 + uVar5 * 4);
            iVar29 = 0;
            do {
              puVar18 = puVar9;
              uVar28 = *puVar18;
              if (0xff < uVar28) goto LAB_1001c799;
              iVar27 = *(int *)(iVar17 + uVar5 * 4);
              iVar30 = *(int *)(iVar2 + uVar28 * 4);
              iVar3 = *(int *)(iVar17 + uVar28 * 4);
              puVar18[-1] = puVar7[iVar29];
              puVar7[iVar29] = uVar28;
              uVar28 = puVar18[1];
              if (0xff < uVar28) goto LAB_1001c799;
              iVar25 = -(iVar27 * iVar23);
              iVar27 = iVar29 + (uint)(-(iVar30 * iVar3) <= iVar25);
              iVar29 = (uint)(-(*(int *)(iVar2 + uVar28 * 4) * *(int *)(iVar17 + uVar28 * 4)) <=
                             iVar25) + iVar27;
              *puVar18 = puVar7[iVar27];
              puVar9 = puVar18 + 2;
              puVar7[iVar27] = uVar28;
            } while (puVar9 < puVar24 + (param_2 - 1));
            puVar18 = puVar18 + 1;
          }
          if (puVar9 != puVar24 + param_2) {
            puVar26 = puVar18;
            if (0xff < uVar5) goto LAB_1001c79b;
            do {
              puVar18 = puVar9;
              uVar28 = *puVar18;
              if (0xff < uVar28) goto LAB_1001c799;
              iVar23 = *(int *)(iVar2 + uVar5 * 4);
              iVar27 = *(int *)(iVar2 + uVar28 * 4);
              iVar30 = *(int *)(iVar17 + uVar5 * 4);
              iVar3 = *(int *)(iVar17 + uVar28 * 4);
              *puVar26 = puVar7[iVar29];
              puVar7[iVar29] = uVar28;
              iVar29 = iVar29 + (uint)(-(iVar27 * iVar3) <= -(iVar23 * iVar30));
              puVar26 = puVar18;
              puVar9 = puVar18 + 1;
            } while (puVar18 + 1 != puVar24 + param_2);
          }
          if ((0xff < uVar5) || (uVar8 = uVar6, 0xff < uVar6)) goto LAB_1001c79b;
          uVar28 = (uint)(-(*(int *)(iVar2 + uVar6 * 4) * *(int *)(iVar17 + uVar6 * 4)) <=
                         -(*(int *)(iVar2 + uVar5 * 4) * *(int *)(iVar17 + uVar5 * 4))) + iVar29;
          *puVar18 = puVar7[iVar29];
          puVar7[iVar29] = uVar6;
          if (param_2 <= uVar28) goto LAB_1001c6f6;
          param_3 = (uint *)0x0;
          uVar6 = *puVar24;
          *puVar24 = puVar24[uVar28];
          puVar24[uVar28] = uVar6;
          param_1 = puVar24 + uVar28 + 1;
          param_2 = param_2 - (uVar28 + 1);
          puVar24 = param_1;
          if (param_2 < 0x21) break;
          goto LAB_1001c148;
        }
      }
      *puVar24 = uVar8;
      *(uint *)((int)puVar24 + iVar29) = uVar6;
      puVar9 = puVar24 + 2;
      puVar7 = puVar24 + 1;
      iVar29 = 0;
      uVar6 = *puVar24;
      uVar5 = puVar24[1];
      puVar18 = puVar7;
      if (puVar9 < puVar24 + (param_2 - 1)) {
        if (uVar6 < 0x100) {
          iVar29 = 0;
          iVar2 = local_bc[1];
          iVar17 = *local_bc;
          do {
            puVar18 = puVar9;
            uVar28 = *puVar18;
            if (0xff < uVar28) goto LAB_1001c799;
            iVar23 = *(int *)(iVar2 + uVar28 * 4);
            iVar27 = *(int *)(iVar17 + uVar28 * 4);
            iVar30 = *(int *)(iVar2 + uVar6 * 4);
            iVar3 = *(int *)(iVar17 + uVar6 * 4);
            puVar18[-1] = puVar7[iVar29];
            puVar7[iVar29] = uVar28;
            uVar28 = puVar18[1];
            if (0xff < uVar28) goto LAB_1001c799;
            iVar30 = -(iVar3 * iVar30);
            iVar23 = iVar29 + (uint)(-(iVar27 * iVar23) < iVar30);
            iVar29 = (uint)(-(*(int *)(iVar17 + uVar28 * 4) * *(int *)(iVar2 + uVar28 * 4)) < iVar30
                           ) + iVar23;
            *puVar18 = puVar7[iVar23];
            puVar9 = puVar18 + 2;
            puVar7[iVar23] = uVar28;
          } while (puVar9 < puVar24 + (param_2 - 1));
          puVar18 = puVar18 + 1;
          goto LAB_1001c3a2;
        }
LAB_1001c789:
        uVar28 = *puVar9;
        uVar8 = uVar6;
        if (0xff < uVar28) goto LAB_1001c799;
        goto LAB_1001c79b;
      }
LAB_1001c3a2:
      if (puVar9 == puVar24 + param_2) {
        iVar2 = local_bc[1];
        puVar26 = puVar18;
      }
      else {
        if (0xff < uVar6) goto LAB_1001c789;
        do {
          puVar26 = puVar9;
          uVar28 = *puVar26;
          if (0xff < uVar28) goto LAB_1001c799;
          iVar2 = local_bc[1];
          iVar17 = *(int *)(*local_bc + uVar28 * 4);
          iVar23 = *(int *)(*local_bc + uVar6 * 4);
          iVar27 = *(int *)(iVar2 + uVar28 * 4);
          iVar30 = *(int *)(iVar2 + uVar6 * 4);
          *puVar18 = puVar7[iVar29];
          puVar7[iVar29] = uVar28;
          iVar29 = iVar29 + (uint)(-(iVar17 * iVar27) < -(iVar23 * iVar30));
          puVar18 = puVar26;
          puVar9 = puVar26 + 1;
        } while (puVar26 + 1 != puVar24 + param_2);
      }
      uVar8 = uVar5;
      if ((0xff < uVar5) || (uVar8 = uVar6, 0xff < uVar6)) goto LAB_1001c79b;
      uVar28 = (uint)(-(*(int *)(*local_bc + uVar5 * 4) * *(int *)(iVar2 + uVar5 * 4)) <
                     -(*(int *)(*local_bc + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4))) + iVar29;
      *puVar26 = puVar7[iVar29];
      puVar7[iVar29] = uVar5;
      if (param_2 <= uVar28) {
LAB_1001c6f6:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar6 = *puVar24;
      puVar9 = puVar24 + uVar28;
      param_1 = puVar24 + uVar28 + 1;
      *puVar24 = puVar24[uVar28];
      puVar24[uVar28] = uVar6;
      param_2 = param_2 + ~uVar28;
      FUN_1001ae70(puVar24,uVar28,param_3,local_cc,param_5);
      puVar24 = param_1;
      param_3 = puVar9;
    } while (0x20 < param_2);
  }
  if (1 < param_2) {
    piVar1 = (int *)*param_5;
    local_98 = param_2 >> 1;
    puVar24 = param_1 + local_98;
    uVar28 = local_98;
    if (param_2 < 0x12) {
      uVar28 = param_2;
    }
    local_94[0] = param_2 - local_98;
    puVar9 = param_1;
    do {
      if (uVar28 < 0xd) {
        uVar6 = 1;
        if (8 < uVar28) {
          local_dc = puVar9[3];
          uVar8 = local_dc;
          if ((((((0xff < local_dc) || (uVar6 = *puVar9, uVar8 = uVar6, 0xff < uVar6)) ||
                (uVar5 = puVar9[7], uVar8 = uVar5, 0xff < uVar5)) ||
               ((local_c8 = puVar9[1], uVar8 = local_c8, 0xff < local_c8 ||
                (uVar15 = puVar9[5], uVar8 = uVar15, 0xff < uVar15)))) ||
              ((local_cc = puVar9[2], uVar8 = local_cc, 0xff < local_cc ||
               ((local_d4 = puVar9[8], uVar8 = local_d4, 0xff < local_d4 ||
                (uVar16 = puVar9[4], uVar8 = uVar16, 0xff < uVar16)))))) ||
             (uVar8 = puVar9[6], 0xff < uVar8)) goto LAB_1001c79b;
          iVar29 = piVar1[1];
          iVar2 = *piVar1;
          local_d0 = uVar5;
          if (-(*(int *)(iVar29 + local_c8 * 4) * *(int *)(iVar2 + local_c8 * 4)) <=
              -(*(int *)(iVar29 + uVar5 * 4) * *(int *)(iVar2 + uVar5 * 4))) {
            local_d0 = local_c8;
            local_c8 = uVar5;
          }
          local_e0 = uVar15;
          if (-(*(int *)(iVar29 + local_cc * 4) * *(int *)(iVar2 + local_cc * 4)) <=
              -(*(int *)(iVar29 + uVar15 * 4) * *(int *)(iVar2 + uVar15 * 4))) {
            local_e0 = local_cc;
            local_cc = uVar15;
          }
          uVar5 = uVar6;
          if (-(*(int *)(iVar29 + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4)) <=
              -(*(int *)(iVar29 + local_dc * 4) * *(int *)(iVar2 + local_dc * 4))) {
            uVar5 = local_dc;
            local_dc = uVar6;
          }
          uVar6 = uVar16;
          if (-(*(int *)(iVar2 + local_d4 * 4) * *(int *)(iVar29 + local_d4 * 4)) <
              -(*(int *)(iVar2 + uVar16 * 4) * *(int *)(iVar29 + uVar16 * 4))) {
            uVar6 = local_d4;
            local_d4 = uVar16;
          }
          local_ec = (uint *)uVar5;
          if (-(*(int *)(iVar2 + uVar5 * 4) * *(int *)(iVar29 + uVar5 * 4)) <=
              -(*(int *)(iVar2 + local_d4 * 4) * *(int *)(iVar29 + local_d4 * 4))) {
            local_ec = (uint *)local_d4;
            local_d4 = uVar5;
          }
          uVar5 = local_e0;
          if (-(*(int *)(iVar2 + uVar6 * 4) * *(int *)(iVar29 + uVar6 * 4)) <
              -(*(int *)(iVar2 + local_e0 * 4) * *(int *)(iVar29 + local_e0 * 4))) {
            uVar5 = uVar6;
            uVar6 = local_e0;
          }
          if (-(*(int *)(iVar2 + local_c8 * 4) * *(int *)(iVar29 + local_c8 * 4)) <
              -(*(int *)(iVar2 + local_dc * 4) * *(int *)(iVar29 + local_dc * 4))) {
            local_c0 = local_dc;
            local_dc = local_c8;
          }
          else {
            local_c0 = local_c8;
          }
          if (-(*(int *)(iVar2 + uVar8 * 4) * *(int *)(iVar29 + uVar8 * 4)) <
              -(*(int *)(iVar2 + local_cc * 4) * *(int *)(iVar29 + local_cc * 4))) {
            local_e4 = (uint *)local_cc;
            local_e8 = uVar8;
          }
          else {
            local_e8 = local_cc;
            local_e4 = (uint *)uVar8;
          }
          local_e0 = local_dc;
          local_c8 = uVar5;
          if (-(*(int *)(iVar2 + local_dc * 4) * *(int *)(iVar29 + local_dc * 4)) <=
              -(*(int *)(iVar2 + uVar5 * 4) * *(int *)(iVar29 + uVar5 * 4))) {
            local_e0 = uVar5;
            local_c8 = local_dc;
          }
          if (-(*(int *)(iVar2 + local_d4 * 4) * *(int *)(iVar29 + local_d4 * 4)) <
              -(*(int *)(iVar2 + local_d0 * 4) * *(int *)(iVar29 + local_d0 * 4))) {
            local_ac = local_d4;
            local_d4 = local_d0;
          }
          else {
            local_ac = local_d0;
          }
          uVar8 = local_d4;
          local_dc = uVar6;
          if (-(*(int *)(iVar2 + local_e8 * 4) * *(int *)(iVar29 + local_e8 * 4)) <
              -(*(int *)(iVar2 + uVar6 * 4) * *(int *)(iVar29 + uVar6 * 4))) {
            local_dc = local_e8;
            local_e8 = uVar6;
          }
          uVar6 = local_e8;
          if (-(*(int *)(iVar2 + (int)local_ec * 4) * *(int *)(iVar29 + (int)local_ec * 4)) <
              -(*(int *)(iVar2 + local_c0 * 4) * *(int *)(iVar29 + local_c0 * 4))) {
            local_d0 = (uint)local_ec;
            local_ec = (uint *)local_c0;
          }
          else {
            local_d0 = local_c0;
          }
          if (-(*(int *)(iVar2 + local_dc * 4) * *(int *)(iVar29 + local_dc * 4)) <
              -(*(int *)(iVar2 + local_ac * 4) * *(int *)(iVar29 + local_ac * 4))) {
            local_cc = local_dc;
            local_dc = local_ac;
          }
          else {
            local_cc = local_ac;
          }
          uVar5 = local_cc;
          if (-(*(int *)(iVar2 + (int)local_e4 * 4) * *(int *)(iVar29 + (int)local_e4 * 4)) <
              -(*(int *)(iVar2 + local_d4 * 4) * *(int *)(iVar29 + local_d4 * 4))) {
            local_d4 = (uint)local_e4;
            local_e4 = (uint *)uVar8;
          }
          if (-(*(int *)(iVar2 + local_d0 * 4) * *(int *)(iVar29 + local_d0 * 4)) <
              -(*(int *)(iVar2 + local_e8 * 4) * *(int *)(iVar29 + local_e8 * 4))) {
            local_e8 = local_d0;
            local_d0 = uVar6;
          }
          if (-(*(int *)(iVar2 + local_cc * 4) * *(int *)(iVar29 + local_cc * 4)) <
              -(*(int *)(iVar2 + local_c8 * 4) * *(int *)(iVar29 + local_c8 * 4))) {
            local_cc = local_c8;
            local_c8 = uVar5;
          }
          *puVar9 = local_c8;
          if (-(*(int *)(iVar2 + local_dc * 4) * *(int *)(iVar29 + local_dc * 4)) <
              -(*(int *)(iVar2 + local_e0 * 4) * *(int *)(iVar29 + local_e0 * 4))) {
            local_c8 = local_dc;
            local_dc = local_e0;
          }
          else {
            local_c8 = local_e0;
          }
          if (-(*(int *)(iVar2 + local_e8 * 4) * *(int *)(iVar29 + local_e8 * 4)) <
              -(*(int *)(iVar2 + local_d4 * 4) * *(int *)(iVar29 + local_d4 * 4))) {
            local_e0 = local_e8;
            local_e8 = local_d4;
          }
          else {
            local_e0 = local_d4;
          }
          if (-(*(int *)(iVar2 + (int)local_ec * 4) * *(int *)(iVar29 + (int)local_ec * 4)) <
              -(*(int *)(iVar2 + (int)local_e4 * 4) * *(int *)(iVar29 + (int)local_e4 * 4))) {
            local_d4 = (uint)local_ec;
            local_ec = local_e4;
          }
          else {
            local_d4 = (uint)local_e4;
          }
          puVar9[8] = (uint)local_ec;
          if (-(*(int *)(iVar2 + local_e0 * 4) * *(int *)(iVar29 + local_e0 * 4)) <
              -(*(int *)(iVar2 + local_c8 * 4) * *(int *)(iVar29 + local_c8 * 4))) {
            local_ec = (uint *)local_e0;
            local_e0 = local_c8;
          }
          else {
            local_ec = (uint *)local_c8;
          }
          if (-(*(int *)(iVar2 + local_e8 * 4) * *(int *)(iVar29 + local_e8 * 4)) <
              -(*(int *)(iVar2 + local_dc * 4) * *(int *)(iVar29 + local_dc * 4))) {
            local_c8 = local_e8;
            local_e8 = local_dc;
          }
          else {
            local_c8 = local_dc;
          }
          if (-(*(int *)(iVar2 + local_d0 * 4) * *(int *)(iVar29 + local_d0 * 4)) <
              -(*(int *)(iVar2 + local_d4 * 4) * *(int *)(iVar29 + local_d4 * 4))) {
            local_e4 = (uint *)local_d0;
            local_d0 = local_d4;
          }
          else {
            local_e4 = (uint *)local_d4;
          }
          puVar9[7] = local_d0;
          puVar7 = (uint *)local_cc;
          if (-(*(int *)(iVar2 + local_cc * 4) * *(int *)(iVar29 + local_cc * 4)) <=
              -(*(int *)(iVar2 + (int)local_ec * 4) * *(int *)(iVar29 + (int)local_ec * 4))) {
            puVar7 = local_ec;
            local_ec = (uint *)local_cc;
          }
          puVar9[1] = (uint)local_ec;
          puVar9[2] = (uint)puVar7;
          uVar6 = local_c8;
          if (-(*(int *)(iVar2 + local_e0 * 4) * *(int *)(iVar29 + local_e0 * 4)) <=
              -(*(int *)(iVar2 + local_c8 * 4) * *(int *)(iVar29 + local_c8 * 4))) {
            uVar6 = local_e0;
            local_e0 = local_c8;
          }
          puVar9[3] = uVar6;
          puVar9[4] = local_e0;
          puVar7 = (uint *)local_e8;
          if (-(*(int *)(iVar2 + local_e8 * 4) * *(int *)(iVar29 + local_e8 * 4)) <=
              -(*(int *)(iVar2 + (int)local_e4 * 4) * *(int *)(iVar29 + (int)local_e4 * 4))) {
            puVar7 = local_e4;
            local_e4 = (uint *)local_e8;
          }
          puVar9[5] = (uint)local_e4;
          puVar9[6] = (uint)puVar7;
          uVar6 = 9;
        }
      }
      else {
        uVar6 = puVar9[0xc];
        uVar8 = uVar6;
        if ((0xff < uVar6) || (uVar8 = *puVar9, 0xff < uVar8)) goto LAB_1001c79b;
        iVar29 = *piVar1;
        iVar2 = piVar1[1];
        uVar5 = uVar8;
        if (-(*(int *)(iVar29 + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4)) <
            -(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4))) {
          uVar5 = uVar6;
          uVar6 = uVar8;
        }
        *puVar9 = uVar5;
        puVar9[0xc] = uVar6;
        uVar15 = puVar9[10];
        uVar8 = uVar15;
        if ((0xff < uVar15) || (uVar8 = puVar9[1], 0xff < uVar8)) goto LAB_1001c79b;
        uVar16 = uVar8;
        if (-(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4)) <=
            -(*(int *)(iVar29 + uVar15 * 4) * *(int *)(iVar2 + uVar15 * 4))) {
          uVar16 = uVar15;
          uVar15 = uVar8;
        }
        puVar9[1] = uVar15;
        puVar9[10] = uVar16;
        uVar14 = puVar9[9];
        uVar8 = uVar14;
        if ((0xff < uVar14) || (uVar8 = puVar9[2], 0xff < uVar8)) goto LAB_1001c79b;
        uVar13 = uVar8;
        if (-(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4)) <=
            -(*(int *)(iVar29 + uVar14 * 4) * *(int *)(iVar2 + uVar14 * 4))) {
          uVar13 = uVar14;
          uVar14 = uVar8;
        }
        puVar9[2] = uVar14;
        puVar9[9] = uVar13;
        uVar12 = puVar9[7];
        uVar8 = uVar12;
        if ((0xff < uVar12) || (uVar8 = puVar9[3], 0xff < uVar8)) goto LAB_1001c79b;
        uVar10 = uVar8;
        if (-(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4)) <=
            -(*(int *)(iVar29 + uVar12 * 4) * *(int *)(iVar2 + uVar12 * 4))) {
          uVar10 = uVar12;
          uVar12 = uVar8;
        }
        puVar9[3] = uVar12;
        puVar9[7] = uVar10;
        uVar21 = puVar9[0xb];
        uVar8 = uVar21;
        if ((0xff < uVar21) || (uVar11 = puVar9[5], uVar8 = uVar11, 0xff < uVar11))
        goto LAB_1001c79b;
        uVar20 = uVar21;
        if (-(*(int *)(iVar29 + uVar11 * 4) * *(int *)(iVar2 + uVar11 * 4)) <=
            -(*(int *)(iVar29 + uVar21 * 4) * *(int *)(iVar2 + uVar21 * 4))) {
          uVar20 = uVar11;
          uVar11 = uVar21;
        }
        puVar9[5] = uVar20;
        puVar9[0xb] = uVar11;
        uVar21 = puVar9[8];
        uVar8 = uVar21;
        if ((0xff < uVar21) || (uVar8 = puVar9[6], 0xff < uVar8)) goto LAB_1001c79b;
        uVar19 = uVar8;
        if (-(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4)) <=
            -(*(int *)(iVar29 + uVar21 * 4) * *(int *)(iVar2 + uVar21 * 4))) {
          uVar19 = uVar21;
          uVar21 = uVar8;
        }
        puVar9[6] = uVar21;
        puVar9[8] = uVar19;
        uVar22 = uVar15;
        if (-(*(int *)(iVar29 + uVar21 * 4) * *(int *)(iVar2 + uVar21 * 4)) <
            -(*(int *)(iVar29 + uVar15 * 4) * *(int *)(iVar2 + uVar15 * 4))) {
          uVar22 = uVar21;
          uVar21 = uVar15;
        }
        puVar9[1] = uVar22;
        puVar9[6] = uVar21;
        uVar15 = uVar12;
        if (-(*(int *)(iVar29 + uVar14 * 4) * *(int *)(iVar2 + uVar14 * 4)) <=
            -(*(int *)(iVar29 + uVar12 * 4) * *(int *)(iVar2 + uVar12 * 4))) {
          uVar15 = uVar14;
          uVar14 = uVar12;
        }
        puVar9[2] = uVar15;
        puVar9[3] = uVar14;
        uVar8 = puVar9[4];
        if (0xff < uVar8) goto LAB_1001c79b;
        uVar12 = uVar11;
        if (-(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4)) <=
            -(*(int *)(iVar29 + uVar11 * 4) * *(int *)(iVar2 + uVar11 * 4))) {
          uVar12 = uVar8;
          uVar8 = uVar11;
        }
        puVar9[4] = uVar12;
        puVar9[0xb] = uVar8;
        uVar11 = uVar13;
        if (-(*(int *)(iVar29 + uVar10 * 4) * *(int *)(iVar2 + uVar10 * 4)) <=
            -(*(int *)(iVar29 + uVar13 * 4) * *(int *)(iVar2 + uVar13 * 4))) {
          uVar11 = uVar10;
          uVar10 = uVar13;
        }
        puVar9[7] = uVar11;
        puVar9[9] = uVar10;
        uVar13 = uVar16;
        if (-(*(int *)(iVar29 + uVar19 * 4) * *(int *)(iVar2 + uVar19 * 4)) <=
            -(*(int *)(iVar29 + uVar16 * 4) * *(int *)(iVar2 + uVar16 * 4))) {
          uVar13 = uVar19;
          uVar19 = uVar16;
        }
        puVar9[8] = uVar13;
        puVar9[10] = uVar19;
        uVar16 = uVar5;
        if (-(*(int *)(iVar29 + uVar5 * 4) * *(int *)(iVar2 + uVar5 * 4)) <=
            -(*(int *)(iVar29 + uVar12 * 4) * *(int *)(iVar2 + uVar12 * 4))) {
          uVar16 = uVar12;
          uVar12 = uVar5;
        }
        *puVar9 = uVar12;
        puVar9[4] = uVar16;
        uVar5 = uVar15;
        if (-(*(int *)(iVar29 + uVar22 * 4) * *(int *)(iVar2 + uVar22 * 4)) <=
            -(*(int *)(iVar29 + uVar15 * 4) * *(int *)(iVar2 + uVar15 * 4))) {
          uVar5 = uVar22;
          uVar22 = uVar15;
        }
        puVar9[1] = uVar5;
        puVar9[2] = uVar22;
        uVar15 = uVar14;
        if (-(*(int *)(iVar29 + uVar14 * 4) * *(int *)(iVar2 + uVar14 * 4)) <=
            -(*(int *)(iVar29 + uVar21 * 4) * *(int *)(iVar2 + uVar21 * 4))) {
          uVar15 = uVar21;
          uVar21 = uVar14;
        }
        puVar9[3] = uVar21;
        puVar9[6] = uVar15;
        uVar14 = uVar11;
        if (-(*(int *)(iVar29 + uVar13 * 4) * *(int *)(iVar2 + uVar13 * 4)) <
            -(*(int *)(iVar29 + uVar11 * 4) * *(int *)(iVar2 + uVar11 * 4))) {
          uVar14 = uVar13;
          uVar13 = uVar11;
        }
        puVar9[7] = uVar14;
        puVar9[8] = uVar13;
        uVar11 = uVar10;
        if (-(*(int *)(iVar29 + uVar19 * 4) * *(int *)(iVar2 + uVar19 * 4)) <
            -(*(int *)(iVar29 + uVar10 * 4) * *(int *)(iVar2 + uVar10 * 4))) {
          uVar11 = uVar19;
          uVar19 = uVar10;
        }
        puVar9[9] = uVar11;
        puVar9[10] = uVar19;
        uVar10 = uVar6;
        if (-(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4)) <=
            -(*(int *)(iVar29 + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4))) {
          uVar10 = uVar8;
          uVar8 = uVar6;
        }
        puVar9[0xb] = uVar10;
        puVar9[0xc] = uVar8;
        uVar6 = uVar16;
        if (-(*(int *)(iVar29 + uVar16 * 4) * *(int *)(iVar2 + uVar16 * 4)) <=
            -(*(int *)(iVar29 + uVar15 * 4) * *(int *)(iVar2 + uVar15 * 4))) {
          uVar6 = uVar15;
          uVar15 = uVar16;
        }
        puVar9[4] = uVar15;
        puVar9[6] = uVar6;
        uVar16 = uVar11;
        if (-(*(int *)(iVar29 + uVar20 * 4) * *(int *)(iVar2 + uVar20 * 4)) <=
            -(*(int *)(iVar29 + uVar11 * 4) * *(int *)(iVar2 + uVar11 * 4))) {
          uVar16 = uVar20;
          uVar20 = uVar11;
        }
        puVar9[5] = uVar16;
        puVar9[9] = uVar20;
        uVar11 = uVar13;
        if (-(*(int *)(iVar29 + uVar13 * 4) * *(int *)(iVar2 + uVar13 * 4)) <=
            -(*(int *)(iVar29 + uVar10 * 4) * *(int *)(iVar2 + uVar10 * 4))) {
          uVar11 = uVar10;
          uVar10 = uVar13;
        }
        puVar9[8] = uVar10;
        puVar9[0xb] = uVar11;
        uVar13 = uVar19;
        if (-(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4)) <
            -(*(int *)(iVar29 + uVar19 * 4) * *(int *)(iVar2 + uVar19 * 4))) {
          uVar13 = uVar8;
          uVar8 = uVar19;
        }
        puVar9[10] = uVar13;
        puVar9[0xc] = uVar8;
        uVar8 = uVar16;
        if (-(*(int *)(iVar29 + uVar12 * 4) * *(int *)(iVar2 + uVar12 * 4)) <=
            -(*(int *)(iVar29 + uVar16 * 4) * *(int *)(iVar2 + uVar16 * 4))) {
          uVar8 = uVar12;
          uVar12 = uVar16;
        }
        *puVar9 = uVar8;
        puVar9[5] = uVar12;
        uVar16 = uVar10;
        if (-(*(int *)(iVar29 + uVar21 * 4) * *(int *)(iVar2 + uVar21 * 4)) <=
            -(*(int *)(iVar29 + uVar10 * 4) * *(int *)(iVar2 + uVar10 * 4))) {
          uVar16 = uVar21;
          uVar21 = uVar10;
        }
        puVar9[3] = uVar16;
        puVar9[8] = uVar21;
        uVar10 = uVar14;
        if (-(*(int *)(iVar29 + uVar15 * 4) * *(int *)(iVar2 + uVar15 * 4)) <=
            -(*(int *)(iVar29 + uVar14 * 4) * *(int *)(iVar2 + uVar14 * 4))) {
          uVar10 = uVar15;
          uVar15 = uVar14;
        }
        puVar9[4] = uVar10;
        puVar9[7] = uVar15;
        uVar14 = uVar11;
        if (-(*(int *)(iVar29 + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4)) <=
            -(*(int *)(iVar29 + uVar11 * 4) * *(int *)(iVar2 + uVar11 * 4))) {
          uVar14 = uVar6;
          uVar6 = uVar11;
        }
        puVar9[6] = uVar14;
        puVar9[0xb] = uVar6;
        uVar11 = uVar13;
        if (-(*(int *)(iVar29 + uVar20 * 4) * *(int *)(iVar2 + uVar20 * 4)) <=
            -(*(int *)(iVar29 + uVar13 * 4) * *(int *)(iVar2 + uVar13 * 4))) {
          uVar11 = uVar20;
          uVar20 = uVar13;
        }
        puVar9[9] = uVar11;
        puVar9[10] = uVar20;
        uVar13 = uVar5;
        if (-(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4)) <=
            -(*(int *)(iVar29 + uVar5 * 4) * *(int *)(iVar2 + uVar5 * 4))) {
          uVar13 = uVar8;
          uVar8 = uVar5;
        }
        *puVar9 = uVar13;
        puVar9[1] = uVar8;
        uVar5 = uVar12;
        if (-(*(int *)(iVar29 + uVar22 * 4) * *(int *)(iVar2 + uVar22 * 4)) <=
            -(*(int *)(iVar29 + uVar12 * 4) * *(int *)(iVar2 + uVar12 * 4))) {
          uVar5 = uVar22;
          uVar22 = uVar12;
        }
        puVar9[2] = uVar5;
        puVar9[5] = uVar22;
        uVar13 = uVar11;
        if (-(*(int *)(iVar29 + uVar14 * 4) * *(int *)(iVar2 + uVar14 * 4)) <=
            -(*(int *)(iVar29 + uVar11 * 4) * *(int *)(iVar2 + uVar11 * 4))) {
          uVar13 = uVar14;
          uVar14 = uVar11;
        }
        puVar9[6] = uVar13;
        puVar9[9] = uVar14;
        uVar12 = uVar21;
        if (-(*(int *)(iVar29 + uVar15 * 4) * *(int *)(iVar2 + uVar15 * 4)) <=
            -(*(int *)(iVar29 + uVar21 * 4) * *(int *)(iVar2 + uVar21 * 4))) {
          uVar12 = uVar15;
          uVar15 = uVar21;
        }
        puVar9[7] = uVar12;
        puVar9[8] = uVar15;
        uVar21 = uVar6;
        if (-(*(int *)(iVar29 + uVar20 * 4) * *(int *)(iVar2 + uVar20 * 4)) <=
            -(*(int *)(iVar29 + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4))) {
          uVar21 = uVar20;
          uVar20 = uVar6;
        }
        puVar9[10] = uVar21;
        puVar9[0xb] = uVar20;
        uVar6 = uVar8;
        if (-(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4)) <=
            -(*(int *)(iVar29 + uVar16 * 4) * *(int *)(iVar2 + uVar16 * 4))) {
          uVar6 = uVar16;
          uVar16 = uVar8;
        }
        puVar9[1] = uVar16;
        puVar9[3] = uVar6;
        uVar8 = uVar10;
        if (-(*(int *)(iVar29 + uVar5 * 4) * *(int *)(iVar2 + uVar5 * 4)) <=
            -(*(int *)(iVar29 + uVar10 * 4) * *(int *)(iVar2 + uVar10 * 4))) {
          uVar8 = uVar5;
          uVar5 = uVar10;
        }
        puVar9[2] = uVar8;
        puVar9[4] = uVar5;
        uVar10 = uVar13;
        if (-(*(int *)(iVar29 + uVar22 * 4) * *(int *)(iVar2 + uVar22 * 4)) <=
            -(*(int *)(iVar29 + uVar13 * 4) * *(int *)(iVar2 + uVar13 * 4))) {
          uVar10 = uVar22;
          uVar22 = uVar13;
        }
        puVar9[5] = uVar10;
        puVar9[6] = uVar22;
        uVar13 = uVar14;
        if (-(*(int *)(iVar29 + uVar14 * 4) * *(int *)(iVar2 + uVar14 * 4)) <=
            -(*(int *)(iVar29 + uVar21 * 4) * *(int *)(iVar2 + uVar21 * 4))) {
          uVar13 = uVar21;
          uVar21 = uVar14;
        }
        puVar9[9] = uVar21;
        puVar9[10] = uVar13;
        uVar14 = uVar8;
        if (-(*(int *)(iVar29 + uVar16 * 4) * *(int *)(iVar2 + uVar16 * 4)) <=
            -(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4))) {
          uVar14 = uVar16;
          uVar16 = uVar8;
        }
        puVar9[1] = uVar14;
        puVar9[2] = uVar16;
        uVar8 = uVar5;
        if (-(*(int *)(iVar29 + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4)) <=
            -(*(int *)(iVar29 + uVar5 * 4) * *(int *)(iVar2 + uVar5 * 4))) {
          uVar8 = uVar6;
          uVar6 = uVar5;
        }
        puVar9[3] = uVar8;
        puVar9[4] = uVar6;
        uVar5 = uVar12;
        if (-(*(int *)(iVar29 + uVar10 * 4) * *(int *)(iVar2 + uVar10 * 4)) <=
            -(*(int *)(iVar29 + uVar12 * 4) * *(int *)(iVar2 + uVar12 * 4))) {
          uVar5 = uVar10;
          uVar10 = uVar12;
        }
        puVar9[5] = uVar5;
        puVar9[7] = uVar10;
        uVar14 = uVar15;
        if (-(*(int *)(iVar29 + uVar22 * 4) * *(int *)(iVar2 + uVar22 * 4)) <=
            -(*(int *)(iVar29 + uVar15 * 4) * *(int *)(iVar2 + uVar15 * 4))) {
          uVar14 = uVar22;
          uVar22 = uVar15;
        }
        puVar9[6] = uVar14;
        puVar9[8] = uVar22;
        uVar15 = uVar16;
        if (-(*(int *)(iVar29 + uVar16 * 4) * *(int *)(iVar2 + uVar16 * 4)) <=
            -(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4))) {
          uVar15 = uVar8;
          uVar8 = uVar16;
        }
        puVar9[2] = uVar8;
        puVar9[3] = uVar15;
        uVar8 = uVar6;
        if (-(*(int *)(iVar29 + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4)) <=
            -(*(int *)(iVar29 + uVar5 * 4) * *(int *)(iVar2 + uVar5 * 4))) {
          uVar8 = uVar5;
          uVar5 = uVar6;
        }
        puVar9[4] = uVar5;
        puVar9[5] = uVar8;
        uVar6 = uVar10;
        if (-(*(int *)(iVar29 + uVar14 * 4) * *(int *)(iVar2 + uVar14 * 4)) <=
            -(*(int *)(iVar29 + uVar10 * 4) * *(int *)(iVar2 + uVar10 * 4))) {
          uVar6 = uVar14;
          uVar14 = uVar10;
        }
        puVar9[6] = uVar6;
        puVar9[7] = uVar14;
        uVar16 = uVar21;
        if (-(*(int *)(iVar29 + uVar22 * 4) * *(int *)(iVar2 + uVar22 * 4)) <=
            -(*(int *)(iVar29 + uVar21 * 4) * *(int *)(iVar2 + uVar21 * 4))) {
          uVar16 = uVar22;
          uVar22 = uVar21;
        }
        puVar9[8] = uVar16;
        puVar9[9] = uVar22;
        uVar16 = uVar5;
        if (-(*(int *)(iVar29 + uVar15 * 4) * *(int *)(iVar2 + uVar15 * 4)) <=
            -(*(int *)(iVar29 + uVar5 * 4) * *(int *)(iVar2 + uVar5 * 4))) {
          uVar16 = uVar15;
          uVar15 = uVar5;
        }
        puVar9[3] = uVar16;
        puVar9[4] = uVar15;
        uVar5 = uVar6;
        if (-(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4)) <=
            -(*(int *)(iVar29 + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4))) {
          uVar5 = uVar8;
          uVar8 = uVar6;
        }
        puVar9[5] = uVar5;
        puVar9[6] = uVar8;
        uVar6 = 0xd;
      }
      FUN_10019ba0(puVar9,uVar28,uVar6,piVar1);
      if (param_2 < 0x12) {
        return;
      }
      bVar31 = puVar9 == param_1;
      uVar28 = local_94[0];
      puVar9 = puVar24;
    } while (bVar31);
    local_e4 = puVar24 + -1;
    puVar9 = param_1 + (param_2 - 1);
    puVar7 = local_94 + param_2;
    iVar29 = *piVar1;
    iVar2 = piVar1[1];
    local_ec = local_94 + 1;
    local_d8 = param_1;
    do {
      uVar28 = *puVar24;
      uVar8 = uVar28;
      if ((0xff < uVar28) || (uVar8 = *local_d8, 0xff < uVar8)) {
LAB_1001c79b:
        FUN_10136b52(uVar8,0x100,&DAT_1013fb14);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      iVar17 = -(*(int *)(iVar29 + uVar28 * 4) * *(int *)(iVar2 + uVar28 * 4));
      iVar23 = -(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4));
      if (iVar17 < iVar23) {
        uVar8 = uVar28;
      }
      uVar28 = *puVar9;
      *local_ec = uVar8;
      uVar8 = uVar28;
      if ((0xff < uVar28) || (uVar8 = *local_e4, 0xff < uVar8)) goto LAB_1001c79b;
      local_ec = local_ec + 1;
      iVar30 = -(*(int *)(iVar29 + uVar28 * 4) * *(int *)(iVar2 + uVar28 * 4));
      iVar27 = -(*(int *)(iVar29 + uVar8 * 4) * *(int *)(iVar2 + uVar8 * 4));
      if (iVar30 < iVar27) {
        uVar28 = uVar8;
      }
      puVar24 = puVar24 + (iVar17 < iVar23);
      local_d8 = local_d8 + (iVar23 <= iVar17);
      puVar9 = puVar9 + -(uint)(iVar27 <= iVar30);
      local_e4 = local_e4 + -(uint)(iVar30 < iVar27);
      *puVar7 = uVar28;
      puVar7 = puVar7 + -1;
      local_98 = local_98 - 1;
    } while (local_98 != 0);
    if ((param_2 & 1) != 0) {
      bVar31 = local_d8 < local_e4 + 1;
      puVar7 = puVar24;
      if (bVar31) {
        puVar7 = local_d8;
      }
      *local_ec = *puVar7;
      local_d8 = local_d8 + bVar31;
      puVar24 = puVar24 + !bVar31;
    }
    if ((local_d8 != local_e4 + 1) || (puVar24 != puVar9 + 1)) {
      FUN_10136ce0();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    memcpy(param_1,local_94 + 1,param_2 << 2);
  }
  return;
}
