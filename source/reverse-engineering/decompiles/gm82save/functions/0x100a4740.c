// rea decompile_all
// name: FUN_100a4740
// address: 0x100a4740
// body: available
// range: 0x100a4740-0x100a4934 inclusive
// range: 0x100a4940-0x100a5457 inclusive
// range: 0x100a5460-0x100a5470 inclusive
// range: 0x100a5480-0x100a5490 inclusive
// range: 0x100a54a0-0x100a5764 inclusive
// range: 0x100a5770-0x100a7b21 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_100a4740(undefined4 *param_1,undefined *param_2,int param_3,undefined *param_4,uint *param_5,
            code param_6)

{
  byte *_Src;
  code cVar1;
  undefined2 uVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *_Str;
  undefined1 auVar8 [16];
  undefined6 uVar9;
  byte bVar10;
  code cVar15;
  byte bVar16;
  ushort uVar11;
  uint uVar12;
  code *pcVar13;
  byte bVar17;
  byte *pbVar14;
  sbyte sVar18;
  code *pcVar19;
  uint uVar20;
  uint uVar21;
  code *pcVar22;
  uint3 uVar25;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  code *pcVar23;
  undefined4 extraout_EDX_02;
  code *extraout_EDX_03;
  code *extraout_EDX_04;
  code *extraout_EDX_05;
  undefined4 extraout_EDX_06;
  uint extraout_EDX_07;
  int iVar24;
  int extraout_EDX_08;
  int extraout_EDX_09;
  undefined3 uVar26;
  code *extraout_EDX_10;
  code *extraout_EDX_11;
  code cVar27;
  uint uVar28;
  code *pcVar29;
  code *pcVar30;
  uint uVar31;
  void *pvVar32;
  code *pcVar33;
  code *pcVar34;
  size_t sVar35;
  code *pcVar36;
  code *pcVar37;
  uint uVar38;
  code *pcVar39;
  undefined4 uVar40;
  bool bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  longlong lVar44;
  void *_Dst;
  code *local_b0;
  code *in_stack_ffffff54;
  code *UNRECOVERED_JUMPTABLE_00;
  code *in_stack_ffffff5c;
  byte *_Src_00;
  code *in_stack_ffffff60;
  code *in_stack_ffffff64;
  code *in_stack_ffffff68;
  code *local_80;
  undefined8 local_7c;
  code *local_74;
  code *local_70;
  undefined4 local_6c;
  undefined3 uStack_68;
  code *local_64;
  code *local_60;
  code *local_5c;
  code *local_58;
  code *local_54;
  code *local_50;
  code *local_4c;
  uint local_48;
  code *local_44;
  code *local_40;
  uint local_3c;
  void *local_38;
  code *local_34;
  int local_30;
  undefined4 *local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_20 [16];

  local_24 = *param_5;
  local_28 = param_5[2];
  local_70 = (code *)0x100a476e;
  local_30 = *(int *)(param_2 + 8);
  sVar35 = local_24 - local_28;
  pvVar32 = (void *)(param_5[1] + local_28);
  local_2c = param_1;
  memset(pvVar32,0,sVar35);
  auVar42 = *(undefined1 (*) [16])(param_2 + 0x10);
  *(undefined **)(param_2 + 0x24) = param_4;
  *(size_t *)(param_2 + 0x30) = sVar35;
  *(int *)(param_2 + 0x20) = param_3;
  *(void **)(param_2 + 0x2c) = pvVar32;
  pcVar34 = *(code **)(param_2 + 0x3c);
  pcVar22 = (code *)(uint)(byte)*pcVar34;
  if (*pcVar34 == (code)0xc) {
    pcVar22 = (code *)0xd;
    *pcVar34 = (code)0xd;
  }
  pcVar37 = pcVar34 + 0x48;
  pcVar34[4] = param_6;
  *(int *)(pcVar34 + 0x38) = param_3;
  *(undefined **)(pcVar34 + 0x3c) = param_4 + param_3;
  *(void **)(pcVar34 + 0x48) = pvVar32;
  *(size_t *)(pcVar34 + 0x4c) = sVar35;
  *(int *)(pcVar34 + 0x50) = 0;
  *(undefined **)(pcVar34 + 0x70) = param_4;
  *(size_t *)(pcVar34 + 0x74) = sVar35;
  local_5c = pcVar34 + 0x2a44;
  local_58 = pcVar34 + 0x1574;
  local_54 = pcVar34 + 0xa4;
  local_44 = pcVar34 + 0x3384;
  local_40 = pcVar34 + 0x3604;
  local_50 = pcVar34 + 8;
  local_64 = pcVar34 + 0x41;
  local_34 = pcVar34 + 0x3386;
  pcVar29 = pcVar37;
  pcVar36 = local_64;
  local_4c = (code *)param_2;
  local_38 = pvVar32;
  local_20 = auVar42;
switchD_100a4879_caseD_11:
  pcVar33 = local_44;
  uVar12 = (uint)pcVar22 & 0xff;
  pcVar19 = (code *)0x1;
  uVar26 = (undefined3)((uint)param_4 >> 8);
  pcVar30 = (code *)CONCAT31(uVar26,0x1d);
  uVar25 = (uint3)((uint)pcVar22 >> 8);
  pcVar22 = (code *)CONCAT31(uVar25,0x12);
  pcVar13 = local_70 + (&switchD_100a4879::switchdataD_100a7b24)[uVar12];
  uVar9 = local_7c._2_6_;
  cVar15 = SUB41(in_stack_ffffff54,0);
  param_4 = pcVar30;
  pcVar39 = pcVar34;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(pcVar13) {
  case (code *)0x100a4862:
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a487b:
    pcVar22 = (code *)CONCAT31(uVar25,0xd);
    if (pcVar34[3] != (code)0x0) {
      uVar12 = (uint)CONCAT11(pcVar34[3],pcVar34[0x40]);
      if ((byte)pcVar34[0x40] < 0x10) {
        local_b0 = *(code **)(pcVar34 + 0x3c);
        uVar20 = *(uint *)(pcVar34 + 0x30);
        pcVar36 = *(code **)(pcVar34 + 0x34);
        param_4 = *(undefined **)(pcVar34 + 0x38);
        do {
          if ((code *)param_4 == local_b0) {
            pcVar30 = (code *)0x0;
            pcVar19 = (code *)0x0;
            goto switchD_100a4879_caseD_1d;
          }
          cVar15 = (code)*param_4;
          param_4 = param_4 + 1;
          bVar16 = (byte)uVar12;
          pcVar30 = (code *)((uint)(byte)cVar15 << (bVar16 & 0x1f));
          pcVar29 = pcVar30;
          pcVar22 = (code *)(0 << (bVar16 & 0x1f) | (uint)((byte)cVar15 >> 0x20 - (bVar16 & 0x1f)));
          if ((uVar12 & 0x20) != 0) {
            pcVar29 = (code *)0x0;
            pcVar22 = pcVar30;
          }
          pcVar36 = (code *)((uint)pcVar36 | (uint)pcVar22);
          uVar20 = uVar20 | (uint)pcVar29;
          uVar12 = CONCAT31((int3)(uVar12 >> 8),bVar16 + 8);
          *(undefined **)(pcVar34 + 0x38) = param_4;
          *(code **)(pcVar34 + 0x34) = pcVar36;
          *(uint *)(pcVar34 + 0x30) = uVar20;
          pcVar34[0x40] = (code)(bVar16 + 8);
        } while (bVar16 < 8);
      }
      cVar15 = SUB41(uVar12 >> 8,0);
      if (((uVar12 & 0x200) == 0) ||
         (*(int *)(pcVar34 + 0x30) != 0x8b1f || *(int *)(pcVar34 + 0x34) != 0)) {
        if (*(int *)(pcVar34 + 0x8c) != 0) {
          *(undefined4 *)(*(int *)(pcVar34 + 0x8c) + 0x30) = 0xffffffff;
          cVar15 = pcVar34[3];
        }
        if (((byte)cVar15 & 1) != 0) {
          param_4 = *(undefined **)(pcVar34 + 0x30);
          uVar12 = *(uint *)(pcVar34 + 0x34);
          uVar21 = uVar12 << 0x18 | (uint)param_4 >> 8;
          uVar20 = ((uint)param_4 & 0xff) * 0x100;
          uVar31 = uVar21 + uVar20;
          lVar44 = (ulonglong)uVar31 * 0xbdef7bdf;
          uVar31 = ((uVar12 >> 8) + (uint)CARRY4(uVar21,uVar20)) * -0x42108421 +
                   uVar31 * -0x10842109 + (int)((ulonglong)lVar44 >> 0x20);
          uVar20 = (uint)((uint)lVar44 < 0x21084211);
          uVar21 = uVar31 + 0xf7bdef7c;
          pcVar29 = (code *)(uVar21 - uVar20);
          if (uVar31 < 0x8421084 || uVar21 < uVar20) {
            if (((uint)param_4 & 0xf) != 8) goto LAB_100a6f56;
            pcVar36 = (code *)(uVar12 >> 4);
            *(code **)(pcVar34 + 0x34) = pcVar36;
            *(uint *)(pcVar34 + 0x30) = uVar12 << 0x1c | (uint)param_4 >> 4;
            pcVar34[0x40] = (code)((char)pcVar34[0x40] + -4);
            bVar16 = (byte)((uint)param_4 >> 4) & 0xf;
            cVar27 = (code)(bVar16 + 8);
            cVar15 = pcVar34[2];
            if (pcVar34[2] == (code)0x0) {
              pcVar34[2] = cVar27;
              cVar15 = cVar27;
            }
            if ((7 < bVar16) || ((byte)cVar15 < (byte)cVar27)) {
              *(char **)(pcVar34 + 0x84) = "invalid window size";
              *(int *)(pcVar34 + 0x88) = 0x14;
              goto LAB_100a72ec;
            }
            pcVar22 = (code *)&DAT_0000001b;
            *(int *)(pcVar34 + 0x90) = 1 << (sbyte)cVar27;
            *(int *)(pcVar34 + 0x78) = 0;
            *(int *)(pcVar34 + 0x7c) = 1;
            *(int *)(pcVar34 + 0x34) = 0;
            *(int *)(pcVar34 + 0x30) = 0;
            pcVar34[0x40] = (code)0x0;
            if (((uint)param_4 & 0x2000) == 0) {
              pcVar22 = (code *)&DAT_0000000c;
            }
            goto switchD_100a4879_caseD_11;
          }
        }
        *(char **)(pcVar34 + 0x84) = "incorrect header check";
        *(int *)(pcVar34 + 0x88) = 0x17;
        goto LAB_100a72ec;
      }
      if (pcVar34[2] == (code)0x0) {
        pcVar34[2] = (code)0xf;
      }
      local_7c = CONCAT62(uVar9,0x8b1f);
      uVar12 = FUN_10122090(0,(byte *)&local_7c,2);
      *(uint *)(pcVar34 + 0x7c) = uVar12;
      *(int *)(pcVar34 + 0x34) = 0;
      *(int *)(pcVar34 + 0x30) = 0;
      pcVar34[0x40] = (code)0x0;
      pcVar22 = (code *)CONCAT31((int3)((uint)extraout_EDX >> 8),1);
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a4960:
    do {
      while( true ) {
        uVar12 = *(uint *)(pcVar34 + 0x50);
        pcVar22 = (code *)(*(int *)(pcVar34 + 0x4c) - uVar12);
        if (pcVar22 == (code *)0x0) goto LAB_100a718a;
        uVar20 = *(uint *)(pcVar34 + 0x5c);
        pcVar30 = (code *)(uVar20 - uVar12);
        if (uVar20 < uVar12 || pcVar30 == (code *)0x0) break;
        if (*(code **)(pcVar34 + 0x10) < pcVar30) {
          if (((byte)pcVar34[1] & 4) == 0) {
            FUN_101369c0(&DAT_1015a512,0x55,&PTR_s_C__Users_runneradmin__cargo_regi_1015bde0);
                    /* WARNING: Does not return */
            pcVar34 = (code *)invalidInstructionException();
            (*pcVar34)();
          }
          goto LAB_100a6df9;
        }
        uVar12 = *(uint *)(pcVar34 + 0xc);
        if (0xffffffc0 < uVar12 - 0x40) goto LAB_100a7889;
        pcVar33 = *(code **)(pcVar34 + 0x14);
        pcVar36 = (code *)-((int)pcVar33 - (int)pcVar30);
        if (pcVar30 <= pcVar33) {
          pcVar36 = pcVar30;
        }
        iVar24 = uVar12 - 0x40;
        if (uVar12 < 0x40) {
          iVar24 = 0;
        }
        param_4 = pcVar33 + -(int)pcVar30 + iVar24;
        if (pcVar30 <= pcVar33) {
          param_4 = pcVar33 + -(int)pcVar30;
        }
        if (*(code **)(pcVar34 + 0x58) < pcVar36) {
          pcVar36 = *(code **)(pcVar34 + 0x58);
        }
        if (pcVar22 < pcVar36) {
          pcVar36 = pcVar22;
        }
        FUN_10121ec0((int *)pcVar37,(int *)local_50,(uint)param_4,(uint)(pcVar36 + (int)param_4));
        pcVar30 = pcVar34 + 0x58;
        *(int *)pcVar30 = *(int *)pcVar30 - (int)pcVar36;
        pcVar22 = (code *)CONCAT31((int3)((uint)extraout_EDX_01 >> 8),0x12);
        if (*(int *)pcVar30 == 0) goto switchD_100a4879_caseD_11;
      }
      pcVar36 = *(code **)(pcVar34 + 0x58);
      if (pcVar22 < *(code **)(pcVar34 + 0x58)) {
        pcVar36 = pcVar22;
      }
      FUN_10121bb0((int *)pcVar37,uVar20,(uint)pcVar36);
      pcVar30 = pcVar34 + 0x58;
      *(int *)pcVar30 = *(int *)pcVar30 - (int)pcVar36;
      pcVar22 = (code *)CONCAT31((int3)((uint)extraout_EDX_00 >> 8),0x12);
    } while (*(int *)pcVar30 != 0);
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a49e3:
    in_stack_ffffff64 = *(code **)(pcVar34 + 0x60);
    pcVar22 = (code *)CONCAT31(uVar25,0x17);
    if (in_stack_ffffff64 != (code *)0x0) {
      cVar15 = pcVar34[0x40];
      pcVar22 = (code *)(uint)(byte)cVar15;
      pcVar36 = *(code **)(pcVar34 + 0x30);
      local_b0 = *(code **)(pcVar34 + 0x34);
      if (pcVar22 < in_stack_ffffff64) {
        pcVar29 = *(code **)(pcVar34 + 0x38);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(pcVar34 + 0x3c);
        do {
          in_stack_ffffff54 = pcVar36;
          if (pcVar29 == UNRECOVERED_JUMPTABLE_00) {
            pcVar19 = (code *)0x0;
            pcVar30 = (code *)0x16;
            goto switchD_100a4879_caseD_1d;
          }
          cVar15 = *pcVar29;
          pcVar29 = pcVar29 + 1;
          bVar16 = (byte)pcVar22;
          uVar21 = (uint)(byte)cVar15 << (bVar16 & 0x1f);
          uVar20 = uVar21;
          uVar12 = 0 << (bVar16 & 0x1f) | (uint)((byte)cVar15 >> 0x20 - (bVar16 & 0x1f));
          if (((uint)pcVar22 & 0x20) != 0) {
            uVar20 = 0;
            uVar12 = uVar21;
          }
          cVar15 = (code)(bVar16 + 8);
          pcVar22 = (code *)(uint)(byte)cVar15;
          pcVar36 = (code *)((uint)in_stack_ffffff54 | uVar20);
          local_b0 = (code *)((uint)local_b0 | uVar12);
          *(code **)(pcVar34 + 0x38) = pcVar29;
          *(code **)(pcVar34 + 0x34) = local_b0;
          *(code **)(pcVar34 + 0x30) = pcVar36;
          pcVar34[0x40] = cVar15;
        } while (pcVar22 < in_stack_ffffff64);
      }
      bVar16 = (byte)in_stack_ffffff64;
      pcVar22 = (code *)((uint)local_b0 >> (bVar16 & 0x1f));
      param_4 = pcVar22;
      if (((uint)in_stack_ffffff64 & 0x20) != 0) {
        param_4 = (code *)0x0;
      }
      pcVar29 = (code *)((uint)pcVar36 >> (bVar16 & 0x1f) | (int)local_b0 << 0x20 - (bVar16 & 0x1f))
      ;
      if (((uint)in_stack_ffffff64 & 0x20) != 0) {
        pcVar29 = pcVar22;
      }
      uVar12 = -1 << (bVar16 & 0x1f);
      if (((uint)in_stack_ffffff64 & 0x20) != 0) {
        uVar12 = 0;
      }
      *(uint *)(pcVar34 + 0x5c) = *(int *)(pcVar34 + 0x5c) + (~uVar12 & (uint)pcVar36);
      *(undefined **)(pcVar34 + 0x34) = param_4;
      *(code **)(pcVar34 + 0x30) = pcVar29;
      pcVar34[0x40] = (code)((char)cVar15 - bVar16);
      *(code **)(pcVar34 + 100) = in_stack_ffffff64 + *(int *)(pcVar34 + 100);
      pcVar22 = (code *)0x17;
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a4ac7:
    cVar15 = pcVar34[0x40];
    uVar21 = (uint)(byte)cVar15;
    uVar12 = *(uint *)(pcVar34 + 0x30);
    uVar20 = *(uint *)(pcVar34 + 0x34);
    if ((byte)cVar15 < 0xe) {
      pcVar22 = *(code **)(pcVar34 + 0x38);
      local_b0 = *(code **)(pcVar34 + 0x3c);
      do {
        if (pcVar22 == local_b0) {
          pcVar19 = (code *)0x0;
          pcVar30 = (code *)&DAT_00000018;
          goto switchD_100a4879_caseD_1d;
        }
        cVar15 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        bVar16 = (byte)uVar21;
        uVar28 = (uint)(byte)cVar15 << (bVar16 & 0x1f);
        uVar38 = uVar28;
        uVar31 = 0 << (bVar16 & 0x1f) | (uint)((byte)cVar15 >> 0x20 - (bVar16 & 0x1f));
        if ((uVar21 & 0x20) != 0) {
          uVar38 = 0;
          uVar31 = uVar28;
        }
        cVar15 = (code)(bVar16 + 8);
        uVar20 = uVar20 | uVar31;
        uVar12 = uVar12 | uVar38;
        uVar21 = (uint)CONCAT11(cVar15,cVar15);
        *(code **)(pcVar34 + 0x38) = pcVar22;
        *(uint *)(pcVar34 + 0x34) = uVar20;
        *(uint *)(pcVar34 + 0x30) = uVar12;
        pcVar34[0x40] = cVar15;
      } while (bVar16 < 6);
    }
    else {
      uVar21 = (uint)(byte)cVar15 << 8;
    }
    *(uint *)(pcVar34 + 0x1c) = (uVar12 & 0x1f) + 0x101;
    pcVar36 = (code *)(uVar12 >> 5 & 0x1f);
    *(code **)(pcVar34 + 0x20) = pcVar36 + 1;
    param_4 = (undefined *)(uVar20 << 0x12 | uVar12 >> 0xe);
    *(uint *)(pcVar34 + 0x18) = (uVar12 >> 10 & 0xf) + 4;
    *(uint *)(pcVar34 + 0x34) = uVar20 >> 0xe;
    *(undefined **)(pcVar34 + 0x30) = param_4;
    pcVar34[0x40] = (code)((char)(uVar21 >> 8) + -0xe);
    if ((0x1d < (uVar12 & 0x1f)) || ((code *)0x1d < pcVar36)) {
      *(char **)(pcVar34 + 0x84) = "too many length or distance symbols";
      *(int *)(pcVar34 + 0x88) = 0x24;
      goto LAB_100a72ec;
    }
    pcVar22 = (code *)0x19;
    *(int *)(pcVar34 + 0x24) = 0;
    pcVar29 = pcVar34;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a4b34:
    pcVar22 = *(code **)(pcVar34 + 0x18);
    pcVar36 = *(code **)(pcVar34 + 0x24);
    if (pcVar36 < pcVar22) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(pcVar34 + 0x3c);
      local_80 = (code *)&DAT_00000013;
      if (&DAT_00000013 < pcVar36) {
        local_80 = pcVar36;
      }
      in_stack_ffffff64 = (code *)-(int)pcVar22;
      local_b0 = *(code **)(pcVar34 + 0x38);
      in_stack_ffffff54 = (code *)-(int)local_80;
      cVar15 = pcVar34[0x40];
      pcVar19 = *(code **)(pcVar34 + 0x34);
      pcVar39 = *(code **)(pcVar34 + 0x30);
      pcVar13 = pcVar36;
      do {
        pcVar23 = pcVar13 + 1;
        if ((byte)cVar15 < 3) {
          if (local_b0 == UNRECOVERED_JUMPTABLE_00) {
            pcVar19 = (code *)0x0;
            pcVar30 = (code *)0x19;
            goto switchD_100a4879_caseD_1d;
          }
          cVar27 = *local_b0;
          local_b0 = local_b0 + 1;
          uVar21 = (uint)(byte)cVar27 << ((byte)cVar15 & 0x1f);
          uVar20 = uVar21;
          uVar12 = 0 << ((byte)cVar15 & 0x1f) | (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f))
          ;
          if (((byte)cVar15 & 0x20) != 0) {
            uVar20 = 0;
            uVar12 = uVar21;
          }
          cVar15 = (code)((byte)cVar15 | 8);
          pcVar39 = (code *)((uint)pcVar39 | uVar20);
          pcVar19 = (code *)((uint)pcVar19 | uVar12);
          *(code **)(pcVar34 + 0x38) = local_b0;
          *(code **)(pcVar34 + 0x34) = pcVar19;
          *(code **)(pcVar34 + 0x30) = pcVar39;
          pcVar34[0x40] = cVar15;
        }
        if (in_stack_ffffff54 + (int)pcVar23 == (code *)0x1) {
          FUN_10136b52(local_80,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_1015be40);
                    /* WARNING: Does not return */
          pcVar34 = (code *)invalidInstructionException();
          (*pcVar34)();
        }
        pcVar29 = (code *)((uint)pcVar19 >> 3);
        cVar15 = (code)((char)cVar15 - 3);
        pcVar30 = (code *)((int)pcVar19 << 0x1d | (uint)pcVar39 >> 3);
        *(ushort *)(pcVar34 + (uint)(byte)pcVar13[0x1015be2d] * 2 + 0x3384) = (ushort)pcVar39 & 7;
        *(code **)(pcVar34 + 0x24) = pcVar23;
        *(code **)(pcVar34 + 0x34) = pcVar29;
        *(code **)(pcVar34 + 0x30) = pcVar30;
        pcVar34[0x40] = cVar15;
        pcVar36 = pcVar22;
        pcVar19 = pcVar29;
        pcVar39 = pcVar30;
        pcVar13 = pcVar23;
        in_stack_ffffff60 = pcVar22;
      } while (in_stack_ffffff64 + 1 + (int)pcVar23 != (code *)0x1);
    }
    if (pcVar36 < &DAT_00000013) {
      do {
        pcVar22 = pcVar36 + 0x1015be2d;
        pcVar36 = pcVar36 + 1;
        *(undefined2 *)(local_44 + (uint)(byte)*pcVar22 * 2) = 0;
      } while (pcVar36 != (code *)&DAT_00000013);
      *(int *)(pcVar34 + 0x24) = 0x13;
    }
    FUN_10122a20((undefined4 *)&local_7c,'\0',(ushort *)local_44,0x13,(undefined4 *)local_54,0x534,7
                 ,(int)local_40);
    if ((int)local_7c != 0) {
      *(char **)(pcVar34 + 0x84) = "invalid code lengths set";
      *(int *)(pcVar34 + 0x88) = 0x19;
      goto LAB_100a72ec;
    }
    pcVar22 = (code *)CONCAT31((int3)((uint)extraout_EDX_02 >> 8),0x1a);
    *(code **)(pcVar34 + 0x28) = local_74;
    pcVar34[0x98] = (code)0x1;
    *(code **)(pcVar34 + 0x94) = local_7c._4_4_;
    *(int *)(pcVar34 + 0x24) = 0;
    param_4 = pcVar30;
    pcVar36 = pcVar33;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a4c9b:
    uVar12 = *(uint *)(pcVar34 + 0x30);
    if ((byte)pcVar34[0x40] < 0x20) {
      local_b0 = *(code **)(pcVar34 + 0x3c);
      pcVar22 = *(code **)(pcVar34 + 0x34);
      pcVar36 = *(code **)(pcVar34 + 0x38);
      cVar15 = pcVar34[0x40];
      do {
        if (pcVar36 == local_b0) {
          pcVar19 = (code *)0x0;
          pcVar30 = (code *)&DAT_0000001b;
          goto switchD_100a4879_caseD_1d;
        }
        cVar27 = *pcVar36;
        pcVar36 = pcVar36 + 1;
        pcVar29 = (code *)0x0;
        pcVar13 = (code *)((uint)(byte)cVar27 << ((byte)cVar15 & 0x1f));
        pcVar30 = pcVar13;
        pcVar33 = (code *)(0 << ((byte)cVar15 & 0x1f) |
                          (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f)));
        if (((byte)cVar15 & 0x20) != 0) {
          pcVar30 = (code *)0x0;
          pcVar33 = pcVar13;
        }
        pcVar22 = (code *)((uint)pcVar22 | (uint)pcVar33);
        uVar12 = uVar12 | (uint)pcVar30;
        bVar41 = (byte)cVar15 < 0x18;
        *(code **)(pcVar34 + 0x38) = pcVar36;
        *(code **)(pcVar34 + 0x34) = pcVar22;
        *(uint *)(pcVar34 + 0x30) = uVar12;
        pcVar34[0x40] = (code)((char)cVar15 + 8U);
        cVar15 = (code)((char)cVar15 + 8U);
      } while (bVar41);
    }
    pcVar22 = (code *)CONCAT31((int3)((uint)pcVar22 >> 8),0x1c);
    *(uint *)(pcVar34 + 0x7c) =
         uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    *(int *)(pcVar34 + 0x34) = 0;
    *(int *)(pcVar34 + 0x30) = 0;
    pcVar34[0x40] = (code)0x0;
    param_4 = pcVar30;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a4d1d:
    uVar12 = *(uint *)(pcVar34 + 0x58);
    pcVar22 = (code *)CONCAT31(uVar25,0xc);
    if (uVar12 != 0) {
      local_b0 = *(code **)(pcVar34 + 0x4c);
      pcVar29 = *(code **)(pcVar34 + 0x48);
      pcVar22 = *(code **)(pcVar34 + 0x50);
      param_4 = *(undefined **)(pcVar34 + 0x3c);
      pcVar36 = *(code **)(pcVar34 + 0x38);
      do {
        uVar20 = *(int *)(pcVar34 + 0x4c) - (int)pcVar22;
        if (uVar12 <= (uint)(*(int *)(pcVar34 + 0x4c) - (int)pcVar22)) {
          uVar20 = uVar12;
        }
        uVar12 = (int)param_4 - (int)pcVar36;
        if (uVar20 <= (uint)((int)param_4 - (int)pcVar36)) {
          uVar12 = uVar20;
        }
        if (uVar12 == 0) {
          pcVar19 = (code *)0x0;
          pcVar30 = (code *)0xf;
          goto switchD_100a4879_caseD_1d;
        }
        if (local_b0 < pcVar22) {
          FUN_10136a50((uint)pcVar22,(uint)local_b0,(uint)local_b0,&DAT_1015ba88);
                    /* WARNING: Does not return */
          pcVar34 = (code *)invalidInstructionException();
          (*pcVar34)();
        }
        if ((uint)((int)local_b0 - (int)pcVar22) < uVar12) {
          FUN_10136a50(0,uVar12,(int)local_b0 - (int)pcVar22,&DAT_1015ba78);
                    /* WARNING: Does not return */
          pcVar34 = (code *)invalidInstructionException();
          (*pcVar34)();
        }
        memcpy(pcVar29 + (int)pcVar22,pcVar36,uVar12);
        pcVar22 = pcVar22 + uVar12;
        *(code **)(pcVar34 + 0x50) = pcVar22;
        param_4 = *(undefined **)(pcVar34 + 0x3c);
        pcVar36 = (code *)(*(int *)(pcVar34 + 0x38) + uVar12);
        if (param_4 < (code *)(*(int *)(pcVar34 + 0x38) + uVar12)) {
          pcVar36 = (code *)param_4;
        }
        uVar12 = *(int *)(pcVar34 + 0x58) - uVar12;
        *(code **)(pcVar34 + 0x38) = pcVar36;
        *(uint *)(pcVar34 + 0x58) = uVar12;
      } while (uVar12 != 0);
      pcVar22 = (code *)CONCAT31((int3)((uint)param_4 >> 8),0xc);
      pcVar36 = pcVar34;
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a4da9:
                    /* WARNING: Could not recover jumptable at 0x100a4e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(local_70 + (&UINT_100a7bb0)[(byte)pcVar34[0xa0]]))(pcVar34[0x40]);
    return;
  case (code *)0x100a4e10:
    pcVar22 = *(code **)(pcVar34 + 0x78);
    if (((uint)pcVar22 & 0x400) == 0) {
      pcVar22 = (code *)CONCAT31(uVar25,5);
      if (*(int *)(pcVar34 + 0x8c) != 0) {
        *(undefined4 *)(*(int *)(pcVar34 + 0x8c) + 0x10) = 0;
      }
    }
    else {
      uVar12 = *(uint *)(pcVar34 + 0x30);
      if ((byte)pcVar34[0x40] < 0x10) {
        pcVar36 = *(code **)(pcVar34 + 0x34);
        pcVar33 = *(code **)(pcVar34 + 0x38);
        local_b0 = *(code **)(pcVar34 + 0x3c);
        cVar15 = pcVar34[0x40];
        do {
          if (pcVar33 == local_b0) {
            pcVar19 = (code *)0x0;
            pcVar30 = (code *)&DAT_00000004;
            goto switchD_100a4879_caseD_1d;
          }
          cVar27 = *pcVar33;
          pcVar33 = pcVar33 + 1;
          pcVar13 = (code *)((uint)(byte)cVar27 << ((byte)cVar15 & 0x1f));
          pcVar29 = pcVar13;
          pcVar30 = (code *)(0 << ((byte)cVar15 & 0x1f) |
                            (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f)));
          if (((byte)cVar15 & 0x20) != 0) {
            pcVar29 = (code *)0x0;
            pcVar30 = pcVar13;
          }
          pcVar36 = (code *)((uint)pcVar36 | (uint)pcVar30);
          uVar12 = uVar12 | (uint)pcVar29;
          bVar41 = (byte)cVar15 < 8;
          *(code **)(pcVar34 + 0x38) = pcVar33;
          *(code **)(pcVar34 + 0x34) = pcVar36;
          *(uint *)(pcVar34 + 0x30) = uVar12;
          pcVar34[0x40] = (code)((char)cVar15 + 8U);
          in_stack_ffffff54 = pcVar22;
          cVar15 = (code)((char)cVar15 + 8U);
        } while (bVar41);
      }
      *(uint *)(pcVar34 + 0x58) = uVar12;
      if (*(int *)(pcVar34 + 0x8c) != 0) {
        *(uint *)(*(int *)(pcVar34 + 0x8c) + 0x14) = uVar12;
        pcVar22 = *(code **)(pcVar34 + 0x78);
      }
      if ((((uint)pcVar22 & 0x200) != 0) && (((byte)pcVar34[3] & 4) != 0)) {
        local_7c = CONCAT62(uVar9,*(ushort *)(pcVar34 + 0x30));
        uVar12 = FUN_10122090(*(uint *)(pcVar34 + 0x7c),(byte *)&local_7c,2);
        *(uint *)(pcVar34 + 0x7c) = uVar12;
        uVar12 = extraout_EDX_07;
      }
      *(int *)(pcVar34 + 0x34) = 0;
      *(int *)(pcVar34 + 0x30) = 0;
      pcVar34[0x40] = (code)0x0;
      pcVar22 = (code *)CONCAT31((int3)(uVar12 >> 8),5);
      param_4 = pcVar30;
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a4e3a:
    uVar12 = *(uint *)(pcVar34 + 0x30);
    if ((byte)pcVar34[0x40] < 0x10) {
      local_b0 = *(code **)(pcVar34 + 0x3c);
      pcVar22 = *(code **)(pcVar34 + 0x34);
      pcVar36 = *(code **)(pcVar34 + 0x38);
      cVar15 = pcVar34[0x40];
      do {
        if (pcVar36 == local_b0) {
          pcVar19 = (code *)0x0;
          pcVar30 = (code *)0x1;
          goto switchD_100a4879_caseD_1d;
        }
        cVar27 = *pcVar36;
        pcVar36 = pcVar36 + 1;
        pcVar29 = (code *)0x0;
        pcVar13 = (code *)((uint)(byte)cVar27 << ((byte)cVar15 & 0x1f));
        pcVar30 = pcVar13;
        pcVar33 = (code *)(0 << ((byte)cVar15 & 0x1f) |
                          (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f)));
        if (((byte)cVar15 & 0x20) != 0) {
          pcVar30 = (code *)0x0;
          pcVar33 = pcVar13;
        }
        pcVar22 = (code *)((uint)pcVar22 | (uint)pcVar33);
        uVar12 = uVar12 | (uint)pcVar30;
        bVar41 = (byte)cVar15 < 8;
        *(code **)(pcVar34 + 0x38) = pcVar36;
        *(code **)(pcVar34 + 0x34) = pcVar22;
        *(uint *)(pcVar34 + 0x30) = uVar12;
        pcVar34[0x40] = (code)((char)cVar15 + 8U);
        cVar15 = (code)((char)cVar15 + 8U);
      } while (bVar41);
    }
    *(uint *)(pcVar34 + 0x78) = uVar12;
    if ((char)uVar12 != '\b') {
LAB_100a6f56:
      *(char **)(pcVar34 + 0x84) = "unknown compression method";
      *(int *)(pcVar34 + 0x88) = 0x1b;
      goto LAB_100a72ec;
    }
    if ((uVar12 & 0xe000) != 0) {
      *(char **)(pcVar34 + 0x84) = "unknown header flags set";
      *(int *)(pcVar34 + 0x88) = 0x19;
      goto LAB_100a72ec;
    }
    if (*(uint **)(pcVar34 + 0x8c) != (uint *)0x0) {
      **(uint **)(pcVar34 + 0x8c) = uVar12 >> 8 & 1;
      uVar12 = *(uint *)(pcVar34 + 0x78);
    }
    if (((uVar12 & 0x200) != 0) && (((byte)pcVar34[3] & 4) != 0)) {
      local_7c = CONCAT62(uVar9,*(ushort *)(pcVar34 + 0x30));
      uVar12 = FUN_10122090(*(uint *)(pcVar34 + 0x7c),(byte *)&local_7c,2);
      *(uint *)(pcVar34 + 0x7c) = uVar12;
      pcVar22 = extraout_EDX_03;
    }
    *(int *)(pcVar34 + 0x34) = 0;
    *(int *)(pcVar34 + 0x30) = 0;
    pcVar34[0x40] = (code)0x0;
    pcVar22 = (code *)CONCAT31((int3)((uint)pcVar22 >> 8),2);
    param_4 = pcVar30;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a4f0d:
    pcVar22 = (code *)CONCAT31(uVar25,0xb);
    if (pcVar34[3] != (code)0x0) {
      uVar12 = (uint)CONCAT11(pcVar34[3],pcVar34[0x40]);
      if ((byte)pcVar34[0x40] < 0x20) {
        local_b0 = *(code **)(pcVar34 + 0x3c);
        uVar20 = *(uint *)(pcVar34 + 0x30);
        uVar21 = *(uint *)(pcVar34 + 0x34);
        pcVar30 = *(code **)(pcVar34 + 0x38);
        do {
          if (pcVar30 == local_b0) {
            pcVar19 = (code *)0x0;
            pcVar30 = (code *)&DAT_00000010;
            goto switchD_100a4879_caseD_1d;
          }
          cVar15 = *pcVar30;
          pcVar30 = pcVar30 + 1;
          bVar16 = (byte)uVar12;
          pcVar36 = (code *)((uint)(byte)cVar15 << (bVar16 & 0x1f));
          pcVar29 = pcVar36;
          pcVar22 = (code *)(0 << (bVar16 & 0x1f) | (uint)((byte)cVar15 >> 0x20 - (bVar16 & 0x1f)));
          if ((uVar12 & 0x20) != 0) {
            pcVar29 = (code *)0x0;
            pcVar22 = pcVar36;
          }
          uVar21 = uVar21 | (uint)pcVar22;
          uVar20 = uVar20 | (uint)pcVar29;
          uVar12 = CONCAT31((int3)(uVar12 >> 8),bVar16 + 8);
          *(code **)(pcVar34 + 0x38) = pcVar30;
          *(uint *)(pcVar34 + 0x34) = uVar21;
          *(uint *)(pcVar34 + 0x30) = uVar20;
          pcVar34[0x40] = (code)(bVar16 + 8);
        } while (bVar16 < 0x18);
      }
      pcVar36 = *(code **)(pcVar34 + 0x50);
      iVar24 = *(int *)(pcVar34 + 0x78);
      *(code **)(pcVar34 + 0x54) = pcVar36 + *(int *)(pcVar34 + 0x54);
      if ((uVar12 & 0x400) == 0) {
LAB_100a4fb3:
        uVar12 = *(uint *)(pcVar34 + 0x30);
        if (iVar24 == 0) goto LAB_100a6a23;
      }
      else {
        if (iVar24 != 0) {
          uVar12 = FUN_10122090(*(uint *)(pcVar34 + 0x80),*(byte **)(pcVar34 + 0x48),(uint)pcVar36);
          *(uint *)(pcVar34 + 0x80) = uVar12;
          *(uint *)(pcVar34 + 0x7c) = uVar12;
          iVar24 = *(int *)(pcVar34 + 0x78);
          goto LAB_100a4fb3;
        }
        uVar12 = FUN_10122760(*(uint *)(pcVar34 + 0x7c),*(byte **)(pcVar34 + 0x48),(uint)pcVar36);
        *(uint *)(pcVar34 + 0x7c) = uVar12;
        uVar12 = *(uint *)(pcVar34 + 0x30);
LAB_100a6a23:
        uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
        ;
      }
      *(int *)(pcVar34 + 0x74) = *(int *)(pcVar34 + 0x4c) - *(int *)(pcVar34 + 0x50);
      if ((((byte)pcVar34[3] & 4) != 0) && (uVar12 != *(uint *)(pcVar34 + 0x7c))) {
        *(char **)(pcVar34 + 0x84) = "incorrect data check";
        *(int *)(pcVar34 + 0x88) = 0x15;
        goto LAB_100a72ec;
      }
      *(int *)(pcVar34 + 0x34) = 0;
      *(int *)(pcVar34 + 0x30) = 0;
      pcVar34[0x40] = (code)0x0;
      pcVar22 = (code *)CONCAT31((int3)((uint)(*(int *)(pcVar34 + 0x4c) - *(int *)(pcVar34 + 0x50))
                                       >> 8),0xb);
      param_4 = pcVar30;
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a4fc3:
    if ((byte)pcVar34[0x40] < 0x20) {
      local_b0 = *(code **)(pcVar34 + 0x3c);
      uVar12 = *(uint *)(pcVar34 + 0x30);
      pcVar22 = *(code **)(pcVar34 + 0x34);
      pcVar33 = *(code **)(pcVar34 + 0x38);
      cVar15 = pcVar34[0x40];
      do {
        if (pcVar33 == local_b0) {
          pcVar19 = (code *)0x0;
          pcVar30 = (code *)0x2;
          goto switchD_100a4879_caseD_1d;
        }
        cVar27 = *pcVar33;
        pcVar33 = pcVar33 + 1;
        pcVar29 = (code *)0x0;
        pcVar13 = (code *)((uint)(byte)cVar27 << ((byte)cVar15 & 0x1f));
        pcVar30 = pcVar13;
        pcVar36 = (code *)(0 << ((byte)cVar15 & 0x1f) |
                          (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f)));
        if (((byte)cVar15 & 0x20) != 0) {
          pcVar30 = (code *)0x0;
          pcVar36 = pcVar13;
        }
        uVar12 = uVar12 | (uint)pcVar30;
        pcVar22 = (code *)((uint)pcVar22 | (uint)pcVar36);
        bVar41 = (byte)cVar15 < 0x18;
        *(code **)(pcVar34 + 0x38) = pcVar33;
        *(code **)(pcVar34 + 0x34) = pcVar22;
        *(uint *)(pcVar34 + 0x30) = uVar12;
        pcVar34[0x40] = (code)((char)cVar15 + 8U);
        pcVar30 = pcVar34;
        cVar15 = (code)((char)cVar15 + 8U);
      } while (bVar41);
    }
    if (*(int *)(pcVar34 + 0x8c) != 0) {
      *(int *)(*(int *)(pcVar34 + 0x8c) + 4) = *(int *)(pcVar34 + 0x30);
    }
    if ((((byte)pcVar34[0x79] & 2) != 0) && (((byte)pcVar34[3] & 4) != 0)) {
      local_7c = CONCAT44(local_7c._4_4_,*(int *)(pcVar34 + 0x30));
      uVar12 = FUN_10122090(*(uint *)(pcVar34 + 0x7c),(byte *)&local_7c,4);
      *(uint *)(pcVar34 + 0x7c) = uVar12;
      pcVar22 = extraout_EDX_04;
    }
    *(int *)(pcVar34 + 0x34) = 0;
    *(int *)(pcVar34 + 0x30) = 0;
    pcVar34[0x40] = (code)0x0;
    pcVar22 = (code *)CONCAT31((int3)((uint)pcVar22 >> 8),3);
    param_4 = pcVar30;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a5073:
    if ((byte)pcVar34[0x40] < 0x10) {
      local_b0 = *(code **)(pcVar34 + 0x3c);
      uVar12 = *(uint *)(pcVar34 + 0x30);
      pcVar22 = *(code **)(pcVar34 + 0x34);
      pcVar33 = *(code **)(pcVar34 + 0x38);
      cVar15 = pcVar34[0x40];
      do {
        if (pcVar33 == local_b0) {
          pcVar19 = (code *)0x0;
          pcVar30 = (code *)0x3;
          goto switchD_100a4879_caseD_1d;
        }
        cVar27 = *pcVar33;
        pcVar33 = pcVar33 + 1;
        pcVar29 = (code *)0x0;
        pcVar13 = (code *)((uint)(byte)cVar27 << ((byte)cVar15 & 0x1f));
        pcVar30 = pcVar13;
        pcVar36 = (code *)(0 << ((byte)cVar15 & 0x1f) |
                          (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f)));
        if (((byte)cVar15 & 0x20) != 0) {
          pcVar30 = (code *)0x0;
          pcVar36 = pcVar13;
        }
        uVar12 = uVar12 | (uint)pcVar30;
        pcVar22 = (code *)((uint)pcVar22 | (uint)pcVar36);
        bVar41 = (byte)cVar15 < 8;
        *(code **)(pcVar34 + 0x38) = pcVar33;
        *(code **)(pcVar34 + 0x34) = pcVar22;
        *(uint *)(pcVar34 + 0x30) = uVar12;
        pcVar34[0x40] = (code)((char)cVar15 + 8U);
        pcVar30 = pcVar34;
        cVar15 = (code)((char)cVar15 + 8U);
      } while (bVar41);
    }
    if (*(int *)(pcVar34 + 0x8c) != 0) {
      *(uint *)(*(int *)(pcVar34 + 0x8c) + 8) = (uint)(byte)pcVar34[0x30];
      *(undefined4 *)(*(int *)(pcVar34 + 0x8c) + 0xc) = *(undefined4 *)(pcVar34 + 0x31);
    }
    if ((((byte)pcVar34[0x79] & 2) != 0) && (((byte)pcVar34[3] & 4) != 0)) {
      local_7c = CONCAT62(uVar9,*(ushort *)(pcVar34 + 0x30));
      uVar12 = FUN_10122090(*(uint *)(pcVar34 + 0x7c),(byte *)&local_7c,2);
      *(uint *)(pcVar34 + 0x7c) = uVar12;
      pcVar22 = extraout_EDX_05;
    }
    *(int *)(pcVar34 + 0x34) = 0;
    *(int *)(pcVar34 + 0x30) = 0;
    pcVar34[0x40] = (code)0x0;
    pcVar22 = (code *)CONCAT31((int3)((uint)pcVar22 >> 8),4);
    param_4 = pcVar30;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a5132:
    uVar12 = *(uint *)(pcVar34 + 0x78);
    if ((uVar12 & 0x1000) != 0) {
      pcVar30 = (code *)CONCAT31(uVar26,7);
      if (*(int *)(pcVar34 + 0x70) != 0) {
        pcVar36 = *(code **)(pcVar34 + 0x38);
        pcVar22 = *(code **)(pcVar34 + 0x3c) + -(int)pcVar36;
        if (pcVar22 == (code *)0x0) {
          pcVar22 = (code *)0x0;
        }
        else {
          iVar24 = 0;
          do {
            if (pcVar36[iVar24] == (code)0x0) {
              pcVar22 = (code *)(iVar24 + 1);
              iVar24 = *(int *)(pcVar34 + 0x8c);
              goto joined_r0x100a6843;
            }
            pcVar29 = pcVar36 + iVar24 + 1;
            iVar24 = iVar24 + 1;
          } while (pcVar29 != *(code **)(pcVar34 + 0x3c));
        }
        iVar24 = *(int *)(pcVar34 + 0x8c);
joined_r0x100a6843:
        if ((iVar24 != 0) && (*(int *)(iVar24 + 0x24) != 0)) {
          uVar12 = *(uint *)(pcVar34 + 0x58);
          pcVar29 = (code *)(*(uint *)(iVar24 + 0x28) - uVar12);
          if (*(uint *)(iVar24 + 0x28) < uVar12) {
            FUN_10136c10("comm out of bounds",0x12,&PTR_s_C__Users_runneradmin__cargo_regi_1015bd50)
            ;
                    /* WARNING: Does not return */
            pcVar34 = (code *)invalidInstructionException();
            (*pcVar34)();
          }
          if (pcVar22 <= pcVar29) {
            pcVar29 = pcVar22;
          }
          memcpy((void *)(*(int *)(iVar24 + 0x24) + uVar12),pcVar36,(size_t)pcVar29);
          *(code **)(pcVar34 + 0x58) = pcVar29 + *(int *)(pcVar34 + 0x58);
          uVar12 = *(uint *)(pcVar34 + 0x78);
          iVar24 = extraout_EDX_08;
        }
        if (((uVar12 & 0x200) != 0) && (((byte)pcVar34[3] & 4) != 0)) {
          uVar12 = FUN_10122090(*(uint *)(pcVar34 + 0x7c),(byte *)pcVar36,(uint)pcVar22);
          *(uint *)(pcVar34 + 0x7c) = uVar12;
          iVar24 = extraout_EDX_09;
          pcVar29 = pcVar34;
        }
        if (pcVar22 == (code *)0x0) {
          uVar12 = *(uint *)(pcVar34 + 0x3c);
          uVar20 = *(uint *)(pcVar34 + 0x38);
          if (uVar12 < *(uint *)(pcVar34 + 0x38)) {
            uVar20 = uVar12;
          }
          *(uint *)(pcVar34 + 0x38) = uVar20;
          pcVar22 = (code *)CONCAT31((int3)((uint)iVar24 >> 8),8);
          param_4 = pcVar30;
          if (uVar12 != uVar20) goto switchD_100a4879_caseD_11;
        }
        else {
          pcVar33 = *(code **)(pcVar34 + 0x3c);
          pcVar13 = pcVar22 + *(int *)(pcVar34 + 0x38);
          if (pcVar33 < pcVar22 + *(int *)(pcVar34 + 0x38)) {
            pcVar13 = pcVar33;
          }
          cVar15 = (pcVar36 + -1)[(int)pcVar22];
          *(code **)(pcVar34 + 0x38) = pcVar13;
          uVar26 = (undefined3)((uint)pcVar34 >> 8);
          pcVar22 = (code *)CONCAT31(uVar26,8);
          param_4 = pcVar30;
          if ((cVar15 == (code)0x0) || (pcVar22 = (code *)CONCAT31(uVar26,8), pcVar33 != pcVar13))
          goto switchD_100a4879_caseD_11;
        }
      }
