// rea decompile_all
// name: FUN_100f5bd0
// address: 0x100f5bd0
// body: available
// range: 0x100f5bd0-0x100f5c8b inclusive
// range: 0x100f5c90-0x100f5d11 inclusive
// range: 0x100f5d20-0x100f6140 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100f5bd0(uint *param_1)

{
  LPVOID lpMem;
  code *pcVar1;
  int iVar2;
  uint uVar3;
  HANDLE pvVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint local_13c;
  uint *local_134;
  uint local_12c;
  uint *local_128;
  uint local_124;
  uint local_120;
  uint *local_11c;
  uint local_118;
  uint *local_114 [2];
  uint local_10c;
  uint *local_108;
  uint local_c0 [22];
  uint local_68 [22];

  uVar9 = *param_1;
  if (uVar9 == 0xffffffff) {
    if ((*(int *)param_1[1] == -1) || (*(int *)param_1[1] != 0x110000)) goto LAB_100f5c42;
    iVar6 = *(int *)param_1[2];
  }
  else {
    uVar10 = 2;
    if (0x10ffff < uVar9) {
      uVar10 = uVar9 - 0x110000;
    }
    if (uVar10 < 6) {
      return;
    }
    if (uVar10 != 6) {
      if (param_1[3] == 0) {
        return;
      }
      goto LAB_100f5c42;
    }
    iVar6 = *(int *)param_1[1];
  }
  if ((iVar6 != -1) && (iVar6 == 0x110000)) {
    return;
  }
LAB_100f5c42:
  local_134 = FUN_10107380(0,0x58);
  if (local_134 == (uint *)0x0) {
    FUN_1013679e(4,0x58);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar11 = param_1;
  puVar7 = local_134;
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar7 = puVar7 + 1;
  }
  *param_1 = 0x110000;
  local_12c = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar9 = 1;
  local_128 = local_134;
  do {
    local_13c = uVar9 - 1;
    local_120 = local_12c;
    local_124 = local_13c;
    memmove(local_68,local_134 + local_13c * 0x16,0x58);
    puVar11 = local_68;
    puVar7 = &local_118;
    for (iVar6 = 0x16; uVar10 = local_10c, puVar12 = local_114[1], iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar7 = puVar7 + 1;
    }
    if (local_118 == 0xffffffff) {
      puVar11 = local_c0;
      puVar7 = local_114[0];
      puVar12 = puVar11;
      for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      *local_114[0] = 0x110000;
      local_114[0][1] = 0;
      local_114[0][2] = 0;
      local_114[0][3] = 0;
      local_114[0][4] = 0;
      local_114[0][5] = 0;
      local_114[0][6] = 0;
      puVar7 = puVar11;
      puVar12 = local_128 + local_13c * 0x16;
      for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      puVar7 = local_114[1];
      puVar12 = puVar11;
      for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      *local_114[1] = 0x110000;
      local_114[1][1] = 0;
      local_114[1][2] = 0;
      local_114[1][3] = 0;
      local_114[1][4] = 0;
      local_114[1][5] = 0;
      local_114[1][6] = 0;
      if (uVar9 == local_120) {
        local_124 = uVar9;
        FUN_1013bc40(&local_12c);
      }
      local_134 = local_128;
      iVar6 = 0x16;
      local_13c = uVar9 + 1;
      puVar7 = local_128 + uVar9 * 0x16;
LAB_100f5da7:
      for (; local_124 = local_13c, puVar14 = local_11c, iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    else {
      uVar3 = local_118 - 0x110000;
      if (local_118 < 0x110000) {
        uVar3 = 2;
      }
      puVar14 = local_11c;
      if (5 < uVar3) {
        if (uVar3 == 6) {
          puVar11 = local_114[0];
          puVar7 = local_c0;
          for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar7 = puVar7 + 1;
          }
          *local_114[0] = 0x110000;
          local_114[0][1] = 0;
          local_114[0][2] = 0;
          local_114[0][3] = 0;
          local_114[0][4] = 0;
          local_114[0][5] = 0;
          local_114[0][6] = 0;
          iVar6 = 0x16;
          local_134 = local_128;
          iVar2 = local_13c * 0x16;
          local_13c = uVar9;
          puVar11 = local_c0;
          puVar7 = local_128 + iVar2;
          goto LAB_100f5da7;
        }
        local_10c = 0;
        puVar11 = local_114[1] + uVar10 * 0x16;
        if (local_120 - local_13c < uVar10) {
          FUN_101359e0(&local_12c,local_13c,uVar10,&DAT_00000004,0x58);
          local_134 = local_128;
        }
        else {
          local_124 = local_13c;
          puVar7 = local_114[1];
          if (uVar10 == 0) {
joined_r0x100f5f49:
            local_11c = puVar7;
            local_124 = local_13c;
            if (puVar11 != local_11c) {
              uVar9 = 0;
              local_120 = ((uint)((int)puVar11 - (int)local_11c) >> 3) * -0x45d1745d;
              puVar11 = local_11c;
              do {
                iVar6 = puVar11[uVar9 * 0x16] - 0x110000;
                if (puVar11[uVar9 * 0x16] < 0x110000) {
                  iVar6 = 2;
                }
                puVar7 = puVar11;
                switch(iVar6) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 5:
                  break;
                case 4:
                  uVar10 = puVar11[uVar9 * 0x16 + 1];
                  iVar6 = uVar10 + 0x80000000;
                  if (-1 < (int)uVar10) {
                    iVar6 = 2;
                  }
                  if (iVar6 != 0) {
                    if (iVar6 == 1) {
                      uVar10 = puVar11[uVar9 * 0x16 + 2];
                      iVar6 = 8;
                    }
                    else {
                      if (uVar10 != 0) {
                        lpMem = (LPVOID)puVar11[uVar9 * 0x16 + 2];
                        pvVar4 = GetProcessHeap();
                        puVar7 = local_11c;
                        HeapFree(pvVar4,0,lpMem);
                      }
                      uVar10 = puVar11[uVar9 * 0x16 + 4];
                      iVar6 = 0x10;
                    }
                    if (uVar10 != 0) {
                      puVar12 = *(uint **)((int)puVar11 + iVar6 + uVar9 * 0x58 + 4);
                      pvVar4 = GetProcessHeap();
                      puVar7 = local_11c;
                      goto LAB_100f60b6;
                    }
                  }
                  break;
                case 6:
                  FUN_100f5ac0(puVar11 + uVar9 * 0x16 + 1);
                  break;
                default:
                  puVar12 = (uint *)puVar11[uVar9 * 0x16 + 2];
                  puVar14 = puVar12;
                  puVar7 = local_11c;
                  for (uVar10 = puVar11[uVar9 * 0x16 + 3]; local_11c = puVar7, uVar10 != 0;
                      uVar10 = uVar10 - 1) {
                    FUN_100f0720(puVar14);
                    puVar14 = puVar14 + 0x16;
                    puVar7 = local_11c;
                  }
                  if (puVar11[uVar9 * 0x16 + 1] != 0) {
                    pvVar4 = GetProcessHeap();
LAB_100f60b6:
                    HeapFree(pvVar4,0,puVar12);
                  }
                }
                uVar9 = uVar9 + 1;
                puVar11 = puVar7;
                puVar14 = local_11c;
              } while (uVar9 != local_120);
            }
            goto LAB_100f5db1;
          }
        }
        puVar5 = local_134 + local_124 * 0x16 + 1;
        local_13c = local_124;
        do {
          puVar7 = puVar12 + 0x16;
          uVar9 = *puVar12;
          puVar14 = local_11c;
          if (uVar9 == 0xffffffff) goto joined_r0x100f5f49;
          puVar8 = puVar12 + 0x16;
          puVar13 = local_c0;
          for (iVar6 = 0x15; puVar12 = puVar12 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar12;
            puVar13 = puVar13 + 1;
          }
          puVar5[-1] = uVar9;
          local_13c = local_13c + 1;
          puVar12 = local_c0;
          puVar13 = puVar5;
          for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          puVar5 = puVar5 + 0x16;
          puVar12 = puVar7;
          local_124 = local_13c;
        } while (puVar8 != puVar11);
      }
    }
LAB_100f5db1:
    local_11c = puVar14;
    FUN_100f5bd0(&local_118);
    puVar11 = local_114[1];
    if (local_118 == 0xffffffff) {
      FUN_100f6180(local_114);
      FUN_100f6180(local_114 + 1);
    }
    else {
      iVar6 = local_118 - 0x110000;
      if (local_118 < 0x110000) {
        iVar6 = 2;
      }
      switch(iVar6) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 5:
        break;
      case 4:
        puVar7 = local_114[0] + -0x20000000;
        if (-1 < (int)local_114[0]) {
          puVar7 = (uint *)0x2;
        }
        if (puVar7 != (uint *)0x0) {
          if (puVar7 == (uint *)0x1) {
            iVar6 = 8;
          }
          else {
            if (local_114[0] != (uint *)0x0) {
              pvVar4 = GetProcessHeap();
              HeapFree(pvVar4,0,puVar11);
            }
            iVar6 = 0x10;
            puVar11 = local_108;
          }
          if (puVar11 != (uint *)0x0) {
            puVar11 = *(uint **)((int)local_114 + iVar6);
            pvVar4 = GetProcessHeap();
            goto LAB_100f5f83;
          }
        }
        break;
      case 6:
        FUN_100f5ac0(local_114);
        break;
      default:
        puVar7 = local_114[1];
        for (uVar9 = local_10c; uVar9 != 0; uVar9 = uVar9 - 1) {
          FUN_100f0720(puVar7);
          puVar7 = puVar7 + 0x16;
        }
        if (local_114[0] != (uint *)0x0) {
          pvVar4 = GetProcessHeap();
LAB_100f5f83:
          HeapFree(pvVar4,0,puVar11);
        }
      }
    }
    puVar11 = local_128;
    uVar9 = local_13c;
    if (local_13c == 0) {
      if (local_12c != 0) {
        pvVar4 = GetProcessHeap();
        HeapFree(pvVar4,0,puVar11);
      }
      return;
    }
  } while( true );
}
