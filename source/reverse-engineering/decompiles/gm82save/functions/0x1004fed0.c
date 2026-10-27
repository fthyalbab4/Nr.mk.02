// rea decompile_all
// name: FUN_1004fed0
// address: 0x1004fed0
// body: available
// range: 0x1004fed0-0x1004fee8 inclusive
// range: 0x1004fef0-0x100508a9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100504b9) */
/* WARNING: Removing unreachable block (ram,0x1004ff5b) */
/* WARNING: Removing unreachable block (ram,0x1004fff1) */

void __fastcall FUN_1004fed0(uint *param_1,undefined1 (*param_2) [16])

{
  LPVOID lpMem;
  code *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  HANDLE hHeap;
  undefined4 uVar4;
  undefined2 extraout_var;
  uint uVar5;
  byte bVar6;
  char cVar9;
  uint uVar7;
  int iVar8;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  uint unaff_EDI;
  uint uVar12;
  uint in_XMM0_Da;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  uint local_110;
  undefined1 local_100;
  undefined **local_ac;
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  byte local_93;
  uint local_90;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;

LAB_1004fefc:
  do {
    FUN_100496e0((undefined1 (*) [16])&local_ac,param_2);
    if (local_93 == 0xff) {
      if ((char)local_ac == -1) {
LAB_10050034:
        if (*(int *)param_2[6] == -1) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10141b94);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        puVar2 = param_2[0x13] + 4;
        pauVar10 = (undefined1 (*) [16])(param_2[0x13] + 8);
        if (param_2[0x19][1] != '\x02') {
          pauVar10 = param_2 + 0x12;
          puVar2 = param_2[0x11] + 0xc;
        }
        uVar11 = *(uint *)(puVar2 + 0x60);
        local_90 = *(uint *)pauVar10[6];
        if (param_2[0x19][0xc] == '\x01') {
          dVar16 = (double)((ulonglong)uVar11 | 0x4330000000000000) - 4503599627370496.0;
          dVar15 = (double)((ulonglong)local_90 | 0x4330000000000000) - 4503599627370496.0;
          local_28 = ceil(dVar16 * 0.125);
          dVar13 = local_28;
          if (local_28 <= 0.0) {
            dVar13 = 0.0;
          }
          if (4294967295.0 <= dVar13) {
            dVar13 = 4294967295.0;
          }
          local_110 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
          local_20 = ceil(dVar15 * 0.125);
          dVar13 = local_20;
          if (local_20 <= 0.0) {
            dVar13 = 0.0;
          }
          if (4294967295.0 <= dVar13) {
            dVar13 = 4294967295.0;
          }
          uVar14 = 0x100000001;
          uVar4 = 1;
          uVar5 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
          if ((local_110 == 0) || (uVar5 == 0)) {
            local_30 = ceil((dVar16 + -4.0) * 0.125);
            dVar13 = local_30;
            if (local_30 <= 0.0) {
              dVar13 = 0.0;
            }
            if (4294967295.0 <= dVar13) {
              dVar13 = 4294967295.0;
            }
            local_110 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
            if ((local_110 == 0) || (uVar5 == 0)) {
              local_40 = ceil(dVar16 * 0.25);
              dVar13 = local_40;
              if (local_40 <= 0.0) {
                dVar13 = 0.0;
              }
              if (4294967295.0 <= dVar13) {
                dVar13 = 4294967295.0;
              }
              local_110 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
              local_38 = ceil((dVar15 + -4.0) * 0.125);
              if (local_110 == 0) {
LAB_10050325:
                local_50 = ceil((dVar16 + -2.0) * 0.25);
                dVar13 = local_50;
                if (local_50 <= 0.0) {
                  dVar13 = 0.0;
                }
                if (4294967295.0 <= dVar13) {
                  dVar13 = 4294967295.0;
                }
                local_110 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
                local_48 = ceil(dVar15 * 0.25);
                if (local_110 != 0) {
                  dVar13 = local_48;
                  if (local_48 <= 0.0) {
                    dVar13 = 0.0;
                  }
                  if (4294967295.0 <= dVar13) {
                    dVar13 = 4294967295.0;
                  }
                  uVar5 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
                  if (uVar5 != 0) {
                    local_100 = 4;
                    goto LAB_100505ae;
                  }
                }
                local_60 = ceil(dVar16 * 0.5);
                dVar13 = local_60;
                if (local_60 <= 0.0) {
                  dVar13 = 0.0;
                }
                if (4294967295.0 <= dVar13) {
                  dVar13 = 4294967295.0;
                }
                local_110 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
                local_58 = ceil((dVar15 + -2.0) * 0.25);
                if (local_110 != 0) {
                  dVar13 = local_58;
                  if (local_58 <= 0.0) {
                    dVar13 = 0.0;
                  }
                  if (4294967295.0 <= dVar13) {
                    dVar13 = 4294967295.0;
                  }
                  uVar5 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
                  if (uVar5 != 0) {
                    local_100 = 5;
                    goto LAB_100505ae;
                  }
                }
                local_70 = ceil((dVar16 + -1.0) * 0.5);
                dVar13 = local_70;
                if (local_70 <= 0.0) {
                  dVar13 = 0.0;
                }
                if (4294967295.0 <= dVar13) {
                  dVar13 = 4294967295.0;
                }
                local_110 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
                local_68 = ceil(dVar15 * 0.5);
                if (local_110 != 0) {
                  dVar13 = local_68;
                  if (local_68 <= 0.0) {
                    dVar13 = 0.0;
                  }
                  if (4294967295.0 <= dVar13) {
                    dVar13 = 4294967295.0;
                  }
                  uVar5 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
                  if (uVar5 != 0) {
                    local_100 = 6;
                    goto LAB_100505ae;
                  }
                }
                if (dVar16 <= 0.0) {
                  dVar16 = 0.0;
                }
                if (4294967295.0 <= dVar16) {
                  dVar16 = 4294967295.0;
                }
                local_110 = (int)(dVar16 - 2147483648.0) & (int)dVar16 >> 0x1f | (int)dVar16;
                local_78 = ceil((dVar15 + -1.0) * 0.5);
                dVar13 = local_78;
                if (local_78 <= 0.0) {
                  dVar13 = 0.0;
                }
                if (4294967295.0 <= dVar13) {
                  dVar13 = 4294967295.0;
                }
                uVar5 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
                if ((local_110 == 0) || (uVar5 == 0)) {
                  uVar14 = 1;
                  local_100 = 7;
                  uVar4 = 0xffffffff;
                }
                else {
                  uVar14 = 0x100000001;
                  local_100 = 7;
                  uVar4 = 1;
                }
              }
              else {
                dVar13 = local_38;
                if (local_38 <= 0.0) {
                  dVar13 = 0.0;
                }
                if (4294967295.0 <= dVar13) {
                  dVar13 = 4294967295.0;
                }
                uVar5 = (int)(dVar13 - 2147483648.0) & (int)dVar13 >> 0x1f | (int)dVar13;
                if (uVar5 == 0) goto LAB_10050325;
                local_100 = 3;
LAB_100505ae:
                uVar14 = 0x100000001;
                uVar4 = 1;
              }
            }
            else {
              uVar14 = 0x100000001;
              local_100 = 2;
              uVar4 = 1;
            }
          }
          else {
            local_100 = 1;
          }
        }
        else if (local_90 == 0) {
          local_100 = 1;
          uVar14 = 0;
          uVar5 = 0;
          uVar4 = 0xffffffff;
        }
        else {
          uVar14 = 0x100000000;
          uVar4 = 0;
          local_100 = 1;
          uVar5 = local_90;
        }
        bVar6 = param_2[0x19][0xf];
        bVar3 = param_2[0x1a][0];
        uVar7 = (uint)bVar3;
        uVar12 = *(int *)(&DAT_1015fcf0 + (uint)bVar6 * 4) * uVar11;
        if (uVar7 != 8) {
          if (uVar7 == 0x10) {
            uVar12 = uVar12 * 2;
          }
          else {
            if (8 < bVar3) goto LAB_1005089e;
            bVar3 = (byte)(8 / bVar3);
            uVar12 = (uVar12 / bVar3 + 1) - (uint)(uVar12 % (uint)bVar3 == 0);
          }
        }
        *(undefined8 *)(param_2[0x1d] + 8) = uVar14;
        *(uint *)param_2[0x1e] = uVar5;
        *(uint *)(param_2[0x1e] + 4) = local_110;
        *(uint *)(param_2[0x1e] + 8) = uVar11;
        *(uint *)(param_2[0x1e] + 0xc) = local_90;
        param_2[0x1f][0] = local_100;
        *(undefined4 *)(param_2[0x1f] + 4) = uVar4;
        *(undefined4 *)(param_2[0x1f] + 8) = 0;
        *(uint *)(param_2[0x1f] + 0xc) = local_110;
        param_2[0x20][0] = local_100;
        *(uint *)(param_2[0x20] + 4) = uVar11;
        *(uint *)(param_2[0x20] + 8) = local_90;
        *(uint *)(param_2[0x20] + 0xc) = uVar12 + 1;
        param_2[0x21][0] = 0;
        iVar8 = (uVar7 + 7 >> 3) * (uint)(byte)(&DAT_1015fd28)[bVar6];
        if (((3 < iVar8 - 1U) && (iVar8 != 6)) && (iVar8 != 8)) {
          local_ac = &PTR_s_Not_a_possible_byte_rounded_pixe_10150634;
          local_a8 = &LAB_10093d10;
          FUN_101369c0(&DAT_1015063c,&local_ac,&PTR_s_C__Users_runneradmin__cargo_regi_1015066c);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        param_2[0x23][0xd] = (char)iVar8;
        if (*(int *)(param_2[0x21] + 4) != 0) {
          lpMem = *(LPVOID *)(param_2[0x21] + 8);
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,lpMem);
          uVar11 = *(uint *)(param_2[0x20] + 4);
        }
        *(undefined4 *)(param_2[0x21] + 4) = 0;
        *(undefined4 *)(param_2[0x21] + 8) = 1;
        *(undefined4 *)(param_2[0x21] + 0xc) = 0;
        *(undefined4 *)param_2[0x22] = 0;
        *(undefined4 *)(param_2[0x22] + 4) = 0;
        uVar17 = FUN_1004fad0((int)param_2);
        uVar11 = uVar11 * *(int *)(&DAT_1015fd0c + ((uint)uVar17 & 0xff) * 4);
        bVar6 = (byte)(uVar17 >> 0x20);
        if (bVar6 != 8) {
          if (bVar6 != 0x10) {
            if (8 < bVar6) {
LAB_1005089e:
              FUN_10136ca0(&PTR_s_C__Users_runneradmin__cargo_regi_101502e4);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            bVar6 = (byte)(8 / bVar6);
            uVar11 = (uVar11 / bVar6 + 1) - (uint)(uVar11 % (uint)bVar6 == 0);
            iVar8 = *(uint *)(param_2[0x1a] + 4) - uVar11;
            if (uVar11 <= *(uint *)(param_2[0x1a] + 4)) goto LAB_100507c4;
            goto LAB_10050757;
          }
          uVar11 = uVar11 * 2;
        }
        iVar8 = *(uint *)(param_2[0x1a] + 4) - uVar11;
        if (uVar11 <= *(uint *)(param_2[0x1a] + 4)) {
LAB_100507c4:
          *(int *)(param_2[0x1a] + 4) = iVar8;
          *(undefined1 *)param_1 = 0xff;
          return;
        }
LAB_10050757:
        *(undefined1 *)param_1 = 0x25;
        return;
      }
      uVar11 = (uint)local_ac & 0xffffff00;
      unaff_EDI = local_a0;
      goto LAB_10050189;
    }
    cVar9 = local_93 - 2;
    if (local_93 < 2) {
      cVar9 = '\x06';
    }
    if (cVar9 == '\x02') {
      if (((uint)local_a8 & 0xff) == 0x66) {
        bVar6 = local_a8._1_1_ ^ 100;
      }
      else {
        if (((uint)local_a8 & 0xff) != 0x49) goto LAB_1004fefc;
        bVar6 = local_a8._1_1_ ^ 0x44;
      }
      if (local_a8._3_1_ == 'T' && (local_a8._2_1_ == 'A' && bVar6 == 0)) goto LAB_10050034;
      goto LAB_1004fefc;
    }
    if (cVar9 == '\n') {
      uVar11 = 0;
      local_ac = (undefined **)0x3;
      local_a4 = CONCAT31(CONCAT21(extraout_var,local_a8._2_1_),local_a8._3_1_);
      local_a8 = (undefined1 *)in_XMM0_Da;
LAB_10050189:
      *param_1 = (uint)local_ac & 0xff | uVar11;
      param_1[1] = (uint)local_a8;
      param_1[2] = local_a4;
      param_1[3] = unaff_EDI;
      return;
    }
  } while( true );
}
