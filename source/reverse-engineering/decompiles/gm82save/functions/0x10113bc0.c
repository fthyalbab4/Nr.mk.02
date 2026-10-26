// rea decompile_all
// name: FUN_10113bc0
// address: 0x10113bc0
// body: available
// range: 0x10113bc0-0x10113c0a inclusive
// range: 0x10113c10-0x10113c20 inclusive
// range: 0x10113c30-0x10113ca3 inclusive
// range: 0x10113cb0-0x10114a67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10113bc0(undefined8 *param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  short sVar7;
  LPCWSTR pWVar8;
  int iVar9;
  int iVar10;
  HANDLE pvVar11;
  LPVOID pvVar12;
  void *pvVar13;
  void **ppvVar14;
  undefined8 *puVar15;
  DWORD DVar16;
  LPCWSTR pWVar17;
  uint uVar18;
  void *pvVar19;
  int iVar20;
  int iVar21;
  void *pvVar22;
  int iVar23;
  int *piVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint local_11c;
  int local_10c;
  void *local_f4;
  LPCWSTR local_f0;
  int iStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  void **local_e0;
  int *local_dc;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  void *local_ac;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  int local_7c;
  int local_78;
  void *local_74;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;

  pvVar22 = (void *)*param_2;
  local_b0 = param_1;
  if (pvVar22 == (void *)0x0) {
    iVar9 = *param_3;
    pvVar22 = (void *)param_3[1];
    if (iVar9 == -1) {
      uVar28 = param_3[3];
      goto LAB_10113dc4;
    }
    iVar20 = param_3[4];
    local_f0 = (LPCWSTR)param_3[2];
    iStack_ec = param_3[3];
    iVar21 = param_3[6];
    iVar10 = param_3[5];
    uStack_e8 = 0;
    uStack_e4 = 0;
    puVar15 = FUN_10107380(0,0x1ec);
    if (puVar15 == (undefined8 *)0x0) {
LAB_101149e0:
      FUN_1013679e(4,0x1ec);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    *(undefined4 *)(puVar15 + 0x16) = 0;
    *param_2 = (int)puVar15;
    param_2[1] = 0;
    *(undefined2 *)((int)puVar15 + 0x1ea) = 1;
    *(int *)((int)puVar15 + 0xb4) = iVar9;
    *(void **)(puVar15 + 0x17) = pvVar22;
    *(ulonglong *)((int)puVar15 + 0xbc) = CONCAT44(iStack_ec,local_f0);
    *(int *)((int)puVar15 + 0xc4) = iVar20;
    *(int *)((int)puVar15 + 0xcc) = iVar21;
    *(int *)(puVar15 + 0x19) = iVar10;
    uVar3 = param_4[1];
    *puVar15 = *param_4;
    puVar15[1] = uVar3;
    local_dc = param_2;
  }
  else {
    local_f0 = (LPCWSTR)param_3[5];
    iVar9 = param_2[1];
    iVar20 = param_3[6];
    uVar18 = (uint)*(ushort *)((int)pvVar22 + 0x1ea);
    local_dc = param_2;
    local_78 = iVar9;
    local_74 = pvVar22;
    if (uVar18 != 0) goto LAB_10113c4d;
    while (uVar18 = 0, pvVar19 = pvVar22, iVar9 != 0) {
      while( true ) {
        iVar9 = iVar9 + -1;
        pvVar22 = *(void **)((int)pvVar22 + uVar18 * 4 + 0x1ec);
        uVar18 = (uint)*(ushort *)((int)pvVar22 + 0x1ea);
        if (uVar18 == 0) break;
LAB_10113c4d:
        piVar24 = (int *)((int)pvVar22 + 0xcc);
        uVar28 = 0;
        iVar21 = uVar18 * 0x1c;
        do {
          iVar10 = CompareStringOrdinal(local_f0,iVar20,(LPCWSTR)piVar24[-1],*piVar24,1);
          if (2 < iVar10 - 1U) {
            DVar16 = GetLastError();
            local_a8 = CONCAT44(DVar16,(int)local_a8) & 0xffffffffffffff00;
            local_48 = CONCAT44(FUN_1010f950,&local_a8);
            FUN_101369c0(&DAT_101593be,&local_48,&PTR_s_C__Users_runneradmin__rustup_too_101593e4);
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          if (iVar10 - 1U != 2) {
            uVar18 = uVar28;
            if (iVar10 != 1) {
              if (*param_3 != 0) {
                pvVar12 = (LPVOID)param_3[1];
                pvVar11 = GetProcessHeap();
                HeapFree(pvVar11,0,pvVar12);
              }
              if (param_3[4] != 0) {
                pvVar11 = GetProcessHeap();
                HeapFree(pvVar11,0,local_f0);
              }
              goto LAB_10113dc4;
            }
            break;
          }
          uVar28 = uVar28 + 1;
          piVar24 = piVar24 + 7;
          iVar21 = iVar21 + -0x1c;
        } while (iVar21 != 0);
        pvVar19 = pvVar22;
        if (iVar9 == 0) goto LAB_10113e29;
      }
    }
LAB_10113e29:
    iVar9 = *param_3;
    pvVar22 = (void *)param_3[1];
    uVar28 = param_3[3];
    if (iVar9 == -1) {
LAB_10113dc4:
      iVar9 = uVar28 * 0x10;
      uVar3 = *(undefined8 *)((int)pvVar22 + iVar9);
      uVar1 = *(undefined8 *)((int)pvVar22 + iVar9 + 8);
      uVar2 = *param_4;
      *(undefined8 *)((int)pvVar22 + iVar9 + 8) = param_4[1];
      *(undefined8 *)((int)pvVar22 + iVar9) = uVar2;
      local_b0[1] = uVar1;
      *local_b0 = uVar3;
      return;
    }
    iVar20 = param_3[2];
    iVar21 = param_3[4];
    iVar10 = param_3[6];
    iVar5 = param_3[5];
    uVar4 = *(ushort *)((int)pvVar19 + 0x1ea);
    uVar27 = (uint)uVar4;
    if (uVar27 < 0xb) {
      piVar24 = (int *)((int)pvVar19 + uVar18 * 0x1c + 0xb4);
      iVar23 = uVar27 - uVar18;
      if (uVar27 < uVar18 || iVar23 == 0) {
        *piVar24 = iVar9;
        piVar24[1] = (int)pvVar22;
        piVar24[2] = iVar20;
        piVar24[3] = uVar28;
        piVar24[4] = iVar21;
        piVar24[5] = iVar5;
        piVar24[6] = iVar10;
      }
      else {
        memmove((void *)((int)pvVar19 + uVar18 * 0x1c + 0xd0),piVar24,iVar23 * 0x1c);
        *piVar24 = iVar9;
        piVar24[1] = (int)pvVar22;
        piVar24[2] = iVar20;
        piVar24[3] = uVar28;
        piVar24[4] = iVar21;
        piVar24[6] = iVar10;
        piVar24[5] = iVar5;
        memmove((void *)((uVar18 + 1) * 0x10 + (int)pvVar19),(void *)(uVar18 * 0x10 + (int)pvVar19),
                iVar23 * 0x10);
      }
      uVar3 = *param_4;
      *(undefined8 *)((int)pvVar19 + uVar18 * 0x10 + 8) = param_4[1];
      *(undefined8 *)((int)pvVar19 + uVar18 * 0x10) = uVar3;
      *(ushort *)((int)pvVar19 + 0x1ea) = uVar4 + 1;
    }
    else {
      local_e0 = (void **)&local_20;
      uVar27 = 4;
      if (4 < uVar18) {
        if (uVar18 == 5) {
          uVar27 = 5;
        }
        else {
          local_e0 = &local_f4;
          if (uVar18 == 6) {
            uVar18 = 0;
            uVar27 = 5;
          }
          else {
            uVar18 = uVar18 - 7;
            uVar27 = 6;
          }
        }
      }
      pvVar12 = FUN_10107380(0,0x1ec);
      if (pvVar12 == (LPVOID)0x0) goto LAB_101149e0;
      *(undefined4 *)((int)pvVar12 + 0xb0) = 0;
      uVar25 = ~uVar27 + (uint)*(ushort *)((int)pvVar19 + 0x1ea);
      *(short *)((int)pvVar12 + 0x1ea) = (short)uVar25;
      local_f0 = pvVar12;
      if (0xb < uVar25) {
LAB_101149f1:
        FUN_10136a50(0,uVar25,0xb,&PTR_s_C__Users_runneradmin__rustup_too_10157d6c);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      local_80 = (int)pvVar19 + uVar27 * 0x1c + 0xb4;
      iVar23 = *(int *)((int)pvVar19 + uVar27 * 0x1c + 0xb4);
      local_7c = uVar27 << 4;
      memcpy((void *)((int)pvVar12 + 0xb4),
             (void *)((int)pvVar19 + uVar27 + (uVar27 + 1) * 0x1b + 0xb5),uVar25 * 0x1c);
      pWVar8 = local_f0;
      memcpy(local_f0,(void *)((uVar27 + 1) * 0x10 + (int)pvVar19),uVar25 * 0x10);
      *(short *)((int)pvVar19 + 0x1ea) = (short)uVar27;
      local_a8 = *(ulonglong *)(local_80 + 4);
      local_a0 = *(undefined8 *)(local_80 + 0xc);
      local_98 = *(undefined8 *)(local_80 + 0x14);
      local_90 = *(undefined8 *)((int)pvVar19 + local_7c);
      local_88 = *(undefined8 *)((int)pvVar19 + local_7c + 8);
      local_20 = CONCAT44(local_20._4_4_,pvVar19);
      local_f4 = pWVar8;
      pvVar13 = *local_e0;
      uVar4 = *(ushort *)((int)pvVar13 + 0x1ea);
      piVar24 = (int *)((int)pvVar13 + uVar18 * 0x1c + 0xb4);
      iVar26 = uVar4 - uVar18;
      local_48 = local_a8;
      local_40 = local_a0;
      local_38 = local_98;
      if (uVar4 < uVar18 || iVar26 == 0) {
        *piVar24 = iVar9;
        piVar24[1] = (int)pvVar22;
        piVar24[2] = iVar20;
        piVar24[3] = uVar28;
        piVar24[4] = iVar21;
        piVar24[5] = iVar5;
        piVar24[6] = iVar10;
      }
      else {
        memmove((void *)((int)pvVar13 + uVar18 * 0x1c + 0xd0),piVar24,iVar26 * 0x1c);
        *piVar24 = iVar9;
        piVar24[1] = (int)pvVar22;
        piVar24[2] = iVar20;
        piVar24[3] = uVar28;
        piVar24[4] = iVar21;
        piVar24[6] = iVar10;
        piVar24[5] = iVar5;
        memmove((void *)((uVar18 + 1) * 0x10 + (int)pvVar13),(void *)(uVar18 * 0x10 + (int)pvVar13),
                iVar26 * 0x10);
      }
      uVar3 = *param_4;
      *(undefined8 *)((int)pvVar13 + uVar18 * 0x10 + 8) = param_4[1];
      *(undefined8 *)((int)pvVar13 + uVar18 * 0x10) = uVar3;
      *(ushort *)((int)pvVar13 + 0x1ea) = uVar4 + 1;
      if (iVar23 != -1) {
        if (*(void **)((int)pvVar19 + 0xb0) == (void *)0x0) {
          local_10c = 0;
        }
        else {
          local_10c = 0;
          pvVar22 = *(void **)((int)pvVar19 + 0xb0);
          iVar9 = iVar23;
          do {
            pvVar13 = pvVar22;
            pWVar8 = local_f0;
            uVar4 = *(ushort *)((int)pvVar19 + 0x1e8);
            uVar18 = (uint)uVar4;
            uVar28 = (uint)*(ushort *)((int)pvVar13 + 0x1ea);
            local_d8 = local_a8;
            local_d0 = local_a0;
            local_c8 = local_98;
            local_c0 = local_90;
            local_b8 = local_88;
            local_70 = local_a8;
            local_68 = local_a0;
            local_60 = local_98;
            local_58 = local_90;
            local_50 = local_88;
            if (uVar28 < 0xb) {
              piVar24 = (int *)((int)pvVar13 + uVar18 * 0x1c + 0xb4);
              if (uVar4 < *(ushort *)((int)pvVar13 + 0x1ea)) {
                local_f0 = (LPCWSTR)(uVar18 + 1);
                iVar20 = uVar28 - uVar18;
                memmove((void *)((int)pvVar13 + (int)local_f0 * 0x1c + 0xb4),piVar24,iVar20 * 0x1c);
                *piVar24 = iVar9;
                *(ulonglong *)(piVar24 + 1) = local_d8;
                *(undefined8 *)(piVar24 + 3) = local_d0;
                *(undefined8 *)(piVar24 + 5) = local_c8;
                iVar9 = uVar18 * 0x10;
                memmove((void *)((int)local_f0 * 0x10 + (int)pvVar13),(void *)((int)pvVar13 + iVar9)
                        ,iVar20 * 0x10);
                pWVar17 = local_f0;
                *(undefined8 *)((int)pvVar13 + iVar9) = local_c0;
                *(undefined8 *)((int)pvVar13 + iVar9 + 8) = local_b8;
                memmove((void *)((int)pvVar13 + uVar18 * 4 + 500),
                        (void *)((int)pvVar13 + (int)local_f0 * 4 + 0x1ec),iVar20 * 4);
              }
              else {
                *piVar24 = iVar9;
                *(undefined8 *)(piVar24 + 5) = local_98;
                *(undefined8 *)(piVar24 + 3) = local_a0;
                *(ulonglong *)(piVar24 + 1) = local_a8;
                *(undefined8 *)((int)pvVar13 + uVar18 * 0x10) = local_90;
                *(undefined8 *)((int)pvVar13 + uVar18 * 0x10 + 8) = local_88;
                pWVar17 = (LPCWSTR)(uVar18 + 1);
              }
              *(LPCWSTR *)((int)pvVar13 + uVar18 * 4 + 0x1f0) = pWVar8;
              *(short *)((int)pvVar13 + 0x1ea) = (short)(uVar28 + 1);
              if (pWVar17 < uVar28 + 2) {
                do {
                  iVar9 = *(int *)((int)pvVar13 + uVar18 * 4 + 0x1f0);
                  uVar18 = uVar18 + 1;
                  *(void **)(iVar9 + 0xb0) = pvVar13;
                  *(short *)(iVar9 + 0x1e8) = (short)uVar18;
                } while (uVar28 + 1 != uVar18);
              }
              goto LAB_10113db2;
            }
            local_11c = 4;
            if (uVar4 < 5) {
              ppvVar14 = &local_f4;
            }
            else if (uVar18 == 5) {
              ppvVar14 = &local_f4;
              local_11c = 5;
            }
            else {
              if (uVar18 == 6) {
                uVar18 = 0;
                local_11c = 5;
              }
              else {
                uVar18 = uVar18 - 7;
                local_11c = 6;
              }
              ppvVar14 = &local_ac;
            }
            pvVar12 = FUN_10107380(0,0x21c);
            if (pvVar12 == (LPVOID)0x0) goto LAB_10114a19;
            *(undefined4 *)((int)pvVar12 + 0xb0) = 0;
            uVar25 = ~local_11c + (uint)*(ushort *)((int)pvVar13 + 0x1ea);
            *(short *)((int)pvVar12 + 0x1ea) = (short)uVar25;
            iVar20 = local_11c * 0x1c;
            local_98 = *(undefined8 *)((int)pvVar13 + iVar20 + 200);
            iVar23 = *(int *)((int)pvVar13 + iVar20 + 0xb4);
            local_a0 = *(undefined8 *)((int)pvVar13 + iVar20 + 0xc0);
            local_a8 = *(ulonglong *)((int)pvVar13 + iVar20 + 0xb8);
            local_20 = *(undefined8 *)((int)pvVar13 + local_11c * 0x10);
            local_18 = *(undefined8 *)((int)pvVar13 + local_11c * 0x10 + 8);
            local_f0 = pvVar12;
            if (0xb < uVar25) goto LAB_101149f1;
            memcpy((void *)((int)pvVar12 + 0xb4),
                   (void *)((int)pvVar13 + local_11c + (local_11c + 1) * 0x1b + 0xb5),uVar25 * 0x1c)
            ;
            pWVar17 = local_f0;
            memcpy(local_f0,(void *)((local_11c + 1) * 0x10 + (int)pvVar13),uVar25 * 0x10);
            *(short *)((int)pvVar13 + 0x1ea) = (short)local_11c;
            local_40 = local_a0;
            local_48 = local_a8;
            local_38 = local_98;
            local_30 = local_20;
            local_28 = local_18;
            uVar25 = (uint)*(ushort *)((int)pWVar17 + 0x1ea);
            uVar27 = uVar25 + 1;
            if (0xb < uVar25) {
              FUN_10136a50(0,uVar27,0xc,&PTR_s_C__Users_runneradmin__rustup_too_101565b0);
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            if (uVar28 - local_11c != uVar27) {
              FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10156a98);
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            local_10c = local_10c + 1;
            memcpy((void *)((int)pWVar17 + 0x1ec),(void *)((int)pvVar13 + local_11c * 4 + 0x1f0),
                   uVar27 * 4);
            uVar28 = 0;
            do {
              iVar20 = *(int *)((int)pWVar17 + uVar28 * 4 + 0x1ec);
              uVar27 = uVar28 + (uVar28 < uVar25);
              *(LPCWSTR *)(iVar20 + 0xb0) = pWVar17;
              *(short *)(iVar20 + 0x1e8) = (short)uVar28;
              if (uVar25 <= uVar28) break;
              uVar28 = uVar27;
            } while (uVar27 <= uVar25);
            local_ac = pWVar17;
            local_a0 = local_40;
            pvVar22 = *ppvVar14;
            local_a8 = local_48;
            local_90 = local_30;
            local_98 = local_38;
            piVar24 = (int *)((int)pvVar22 + uVar18 * 0x1c + 0xb4);
            local_88 = local_28;
            uVar4 = *(ushort *)((int)pvVar22 + 0x1ea);
            uVar28 = (uint)uVar4;
            iVar20 = uVar28 - uVar18;
            local_f4 = pvVar13;
            if (uVar28 < uVar18 || iVar20 == 0) {
              *piVar24 = iVar9;
              *(undefined8 *)(piVar24 + 5) = local_c8;
              *(undefined8 *)(piVar24 + 3) = local_d0;
              *(ulonglong *)(piVar24 + 1) = local_d8;
              *(undefined8 *)((int)pvVar22 + uVar18 * 0x10) = local_c0;
              *(undefined8 *)((int)pvVar22 + uVar18 * 0x10 + 8) = local_b8;
            }
            else {
              memmove((void *)((int)pvVar22 + (uVar18 + 1) * 0x1c + 0xb4),piVar24,iVar20 * 0x1c);
              *piVar24 = iVar9;
              *(ulonglong *)(piVar24 + 1) = local_d8;
              *(undefined8 *)(piVar24 + 3) = local_d0;
              *(undefined8 *)(piVar24 + 5) = local_c8;
              iVar9 = uVar18 * 0x10;
              memmove((void *)((uVar18 + 1) * 0x10 + (int)pvVar22),(void *)((int)pvVar22 + iVar9),
                      iVar20 * 0x10);
              *(undefined8 *)((int)pvVar22 + iVar9) = local_c0;
              *(undefined8 *)((int)pvVar22 + iVar9 + 8) = local_b8;
              memmove((void *)((int)pvVar22 + uVar18 * 4 + 500),
                      (void *)((int)pvVar22 + (uVar18 + 1) * 4 + 0x1ec),iVar20 * 4);
            }
            *(LPCWSTR *)((int)pvVar22 + uVar18 * 4 + 0x1f0) = pWVar8;
            *(ushort *)((int)pvVar22 + 0x1ea) = uVar4 + 1;
            if (uVar18 + 1 < uVar28 + 2) {
              uVar18 = uVar18 - 1;
              do {
                iVar9 = *(int *)((int)pvVar22 + uVar18 * 4 + 500);
                sVar7 = (short)uVar18;
                uVar18 = uVar18 + 1;
                *(void **)(iVar9 + 0xb0) = pvVar22;
                *(short *)(iVar9 + 0x1e8) = sVar7 + 2;
              } while (uVar28 != uVar18);
            }
            if (iVar23 == -1) goto LAB_10113db2;
            pvVar22 = *(void **)((int)pvVar13 + 0xb0);
            pvVar19 = pvVar13;
            iVar9 = iVar23;
          } while (*(void **)((int)pvVar13 + 0xb0) != (void *)0x0);
        }
        pWVar8 = local_f0;
        local_d8 = local_a8;
        local_d0 = local_a0;
        local_c8 = local_98;
        local_c0 = local_90;
        local_b8 = local_88;
        local_70 = local_a8;
        local_68 = local_a0;
        local_60 = local_98;
        local_58 = local_90;
        local_50 = local_88;
        puVar15 = FUN_10107380(0,0x21c);
        if (puVar15 == (undefined8 *)0x0) {
LAB_10114a19:
          FUN_1013679e(4,0x21c);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        *(undefined4 *)(puVar15 + 0x16) = 0;
        *(undefined2 *)((int)puVar15 + 0x1ea) = 0;
        *(void **)((int)puVar15 + 0x1ec) = local_74;
        if (local_78 + 1 == 0) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_101565a0);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        *(undefined8 **)((int)local_74 + 0xb0) = puVar15;
        *(undefined2 *)((int)local_74 + 0x1e8) = 0;
        *local_dc = (int)puVar15;
        local_dc[1] = local_78 + 1;
        if (local_10c != local_78) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10157f60);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        *(undefined2 *)((int)puVar15 + 0x1ea) = 1;
        *(int *)((int)puVar15 + 0xb4) = iVar23;
        puVar15[0x17] = local_d8;
        puVar15[0x18] = local_d0;
        puVar15[0x19] = local_c8;
        *puVar15 = local_c0;
        puVar15[1] = local_b8;
        *(LPCWSTR *)(puVar15 + 0x3e) = pWVar8;
        *(undefined8 **)((int)pWVar8 + 0xb0) = puVar15;
        *(undefined2 *)((int)pWVar8 + 0x1e8) = 1;
      }
    }
  }
LAB_10113db2:
  local_dc[2] = local_dc[2] + 1;
  *(undefined4 *)local_b0 = 0xffffffff;
  return;
}
