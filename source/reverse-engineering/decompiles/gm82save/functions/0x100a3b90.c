// rea decompile_all
// name: FUN_100a3b90
// address: 0x100a3b90
// body: available
// range: 0x100a3b90-0x100a4711 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_100a3b90(undefined1 *param_1,longlong *param_2,int param_3,undefined4 param_4,uint *param_5,
            byte param_6)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  size_t sVar18;
  char *extraout_ECX;
  uint uVar19;
  char *extraout_ECX_00;
  char *pcVar20;
  char *extraout_ECX_01;
  char *extraout_ECX_02;
  char *extraout_ECX_03;
  char *extraout_ECX_04;
  char *extraout_ECX_05;
  char *extraout_ECX_06;
  char *extraout_ECX_07;
  char *extraout_ECX_08;
  char *extraout_ECX_09;
  char cVar21;
  int extraout_EDX;
  uint extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  undefined1 uVar22;
  char *pcVar23;
  void *_Dst;
  uint uVar24;
  bool bVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 local_5c;
  undefined2 local_36;
  int local_34;
  undefined1 *local_30;
  char local_2c [4];
  undefined4 local_28;
  char *local_24;
  longlong local_20;
  longlong lStack_18;

  uVar3 = *param_5;
  uVar24 = param_5[2];
  local_34 = (int)param_2[1];
  _Dst = (void *)(param_5[1] + uVar24);
  local_30 = param_1;
  memset(_Dst,0,uVar3 - uVar24);
  lVar9 = param_2[2];
  lVar10 = param_2[3];
  *(undefined4 *)((int)param_2 + 0x24) = param_4;
  *(uint *)(param_2 + 6) = uVar3 - uVar24;
  *(int *)(param_2 + 4) = param_3;
  *(void **)((int)param_2 + 0x2c) = _Dst;
  pcVar20 = *(char **)((int)param_2 + 0x3c);
  local_20 = CONCAT71(local_20._1_7_,param_6 != 4 && *pcVar20 == '\x03');
  if (param_6 != 4 && *pcVar20 == '\x03') {
    local_5c = 0xfe;
    *(char **)(param_2 + 7) = "stream error";
    goto LAB_100a4061;
  }
  if (uVar3 == uVar24) {
LAB_100a3cae:
    local_5c = 1;
    *(char **)(param_2 + 7) = "buffer error";
    goto LAB_100a4061;
  }
  cVar21 = pcVar20[1];
  pcVar20[1] = param_6;
  pcVar23 = *(char **)((int)param_2 + 0x3c);
  uVar15 = *(uint *)(pcVar23 + 0x5c);
  uVar19 = *(uint *)(pcVar23 + 0x60);
  if (uVar15 < uVar19) {
    FUN_10136a50(uVar19,uVar15,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015b8b0);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  uVar4 = *(uint *)(pcVar23 + 100);
  if (uVar15 - uVar19 < uVar4) {
    FUN_10136a50(0,uVar4,uVar15 - uVar19,&PTR_s_C__Users_runneradmin__cargo_regi_1015b8a0);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  plVar1 = param_2 + 4;
  if (uVar4 != 0) {
    FUN_1012b0b0((int)plVar1);
    pcVar23 = *(char **)((int)param_2 + 0x3c);
    pcVar20 = extraout_ECX;
    if ((int)param_2[6] != 0) {
      pcVar20 = (char *)CONCAT31((int3)((uint)extraout_ECX >> 8),*(int *)((int)param_2 + 0x24) == 0)
      ;
      cVar21 = *pcVar23;
      goto joined_r0x100a3ca8;
    }
LAB_100a404c:
    pcVar23[1] = -1;
    goto LAB_100a4059;
  }
  pcVar20 = (char *)0x0;
  if (*(int *)((int)param_2 + 0x24) == 0) {
    if ('\x04' < cVar21) {
      pcVar20 = (char *)0xf7;
    }
    if ((param_6 != 4) &&
       (bVar11 = (char)pcVar20 + cVar21 * '\x02', pcVar20 = (char *)(uint)bVar11,
       (char)(param_6 * '\x02') <= (char)bVar11)) goto LAB_100a3cae;
    cVar21 = *pcVar23;
  }
  else {
    cVar21 = *pcVar23;
joined_r0x100a3ca8:
    if ((cVar21 == '\x03') && ((char)pcVar20 == '\0')) goto LAB_100a3cae;
  }
  if (cVar21 == '\x01') {
    if (pcVar23[2] == '\0') {
      *pcVar23 = '\x02';
      pcVar23 = *(char **)((int)param_2 + 0x3c);
      cVar21 = *pcVar23;
      if (cVar21 != '\x01') goto LAB_100a3dc3;
    }
    iVar12 = FUN_1012b340((int)pcVar23);
    uVar15 = *(uint *)(pcVar23 + 0x5c);
    iVar16 = *(int *)(pcVar23 + 100);
    uVar19 = *(int *)(pcVar23 + 0x60) + iVar16;
    if (uVar15 - uVar19 < 2) {
      FUN_101369c0("buf.len() must fit in remaining()",0x43,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1015db44);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (uVar15 < uVar19) {
      FUN_10136a50(uVar19,uVar15,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015db44);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    *(ushort *)(*(int *)(pcVar23 + 0x58) + uVar19) = (ushort)iVar12 << 8 | (ushort)iVar12 >> 8;
    *(int *)(pcVar23 + 100) = iVar16 + 2;
    puVar13 = *(undefined1 **)((int)param_2 + 0x3c);
    if (*(int *)(puVar13 + 0x10) != 0) {
      uVar15 = *(uint *)(puVar13 + 0x5c);
      iVar16 = *(int *)(puVar13 + 100);
      uVar19 = *(int *)(puVar13 + 0x60) + iVar16;
      if (uVar15 - uVar19 < 4) {
        FUN_101369c0("buf.len() must fit in remaining()",0x43,
                     &PTR_s_C__Users_runneradmin__cargo_regi_1015db54);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (uVar15 < uVar19) {
        FUN_10136a50(uVar19,uVar15,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015db54);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      uVar15 = *(uint *)(param_2 + 10);
      *(uint *)(*(int *)(puVar13 + 0x58) + uVar19) =
           uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      *(int *)(puVar13 + 100) = iVar16 + 4;
      puVar13 = *(undefined1 **)((int)param_2 + 0x3c);
    }
    *(undefined4 *)(param_2 + 10) = 1;
    *puVar13 = 2;
    FUN_1012b0b0((int)plVar1);
    FUN_1012b3c0((int *)(*(int *)((int)param_2 + 0x3c) + 0x58));
    pcVar23 = *(char **)((int)param_2 + 0x3c);
    pcVar20 = extraout_ECX_00;
    if (extraout_EDX != 0) goto LAB_100a404c;
    cVar21 = *pcVar23;
  }
LAB_100a3dc3:
  if (cVar21 == '\x04') {
    pcVar23[0xa0] = '\0';
    pcVar23[0xa1] = '\0';
    pcVar23[0xa2] = '\0';
    pcVar23[0xa3] = '\0';
    iVar16 = *(int *)((int)param_2 + 0x3c);
    uVar15 = *(uint *)(iVar16 + 0x5c);
    iVar12 = *(int *)(iVar16 + 100);
    uVar19 = *(int *)(iVar16 + 0x60) + iVar12;
    if (uVar15 - uVar19 < 3) {
      FUN_101369c0("buf.len() must fit in remaining()",0x43,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1015db64);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (uVar15 < uVar19) {
      FUN_10136a50(uVar19,uVar15,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015db64);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    iVar5 = *(int *)(iVar16 + 0x58);
    *(undefined1 *)(iVar5 + 2 + uVar19) = 8;
    *(undefined2 *)(iVar5 + uVar19) = 0x8b1f;
    *(int *)(iVar16 + 100) = iVar12 + 3;
    cVar21 = '\x02';
    iVar16 = *(int *)((int)param_2 + 0x3c);
    if (*(char *)(iVar16 + 4) != '\t') {
      cVar21 = (*(char *)(iVar16 + 4) < '\x02' || 1 < *(byte *)(iVar16 + 3)) << 2;
    }
    if (*(int **)(iVar16 + 0x88) != (int *)0x0) {
      bVar11 = FUN_1012b400(*(int **)(iVar16 + 0x88));
      iVar12 = *(int *)(iVar16 + 100);
      uVar15 = *(uint *)(iVar16 + 0x5c);
      uVar19 = *(int *)(iVar16 + 0x60) + iVar12;
      if (uVar15 == uVar19) {
        FUN_101369c0("buf.len() must fit in remaining()",0x43,
                     &PTR_s_C__Users_runneradmin__cargo_regi_1015db84);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (uVar15 < uVar19) {
        FUN_10136a50(uVar19,uVar15,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015db84);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      *(byte *)(*(int *)(iVar16 + 0x58) + uVar19) = bVar11;
      *(int *)(iVar16 + 100) = iVar12 + 1;
      iVar12 = *(int *)((int)param_2 + 0x3c);
      uVar15 = *(uint *)(iVar12 + 0x5c);
      iVar5 = *(int *)(iVar12 + 100);
      uVar19 = *(int *)(iVar12 + 0x60) + iVar5;
      if (uVar15 - uVar19 < 4) {
        FUN_101369c0("buf.len() must fit in remaining()",0x43,
                     &PTR_s_C__Users_runneradmin__cargo_regi_1015db94);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (uVar15 < uVar19) {
        FUN_10136a50(uVar19,uVar15,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015db94);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      *(undefined4 *)(*(int *)(iVar12 + 0x58) + uVar19) =
           *(undefined4 *)(*(int *)(iVar16 + 0x88) + 4);
      *(int *)(iVar12 + 100) = iVar5 + 4;
      iVar12 = *(int *)((int)param_2 + 0x3c);
      pcVar23 = *(char **)(iVar12 + 0x5c);
      iVar5 = *(int *)(iVar12 + 100);
      pcVar20 = (char *)(*(int *)(iVar12 + 0x60) + iVar5);
      if ((uint)((int)pcVar23 - (int)pcVar20) < 2) {
        FUN_101369c0("buf.len() must fit in remaining()",0x43,
                     &PTR_s_C__Users_runneradmin__cargo_regi_1015dba4);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if (pcVar23 < pcVar20) {
        FUN_10136a50((uint)pcVar20,(uint)pcVar23,(uint)pcVar23,
                     &PTR_s_C__Users_runneradmin__cargo_regi_1015dba4);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      cVar2 = *(char *)(*(int *)(iVar16 + 0x88) + 0xc);
      iVar6 = *(int *)(iVar12 + 0x58);
      pcVar20[iVar6] = cVar21;
      pcVar20[iVar6 + 1] = cVar2;
      *(int *)(iVar12 + 100) = iVar5 + 2;
      iVar12 = *(int *)(iVar16 + 0x88);
      if (*(int *)(iVar12 + 0x10) != 0) {
        iVar5 = *(int *)((int)param_2 + 0x3c);
        iVar6 = *(int *)(iVar5 + 100);
        pcVar23 = *(char **)(iVar5 + 0x5c);
        pcVar20 = (char *)(*(int *)(iVar5 + 0x60) + iVar6);
        if ((uint)((int)pcVar23 - (int)pcVar20) < 2) {
          FUN_101369c0("buf.len() must fit in remaining()",0x43,
                       &PTR_s_C__Users_runneradmin__cargo_regi_1015dbb4);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        if (pcVar23 < pcVar20) {
          FUN_10136a50((uint)pcVar20,(uint)pcVar23,(uint)pcVar23,
                       &PTR_s_C__Users_runneradmin__cargo_regi_1015dbb4);
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        *(undefined2 *)(pcVar20 + *(int *)(iVar5 + 0x58)) = *(undefined2 *)(iVar12 + 0x14);
        *(int *)(iVar5 + 100) = iVar6 + 2;
        iVar12 = *(int *)(iVar16 + 0x88);
      }
      if (*(int *)(iVar12 + 0x2c) != 0) {
        uVar15 = *(uint *)(param_2 + 10);
        pbVar14 = (byte *)FUN_1012b3c0((int *)(*(int *)((int)param_2 + 0x3c) + 0x58));
        uVar15 = FUN_10122090(uVar15,pbVar14,extraout_EDX_00);
        *(uint *)(param_2 + 10) = uVar15;
        pcVar20 = extraout_ECX_01;
      }
      *(undefined4 *)(*(int *)((int)param_2 + 0x3c) + 0x8c) = 0;
      **(undefined1 **)((int)param_2 + 0x3c) = 5;
      pcVar23 = *(char **)((int)param_2 + 0x3c);
      goto LAB_100a3f8a;
    }
    uVar15 = *(uint *)(iVar16 + 0x5c);
    iVar12 = *(int *)(iVar16 + 100);
    uVar19 = *(int *)(iVar16 + 0x60) + iVar12;
    if (uVar15 - uVar19 < 7) {
      FUN_101369c0("buf.len() must fit in remaining()",0x43,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1015db74);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (uVar15 < uVar19) {
      FUN_10136a50(uVar19,uVar15,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015db74);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    iVar5 = *(int *)(iVar16 + 0x58);
    *(undefined1 *)(iVar5 + 4 + uVar19) = 0;
    *(undefined4 *)(iVar5 + uVar19) = 0;
    *(char *)(iVar5 + 5 + uVar19) = cVar21;
    *(undefined1 *)(iVar5 + 6 + uVar19) = 10;
    *(int *)(iVar16 + 100) = iVar12 + 7;
    **(undefined1 **)((int)param_2 + 0x3c) = 2;
    FUN_1012b0b0((int)plVar1);
    FUN_1012b3c0((int *)(*(int *)((int)param_2 + 0x3c) + 0x58));
    pcVar23 = *(char **)((int)param_2 + 0x3c);
    pcVar20 = extraout_ECX_03;
    if (extraout_EDX_01 != 0) goto LAB_100a404c;
    cVar21 = *pcVar23;
    if (cVar21 == '\x05') goto LAB_100a3f96;
LAB_100a414d:
    if (cVar21 == '\x06') {
      if (*(int *)(pcVar23 + 0x88) != 0) {
        pcVar7 = *(char **)(*(int *)(pcVar23 + 0x88) + 0x1c);
        if (pcVar7 != (char *)0x0) {
          sVar18 = strlen(pcVar7);
          iVar16 = FUN_1012b440((int)plVar1,pcVar7,sVar18 + 1);
          pcVar20 = extraout_ECX_04;
          if (iVar16 != 3) goto LAB_100a432f;
          pcVar23 = *(char **)((int)param_2 + 0x3c);
        }
        *pcVar23 = '\a';
        pcVar23 = *(char **)((int)param_2 + 0x3c);
        cVar21 = *pcVar23;
        goto LAB_100a419d;
      }
LAB_100a424d:
      if ((*(int *)((int)param_2 + 0x24) == 0) &&
         (*(int *)(*(char **)((int)param_2 + 0x3c) + 0x24) == 0)) {
        if (param_6 == 0) goto LAB_100a4059;
        if (**(char **)((int)param_2 + 0x3c) != '\x03') goto LAB_100a4260;
LAB_100a4294:
        if (param_6 == 4) {
          iVar16 = *(int *)((int)param_2 + 0x3c);
          if (*(char *)(iVar16 + 2) == '\x01') {
            uVar15 = *(uint *)(iVar16 + 0x5c);
            iVar12 = *(int *)(iVar16 + 100);
            uVar19 = *(int *)(iVar16 + 0x60) + iVar12;
            if (uVar15 - uVar19 < 4) {
              FUN_101369c0("buf.len() must fit in remaining()",0x43,
                           &PTR_s_C__Users_runneradmin__cargo_regi_1015dc9c);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar15 < uVar19) {
              FUN_10136a50(uVar19,uVar15,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015dc9c);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            uVar15 = *(uint *)(param_2 + 10);
            uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                     uVar15 << 0x18;
LAB_100a4484:
            *(uint *)(*(int *)(iVar16 + 0x58) + uVar19) = uVar15;
            *(int *)(iVar16 + 100) = iVar12 + 4;
          }
          else if (*(char *)(iVar16 + 2) == '\x02') {
            uVar17 = *(undefined4 *)(iVar16 + 0xa0);
            *(undefined4 *)(iVar16 + 0xa0) = 0;
            *(undefined4 *)(param_2 + 10) = uVar17;
            iVar16 = *(int *)((int)param_2 + 0x3c);
            uVar15 = *(uint *)(iVar16 + 0x5c);
            iVar12 = *(int *)(iVar16 + 100);
            uVar19 = *(int *)(iVar16 + 0x60) + iVar12;
            if (uVar15 - uVar19 < 4) {
              FUN_101369c0("buf.len() must fit in remaining()",0x43,
                           &PTR_s_C__Users_runneradmin__cargo_regi_1015dc7c);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar15 < uVar19) {
              FUN_10136a50(uVar19,uVar15,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015dc7c);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            *(undefined4 *)(*(int *)(iVar16 + 0x58) + uVar19) = uVar17;
            *(int *)(iVar16 + 100) = iVar12 + 4;
            iVar16 = *(int *)((int)param_2 + 0x3c);
            uVar15 = *(uint *)(iVar16 + 0x5c);
            iVar12 = *(int *)(iVar16 + 100);
            uVar19 = *(int *)(iVar16 + 0x60) + iVar12;
            if (uVar15 - uVar19 < 4) {
              FUN_101369c0("buf.len() must fit in remaining()",0x43,
                           &PTR_s_C__Users_runneradmin__cargo_regi_1015dc8c);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            if (uVar15 < uVar19) {
              FUN_10136a50(uVar19,uVar15,uVar15,&PTR_s_C__Users_runneradmin__cargo_regi_1015dc8c);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            uVar15 = *(uint *)(param_2 + 5);
            goto LAB_100a4484;
          }
          FUN_1012b0b0((int)plVar1);
          iVar16 = *(int *)((int)param_2 + 0x3c);
          if ('\0' < *(char *)(iVar16 + 2)) {
            *(char *)(iVar16 + 2) = -*(char *)(iVar16 + 2);
            iVar16 = *(int *)((int)param_2 + 0x3c);
          }
          FUN_1012b3c0((int *)(iVar16 + 0x58));
          pcVar20 = extraout_ECX_09;
          if (extraout_EDX_03 == 0) {
            pcVar20 = *(char **)((int)param_2 + 0x3c);
            if (pcVar20[0x70] != '\0') {
              FUN_1013d67b(pcVar20 + 0x70,&DAT_1015bc3c,0x1015dcac,
                           &PTR_s_C__Users_runneradmin__cargo_regi_1015dcc0);
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
            goto LAB_100a433d;
          }
        }
      }
      else {
LAB_100a4260:
        bVar11 = FUN_1012b790((int *)plVar1,param_6);
        pcVar20 = (char *)(uint)bVar11;
        if (pcVar20 + -2 < (char *)0x2) {
          pcVar20 = *(char **)((int)param_2 + 0x3c);
          *pcVar20 = '\x03';
          if (bVar11 == 3) goto LAB_100a4294;
        }
        else if (bVar11 != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(param_6) {
          case 0:
            FUN_101369c0("internal error: entered unreachable code: condition of inner surrounding if"
                         ,0x97,&PTR_s_C__Users_runneradmin__cargo_regi_1015dc10);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          case 1:
            FUN_1012c130((int *)(*(int *)((int)param_2 + 0x3c) + 0x58));
            break;
          case 2:
            FUN_1012a720(*(int *)((int)param_2 + 0x3c),0,0,0);
            break;
          case 3:
            FUN_1012a720(*(int *)((int)param_2 + 0x3c),0,0,0);
            memset(*(void **)(*(int *)((int)param_2 + 0x3c) + 0x30),0,0x20000);
            if (*(int *)(*(int *)((int)param_2 + 0x3c) + 0x24) == 0) {
              *(undefined4 *)(*(int *)((int)param_2 + 0x3c) + 0x10) = 0;
              *(undefined4 *)(*(int *)((int)param_2 + 0x3c) + 0x3c) = 0;
              *(undefined4 *)(*(int *)((int)param_2 + 0x3c) + 0x80) = 0;
            }
            break;
          case 4:
            FUN_101369c0("internal error: entered unreachable code: condition of outer surrounding if"
                         ,0x97,&PTR_s_C__Users_runneradmin__cargo_regi_1015dc6c);
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          FUN_1012b0b0((int)plVar1);
          pcVar20 = extraout_ECX_08;
          if ((int)param_2[6] == 0) {
            *(undefined1 *)(*(int *)((int)param_2 + 0x3c) + 1) = 0xff;
          }
          goto LAB_100a4059;
        }
        if ((int)param_2[6] == 0) goto LAB_100a435f;
      }
    }
    else {
LAB_100a419d:
      if (cVar21 == '\a') {
        if (*(int *)(pcVar23 + 0x88) == 0) goto LAB_100a424d;
        pcVar7 = *(char **)(*(int *)(pcVar23 + 0x88) + 0x24);
        if (pcVar7 != (char *)0x0) {
          sVar18 = strlen(pcVar7);
          iVar16 = FUN_1012b440((int)plVar1,pcVar7,sVar18 + 1);
          pcVar20 = extraout_ECX_05;
          if (iVar16 != 3) goto LAB_100a432f;
          pcVar23 = *(char **)((int)param_2 + 0x3c);
        }
        *pcVar23 = '\b';
        pcVar23 = *(char **)((int)param_2 + 0x3c);
        cVar21 = *pcVar23;
      }
      if (cVar21 != '\b') goto LAB_100a424d;
      if ((*(int *)(pcVar23 + 0x88) != 0) && (*(int *)(*(int *)(pcVar23 + 0x88) + 0x2c) != 0)) {
        local_36 = (undefined2)param_2[10];
        iVar16 = FUN_1012b440((int)plVar1,&local_36,2);
        pcVar20 = extraout_ECX_06;
        if (iVar16 != 3) goto LAB_100a432f;
        pcVar23 = *(char **)((int)param_2 + 0x3c);
      }
      *pcVar23 = '\x02';
      FUN_1012b0b0((int)plVar1);
      FUN_1012b3c0((int *)(*(int *)((int)param_2 + 0x3c) + 0x58));
      pcVar20 = extraout_ECX_07;
      if (extraout_EDX_02 == 0) goto LAB_100a424d;
LAB_100a435f:
      *(undefined1 *)(*(int *)((int)param_2 + 0x3c) + 1) = 0xff;
    }
LAB_100a4059:
    local_5c = 0;
  }
  else {
LAB_100a3f8a:
    cVar21 = *pcVar23;
    if (cVar21 != '\x05') goto LAB_100a414d;
LAB_100a3f96:
    iVar16 = *(int *)(pcVar23 + 0x88);
    if ((iVar16 == 0) || (*(int *)(iVar16 + 0x10) == 0)) {
LAB_100a4142:
      *pcVar23 = '\x06';
      pcVar23 = *(char **)((int)param_2 + 0x3c);
      cVar21 = *pcVar23;
      goto LAB_100a414d;
    }
    iVar16 = FUN_1012b440((int)plVar1,(void *)(*(int *)(iVar16 + 0x10) + *(int *)(pcVar23 + 0x8c)),
                          (uint)*(ushort *)(iVar16 + 0x14) - *(int *)(pcVar23 + 0x8c));
    pcVar20 = extraout_ECX_02;
    if (iVar16 == 3) {
      pcVar23 = *(char **)((int)param_2 + 0x3c);
      goto LAB_100a4142;
    }
LAB_100a432f:
    if (iVar16 != 1) {
      if (iVar16 != 0) {
        FUN_101369c0("internal error: entered unreachable code: compression does not use dictionary"
                     ,0x9b,&PTR_s_C__Users_runneradmin__cargo_regi_1015fbe4);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      goto LAB_100a4059;
    }
LAB_100a433d:
    local_5c = 2;
  }
LAB_100a4061:
  uVar17 = 0;
  bVar25 = (char)local_20 == '\0';
  lVar26 = param_2[2] + (ulonglong)(uint)((int)param_2[4] - param_3);
  lVar27 = param_2[3] + (ulonglong)(uint)(*(int *)((int)param_2 + 0x2c) - (int)_Dst);
  param_2[2] = lVar26;
  param_2[3] = lVar27;
  local_20 = (lVar26 - lVar9) + *param_2;
  lStack_18 = (lVar27 - lVar10) + param_2[1];
  *param_2 = local_20;
  param_2[1] = lStack_18;
  if (bVar25) {
    uVar22 = 0;
  }
  else {
    pcVar23 = *(char **)(param_2 + 7);
    uVar22 = 1;
    if (pcVar23 != (char *)0x0) {
      sVar18 = strlen(pcVar23);
      FUN_10095490((undefined4 *)local_2c,(int)pcVar23,sVar18);
      uVar17 = 0;
      pcVar20 = local_24;
      uVar22 = 1;
      if (local_2c[0] == '\0') {
        uVar17 = local_28;
      }
    }
  }
  *local_30 = uVar22;
  local_30[1] = local_5c;
  *(undefined4 *)(local_30 + 4) = uVar17;
  *(char **)(local_30 + 8) = pcVar20;
  uVar24 = uVar24 + ((int)lStack_18 - local_34);
  if (uVar3 <= uVar24) {
    uVar24 = uVar3;
  }
  param_5[2] = uVar24;
  return;
}