LAB_100a6f46:
      pcVar19 = (code *)0x0;
      goto switchD_100a4879_caseD_1d;
    }
    pcVar22 = (code *)CONCAT31(uVar25,8);
    if (*(int *)(pcVar34 + 0x8c) != 0) {
      *(undefined4 *)(*(int *)(pcVar34 + 0x8c) + 0x24) = 0;
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a515c:
    cVar15 = pcVar34[1];
    if (((byte)cVar15 & 1) == 0) {
      cVar27 = pcVar34[0x40];
      uVar12 = *(uint *)(pcVar34 + 0x30);
      uVar20 = *(uint *)(pcVar34 + 0x34);
      if (2 < (byte)cVar27) {
        pcVar34[1] = (code)((byte)uVar12 & 1 | (byte)cVar15);
        *(uint *)(pcVar34 + 0x34) = uVar20 >> 1;
        *(uint *)(pcVar34 + 0x30) = uVar20 << 0x1f | uVar12 >> 1;
        pcVar34[0x40] = (code)((char)cVar27 - 1);
                    /* WARNING: Could not recover jumptable at 0x100a5fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(local_70 + (&UINT_100a7c08)[uVar12 >> 1 & 3]))();
        return;
      }
      pbVar14 = *(byte **)(pcVar34 + 0x38);
      if (pbVar14 != *(byte **)(pcVar34 + 0x3c)) {
        bVar16 = *pbVar14;
        *(byte **)(pcVar34 + 0x38) = pbVar14 + 1;
        uVar38 = (uint)bVar16 << ((byte)cVar27 & 0x1f);
        uVar31 = uVar38;
        uVar21 = 0 << ((byte)cVar27 & 0x1f) | (uint)(bVar16 >> 0x20 - ((byte)cVar27 & 0x1f));
        if (((byte)cVar27 & 0x20) != 0) {
          uVar31 = 0;
          uVar21 = uVar38;
        }
        pcVar34[1] = (code)((byte)(uVar12 | uVar31) & 1 | (byte)cVar15);
        *(uint *)(pcVar34 + 0x34) = (uVar20 | uVar21) >> 1;
        uVar12 = (uVar12 | uVar31) >> 1;
        *(uint *)(pcVar34 + 0x30) = (uVar20 | uVar21) << 0x1f | uVar12;
        pcVar34[0x40] = (code)(((byte)cVar27 | 8) - 1);
                    /* WARNING: Could not recover jumptable at 0x100a51d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(local_70 + (&UINT_100a7c08)[uVar12 & 3]))();
        return;
      }
      pcVar19 = (code *)0x0;
      pcVar30 = (code *)0xd;
      goto switchD_100a4879_caseD_1d;
    }
    uVar12 = *(uint *)(pcVar34 + 0x34);
    bVar16 = (byte)pcVar34[0x40] & 7;
    *(uint *)(pcVar34 + 0x30) = *(uint *)(pcVar34 + 0x30) >> bVar16 | uVar12 << 0x20 - bVar16;
    pcVar36 = (code *)(uVar12 >> bVar16);
    pcVar22 = (code *)CONCAT31((int3)(uVar12 >> 8),0x10);
    *(code **)(pcVar34 + 0x34) = pcVar36;
    pcVar34[0x40] = (code)((byte)pcVar34[0x40] & 0xf8);
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a51db:
    if (((byte)pcVar34[1] & 2) == 0) {
      pcVar19 = (code *)0x2;
      pcVar30 = (code *)&DAT_0000001c;
      goto switchD_100a4879_caseD_1d;
    }
    *(int *)(pcVar34 + 0x7c) = 1;
    pcVar22 = (code *)CONCAT31(uVar25,0xc);
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a51f3:
    pcVar22 = *(code **)(pcVar34 + 0x78);
    if (((uint)pcVar22 & 0x400) != 0) {
      pcVar33 = *(code **)(pcVar34 + 0x58);
      pcVar36 = (code *)(*(int *)(pcVar34 + 0x3c) - (int)*(void **)(pcVar34 + 0x38));
      if (pcVar33 <= pcVar36) {
        pcVar36 = pcVar33;
      }
      if (pcVar36 != (code *)0x0) {
        pcVar30 = *(code **)(pcVar34 + 0x8c);
        if ((pcVar30 != (code *)0x0) && (pcVar13 = pcVar30 + 0x10, *(int *)pcVar13 != 0)) {
          pcVar22 = pcVar30 + 0x14;
          pcVar30 = *(code **)(pcVar30 + 0x18);
          pcVar33 = (code *)(*(int *)pcVar22 - (int)pcVar33);
          pcVar29 = pcVar30 + -(int)pcVar33;
          if (pcVar30 < pcVar33) {
            pcVar29 = (code *)0x0;
            pcVar33 = pcVar30;
          }
          if (pcVar36 < pcVar29) {
            pcVar29 = pcVar36;
          }
          memcpy(pcVar33 + *(int *)pcVar13,*(void **)(pcVar34 + 0x38),(size_t)pcVar29);
          pcVar22 = *(code **)(pcVar34 + 0x78);
        }
        if ((((uint)pcVar22 & 0x200) != 0) && (((byte)pcVar34[3] & 4) != 0)) {
          pcVar22 = (code *)(*(int *)(pcVar34 + 0x3c) - (int)*(byte **)(pcVar34 + 0x38));
          if (pcVar22 < pcVar36) {
            FUN_10136a50(0,(uint)pcVar36,(uint)pcVar22,
                         &PTR_s_C__Users_runneradmin__cargo_regi_1015bd08);
                    /* WARNING: Does not return */
            pcVar34 = (code *)invalidInstructionException();
            (*pcVar34)();
          }
          uVar12 = FUN_10122090(*(uint *)(pcVar34 + 0x7c),*(byte **)(pcVar34 + 0x38),(uint)pcVar36);
          *(uint *)(pcVar34 + 0x7c) = uVar12;
        }
        *(int *)(pcVar34 + 0x70) = *(int *)(pcVar34 + 0x70) - (int)pcVar36;
        pcVar22 = *(code **)(pcVar34 + 0x3c);
        pcVar13 = pcVar36 + *(int *)(pcVar34 + 0x38);
        if (pcVar22 < pcVar36 + *(int *)(pcVar34 + 0x38)) {
          pcVar13 = pcVar22;
        }
        pcVar33 = (code *)(*(int *)(pcVar34 + 0x58) - (int)pcVar36);
        *(code **)(pcVar34 + 0x38) = pcVar13;
        *(code **)(pcVar34 + 0x58) = pcVar33;
      }
      if (pcVar33 != (code *)0x0) {
        pcVar19 = (code *)0x0;
        pcVar30 = (code *)0x5;
        goto switchD_100a4879_caseD_1d;
      }
    }
    *(int *)(pcVar34 + 0x58) = 0;
    pcVar22 = (code *)CONCAT31((int3)((uint)pcVar22 >> 8),6);
    param_4 = pcVar30;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a52ba:
    uVar12 = *(uint *)(pcVar34 + 0x78);
    if ((uVar12 & 0x800) != 0) {
      pcVar30 = (code *)CONCAT31(uVar26,6);
      if (*(int *)(pcVar34 + 0x70) != 0) {
        pcVar36 = *(code **)(pcVar34 + 0x38);
        pcVar33 = *(code **)(pcVar34 + 0x3c) + -(int)pcVar36;
        if (pcVar33 == (code *)0x0) {
          pcVar33 = (code *)0x0;
        }
        else {
          iVar24 = 0;
          do {
            if (pcVar36[iVar24] == (code)0x0) {
              pcVar33 = (code *)(iVar24 + 1);
              pcVar22 = *(code **)(pcVar34 + 0x8c);
              goto joined_r0x100a6906;
            }
            pcVar29 = pcVar36 + iVar24 + 1;
            iVar24 = iVar24 + 1;
          } while (pcVar29 != *(code **)(pcVar34 + 0x3c));
        }
        pcVar22 = *(code **)(pcVar34 + 0x8c);
joined_r0x100a6906:
        if ((pcVar22 != (code *)0x0) && (*(int *)(pcVar22 + 0x1c) != 0)) {
          uVar12 = *(uint *)(pcVar34 + 0x58);
          pcVar29 = (code *)(*(uint *)(pcVar22 + 0x20) - uVar12);
          if (*(uint *)(pcVar22 + 0x20) < uVar12) {
            FUN_10136c10("name out of bounds",0x12,&PTR_s_C__Users_runneradmin__cargo_regi_1015bd2c)
            ;
                    /* WARNING: Does not return */
            pcVar34 = (code *)invalidInstructionException();
            (*pcVar34)();
          }
          if (pcVar33 <= pcVar29) {
            pcVar29 = pcVar33;
          }
          memcpy((void *)(*(int *)(pcVar22 + 0x1c) + uVar12),pcVar36,(size_t)pcVar29);
          *(code **)(pcVar34 + 0x58) = pcVar29 + *(int *)(pcVar34 + 0x58);
          uVar12 = *(uint *)(pcVar34 + 0x78);
          pcVar22 = extraout_EDX_10;
        }
        if (((uVar12 & 0x200) != 0) && (((byte)pcVar34[3] & 4) != 0)) {
          uVar12 = FUN_10122090(*(uint *)(pcVar34 + 0x7c),(byte *)pcVar36,(uint)pcVar33);
          *(uint *)(pcVar34 + 0x7c) = uVar12;
          pcVar22 = extraout_EDX_11;
          pcVar29 = pcVar34;
        }
        if (pcVar33 == (code *)0x0) {
          pcVar13 = *(code **)(pcVar34 + 0x3c);
          pcVar19 = *(code **)(pcVar34 + 0x38);
          if (pcVar13 < *(code **)(pcVar34 + 0x38)) {
            pcVar19 = pcVar13;
          }
          *(code **)(pcVar34 + 0x38) = pcVar19;
        }
        else {
          pcVar13 = *(code **)(pcVar34 + 0x3c);
          pcVar19 = pcVar33 + *(int *)(pcVar34 + 0x38);
          if (pcVar13 < pcVar33 + *(int *)(pcVar34 + 0x38)) {
            pcVar19 = pcVar13;
          }
          cVar15 = (pcVar36 + -1)[(int)pcVar33];
          *(code **)(pcVar34 + 0x38) = pcVar19;
          pcVar22 = pcVar34;
          if (cVar15 == (code)0x0) goto LAB_100a69a0;
        }
        if (pcVar13 != pcVar19) goto LAB_100a69a0;
      }
      goto LAB_100a6f46;
    }
    if (*(int *)(pcVar34 + 0x8c) != 0) {
      *(undefined4 *)(*(int *)(pcVar34 + 0x8c) + 0x1c) = 0;
    }
LAB_100a69a0:
    *(int *)(pcVar34 + 0x58) = 0;
    pcVar22 = (code *)CONCAT31((int3)((uint)pcVar22 >> 8),7);
    param_4 = pcVar30;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a52e2:
    pcVar22 = (code *)CONCAT31(uVar25,0xd);
    if (4 < (byte)pcVar34[4]) {
      pcVar19 = (code *)0x0;
      pcVar30 = (code *)&DAT_0000000c;
      goto switchD_100a4879_caseD_1d;
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a52f3:
    pcVar33 = *(code **)(pcVar34 + 0x78);
    if (((uint)pcVar33 & 0x200) != 0) {
      if ((byte)pcVar34[0x40] < 0x10) {
        local_b0 = *(code **)(pcVar34 + 0x3c);
        pcVar22 = *(code **)(pcVar34 + 0x30);
        pcVar36 = *(code **)(pcVar34 + 0x34);
        pcVar30 = *(code **)(pcVar34 + 0x38);
        cVar15 = pcVar34[0x40];
        do {
          if (pcVar30 == local_b0) {
            pcVar19 = (code *)0x0;
            pcVar30 = (code *)&DAT_00000008;
            goto switchD_100a4879_caseD_1d;
          }
          cVar27 = *pcVar30;
          pcVar30 = pcVar30 + 1;
          pcVar19 = (code *)((uint)(byte)cVar27 << ((byte)cVar15 & 0x1f));
          pcVar29 = pcVar19;
          pcVar13 = (code *)(0 << ((byte)cVar15 & 0x1f) |
                            (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f)));
          if (((byte)cVar15 & 0x20) != 0) {
            pcVar29 = (code *)0x0;
            pcVar13 = pcVar19;
          }
          pcVar36 = (code *)((uint)pcVar36 | (uint)pcVar13);
          pcVar22 = (code *)((uint)pcVar22 | (uint)pcVar29);
          bVar41 = (byte)cVar15 < 8;
          *(code **)(pcVar34 + 0x38) = pcVar30;
          *(code **)(pcVar34 + 0x34) = pcVar36;
          *(code **)(pcVar34 + 0x30) = pcVar22;
          pcVar34[0x40] = (code)((char)cVar15 + 8U);
          cVar15 = (code)((char)cVar15 + 8U);
        } while (bVar41);
      }
      if ((((byte)pcVar34[3] & 4) != 0) &&
         ((uint)*(ushort *)(pcVar34 + 0x7c) != *(uint *)(pcVar34 + 0x30))) {
        *(char **)(pcVar34 + 0x84) = "header crc mismatch";
        *(int *)(pcVar34 + 0x88) = 0x14;
        goto LAB_100a72ec;
      }
      *(int *)(pcVar34 + 0x34) = 0;
      *(int *)(pcVar34 + 0x30) = 0;
      pcVar34[0x40] = (code)0x0;
      in_stack_ffffff54 = pcVar33;
    }
    if (*(int *)(pcVar34 + 0x8c) != 0) {
      *(uint *)(*(int *)(pcVar34 + 0x8c) + 0x2c) = (uint)pcVar33 >> 9 & 1;
      *(undefined4 *)(*(int *)(pcVar34 + 0x8c) + 0x30) = 1;
    }
    pcVar22 = (code *)CONCAT31((int3)((uint)pcVar22 >> 8),0xc);
    param_4 = pcVar30;
    if ((((byte)pcVar34[3] & 4) != 0) && (*(int *)(pcVar34 + 0x78) != 0)) {
      *(int *)(pcVar34 + 0x80) = 0;
      *(int *)(pcVar34 + 0x7c) = 0;
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a53d3:
    pcVar36 = *(code **)(pcVar34 + 0x1c);
    pcVar30 = *(code **)(pcVar34 + 0x20);
    pcVar33 = pcVar30 + (int)pcVar36;
    if (*(code **)(pcVar34 + 0x24) < pcVar33) goto LAB_100a53e7;
    goto LAB_100a58e5;
  case (code *)0x100a5460:
    pcVar13 = (code *)0x534;
    pcVar30 = pcVar22;
    pcVar29 = local_54;
    in_stack_ffffff54 = pcVar36;
    break;
  case (code *)0x100a5480:
    pcVar13 = (code *)0x534;
    pcVar30 = pcVar22;
    pcVar29 = local_58;
    in_stack_ffffff54 = pcVar36;
    break;
  case (code *)0x100a54a0:
    pcVar13 = (code *)0x250;
    pcVar30 = pcVar22;
    pcVar29 = local_5c;
    in_stack_ffffff54 = pcVar36;
    break;
  case (code *)0x100a59c4:
    pcVar36 = *(code **)(pcVar34 + 0x34);
    uVar20 = CONCAT11(pcVar34[0x40],pcVar34[0x40]) & 0xffffff07;
    sVar18 = (sbyte)uVar20;
    uVar21 = (uint)pcVar36 >> sVar18;
    uVar12 = *(uint *)(pcVar34 + 0x30) >> sVar18 | (int)pcVar36 << 0x20 - sVar18;
    uVar20 = CONCAT31((int3)(uVar20 >> 8),(char)(uVar20 >> 8)) & 0xfffffff8;
    *(uint *)(pcVar34 + 0x30) = uVar12;
    *(uint *)(pcVar34 + 0x34) = uVar21;
    pcVar34[0x40] = SUB41(uVar20,0);
    if ((byte)(uVar20 >> 8) < 0x20) {
      pcVar36 = *(code **)(pcVar34 + 0x38);
      local_b0 = *(code **)(pcVar34 + 0x3c);
      do {
        if (pcVar36 == local_b0) goto LAB_100a6d7a;
        cVar15 = *pcVar36;
        pcVar36 = pcVar36 + 1;
        pcVar29 = (code *)0x0;
        bVar16 = (byte)uVar20;
        pcVar33 = (code *)((uint)(byte)cVar15 << (bVar16 & 0x1f));
        pcVar30 = pcVar33;
        pcVar22 = (code *)(0 << (bVar16 & 0x1f) | (uint)((byte)cVar15 >> 0x20 - (bVar16 & 0x1f)));
        if ((uVar20 & 0x20) != 0) {
          pcVar30 = (code *)0x0;
          pcVar22 = pcVar33;
        }
        uVar21 = uVar21 | (uint)pcVar22;
        uVar12 = uVar12 | (uint)pcVar30;
        uVar20 = (uint)(byte)(bVar16 + 8);
        *(code **)(pcVar34 + 0x38) = pcVar36;
        *(uint *)(pcVar34 + 0x34) = uVar21;
        *(uint *)(pcVar34 + 0x30) = uVar12;
        pcVar34[0x40] = (code)(bVar16 + 8);
      } while (bVar16 < 0x18);
    }
    if ((ushort)((ushort)(uVar12 >> 0x10) ^ (ushort)uVar12) != 0xffff) {
      *(char **)(pcVar34 + 0x84) = "invalid stored block lengths";
      goto LAB_100a709a;
    }
    pcVar22 = (code *)CONCAT31((int3)(uVar21 >> 8),0xf);
    *(uint *)(pcVar34 + 0x58) = uVar12 & 0xffff;
    *(int *)(pcVar34 + 0x34) = 0;
    *(int *)(pcVar34 + 0x30) = 0;
    pcVar34[0x40] = (code)0x0;
    param_4 = pcVar30;
    if (pcVar34[4] == (code)0x6) {
LAB_100a6d7a:
      pcVar19 = (code *)0x0;
      pcVar30 = (code *)0xe;
      goto switchD_100a4879_caseD_1d;
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a5a79:
    in_stack_ffffff64 = *(code **)(pcVar34 + 0x60);
    if (in_stack_ffffff64 == (code *)0x0) {
      iVar24 = *(int *)(pcVar34 + 0x58);
    }
    else {
      cVar15 = pcVar34[0x40];
      pcVar22 = (code *)(uint)(byte)cVar15;
      pcVar36 = *(code **)(pcVar34 + 0x30);
      local_b0 = *(code **)(pcVar34 + 0x34);
      if (pcVar22 < in_stack_ffffff64) {
        pcVar29 = *(code **)(pcVar34 + 0x38);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(pcVar34 + 0x3c);
        do {
          in_stack_ffffff54 = pcVar36;
          if (pcVar29 == UNRECOVERED_JUMPTABLE_00) {
            pcVar19 = (code *)0x0;
            pcVar30 = (code *)&DAT_00000014;
            goto switchD_100a4879_caseD_1d;
          }
          cVar15 = *pcVar29;
          pcVar29 = pcVar29 + 1;
          bVar16 = (byte)pcVar22;
          uVar21 = (uint)(byte)cVar15 << (bVar16 & 0x1f);
          uVar20 = uVar21;
          uVar12 = 0 << (bVar16 & 0x1f) | (uint)((byte)cVar15 >> 0x20 - (bVar16 & 0x1f));
          if (((uint)pcVar22 & 0x20) != 0) {
            uVar20 = 0;
            uVar12 = uVar21;
          }
          cVar15 = (code)(bVar16 + 8);
          pcVar22 = (code *)(uint)(byte)cVar15;
          pcVar36 = (code *)((uint)in_stack_ffffff54 | uVar20);
          local_b0 = (code *)((uint)local_b0 | uVar12);
          *(code **)(pcVar34 + 0x38) = pcVar29;
          *(code **)(pcVar34 + 0x34) = local_b0;
          *(code **)(pcVar34 + 0x30) = pcVar36;
          pcVar34[0x40] = cVar15;
        } while (pcVar22 < in_stack_ffffff64);
      }
      bVar16 = (byte)in_stack_ffffff64;
      pcVar22 = (code *)((uint)local_b0 >> (bVar16 & 0x1f));
      pcVar30 = pcVar22;
      if (((uint)in_stack_ffffff64 & 0x20) != 0) {
        pcVar30 = (code *)0x0;
      }
      pcVar29 = (code *)((uint)pcVar36 >> (bVar16 & 0x1f) | (int)local_b0 << 0x20 - (bVar16 & 0x1f))
      ;
      if (((uint)in_stack_ffffff64 & 0x20) != 0) {
        pcVar29 = pcVar22;
      }
      uVar12 = -1 << (bVar16 & 0x1f);
      if (((uint)in_stack_ffffff64 & 0x20) != 0) {
        uVar12 = 0;
      }
      pcVar22 = (code *)0x0;
      iVar24 = (~uVar12 & (uint)pcVar36) + *(int *)(pcVar34 + 0x58);
      *(int *)(pcVar34 + 0x58) = iVar24;
      *(code **)(pcVar34 + 0x34) = pcVar30;
      *(code **)(pcVar34 + 0x30) = pcVar29;
      pcVar34[0x40] = (code)((char)cVar15 - bVar16);
      *(code **)(pcVar34 + 100) = in_stack_ffffff64 + *(int *)(pcVar34 + 100);
    }
    *(int *)(pcVar34 + 0x68) = iVar24;
    pcVar22 = (code *)CONCAT31((int3)((uint)pcVar22 >> 8),0x15);
    param_4 = pcVar30;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a5b58:
    *pcVar34 = (code)0x12;
    local_b0 = *(code **)(pcVar34 + 0x3c);
    pcVar36 = *(code **)(pcVar34 + 0x38);
    if (((uint)((int)local_b0 - (int)pcVar36) < 0xf) ||
       ((uint)(*(int *)(pcVar34 + 0x4c) - *(int *)(pcVar34 + 0x50)) < 0x104)) {
      local_74 = *(code **)(pcVar34 + 0x50);
      local_7c = *(ulonglong *)pcVar37;
      *(int *)(pcVar34 + 0x48) = 1;
      *(int *)(pcVar34 + 0x4c) = 0;
      *(int *)(pcVar34 + 0x50) = 0;
      local_6c = *(int *)local_64;
      uStack_68 = (undefined3)((uint)*(undefined4 *)(local_64 + 3) >> 8);
                    /* WARNING: Could not recover jumptable at 0x100a5e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(local_70 + (&UINT_100a7bd0)[(byte)pcVar34[0x98]]))(pcVar34[0x40]);
      return;
    }
    FUN_101211b0(pcVar34);
    pcVar22 = (code *)(uint)(byte)*pcVar34;
    if (*pcVar34 == (code)0x12) {
      local_74 = *(code **)(pcVar34 + 0x50);
      local_7c = *(ulonglong *)pcVar37;
      *(int *)(pcVar34 + 0x48) = 1;
      *(int *)(pcVar34 + 0x4c) = 0;
      *(int *)(pcVar34 + 0x50) = 0;
      local_6c = *(int *)local_64;
      uStack_68 = (undefined3)((uint)*(undefined4 *)(local_64 + 3) >> 8);
                    /* WARNING: Could not recover jumptable at 0x100a5c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(local_70 + (&UINT_100a7bd0)[(byte)pcVar34[0x98]]))(pcVar34[0x40]);
      return;
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a5c08:
    pcVar22 = *(code **)(pcVar34 + 0x4c);
    pcVar30 = *(code **)(pcVar34 + 0x50);
    if (pcVar30 == pcVar22) goto LAB_100a7124;
    if (pcVar22 <= pcVar30) {
LAB_100a7ad3:
      FUN_10136b52(pcVar30,pcVar22,&DAT_1015a480);
                    /* WARNING: Does not return */
      pcVar34 = (code *)invalidInstructionException();
      (*pcVar34)();
    }
    pcVar30[*(int *)(pcVar34 + 0x48)] = pcVar34[0x58];
    *(int *)(pcVar34 + 0x50) = *(int *)(pcVar34 + 0x50) + 1;
    pcVar22 = (code *)0x12;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a5e64:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(pcVar34[0xa0]) {
    case (code)0x0:
      goto switchD_100a6057_caseD_0;
    case (code)0x1:
switchD_100a6057_caseD_1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x2:
      goto switchD_100a6057_caseD_2;
    case (code)0x3:
      goto switchD_100a6057_caseD_3;
    case (code)0x4:
      goto switchD_100a6057_caseD_4;
    case (code)0x5:
      goto switchD_100a6057_caseD_5;
    case (code)0x6:
      goto switchD_100a6057_caseD_6;
    case (code)0x7:
      goto switchD_100a6057_caseD_7;
    case (code)0x8:
      goto switchD_100a6057_caseD_8;
    case (code)0x9:
      goto switchD_100a6057_caseD_9;
    case (code)0xa:
      goto switchD_100a6057_caseD_a;
    case (code)0xb:
      goto switchD_100a6057_caseD_b;
    case (code)0xc:
      goto switchD_100a6057_caseD_c;
    case (code)0xd:
      goto switchD_100a6057_caseD_d;
    default:
      goto switchD_100a6057_caseD_e;
    case (code)0x11:
      goto switchD_100a6057_caseD_11;
    case (code)0x12:
      goto switchD_100a6057_caseD_12;
    case (code)0x13:
      goto switchD_100a6057_caseD_13;
    case (code)0x14:
      goto switchD_100a6057_caseD_14;
    }
  case (code *)0x100a5fdb:
    *(uint *)(pcVar34 + 0x34) = (uint)pcVar22 >> 3;
    *(uint *)(pcVar34 + 0x30) = (uint)pcVar13 >> 3 | (int)pcVar22 << 0x1d;
    pcVar34[0x40] = (code)0xfe;
    pcVar22 = (code *)CONCAT31(uVar25 >> 3,0xe);
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a5ff5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(pcVar34[0xa0]) {
    case (code)0x0:
      goto switchD_100a6057_caseD_0;
    case (code)0x1:
      goto switchD_100a6057_caseD_1;
    case (code)0x2:
      goto switchD_100a6057_caseD_2;
    case (code)0x3:
      goto switchD_100a6057_caseD_3;
    case (code)0x4:
      goto switchD_100a6057_caseD_4;
    case (code)0x5:
      goto switchD_100a6057_caseD_5;
    case (code)0x6:
      goto switchD_100a6057_caseD_6;
    case (code)0x7:
      goto switchD_100a6057_caseD_7;
    case (code)0x8:
      goto switchD_100a6057_caseD_8;
    case (code)0x9:
      goto switchD_100a6057_caseD_9;
    case (code)0xa:
      goto switchD_100a6057_caseD_a;
    case (code)0xb:
      goto switchD_100a6057_caseD_b;
    case (code)0xc:
      goto switchD_100a6057_caseD_c;
    case (code)0xd:
      goto switchD_100a6057_caseD_d;
    default:
      goto switchD_100a6057_caseD_e;
    case (code)0x11:
      goto switchD_100a6057_caseD_11;
    case (code)0x12:
      goto switchD_100a6057_caseD_12;
    case (code)0x13:
      goto switchD_100a6057_caseD_13;
    case (code)0x14:
      goto switchD_100a6057_caseD_14;
    }
  case (code *)0x100a602a:
switchD_100a4879_caseD_2b:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(pcVar34[0xa0]) {
    case (code)0x0:
switchD_100a6057_caseD_0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x1:
      goto switchD_100a6057_caseD_1;
    case (code)0x2:
switchD_100a6057_caseD_2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x3:
switchD_100a6057_caseD_3:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x4:
switchD_100a6057_caseD_4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x5:
switchD_100a6057_caseD_5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x6:
switchD_100a6057_caseD_6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x7:
switchD_100a6057_caseD_7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x8:
switchD_100a6057_caseD_8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x9:
switchD_100a6057_caseD_9:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xa:
switchD_100a6057_caseD_a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xb:
switchD_100a6057_caseD_b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xc:
switchD_100a6057_caseD_c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0xd:
switchD_100a6057_caseD_d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
switchD_100a6057_caseD_e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x11:
switchD_100a6057_caseD_11:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x12:
switchD_100a6057_caseD_12:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x13:
switchD_100a6057_caseD_13:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (code)0x14:
switchD_100a6057_caseD_14:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case (code *)0x100a6037:
    goto switchD_100a4879_caseD_2b;
  case (code *)0x100a6059:
    goto switchD_100a4879_caseD_2f;
  case (code *)0x100a6067:
    goto switchD_100a4879_caseD_2f;
  case (code *)0x100a6075:
switchD_100a4879_caseD_2f:
    iVar24 = 0x12;
LAB_100a608b:
                    /* WARNING: Could not recover jumptable at 0x100a609a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pcVar19 + (&UINT_100a7bf0)[iVar24 + -0x12]))();
    return;
  case (code *)0x100a6085:
    goto switchD_100a4879_caseD_2f;
  case (code *)0x100a609c:
    if (local_74 != local_7c._4_4_) {
      pcVar30 = local_74;
      pcVar22 = local_7c._4_4_;
      if (local_74 < local_7c._4_4_) {
        local_74[(int)local_7c] = pcVar34[0x58];
        local_74 = local_74 + 1;
                    /* WARNING: Could not recover jumptable at 0x100a60db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(local_70 + 0x196f))();
        return;
      }
      goto LAB_100a7ad3;
    }
    *pcVar34 = (code)0x13;
    *(code **)(pcVar34 + 0x50) = local_74;
    *(ulonglong *)pcVar37 = local_7c;
    *(code **)(pcVar34 + 0x34) = pcVar29;
    *(code **)(pcVar34 + 0x30) = pcVar30;
    *(code **)(pcVar34 + 0x38) = pcVar36;
    *(code **)(pcVar34 + 0x3c) = local_b0;
    pcVar34[0x40] = cVar15;
    *(uint *)(local_64 + 3) = CONCAT31(uStack_68,local_6c._3_1_);
    *(int *)local_64 = local_6c;
LAB_100a7124:
    pcVar19 = (code *)0x0;
    pcVar30 = (code *)&DAT_00000013;
    goto switchD_100a4879_caseD_1d;
  case (code *)0x100a60dd:
    if (((uint)((int)local_b0 - (int)pcVar36) < 0xf) ||
       ((uint)((int)local_7c._4_4_ - (int)local_74) < 0x104)) {
      *(int *)(pcVar34 + 100) = 0;
      uVar12 = 0;
      if (((byte)pcVar34[0x94] & 0x20) == 0) {
        uVar12 = -1 << ((byte)pcVar34[0x94] & 0x1f);
      }
      pcVar33 = (code *)((uint)pcVar30 & ~uVar12);
      if (pcVar22 <= pcVar33) {
LAB_100a7a85:
        FUN_10136b52(pcVar33,pcVar22,&PTR_s_C__Users_runneradmin__cargo_regi_1015bc58);
                    /* WARNING: Does not return */
        pcVar34 = (code *)invalidInstructionException();
        (*pcVar34)();
      }
      while( true ) {
        cVar27 = local_80[(int)pcVar33 * 4 + 3];
        uVar20 = (uint)CONCAT11(cVar15,cVar27);
        pcVar22 = pcVar30;
        if ((byte)cVar27 <= (byte)cVar15) break;
        if (pcVar36 == local_b0) goto LAB_100a6dba;
        cVar27 = *pcVar36;
        pcVar36 = pcVar36 + 1;
        uVar31 = (uint)(byte)cVar27 << ((byte)cVar15 & 0x1f);
        uVar21 = uVar31;
        uVar20 = 0 << ((byte)cVar15 & 0x1f) | (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f));
        if (((byte)cVar15 & 0x20) != 0) {
          uVar21 = 0;
          uVar20 = uVar31;
        }
        pcVar29 = (code *)((uint)pcVar29 | uVar20);
        pcVar30 = (code *)((uint)pcVar30 | uVar21);
        cVar15 = (code)((char)cVar15 + 8);
        pcVar33 = (code *)((uint)pcVar30 & ~uVar12);
        pcVar22 = in_stack_ffffff60;
        if (in_stack_ffffff60 <= pcVar33) goto LAB_100a7a85;
      }
      cVar15 = local_80[(int)pcVar33 * 4 + 2];
      local_60 = (code *)(uint)(byte)cVar15;
      pcVar13 = (code *)(uint)*(ushort *)(local_80 + (int)pcVar33 * 4);
      pcVar33 = pcVar30;
      in_stack_ffffff68 = pcVar36;
      if (cVar15 == (code)0x0) {
        uVar12 = 0;
        pcVar22 = (code *)0x0;
      }
      else if ((byte)cVar15 < 0x10) {
        uVar12 = (uint)(byte)cVar27;
        uVar21 = 0;
        if (((char)cVar15 + (char)cVar27 & 0x20U) == 0) {
          uVar21 = -1 << ((char)cVar15 + (char)cVar27 & 0x1fU);
        }
        local_60 = (code *)~uVar21;
        local_48 = uVar12 & 0xf;
        while( true ) {
          pcVar19 = (code *)((uint)(pcVar13 +
                                   (((uint)pcVar22 & (uint)local_60 & 0xffff) >> (sbyte)local_48)) &
                            0xffff);
          local_3c = uVar12;
          if (in_stack_ffffff60 <= pcVar19) {
            FUN_10136b52(pcVar19,in_stack_ffffff60,&PTR_s_C__Users_runneradmin__cargo_regi_1015bc68)
            ;
                    /* WARNING: Does not return */
            pcVar34 = (code *)invalidInstructionException();
            (*pcVar34)();
          }
          cVar15 = SUB41(uVar20 >> 8,0);
          bVar16 = (byte)uVar20;
          if ((byte)((char)local_80[(int)pcVar19 * 4 + 3] + bVar16) <= (byte)cVar15) break;
          if (pcVar36 == local_b0) goto LAB_100a6dba;
          cVar27 = *pcVar36;
          pcVar36 = pcVar36 + 1;
          uVar38 = (uint)(byte)cVar27 << ((byte)cVar15 & 0x1f);
          uVar31 = uVar38;
          uVar21 = 0 << ((byte)cVar15 & 0x1f) | (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f))
          ;
          if ((uVar20 & 0x2000) != 0) {
            uVar31 = 0;
            uVar21 = uVar38;
          }
          uVar20 = (uint)CONCAT11((char)cVar15 + 8,bVar16);
          pcVar29 = (code *)((uint)pcVar29 | uVar21);
          pcVar22 = (code *)((uint)pcVar22 | uVar31);
        }
        uVar21 = (int)pcVar29 << 0x20 - (bVar16 & 0x1f);
        pcVar33 = (code *)((uint)pcVar29 >> (bVar16 & 0x1f));
        pcVar29 = (code *)0x0;
        if ((uVar20 & 0x20) == 0) {
          pcVar29 = pcVar33;
          pcVar33 = (code *)((uint)pcVar22 >> (bVar16 & 0x1f) | uVar21);
        }
        uVar20 = (uint)CONCAT11((char)cVar15 - bVar16,local_80[(int)pcVar19 * 4 + 3]);
        pcVar13 = (code *)(uint)*(ushort *)(local_80 + (int)pcVar19 * 4);
        pcVar22 = (code *)(uint)(byte)local_80[(int)pcVar19 * 4 + 2];
        in_stack_ffffff68 = pcVar36;
      }
      else {
        uVar12 = 0;
        pcVar22 = local_60;
      }
      bVar16 = (byte)uVar20;
      pcVar19 = (code *)((uint)pcVar29 >> (bVar16 & 0x1f));
      pcVar36 = pcVar19;
      param_4 = (code *)((uint)pcVar33 >> (bVar16 & 0x1f) | (int)pcVar29 << 0x20 - (bVar16 & 0x1f));
      if ((uVar20 & 0x20) != 0) {
        pcVar36 = (code *)0x0;
        param_4 = pcVar19;
      }
      cVar15 = (code)((char)(uVar20 >> 8) - bVar16);
      in_stack_ffffff54 = (code *)CONCAT31((int3)((uint)pcVar13 >> 8),cVar15);
      *(uint *)(pcVar34 + 100) = (uVar20 & 0xff) + uVar12;
      *(code **)(pcVar34 + 0x58) = pcVar13;
      if ((byte)pcVar22 == 0) {
        iVar24 = 0x13;
        pcVar19 = local_70;
        goto LAB_100a608b;
      }
      if (((uint)pcVar22 & 0x20) == 0) {
        if (((uint)pcVar22 & 0x40) == 0) {
          *(uint *)(pcVar34 + 0x60) = (uint)((byte)pcVar22 & 0xf);
                    /* WARNING: Could not recover jumptable at 0x100a6329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(local_70 + 0x1bd0))();
          return;
        }
        *pcVar34 = (code)0x1e;
        *(code **)(pcVar34 + 0x50) = local_74;
        *(ulonglong *)pcVar37 = local_7c;
        *(code **)(pcVar34 + 0x34) = pcVar36;
        *(undefined **)(pcVar34 + 0x30) = param_4;
        *(code **)(pcVar34 + 0x38) = in_stack_ffffff68;
        *(code **)(pcVar34 + 0x3c) = local_b0;
        pcVar34[0x40] = cVar15;
        *(uint *)(local_64 + 3) = CONCAT31(uStack_68,local_6c._3_1_);
        *(int *)local_64 = local_6c;
        *(char **)(pcVar34 + 0x84) = "invalid literal/length code";
        *(int *)(pcVar34 + 0x88) = 0x1c;
        goto LAB_100a72ec;
      }
      *(int *)(pcVar34 + 100) = -1;
      *pcVar34 = (code)0xc;
      *(code **)(pcVar34 + 0x50) = local_74;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = local_7c;
      *(ulonglong *)pcVar37 = local_7c;
      *(code **)(pcVar34 + 0x34) = pcVar36;
      *(undefined **)(pcVar34 + 0x30) = param_4;
      *(code **)(pcVar34 + 0x38) = in_stack_ffffff68;
      *(code **)(pcVar34 + 0x3c) = local_b0;
      pcVar34[0x40] = cVar15;
      *(uint *)(local_64 + 3) = CONCAT31(uStack_68,local_6c._3_1_);
      *(int *)local_64 = local_6c;
      pcVar22 = (code *)CONCAT31((int3)((uint)local_64 >> 8),0xc);
      pcVar29 = pcVar36;
      pcVar36 = pcVar13;
      in_stack_ffffff5c = pcVar30;
    }
    else {
      *pcVar34 = (code)0x12;
      *(code **)(pcVar34 + 0x50) = local_74;
      auVar42._8_8_ = 0;
      auVar42._0_8_ = local_7c;
      *(ulonglong *)pcVar37 = local_7c;
      *(code **)(pcVar34 + 0x34) = pcVar29;
      *(code **)(pcVar34 + 0x30) = pcVar30;
      *(code **)(pcVar34 + 0x38) = pcVar36;
      *(code **)(pcVar34 + 0x3c) = local_b0;
      pcVar34[0x40] = cVar15;
      *(uint *)(local_64 + 3) = CONCAT31(uStack_68,local_6c._3_1_);
      *(int *)local_64 = local_6c;
      FUN_101211b0(pcVar34);
      pcVar22 = (code *)(uint)(byte)*pcVar34;
    }
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a633e:
    uVar12 = *(uint *)(pcVar34 + 0x60);
    if (uVar12 == 0) {
      *(int *)(pcVar34 + 0x68) = *(int *)(pcVar34 + 0x58);
      (*(code *)0x1db1)();
      return;
    }
    uVar20 = (uint)in_stack_ffffff54 & 0xff;
    while( true ) {
      cVar15 = SUB41(in_stack_ffffff54,0);
      if (uVar12 <= uVar20) {
        uVar20 = -1 << ((byte)uVar12 & 0x1f);
        if ((uVar12 & 0x20) != 0) {
          uVar20 = 0;
        }
        iVar24 = (~uVar20 & (uint)pcVar30) + *(int *)(pcVar34 + 0x58);
        *(int *)(pcVar34 + 0x58) = iVar24;
        *(uint *)(pcVar34 + 100) = *(int *)(pcVar34 + 100) + uVar12;
        *(int *)(pcVar34 + 0x68) = iVar24;
                    /* WARNING: Could not recover jumptable at 0x100a6421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(local_70 + 0x1db0))((char)cVar15 - (byte)uVar12);
        return;
      }
      if (pcVar36 == local_b0) break;
      cVar27 = *pcVar36;
      pcVar36 = pcVar36 + 1;
      uVar31 = (uint)(byte)cVar27 << ((byte)cVar15 & 0x1f);
      uVar21 = uVar31;
      uVar20 = 0 << ((byte)cVar15 & 0x1f) | (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f));
      if (((uint)in_stack_ffffff54 & 0x20) != 0) {
        uVar21 = 0;
        uVar20 = uVar31;
      }
      pcVar29 = (code *)((uint)pcVar29 | uVar20);
      in_stack_ffffff54 = (code *)(uint)(byte)((char)cVar15 + 8U);
      uVar20 = (uint)(byte)((char)cVar15 + 8U);
      pcVar30 = (code *)((uint)pcVar30 | uVar21);
    }
    *pcVar34 = (code)0x14;
    *(code **)(pcVar34 + 0x50) = local_74;
    *(ulonglong *)pcVar37 = local_7c;
    *(code **)(pcVar34 + 0x30) = pcVar30;
    *(code **)(pcVar34 + 0x34) = pcVar29;
    *(code **)(pcVar34 + 0x38) = local_b0;
    *(code **)(pcVar34 + 0x3c) = local_b0;
    pcVar30 = (code *)&DAT_00000014;
    goto LAB_100a6ef7;
  case (code *)0x100a643c:
    uVar12 = *(uint *)(pcVar34 + 0x60);
    if (uVar12 == 0) {
      iVar24 = 0x17;
      goto LAB_100a608b;
    }
    uVar20 = (uint)in_stack_ffffff54 & 0xff;
    pcVar22 = pcVar30;
    while( true ) {
      cVar15 = SUB41(in_stack_ffffff54,0);
      if (uVar12 <= uVar20) {
        bVar16 = (byte)uVar12;
        local_60 = (code *)((uint)pcVar29 >> (bVar16 & 0x1f));
        if ((uVar12 & 0x20) != 0) {
          local_60 = (code *)0x0;
        }
        uVar20 = -1 << (bVar16 & 0x1f);
        if ((uVar12 & 0x20) != 0) {
          uVar20 = 0;
        }
        *(uint *)(pcVar34 + 0x5c) = *(int *)(pcVar34 + 0x5c) + (~uVar20 & (uint)pcVar22);
        *(uint *)(pcVar34 + 100) = *(int *)(pcVar34 + 100) + uVar12;
                    /* WARNING: Could not recover jumptable at 0x100a6515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(local_70 + 0x1f97))((char)cVar15 - bVar16);
        return;
      }
      if (pcVar36 == local_b0) break;
      cVar27 = *pcVar36;
      pcVar36 = pcVar36 + 1;
      uVar31 = (uint)(byte)cVar27 << ((byte)cVar15 & 0x1f);
      uVar21 = uVar31;
      uVar20 = 0 << ((byte)cVar15 & 0x1f) | (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f));
      if (((uint)in_stack_ffffff54 & 0x20) != 0) {
        uVar21 = 0;
        uVar20 = uVar31;
      }
      pcVar22 = (code *)((uint)pcVar22 | uVar21);
      pcVar29 = (code *)((uint)pcVar29 | uVar20);
      in_stack_ffffff54 = (code *)(uint)(byte)((char)cVar15 + 8U);
      uVar20 = (uint)(byte)((char)cVar15 + 8U);
    }
    *pcVar34 = (code)0x16;
    pcVar30 = (code *)0x16;
    *(code **)(pcVar34 + 0x50) = local_74;
    *(ulonglong *)pcVar37 = local_7c;
    *(code **)(pcVar34 + 0x30) = pcVar22;
    *(code **)(pcVar34 + 0x34) = pcVar29;
    *(code **)(pcVar34 + 0x38) = local_b0;
    *(code **)(pcVar34 + 0x3c) = local_b0;
LAB_100a6ef7:
    pcVar34[0x40] = cVar15;
    goto LAB_100a6f32;
  case (code *)0x100a651e:
    uVar12 = 0;
    if (((byte)pcVar34[0x9c] & 0x20) == 0) {
      uVar12 = -1 << ((byte)pcVar34[0x9c] & 0x1f);
    }
    goto joined_r0x100a6546;
  case (code *)0x100a6705:
    uVar12 = (int)local_7c._4_4_ - (int)local_74;
    if (uVar12 == 0) {
      *pcVar34 = (code)0x17;
      *(code **)(pcVar34 + 0x50) = local_74;
      *(ulonglong *)pcVar37 = local_7c;
      *(code **)(pcVar34 + 0x34) = pcVar29;
      *(code **)(pcVar34 + 0x30) = pcVar30;
      *(code **)(pcVar34 + 0x38) = pcVar36;
      *(code **)(pcVar34 + 0x3c) = local_b0;
      pcVar34[0x40] = cVar15;
      *(uint *)(local_64 + 3) = CONCAT31(uStack_68,local_6c._3_1_);
      *(int *)local_64 = local_6c;
LAB_100a718a:
      pcVar19 = (code *)0x0;
      pcVar30 = (code *)0x17;
      goto switchD_100a4879_caseD_1d;
    }
    pcVar22 = *(code **)(pcVar34 + 0x5c);
    uVar20 = (int)pcVar22 - (int)local_74;
    if (pcVar22 < local_74 || uVar20 == 0) {
      uVar20 = *(uint *)(pcVar34 + 0x58);
      if (uVar12 < *(uint *)(pcVar34 + 0x58)) {
        uVar20 = uVar12;
      }
      FUN_10121bb0((int *)&local_7c,(uint)pcVar22,uVar20);
      pcVar34 = pcVar34 + 0x58;
      *(uint *)pcVar34 = *(int *)pcVar34 - uVar20;
                    /* WARNING: Could not recover jumptable at 0x100a6807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(local_70 + (&UINT_100a7bf0)[(byte)((*(int *)pcVar34 != 0) * '\x05' + 0x12) - 0x12]))();
      return;
    }
    if (uVar20 <= *(uint *)(pcVar34 + 0x10)) {
      uVar21 = *(uint *)(pcVar34 + 0xc);
      if (uVar21 - 0x40 < 0xffffffc1) {
        uVar31 = *(uint *)(pcVar34 + 0x14);
        uVar38 = -(uVar31 - uVar20);
        if (uVar20 <= uVar31) {
          uVar38 = uVar20;
        }
        iVar24 = uVar21 - 0x40;
        if (uVar21 < 0x40) {
          iVar24 = 0;
        }
        uVar21 = iVar24 + (uVar31 - uVar20);
        if (uVar20 <= uVar31) {
          uVar21 = uVar31 - uVar20;
        }
        if (*(uint *)(pcVar34 + 0x58) < uVar38) {
          uVar38 = *(uint *)(pcVar34 + 0x58);
        }
        if (uVar12 < uVar38) {
          uVar38 = uVar12;
        }
        FUN_10121ec0((int *)&local_7c,(int *)local_50,uVar21,uVar38 + uVar21);
        pcVar34 = pcVar34 + 0x58;
        *(uint *)pcVar34 = *(int *)pcVar34 - uVar38;
                    /* WARNING: Could not recover jumptable at 0x100a67c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(local_70 + (&UINT_100a7bf0)[(byte)((*(int *)pcVar34 != 0) * '\x05' + 0x12) - 0x12]))();
        return;
      }
      goto LAB_100a7889;
    }
    if (((byte)pcVar34[1] & 4) == 0) {
      FUN_101369c0(&DAT_1015a512,0x55,&PTR_s_C__Users_runneradmin__cargo_regi_1015bc98);
                    /* WARNING: Does not return */
      pcVar34 = (code *)invalidInstructionException();
      (*pcVar34)();
    }
    *(code **)(pcVar34 + 0x50) = local_74;
    *(ulonglong *)pcVar37 = local_7c;
    *(code **)(pcVar34 + 0x34) = pcVar29;
    *(code **)(pcVar34 + 0x30) = pcVar30;
    *(code **)(pcVar34 + 0x38) = pcVar36;
    *(code **)(pcVar34 + 0x3c) = local_b0;
    pcVar34[0x40] = cVar15;
    *(uint *)(local_64 + 3) = CONCAT31(uStack_68,local_6c._3_1_);
    *(int *)local_64 = local_6c;
    *pcVar34 = (code)0x1e;
LAB_100a6df9:
    *(char **)(pcVar34 + 0x84) = "invalid distance too far back";
    *(int *)(pcVar34 + 0x88) = 0x1e;
    goto LAB_100a72ec;
  case (code *)0x100a69ae:
    goto switchD_100a4879_caseD_3b;
  case (code *)0x100a69c8:
    *(int *)(pcVar34 + 0x94) = 9;
    pcVar34[0x98] = (code)0x0;
    *(int *)(pcVar34 + 0x9c) = 5;
    pcVar34[0xa0] = (code)0x0;
    *(uint *)(pcVar34 + 0x34) = (uint)pcVar22 >> 3;
    *(uint *)(pcVar34 + 0x30) = (uint)pcVar13 >> 3 | (int)pcVar22 << 0x1d;
    pcVar34[0x40] = (code)0xfe;
    cVar15 = pcVar34[4];
    uVar25 = uVar25 >> 3;
    goto joined_r0x100a6a03;
  case (code *)0x100a6af6:
    pcVar22 = (code *)0x534;
    pcVar13 = local_54;
    pcVar30 = pcVar36;
    pcVar39 = pcVar29;
    goto switchD_100a4879_caseD_23;
  case (code *)0x100a6b05:
    pcVar22 = (code *)0x534;
    pcVar13 = local_58;
    pcVar30 = pcVar36;
    pcVar39 = pcVar29;
    goto switchD_100a4879_caseD_23;
  case (code *)0x100a6b14:
    pcVar22 = (code *)0x250;
    pcVar13 = local_5c;
    pcVar30 = pcVar36;
    pcVar39 = pcVar29;
switchD_100a4879_caseD_23:
    pcVar36 = pcVar19;
    if (pcVar22 < (code *)0x2) {
LAB_100a7a96:
      FUN_10136b52(pcVar36,pcVar22,&PTR_s_C__Users_runneradmin__cargo_regi_1015bdd0);
                    /* WARNING: Does not return */
      pcVar34 = (code *)invalidInstructionException();
      (*pcVar34)();
    }
    cVar27 = pcVar13[7];
    if ((byte)cVar15 < (byte)cVar27) {
      if (local_b0 != in_stack_ffffff64) {
        cVar27 = *local_b0;
        *(code **)(pcVar34 + 0x38) = local_b0 + 1;
        uVar21 = (uint)(byte)cVar27 << ((byte)cVar15 & 0x1f);
        uVar20 = uVar21;
        uVar12 = 0 << ((byte)cVar15 & 0x1f) | (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f));
        if (((uint)in_stack_ffffff54 & 0x20) != 0) {
          uVar20 = 0;
          uVar12 = uVar21;
        }
        *(uint *)(pcVar34 + 0x34) = uVar12 | (uint)pcVar39;
        *(uint *)(pcVar34 + 0x30) = uVar20 | (uint)pcVar30;
        pcVar34[0x40] = (code)((char)cVar15 + 8U);
                    /* WARNING: Could not recover jumptable at 0x100a6b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)((char)cVar15 + 8U);
        return;
      }
LAB_100a6d53:
      pcVar19 = (code *)0x0;
      pcVar30 = (code *)0x15;
      goto switchD_100a4879_caseD_1d;
    }
    cVar1 = pcVar13[6];
    uVar11 = *(ushort *)(pcVar13 + 4);
    if ((byte)cVar1 < 0x10) {
      bVar16 = (char)cVar1 + (char)cVar27;
      local_48 = CONCAT11(bVar16,cVar27) & 0xff;
      uVar12 = 0;
      if ((bVar16 & 0x20) == 0) {
        uVar12 = -1 << (bVar16 & 0x1f);
      }
      local_60 = (code *)~uVar12;
                    /* WARNING: Could not recover jumptable at 0x100a6c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(local_70 + (&UINT_100a7bc0)[(int)local_80]))();
      return;
    }
    uVar12 = (uint)CONCAT11(cVar1,cVar15);
LAB_100a6d15:
    pcVar22 = (code *)0x0;
    param_4 = (undefined *)((uint)pcVar39 >> ((byte)cVar27 & 0x1f));
    if (((byte)cVar27 & 0x20) == 0) {
      pcVar22 = (code *)param_4;
      param_4 = (code *)((uint)pcVar30 >> ((byte)cVar27 & 0x1f) |
                        (int)pcVar39 << 0x20 - ((byte)cVar27 & 0x1f));
    }
    uVar25 = (uint3)(uVar12 >> 8);
    *(code **)(pcVar34 + 0x34) = pcVar22;
    *(undefined **)(pcVar34 + 0x30) = param_4;
    pcVar34[0x40] = (code)((char)uVar12 - (char)cVar27);
    if ((uVar12 & 0x4000) != 0) goto LAB_100a72d8;
    *(code **)(pcVar34 + 0x5c) = (code *)(uint)uVar11;
    pcVar22 = (code *)(CONCAT31(uVar25,0x16) & 0xffff0fff);
    *(uint *)(pcVar34 + 0x60) = (uVar25 & 0xffff0f) & 0xff;
    pcVar29 = pcVar34;
    pcVar36 = (code *)(uint)uVar11;
    goto switchD_100a4879_caseD_11;
  case (code *)0x100a6b30:
    goto switchD_100a4879_caseD_23;
  case (code *)0x100a6c23:
    pcVar22 = (code *)0x534;
    pcVar19 = pcVar30;
    pcVar29 = local_54;
    UNRECOVERED_JUMPTABLE_00 = pcVar34;
    goto switchD_100a4879_caseD_27;
  case (code *)0x100a6c34:
    pcVar22 = (code *)0x534;
    pcVar19 = pcVar30;
    pcVar29 = local_58;
    UNRECOVERED_JUMPTABLE_00 = pcVar34;
    goto switchD_100a4879_caseD_27;
  case (code *)0x100a6c45:
    pcVar22 = (code *)0x250;
    pcVar19 = pcVar30;
    pcVar29 = local_5c;
    UNRECOVERED_JUMPTABLE_00 = pcVar34;
switchD_100a4879_caseD_27:
    if (pcVar22 <= pcVar36) goto LAB_100a7a96;
    cVar27 = pcVar29[(int)pcVar36 * 4 + 3];
    bVar10 = (byte)in_stack_ffffff60;
    bVar16 = (byte)((uint)pcVar13 >> 8);
    if (bVar16 < (byte)((char)cVar27 + bVar10)) {
      if (local_b0 != in_stack_ffffff64) {
        cVar15 = *local_b0;
        *(code **)(pcVar34 + 0x38) = local_b0 + 1;
        uVar21 = (uint)(byte)cVar15 << (bVar16 & 0x1f);
        uVar20 = uVar21;
        uVar12 = 0 << (bVar16 & 0x1f) | (uint)((byte)cVar15 >> 0x20 - (bVar16 & 0x1f));
        if (((uint)pcVar13 & 0x2000) != 0) {
          uVar20 = 0;
          uVar12 = uVar21;
        }
        *(uint *)(pcVar34 + 0x34) = uVar12 | (uint)UNRECOVERED_JUMPTABLE_00;
        *(uint *)(pcVar34 + 0x30) = uVar20 | (uint)pcVar19;
        pcVar34[0x40] = (code)(bVar16 + 8);
                    /* WARNING: Could not recover jumptable at 0x100a6ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*local_80)(pcVar19,uVar12 | (uint)UNRECOVERED_JUMPTABLE_00);
        return;
      }
      goto LAB_100a6d53;
    }
    pcVar39 = (code *)0x0;
    uVar11 = *(ushort *)(pcVar29 + (int)pcVar36 * 4);
    pcVar30 = (code *)((uint)UNRECOVERED_JUMPTABLE_00 >> (bVar10 & 0x1f));
    if (((uint)in_stack_ffffff60 & 0x20) == 0) {
      pcVar39 = pcVar30;
      pcVar30 = (code *)((uint)pcVar19 >> (bVar10 & 0x1f) |
                        (int)UNRECOVERED_JUMPTABLE_00 << 0x20 - (bVar10 & 0x1f));
    }
    uVar12 = CONCAT31((int3)(CONCAT22((short)((uint)pcVar22 >> 0x10),
                                      CONCAT11(pcVar29[(int)pcVar36 * 4 + 2],bVar16)) >> 8),
                      bVar16 - bVar10);
    *(uint *)(pcVar34 + 100) = *(int *)(pcVar34 + 100) + local_48;
    in_stack_ffffff54 = pcVar19;
    goto LAB_100a6d15;
  case (code *)0x100a6c60:
    goto switchD_100a4879_caseD_27;
  case (code *)0x100a6e61:
    *(uint *)(pcVar34 + 0x34) = (uint)pcVar22 >> 3;
    *(uint *)(pcVar34 + 0x30) = (uint)pcVar13 >> 3 | (int)pcVar22 << 0x1d;
    pcVar34[0x40] = (code)0xfe;
    *(char **)(pcVar34 + 0x84) = "invalid block type";
    *(int *)(pcVar34 + 0x88) = 0x13;
    goto LAB_100a72ec;
  case (code *)0x100a6f6f:
    if ((pcVar34[3] == (code)0x0) || (*(int *)(pcVar34 + 0x78) == 0))
    goto switchD_100a4879_caseD_1d;
    if (0x1f < (byte)pcVar34[0x40]) goto LAB_100a6fee;
    uVar12 = *(uint *)(pcVar34 + 0x30);
    uVar20 = *(uint *)(pcVar34 + 0x34);
    pbVar14 = *(byte **)(pcVar34 + 0x38);
    cVar15 = pcVar34[0x40];
    goto LAB_100a6fa5;
  case (code *)0x100a7021:
    *(char **)(pcVar34 + 0x84) = "repeated call with bad state";
LAB_100a709a:
    *(int *)(pcVar34 + 0x88) = 0x1d;
    goto LAB_100a72ec;
  case (code *)0x100a702d:
    pcVar19 = (code *)0xfffffffc;
    pcVar30 = (code *)0xa;
    goto switchD_100a4879_caseD_1d;
  case (code *)0x100a7039:
    goto switchD_100a4879_caseD_9;
  case (code *)0x100a72f3:
    goto switchD_100a4879_caseD_1d;
  case (code *)0x100a75ff:
    goto switchD_100a4879_caseD_41;
  case (code *)0x100a767f:
    lVar44 = *(longlong *)(pcVar30 + 8) + (auVar42._8_8_ - local_20._8_8_);
    *(longlong *)pcVar30 = *(longlong *)pcVar30 + (auVar42._0_8_ - local_20._0_8_);
    *(longlong *)(pcVar30 + 8) = lVar44;
    if (pcVar22 == (code *)0x3) {
      uVar40 = 0xffffffff;
      uVar12 = 0;
    }
    else {
      if (pcVar22 == (code *)0x2) goto LAB_100a76bd;
      _Str = *(char **)(pcVar30 + 0x38);
      uVar40 = 0;
      if (_Str == (char *)0x0) {
        pcVar13 = (code *)0x0;
        local_74 = pcVar22;
      }
      else {
        sVar35 = strlen(_Str);
        FUN_10095490((undefined4 *)&local_7c,(int)_Str,sVar35);
        pcVar13 = (code *)0x0;
        if ((byte)local_7c == 0) {
          pcVar13 = local_7c._4_4_;
        }
      }
      uVar12 = (uint)pcVar13 & 0xffffff00;
      pcVar22 = local_74;
    }
    goto LAB_100a761f;
  case (code *)0x100a76a4:
    lVar44 = *(longlong *)(pcVar30 + 8) + (auVar42._8_8_ - local_20._8_8_);
    *(longlong *)pcVar30 = *(longlong *)pcVar30 + (auVar42._0_8_ - local_20._0_8_);
    *(longlong *)(pcVar30 + 8) = lVar44;
LAB_100a76bd:
    uVar40 = 1;
    uVar12 = (uint)UNRECOVERED_JUMPTABLE_00 & 0xffffff00;
    pcVar13 = UNRECOVERED_JUMPTABLE_00;
    goto LAB_100a761f;
  case (code *)0x100a76d3:
    pcVar13 = (code *)0x2;
    goto switchD_100a4879_caseD_41;
  case (code *)0x100a794e:
    FUN_101369c0("internal error: entered unreachable code: the rust API does not use files",0x93,
                 &PTR_s_C__Users_runneradmin__cargo_regi_1015bb48);
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  if (pcVar13 < (code *)0x2) {
    FUN_10136b52(1,pcVar13,&PTR_s_C__Users_runneradmin__cargo_regi_1015bed8);
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  cVar15 = pcVar29[7];
  uVar12 = (uint)(byte)cVar15;
  if ((byte)local_b0._0_1_ < (byte)cVar15) {
    if (pcVar34 != in_stack_ffffff64) {
      uVar21 = (uint)(byte)*pcVar34 << ((byte)local_b0._0_1_ & 0x1f);
      *(code **)(pcVar34 + 0x38) = pcVar34 + 1;
      uVar20 = uVar21;
      uVar12 = 0 << ((byte)local_b0._0_1_ & 0x1f) |
               (uint)((byte)*pcVar34 >> 0x20 - ((byte)local_b0._0_1_ & 0x1f));
      if (((uint)local_b0 & 0x20) != 0) {
        uVar20 = 0;
        uVar12 = uVar21;
      }
      *(uint *)(pcVar34 + 0x30) = uVar20 | (uint)pcVar30;
      *(uint *)(pcVar34 + 0x34) = uVar12 | (uint)in_stack_ffffff54;
      pcVar34[0x40] = (code)((char)local_b0._0_1_ + 8);
                    /* WARNING: Could not recover jumptable at 0x100a5518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(uVar12 | (uint)in_stack_ffffff54);
      return;
    }
LAB_100a6d60:
    pcVar19 = (code *)0x0;
    pcVar30 = (code *)0x1a;
    goto switchD_100a4879_caseD_1d;
  }
  uVar11 = *(ushort *)(pcVar29 + 4);
  if (0xf < uVar11) {
    uVar20 = (uint)local_b0 & 0xff;
    if (uVar11 == 0x10) {
      pcVar22 = pcVar34;
      if (uVar20 < uVar12 + 2) {
        do {
          if (pcVar22 == in_stack_ffffff64) goto LAB_100a6d60;
          cVar27 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          uVar31 = (uint)(byte)cVar27 << ((byte)local_b0._0_1_ & 0x1f);
          uVar21 = uVar31;
          uVar20 = 0 << ((byte)local_b0._0_1_ & 0x1f) |
                   (uint)((byte)cVar27 >> 0x20 - ((byte)local_b0._0_1_ & 0x1f));
          if (((uint)local_b0 & 0x20) != 0) {
            uVar21 = 0;
            uVar20 = uVar31;
          }
          cVar27 = (code)((char)local_b0._0_1_ + 8);
          pcVar30 = (code *)((uint)pcVar30 | uVar21);
          local_b0 = (code *)CONCAT31(local_b0._1_3_,cVar27);
          in_stack_ffffff54 = (code *)((uint)in_stack_ffffff54 | uVar20);
          *(code **)(pcVar34 + 0x38) = pcVar22;
          *(code **)(pcVar34 + 0x34) = in_stack_ffffff54;
          *(code **)(pcVar34 + 0x30) = pcVar30;
          pcVar34[0x40] = cVar27;
        } while ((uint)(byte)cVar27 < uVar12 + 2);
      }
      pcVar22 = (code *)0x0;
      uVar12 = (int)in_stack_ffffff54 << 0x20 - ((byte)cVar15 & 0x1f);
      in_stack_ffffff54 = (code *)((uint)in_stack_ffffff54 >> ((byte)cVar15 & 0x1f));
      if (((byte)cVar15 & 0x20) == 0) {
        pcVar22 = in_stack_ffffff54;
        in_stack_ffffff54 = (code *)((uint)pcVar30 >> ((byte)cVar15 & 0x1f) | uVar12);
      }
      *(code **)(pcVar34 + 0x34) = pcVar22;
      *(code **)(pcVar34 + 0x30) = in_stack_ffffff54;
      pcVar34[0x40] = (code)((char)local_b0._0_1_ - (char)cVar15);
      if (local_80 != (code *)0x0) {
        if ((code *)0x140 < local_80) {
          FUN_10136b52(local_80 + -1,0x140,&PTR_s_C__Users_runneradmin__cargo_regi_1015bf04);
                    /* WARNING: Does not return */
          pcVar34 = (code *)invalidInstructionException();
          (*pcVar34)();
        }
        pcVar29 = (code *)((uint)pcVar22 >> 2);
        uVar12 = (uint)in_stack_ffffff54 & 3;
        uVar2 = *(undefined2 *)(pcVar34 + (int)local_80 * 2 + 0x3382);
        *(code **)(pcVar34 + 0x34) = pcVar29;
        *(uint *)(pcVar34 + 0x30) = (int)pcVar22 << 0x1e | (uint)in_stack_ffffff54 >> 2;
        pcVar34[0x40] = (code)(((char)local_b0._0_1_ - (char)cVar15) + -2);
        if (local_80 + uVar12 + 3 <= local_60) {
          uVar20 = uVar12 + 3;
          if (0x140U - (int)local_80 < uVar20) {
            FUN_10136a50(0,uVar20,0x140U - (int)local_80,
                         &PTR_s_C__Users_runneradmin__cargo_regi_1015bf14);
                    /* WARNING: Does not return */
            pcVar34 = (code *)invalidInstructionException();
            (*pcVar34)();
          }
          iVar24 = uVar12 + 2;
          auVar42._4_4_ = iVar24;
          auVar42._0_4_ = iVar24;
          auVar42._8_4_ = iVar24;
          auVar42._12_4_ = iVar24;
          uVar21 = 0;
          do {
            auVar8 = _DAT_1013ed30;
            auVar43 = auVar42 | _DAT_1013ed30;
            if ((bool)(~(auVar43._0_4_ < (int)(uVar21 ^ (uint)DAT_1013ed30)) & 1)) {
              *(undefined2 *)(local_34 + uVar21 * 2 + (int)local_80 * 2 + -2) = uVar2;
            }
            if ((int)((uVar21 | DAT_1013e900._4_4_) ^ auVar8._4_4_) <= auVar43._4_4_) {
              *(undefined2 *)(local_34 + uVar21 * 2 + (int)local_80 * 2) = uVar2;
            }
            uVar21 = uVar21 + 2;
          } while ((uVar12 + 4) - ((uint)in_stack_ffffff54 & 1) != uVar21);
          pcVar36 = *(code **)(pcVar34 + 0x1c);
          pcVar30 = *(code **)(pcVar34 + 0x20);
          iVar24 = *(int *)(pcVar34 + 0x24);
          pcVar33 = pcVar36 + (int)pcVar30;
          *(code **)(pcVar34 + 0x24) = (code *)(uVar20 + iVar24);
          if ((code *)(uVar20 + iVar24) < pcVar33) goto LAB_100a53e7;
          goto LAB_100a58e5;
        }
      }
    }
    else if (uVar11 == 0x11) {
      pcVar22 = pcVar34;
      if (uVar20 < uVar12 + 3) {
        do {
          if (pcVar22 == in_stack_ffffff64) goto LAB_100a6d60;
          cVar27 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          uVar31 = (uint)(byte)cVar27 << ((byte)local_b0._0_1_ & 0x1f);
          uVar21 = uVar31;
          uVar20 = 0 << ((byte)local_b0._0_1_ & 0x1f) |
                   (uint)((byte)cVar27 >> 0x20 - ((byte)local_b0._0_1_ & 0x1f));
          if (((uint)local_b0 & 0x20) != 0) {
            uVar21 = 0;
            uVar20 = uVar31;
          }
          cVar27 = (code)((char)local_b0._0_1_ + 8);
          pcVar30 = (code *)((uint)pcVar30 | uVar21);
          local_b0 = (code *)CONCAT31(local_b0._1_3_,cVar27);
          pcVar29 = (code *)((uint)in_stack_ffffff54 | uVar20);
          *(code **)(pcVar34 + 0x38) = pcVar22;
          *(code **)(pcVar34 + 0x34) = pcVar29;
          *(code **)(pcVar34 + 0x30) = pcVar30;
          pcVar34[0x40] = cVar27;
          in_stack_ffffff54 = pcVar29;
        } while ((uint)(byte)cVar27 < uVar12 + 3);
      }
      uVar20 = (uint)pcVar30 >> ((byte)cVar15 & 0x1f) |
               (int)in_stack_ffffff54 << 0x20 - ((byte)cVar15 & 0x1f);
      uVar12 = (uint)in_stack_ffffff54 >> ((byte)cVar15 & 0x1f);
      if (((byte)cVar15 & 0x20) != 0) {
        uVar20 = uVar12;
        uVar12 = 0;
      }
      *(uint *)(pcVar34 + 0x34) = uVar12 >> 3;
      *(uint *)(pcVar34 + 0x30) = uVar12 << 0x1d | uVar20 >> 3;
      pcVar34[0x40] = (code)(((char)local_b0._0_1_ - (char)cVar15) + -3);
      pcVar22 = local_80 + (uVar20 & 7) + 3;
      if (pcVar22 <= local_60) {
        if ((code *)0x140 < local_80) {
          FUN_10136a50((uint)local_80,0x140,0x140,&PTR_s_C__Users_runneradmin__cargo_regi_1015bf34);
                    /* WARNING: Does not return */
          pcVar34 = (code *)invalidInstructionException();
          (*pcVar34)();
        }
        uVar12 = (uVar20 & 7) + 3;
        if (0x140U - (int)local_80 < uVar12) {
          FUN_10136a50(0,uVar12,0x140U - (int)local_80,
                       &PTR_s_C__Users_runneradmin__cargo_regi_1015bf24);
                    /* WARNING: Does not return */
          pcVar34 = (code *)invalidInstructionException();
          (*pcVar34)();
        }
LAB_100a58a1:
        memset(local_44 + (int)local_80 * 2,0,uVar12 * 2);
        pcVar36 = in_stack_ffffff5c;
        pcVar30 = in_stack_ffffff68;
        goto LAB_100a58b2;
      }
    }
    else {
      pcVar22 = pcVar34;
      if (uVar20 < uVar12 + 7) {
        do {
          if (pcVar22 == in_stack_ffffff64) goto LAB_100a6d60;
          cVar27 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          uVar31 = (uint)(byte)cVar27 << ((byte)local_b0._0_1_ & 0x1f);
          uVar21 = uVar31;
          uVar20 = 0 << ((byte)local_b0._0_1_ & 0x1f) |
                   (uint)((byte)cVar27 >> 0x20 - ((byte)local_b0._0_1_ & 0x1f));
          if (((uint)local_b0 & 0x20) != 0) {
            uVar21 = 0;
            uVar20 = uVar31;
          }
          cVar27 = (code)((char)local_b0._0_1_ + 8);
          pcVar30 = (code *)((uint)pcVar30 | uVar21);
          local_b0 = (code *)CONCAT31(local_b0._1_3_,cVar27);
          pcVar29 = (code *)((uint)in_stack_ffffff54 | uVar20);
          *(code **)(pcVar34 + 0x38) = pcVar22;
          *(code **)(pcVar34 + 0x34) = pcVar29;
          *(code **)(pcVar34 + 0x30) = pcVar30;
          pcVar34[0x40] = cVar27;
          in_stack_ffffff54 = pcVar29;
        } while ((uint)(byte)cVar27 < uVar12 + 7);
      }
      uVar20 = (uint)pcVar30 >> ((byte)cVar15 & 0x1f) |
               (int)in_stack_ffffff54 << 0x20 - ((byte)cVar15 & 0x1f);
      uVar12 = (uint)in_stack_ffffff54 >> ((byte)cVar15 & 0x1f);
      if (((byte)cVar15 & 0x20) != 0) {
        uVar20 = uVar12;
        uVar12 = 0;
      }
      *(uint *)(pcVar34 + 0x34) = uVar12 >> 7;
      *(uint *)(pcVar34 + 0x30) = uVar12 << 0x19 | uVar20 >> 7;
      pcVar34[0x40] = (code)(((char)local_b0._0_1_ - (char)cVar15) + -7);
      pcVar22 = local_80 + (uVar20 & 0x7f) + 0xb;
      if (pcVar22 <= local_60) {
        if ((code *)0x140 < local_80) {
          FUN_10136a50((uint)local_80,0x140,0x140,&PTR_s_C__Users_runneradmin__cargo_regi_1015bf54);
                    /* WARNING: Does not return */
          pcVar34 = (code *)invalidInstructionException();
          (*pcVar34)();
        }
        uVar12 = (uVar20 & 0x7f) + 0xb;
        if (0x140U - (int)local_80 < uVar12) {
          FUN_10136a50(0,uVar12,0x140U - (int)local_80,
                       &PTR_s_C__Users_runneradmin__cargo_regi_1015bf44);
                    /* WARNING: Does not return */
          pcVar34 = (code *)invalidInstructionException();
          (*pcVar34)();
        }
        goto LAB_100a58a1;
      }
    }
    *(char **)(pcVar34 + 0x84) = "invalid bit length repeat";
    *(int *)(pcVar34 + 0x88) = 0x1a;
    goto LAB_100a72ec;
  }
  uVar20 = (uint)pcVar30 >> ((byte)cVar15 & 0x1f) |
           (int)in_stack_ffffff54 << 0x20 - ((byte)cVar15 & 0x1f);
  uVar12 = (uint)in_stack_ffffff54 >> ((byte)cVar15 & 0x1f);
  if (((byte)cVar15 & 0x20) != 0) {
    uVar20 = uVar12;
    uVar12 = 0;
  }
  *(uint *)(pcVar34 + 0x34) = uVar12;
  *(uint *)(pcVar34 + 0x30) = uVar20;
  pcVar34[0x40] = (code)((char)local_b0._0_1_ - (char)cVar15);
  if ((code *)0x13f < local_80) {
    FUN_10136b52(local_80,0x140,&PTR_s_C__Users_runneradmin__cargo_regi_1015bf64);
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  *(ushort *)(local_44 + (int)local_80 * 2) = uVar11;
  pcVar22 = local_80 + 1;
  pcVar36 = in_stack_ffffff5c;
  pcVar30 = in_stack_ffffff68;
LAB_100a58b2:
  pcVar33 = pcVar36 + (int)pcVar30;
  *(code **)(pcVar34 + 0x24) = pcVar22;
  in_stack_ffffff5c = pcVar36;
  in_stack_ffffff68 = pcVar30;
  if (pcVar22 < pcVar33) {
LAB_100a53e7:
    uVar12 = 0;
    if (((byte)pcVar34[0x94] & 0x20) == 0) {
      uVar12 = -1 << ((byte)pcVar34[0x94] & 0x1f);
    }
    local_60 = pcVar33;
                    /* WARNING: Could not recover jumptable at 0x100a5454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(local_70 + (&UINT_100a7ba0)[(byte)pcVar34[0x98]]))
              (*(int *)(pcVar34 + 0x34),local_70 + (&UINT_100a7ba0)[(byte)pcVar34[0x98]],pcVar36,
               ~uVar12,*(int *)(pcVar34 + 0x3c),pcVar30);
    return;
  }
LAB_100a58e5:
  pcVar30 = local_44;
  if (*(ushort *)(pcVar34 + 0x3584) == 0) {
    *(char **)(pcVar34 + 0x84) = "invalid code -- missing end-of-block";
    *(int *)(pcVar34 + 0x88) = 0x25;
    goto LAB_100a72ec;
  }
  if ((code *)0x140 < pcVar36) {
    FUN_10136a50(0,(uint)pcVar36,0x140,&PTR_s_C__Users_runneradmin__cargo_regi_1015bec8);
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  FUN_10122a20((undefined4 *)&local_7c,'\x01',(ushort *)local_44,(uint)pcVar36,
               (undefined4 *)local_58,0x534,10,(int)local_40);
  if ((int)local_7c != 0) {
    *(char **)(pcVar34 + 0x84) = "invalid literal/lengths set";
    *(int *)(pcVar34 + 0x88) = 0x1c;
    goto LAB_100a72ec;
  }
  pcVar34[0x98] = (code)0x2;
  *(code **)(pcVar34 + 0x94) = local_7c._4_4_;
  *(code **)(pcVar34 + 0x28) = local_74;
  uVar12 = *(uint *)(pcVar34 + 0x1c);
  if (0x140 < uVar12) {
    FUN_10136a50(uVar12,0x140,0x140,&PTR_s_C__Users_runneradmin__cargo_regi_1015be9c);
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  uVar20 = *(uint *)(pcVar34 + 0x20);
  if (0x140 - uVar12 < uVar20) {
    FUN_10136a50(0,uVar20,0x140 - uVar12,&PTR_s_C__Users_runneradmin__cargo_regi_1015be8c);
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  pcVar36 = pcVar30 + uVar12 * 2;
  FUN_10122a20((undefined4 *)&local_7c,'\x02',(ushort *)pcVar36,uVar20,(undefined4 *)local_5c,0x250,
               9,(int)local_40);
  if ((int)local_7c != 0) {
    *(char **)(pcVar34 + 0x84) = "invalid distances set";
    goto LAB_100a72e2;
  }
  *(code **)(pcVar34 + 0x9c) = local_7c._4_4_;
  pcVar34[0xa0] = (code)0x3;
  *(code **)(pcVar34 + 0x28) = local_74 + *(int *)(pcVar34 + 0x28);
  cVar15 = pcVar34[4];
  uVar25 = (uint3)((uint)extraout_EDX_06 >> 8);
joined_r0x100a6a03:
  pcVar22 = (code *)CONCAT31(uVar25,0x11);
  param_4 = pcVar30;
  if (cVar15 == (code)0x6) {
    pcVar19 = (code *)0x0;
    pcVar30 = (code *)&DAT_00000011;
    goto switchD_100a4879_caseD_1d;
  }
  goto switchD_100a4879_caseD_11;
switchD_100a4879_caseD_3b:
  *(uint *)(pcVar34 + 0x34) = (uint)pcVar22 >> 3;
  *(uint *)(pcVar34 + 0x30) = (uint)pcVar13 >> 3 | (int)pcVar22 << 0x1d;
  pcVar34[0x40] = (code)0xfe;
  pcVar22 = (code *)CONCAT31(uVar25 >> 3,0x18);
  goto switchD_100a4879_caseD_11;
joined_r0x100a6546:
  pcVar22 = (code *)((uint)pcVar30 & ~uVar12);
  if (UNRECOVERED_JUMPTABLE_00 <= pcVar22) {
    FUN_10136b52(pcVar22,UNRECOVERED_JUMPTABLE_00,&PTR_s_C__Users_runneradmin__cargo_regi_1015bc78);
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  cVar27 = in_stack_ffffff64[(int)pcVar22 * 4 + 3];
  uVar11 = CONCAT11(cVar15,cVar27);
  if ((byte)cVar27 <= (byte)cVar15) {
    cVar1 = in_stack_ffffff64[(int)pcVar22 * 4 + 2];
    uVar3 = *(ushort *)(in_stack_ffffff64 + (int)pcVar22 * 4);
    if (0xf < (byte)cVar1) goto LAB_100a66b2;
    bVar16 = (char)cVar1 + (char)cVar27;
    local_48 = CONCAT11(bVar16,cVar27) & 0xff;
    uVar11 = CONCAT11(cVar15,cVar27);
    uVar12 = 0;
    if ((bVar16 & 0x20) == 0) {
      uVar12 = -1 << (bVar16 & 0x1f);
    }
    bVar16 = (byte)cVar27 & 0x1f;
    local_60 = (code *)~uVar12;
    goto joined_r0x100a6602;
  }
  if (pcVar36 == local_b0) goto LAB_100a6f00;
  cVar27 = *pcVar36;
  pcVar36 = pcVar36 + 1;
  uVar31 = (uint)(byte)cVar27 << ((byte)cVar15 & 0x1f);
  uVar21 = uVar31;
  uVar20 = 0 << ((byte)cVar15 & 0x1f) | (uint)((byte)cVar27 >> 0x20 - ((byte)cVar15 & 0x1f));
  if (((byte)cVar15 & 0x20) != 0) {
    uVar21 = 0;
    uVar20 = uVar31;
  }
  pcVar29 = (code *)((uint)pcVar29 | uVar20);
  pcVar30 = (code *)((uint)pcVar30 | uVar21);
  cVar15 = (code)((char)cVar15 + 8);
  goto joined_r0x100a6546;
joined_r0x100a6602:
  pcVar22 = (code *)((((uint)pcVar30 & (uint)local_60) >> bVar16) + (uint)uVar3);
  if (UNRECOVERED_JUMPTABLE_00 <= pcVar22) {
    FUN_10136b52(pcVar22,UNRECOVERED_JUMPTABLE_00,&PTR_s_C__Users_runneradmin__cargo_regi_1015bc88);
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  cVar27 = in_stack_ffffff64[(int)pcVar22 * 4 + 3];
  bVar10 = (byte)uVar11;
  bVar17 = (byte)(uVar11 >> 8);
  if ((byte)((char)cVar27 + bVar10) <= bVar17) {
    uVar12 = (int)pcVar29 << 0x20 - (bVar10 & 0x1f);
    pcVar33 = (code *)((uint)pcVar29 >> (bVar10 & 0x1f));
    pcVar29 = pcVar33;
    pcVar30 = (code *)((uint)pcVar30 >> (bVar10 & 0x1f) | uVar12);
    if ((uVar11 & 0x20) != 0) {
      pcVar29 = (code *)0x0;
      pcVar30 = pcVar33;
    }
    cVar15 = (code)(bVar17 - bVar10);
    cVar1 = in_stack_ffffff64[(int)pcVar22 * 4 + 2];
    uVar3 = *(ushort *)(in_stack_ffffff64 + (int)pcVar22 * 4);
    *(uint *)(pcVar34 + 100) = *(int *)(pcVar34 + 100) + local_48;
LAB_100a66b2:
    uVar12 = (uint)pcVar29 >> ((byte)cVar27 & 0x1f);
    uVar20 = 0;
    if (((byte)cVar27 & 0x20) == 0) {
      uVar20 = uVar12;
      uVar12 = (uint)pcVar30 >> ((byte)cVar27 & 0x1f) | (int)pcVar29 << 0x20 - ((byte)cVar27 & 0x1f)
      ;
    }
    if (((byte)cVar1 & 0x40) == 0) {
      *(uint *)(pcVar34 + 0x5c) = (uint)uVar3;
      *(uint *)(pcVar34 + 0x60) = (uint)((byte)cVar1 & 0xf);
                    /* WARNING: Could not recover jumptable at 0x100a6703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(local_70 + 0x1cce))();
      return;
    }
    *(code **)(pcVar34 + 0x50) = local_74;
    *(ulonglong *)pcVar37 = local_7c;
    *(uint *)(pcVar34 + 0x34) = uVar20;
    *(uint *)(pcVar34 + 0x30) = uVar12;
    *(code **)(pcVar34 + 0x38) = pcVar36;
    *(code **)(pcVar34 + 0x3c) = local_b0;
    pcVar34[0x40] = (code)((char)cVar15 - (char)cVar27);
    *(uint *)(local_64 + 3) = CONCAT31(uStack_68,local_6c._3_1_);
    *(int *)local_64 = local_6c;
    *pcVar34 = (code)0x1e;
LAB_100a72d8:
    *(char **)(pcVar34 + 0x84) = "invalid distance code";
LAB_100a72e2:
    *(int *)(pcVar34 + 0x88) = 0x16;
    goto LAB_100a72ec;
  }
  if (pcVar36 != local_b0) goto code_r0x100a6629;
LAB_100a6f00:
  *pcVar34 = (code)0x15;
  *(code **)(pcVar34 + 0x50) = local_74;
  *(ulonglong *)pcVar37 = local_7c;
  *(code **)(pcVar34 + 0x34) = pcVar29;
  *(code **)(pcVar34 + 0x30) = pcVar30;
  *(code **)(pcVar34 + 0x38) = local_b0;
  *(code **)(pcVar34 + 0x3c) = local_b0;
  pcVar34[0x40] = SUB21(uVar11 >> 8,0);
  pcVar30 = (code *)0x15;
LAB_100a6f32:
  *(uint *)(local_64 + 3) = CONCAT31(uStack_68,local_6c._3_1_);
  *(int *)local_64 = local_6c;
  pcVar19 = (code *)0x0;
  goto switchD_100a4879_caseD_1d;
code_r0x100a6629:
  cVar15 = *pcVar36;
  pcVar36 = pcVar36 + 1;
  uVar21 = (uint)(byte)cVar15 << (bVar17 & 0x1f);
  uVar20 = uVar21;
  uVar12 = 0 << (bVar17 & 0x1f) | (uint)((byte)cVar15 >> 0x20 - (bVar17 & 0x1f));
  if ((uVar11 & 0x2000) != 0) {
    uVar20 = 0;
    uVar12 = uVar21;
  }
  uVar11 = CONCAT11(bVar17 + 8,bVar10);
  pcVar29 = (code *)((uint)pcVar29 | uVar12);
  pcVar30 = (code *)((uint)pcVar30 | uVar20);
  goto joined_r0x100a6602;
LAB_100a6dba:
  *pcVar34 = (code)0x12;
  *(code **)(pcVar34 + 0x50) = local_74;
  *(ulonglong *)pcVar37 = local_7c;
  *(code **)(pcVar34 + 0x34) = pcVar29;
  *(code **)(pcVar34 + 0x30) = pcVar22;
  *(code **)(pcVar34 + 0x38) = local_b0;
  *(code **)(pcVar34 + 0x3c) = local_b0;
  pcVar34[0x40] = cVar15;
  pcVar30 = (code *)0x12;
  goto LAB_100a6f32;
switchD_100a4879_caseD_9:
  pcVar19 = (code *)0xfffffffe;
  pcVar30 = (code *)0x9;
  goto switchD_100a4879_caseD_1d;
  while( true ) {
    bVar16 = *pbVar14;
    pbVar14 = pbVar14 + 1;
    uVar38 = (uint)bVar16 << ((byte)cVar15 & 0x1f);
    uVar31 = uVar38;
    uVar21 = 0 << ((byte)cVar15 & 0x1f) | (uint)(bVar16 >> 0x20 - ((byte)cVar15 & 0x1f));
    if (((byte)cVar15 & 0x20) != 0) {
      uVar31 = 0;
      uVar21 = uVar38;
    }
    uVar20 = uVar20 | uVar21;
    uVar12 = uVar12 | uVar31;
    bVar41 = 0x17 < (byte)cVar15;
    *(byte **)(pcVar34 + 0x38) = pbVar14;
    *(uint *)(pcVar34 + 0x34) = uVar20;
    *(uint *)(pcVar34 + 0x30) = uVar12;
    pcVar34[0x40] = (code)((char)cVar15 + 8U);
    cVar15 = (code)((char)cVar15 + 8U);
    if (bVar41) break;
LAB_100a6fa5:
    if (pbVar14 == *(byte **)(pcVar34 + 0x3c)) {
      pcVar30 = (code *)0xb;
      pcVar19 = (code *)0x0;
      goto switchD_100a4879_caseD_1d;
    }
  }
LAB_100a6fee:
  if ((((byte)pcVar34[3] & 4) == 0) || (*(int *)(pcVar34 + 0x54) == *(int *)(pcVar34 + 0x30))) {
    *(int *)(pcVar34 + 0x34) = 0;
    *(int *)(pcVar34 + 0x30) = 0;
    pcVar34[0x40] = (code)0x0;
    pcVar19 = (code *)0x1;
  }
  else {
    *(char **)(pcVar34 + 0x84) = "incorrect length check";
    *(int *)(pcVar34 + 0x88) = 0x17;
LAB_100a72ec:
    pcVar19 = (code *)0xfffffffd;
    pcVar30 = (code *)0x1e;
  }
switchD_100a4879_caseD_1d:
  *pcVar34 = SUB41(pcVar30,0);
  pbVar4 = *(byte **)(local_4c + 0x3c);
  iVar24 = *(int *)(local_4c + 0x20);
  iVar5 = *(int *)(pbVar4 + 0x38);
  pcVar34 = *(code **)(pbVar4 + 0x50);
  iVar6 = *(int *)(pbVar4 + 0x4c);
  pcVar37 = pcVar34 + (*(int *)(pbVar4 + 0x74) - iVar6);
  *(int *)(local_4c + 0x28) = *(int *)(local_4c + 0x28) + (iVar5 - iVar24);
  iVar7 = *(int *)(pbVar4 + 0x54);
  *(code **)(pbVar4 + 0x54) = pcVar37 + iVar7;
  *(code **)(local_4c + 0x34) = pcVar37 + iVar7;
  *(int *)(local_4c + 0x24) = *(int *)(pbVar4 + 0x3c) - iVar5;
  *(int *)(local_4c + 0x20) = iVar5;
  *(int *)(local_4c + 0x30) = iVar6 - (int)pcVar34;
  _Src_00 = *(byte **)(pbVar4 + 0x48);
  pbVar14 = _Src_00 + (int)pcVar34;
  *(byte **)(local_4c + 0x2c) = pbVar14;
  uVar12 = *(uint *)(pbVar4 + 0x7c);
  *(uint *)(local_4c + 0x50) = uVar12;
  uVar20 = *(uint *)(pbVar4 + 0xc);
  if (0xffffffc0 < uVar20 - 0x40) {
LAB_100a7889:
    FUN_10136b40(&DAT_1015ba18);
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  if ((uVar20 < 0x41) &&
     ((pcVar37 == (code *)0x0 ||
      ((uVar21 = (uint)*pbVar4, uVar21 < 0x1f &&
       (((0x40000600U >> (uVar21 & 0x1f) & 1) != 0 ||
        (((0x10800U >> (uVar21 & 0x1f) & 1) != 0 && (pbVar4[4] == 4)))))))))) goto LAB_100a754c;
  if (pcVar34 < pcVar37) {
    FUN_10136a50(0,(uint)pcVar37,(uint)pcVar34,&PTR_s_C__Users_runneradmin__cargo_regi_1015dda8);
                    /* WARNING: Does not return */
    pcVar34 = (code *)invalidInstructionException();
    (*pcVar34)();
  }
  pcVar34 = (code *)(uVar20 - 0x40);
  if (uVar20 < 0x40) {
    pcVar34 = (code *)0x0;
  }
  uVar21 = (int)pcVar37 - (int)pcVar34;
  if (pcVar37 < pcVar34) {
    uVar21 = *(uint *)(pbVar4 + 0x14);
    local_5c = pcVar34 + -uVar21;
    pcVar22 = local_5c;
    if (pcVar37 < local_5c) {
      pcVar22 = pcVar37;
    }
    uVar31 = (int)pcVar37 - (int)pcVar22;
    local_50 = (code *)(_Src_00 + (int)pcVar22);
    local_58 = pcVar34;
    local_54 = pcVar37;
    if ((pbVar4[3] & 4) == 0) {
      if (uVar20 < uVar21) {
        FUN_10136a50(uVar21,uVar20,uVar20,&DAT_1015ba38);
                    /* WARNING: Does not return */
        pcVar34 = (code *)invalidInstructionException();
        (*pcVar34)();
      }
      if ((code *)(uVar20 - uVar21) < pcVar22) {
        FUN_10136a50(0,(uint)pcVar22,uVar20 - uVar21,&DAT_1015ba28);
                    /* WARNING: Does not return */
        pcVar34 = (code *)invalidInstructionException();
        (*pcVar34)();
      }
      _Dst = *(void **)(pbVar4 + 8);
      memcpy((void *)((int)_Dst + uVar21),_Src_00,(size_t)pcVar22);
      pcVar34 = local_50;
      if (local_5c < pcVar37) {
LAB_100a74e0:
        memcpy(_Dst,pcVar34,uVar31);
LAB_100a74e8:
        *(uint *)(pbVar4 + 0x14) = uVar31;
        *(code **)(pbVar4 + 0x10) = local_58;
        goto LAB_100a754c;
      }
    }
    else {
      if (uVar20 < uVar21) {
        FUN_10136a50(uVar21,uVar20,uVar20,&DAT_1015ba58);
                    /* WARNING: Does not return */
        pcVar34 = (code *)invalidInstructionException();
        (*pcVar34)();
      }
      if ((code *)(uVar20 - uVar21) < pcVar22) {
        FUN_10136a50(0,(uint)pcVar22,uVar20 - uVar21,&DAT_1015ba48);
                    /* WARNING: Does not return */
        pcVar34 = (code *)invalidInstructionException();
        (*pcVar34)();
      }
      _Dst = *(void **)(pbVar4 + 8);
      pvVar32 = (void *)((int)_Dst + uVar21);
      if (*(int *)(pbVar4 + 0x78) == 0) {
        memcpy(pvVar32,_Src_00,(size_t)pcVar22);
        uVar12 = FUN_10122760(uVar12,_Src_00,(uint)pcVar22);
        *(uint *)(pbVar4 + 0x7c) = uVar12;
        if (local_5c < pcVar37) {
          memcpy(_Dst,local_50,uVar31);
          uVar12 = FUN_10122760(uVar12,(byte *)local_50,uVar31);
          *(uint *)(pbVar4 + 0x7c) = uVar12;
          goto LAB_100a74e8;
        }
      }
      else {
        uVar12 = FUN_10122090(*(uint *)(pbVar4 + 0x80),_Src_00,(uint)pcVar22);
        *(uint *)(pbVar4 + 0x80) = uVar12;
        memcpy(pvVar32,_Src_00,(size_t)pcVar22);
        pcVar34 = local_50;
        if (local_5c < pcVar37) {
          uVar12 = FUN_10122090(*(uint *)(pbVar4 + 0x80),(byte *)local_50,uVar31);
          *(uint *)(pbVar4 + 0x80) = uVar12;
          goto LAB_100a74e0;
        }
      }
    }
    pcVar34 = (code *)0x0;
    if (pcVar22 + uVar21 != local_58) {
      pcVar34 = pcVar22 + uVar21;
    }
    *(code **)(pbVar4 + 0x14) = pcVar34;
    if (*(code **)(pbVar4 + 0x10) < local_58) {
      *(code **)(pbVar4 + 0x10) = *(code **)(pbVar4 + 0x10) + (int)pcVar22;
    }
    goto LAB_100a754c;
  }
  _Src = _Src_00 + uVar21;
  if ((pbVar4[3] & 4) == 0) {
    pvVar32 = *(void **)(pbVar4 + 8);
LAB_100a7536:
    memcpy(pvVar32,_Src,(size_t)pcVar34);
  }
  else {
    if (*(int *)(pbVar4 + 0x78) != 0) {
      uVar12 = FUN_10122090(*(uint *)(pbVar4 + 0x80),_Src_00,uVar21);
      pvVar32 = *(void **)(pbVar4 + 8);
      uVar12 = FUN_10122090(uVar12,_Src,(uint)pcVar34);
      *(uint *)(pbVar4 + 0x80) = uVar12;
      goto LAB_100a7536;
    }
    uVar12 = FUN_10122760(uVar12,_Src_00,uVar21);
    memcpy(*(void **)(pbVar4 + 8),_Src,(size_t)pcVar34);
    uVar12 = FUN_10122760(uVar12,_Src,(uint)pcVar34);
    *(uint *)(pbVar4 + 0x7c) = uVar12;
  }
  pbVar4[0x14] = 0;
  pbVar4[0x15] = 0;
  pbVar4[0x16] = 0;
  pbVar4[0x17] = 0;
  *(code **)(pbVar4 + 0x10) = pcVar34;
LAB_100a754c:
  iVar6 = *(int *)(pbVar4 + 0x84);
  if (iVar6 != 0) {
    if ((*(int *)(pbVar4 + 0x88) == 0) || (*(char *)(iVar6 + -1 + *(int *)(pbVar4 + 0x88)) != '\0'))
    {
      FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_1015dd98);
                    /* WARNING: Does not return */
      pcVar34 = (code *)invalidInstructionException();
      (*pcVar34)();
    }
    *(int *)(local_4c + 0x38) = iVar6;
  }
  uVar12 = (pbVar4[1] & 1) << 6 | (uint)pbVar4[0x40];
  if ((byte)(*pbVar4 - 0xc) < 6) {
    uVar12 = uVar12 | *(uint *)(&DAT_101600fc + (uint)(byte)(*pbVar4 - 0xc) * 4);
  }
  *(uint *)(local_4c + 0x4c) = uVar12;
  auVar42._0_8_ = *(longlong *)(local_4c + 0x10) + (ulonglong)(uint)(iVar5 - param_3);
  auVar42._8_8_ = *(longlong *)(local_4c + 0x18) + (ulonglong)(uint)((int)pbVar14 - (int)local_38);
  *(undefined1 (*) [16])(local_4c + 0x10) = auVar42;
  if (pcVar19 == (code *)0x0) {
    pcVar13 = (code *)0x1;
    pcVar22 = (code *)0x0;
    pcVar30 = local_4c;
    if (param_6 == (code)0x4 || iVar24 == iVar5 && pcVar37 == (code *)0x0) {
switchD_100a4879_caseD_41:
      uVar40 = 0xffffffff;
      uVar12 = 0;
      lVar44 = *(longlong *)(pcVar30 + 8) + (auVar42._8_8_ - local_20._8_8_);
      *(longlong *)pcVar30 = *(longlong *)pcVar30 + (auVar42._0_8_ - local_20._0_8_);
      *(longlong *)(pcVar30 + 8) = lVar44;
LAB_100a761f:
      *local_2c = uVar40;
      local_2c[1] = (uint)pcVar13 & 0xff | uVar12;
      local_2c[2] = pcVar22;
      local_28 = local_28 + ((int)lVar44 - local_30);
      if (local_24 <= local_28) {
        local_28 = local_24;
      }
      param_5[2] = local_28;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x100a767d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(local_70 + (&UINT_100a7c18)[(int)(pcVar19 + 4)]))();
  return;
}
