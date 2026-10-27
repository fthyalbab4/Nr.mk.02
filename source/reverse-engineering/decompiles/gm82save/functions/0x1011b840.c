// rea decompile_all
// name: FUN_1011b840
// address: 0x1011b840
// body: available
// range: 0x1011b840-0x1011b95a inclusive
// range: 0x1011b960-0x1011b987 inclusive
// range: 0x1011b990-0x1011b997 inclusive
// range: 0x1011b9a0-0x1011b9d4 inclusive
// range: 0x1011b9e0-0x1011bb16 inclusive
// range: 0x1011bb20-0x1011bb8c inclusive
// range: 0x1011bb90-0x1011be45 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011b840(undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  byte bVar3;
  LPWSTR pWVar4;
  HANDLE pvVar5;
  ushort *puVar6;
  uint uVar7;
  SIZE_T SVar8;
  ushort *puVar9;
  int *piVar10;
  WCHAR *pWVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  WCHAR WVar15;
  LPVOID lpMem;
  int iVar16;
  uint uVar17;
  WCHAR *pWVar18;
  bool bVar19;
  int local_58;
  uint local_54;
  ushort *local_50;
  uint local_4c;
  uint local_48;
  int *local_44;
  uint local_40;
  ushort *local_3c;
  uint local_38;
  int local_34;
  int iStack_30;
  int *local_2c;
  int iStack_28;
  uint local_24;
  ushort *local_20;
  SIZE_T local_1c;
  ushort *local_18;
  undefined4 *local_14;

  pWVar4 = GetCommandLineW();
  local_48 = 0;
  local_44 = (int *)&DAT_00000004;
  local_40 = 0;
  local_14 = param_1;
  if ((pWVar4 == (LPWSTR)0x0) || (WVar15 = *pWVar4, WVar15 == L'\0')) {
    FUN_10119e60((undefined8 *)&local_34);
    if (local_34 == -1) {
      if ((char)iStack_30 == '\x03') {
        puVar1 = (undefined4 *)local_2c[1];
        lpMem = (LPVOID)*local_2c;
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)(lpMem);
        }
        if (puVar1[1] != 0) {
          if (8 < (uint)puVar1[2]) {
            lpMem = *(LPVOID *)((int)lpMem + -4);
          }
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,lpMem);
        }
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,local_2c);
      }
      local_58 = 1;
      iVar13 = 0;
      iVar16 = 1;
      piVar10 = (int *)0x0;
    }
    else {
      local_58 = iStack_28;
      iVar13 = local_34;
      iVar16 = iStack_30;
      piVar10 = local_2c;
    }
    FUN_10135f30(&local_48);
    *local_44 = iVar13;
    local_44[1] = iVar16;
    local_44[2] = (int)piVar10;
    local_44[3] = local_58;
    uVar17 = 1;
    piVar10 = local_44;
    uVar7 = local_48;
  }
  else {
    bVar2 = false;
    puVar6 = (ushort *)0x2;
    SVar8 = 0;
    local_24 = 0;
    local_20 = (ushort *)0x2;
    local_1c = 0;
    pWVar18 = pWVar4 + 1;
LAB_1011b971:
    do {
      pWVar11 = pWVar18;
      if ((WVar15 == L'\t') || (WVar15 == L' ')) {
        if (!bVar2) break;
      }
      else if (WVar15 == L'\"') {
        bVar2 = (bool)(bVar2 ^ 1);
        WVar15 = *pWVar11;
        pWVar18 = pWVar11 + 1;
        if (WVar15 == L'\0') break;
        goto LAB_1011b971;
      }
      if (SVar8 == local_24) {
        FUN_1013c000(&local_24);
        puVar6 = local_20;
      }
      puVar6[SVar8] = WVar15;
      SVar8 = SVar8 + 1;
      WVar15 = *pWVar11;
      pWVar18 = pWVar11 + 1;
      local_1c = SVar8;
    } while (WVar15 != L'\0');
    for (; (*pWVar11 == L' ' || (*pWVar11 == L'\t')); pWVar11 = pWVar11 + 1) {
    }
    local_18 = local_20;
    FUN_10093310((undefined8 *)&local_34,local_20,SVar8);
    FUN_10135f30(&local_48);
    uVar14 = 0;
    *(ulonglong *)(local_44 + 2) = CONCAT44(iStack_28,local_2c);
    *(ulonglong *)local_44 = CONCAT44(iStack_30,local_34);
    local_54 = 0;
    local_50 = (ushort *)0x2;
    local_40 = 1;
    local_4c = 0;
    WVar15 = *pWVar11;
    if (WVar15 == L'\0') {
      bVar2 = false;
    }
    else {
      puVar6 = (ushort *)0x2;
      bVar2 = false;
      do {
        puVar9 = local_50;
        pWVar18 = pWVar11 + 1;
        if ((ushort)WVar15 < 0x22) {
          if (((WVar15 != L'\t') && (WVar15 != L' ')) || (bVar2)) {
LAB_1011bb90:
            if (uVar14 == local_54) {
              FUN_1013c000(&local_54);
            }
            local_50[uVar14] = WVar15;
LAB_1011bba2:
            uVar14 = uVar14 + 1;
            puVar6 = local_50;
            goto LAB_1011bba7;
          }
          FUN_10093310((undefined8 *)&local_34,local_50,uVar14);
          uVar7 = local_40;
          if (local_40 == local_48) {
            FUN_10135f30(&local_48);
          }
          local_40 = uVar7 + 1;
          *(ulonglong *)(local_44 + uVar7 * 4) = CONCAT44(iStack_30,local_34);
          *(ulonglong *)(local_44 + uVar7 * 4 + 2) = CONCAT44(iStack_28,local_2c);
          local_4c = 0;
          for (; (WVar15 = *pWVar18, WVar15 == L' ' || (WVar15 == L'\t')); pWVar18 = pWVar18 + 1) {
          }
          uVar14 = 0;
          puVar6 = puVar9;
          pWVar11 = pWVar18;
        }
        else if (WVar15 == L'\"') {
          if (bVar2) {
            WVar15 = *pWVar18;
            if (WVar15 == L'\"') {
              if (uVar14 == local_54) {
                FUN_1013c000(&local_54);
              }
              bVar2 = true;
              local_50[uVar14] = 0x22;
              uVar14 = uVar14 + 1;
              if (pWVar11[1] != L'\0') {
                pWVar18 = pWVar11 + 2;
              }
              WVar15 = *pWVar18;
              puVar6 = local_50;
              pWVar11 = pWVar18;
              local_4c = uVar14;
              goto LAB_1011ba70;
            }
            if (WVar15 == L'\0') goto LAB_1011bda7;
            bVar2 = false;
            pWVar11 = pWVar18;
          }
          else {
            WVar15 = *pWVar18;
            bVar2 = true;
            pWVar11 = pWVar18;
          }
        }
        else {
          if (WVar15 != L'\\') goto LAB_1011bb90;
          uVar7 = 0;
          WVar15 = *pWVar18;
          while (WVar15 == L'\\') {
            iVar13 = uVar7 + 2;
            pWVar18 = pWVar18 + 1;
            uVar7 = uVar7 + 1;
            WVar15 = pWVar11[iVar13];
          }
          uVar17 = uVar7 + 1;
          if (WVar15 == L'\"') {
            uVar12 = uVar17 >> 1;
            local_38 = uVar7;
            if (local_54 - uVar14 < uVar12) {
              FUN_101359e0(&local_54,uVar14,uVar12,(LPVOID)0x2,2);
              uVar14 = local_4c;
joined_r0x1011bc80:
              puVar6 = local_50;
              local_50 = puVar6;
              if (0x1f < uVar17) {
                puVar9 = puVar6 + uVar14 + 8;
                uVar17 = uVar12 & 0xfffffff0;
                uVar14 = uVar14 + uVar17;
                uVar7 = uVar17;
                do {
                  *(undefined4 *)(puVar9 + -8) = 0x5c005c;
                  *(undefined4 *)(puVar9 + -6) = 0x5c005c;
                  *(undefined4 *)(puVar9 + -4) = 0x5c005c;
                  *(undefined4 *)(puVar9 + -2) = 0x5c005c;
                  *(undefined4 *)puVar9 = 0x5c005c;
                  *(undefined4 *)(puVar9 + 2) = 0x5c005c;
                  *(undefined4 *)(puVar9 + 4) = 0x5c005c;
                  *(undefined4 *)(puVar9 + 6) = 0x5c005c;
                  puVar9 = puVar9 + 0x10;
                  uVar7 = uVar7 - 0x10;
                } while (uVar7 != 0);
                bVar19 = uVar12 == uVar17;
                uVar12 = uVar12 & 0xf;
                local_3c = puVar6;
                if (bVar19) goto LAB_1011bcca;
              }
              do {
                puVar6[uVar14] = 0x5c;
                uVar14 = uVar14 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            else if (uVar12 != 0) goto joined_r0x1011bc80;
LAB_1011bcca:
            if ((local_38 & 1) == 0) {
              bVar3 = *pWVar18 != L'\0';
              if (uVar14 == local_54) {
                local_38 = CONCAT31(local_38._1_3_,*pWVar18 != L'\0');
                local_4c = uVar14;
                FUN_1013c000(&local_54);
                bVar3 = (byte)local_38;
              }
              pWVar18 = pWVar18 + bVar3;
              local_50[uVar14] = 0x22;
              goto LAB_1011bba2;
            }
          }
          else if (local_54 - uVar14 < uVar17) {
            FUN_101359e0(&local_54,uVar14,uVar17,(LPVOID)0x2,2);
            puVar6 = local_50;
            uVar14 = local_4c;
joined_r0x1011bd44:
            if (0xf < uVar17) {
              puVar9 = puVar6 + uVar14 + 8;
              uVar12 = uVar17 & 0xfffffff0;
              uVar14 = uVar14 + uVar12;
              uVar7 = uVar12;
              do {
                *(undefined4 *)(puVar9 + -8) = 0x5c005c;
                *(undefined4 *)(puVar9 + -6) = 0x5c005c;
                *(undefined4 *)(puVar9 + -4) = 0x5c005c;
                *(undefined4 *)(puVar9 + -2) = 0x5c005c;
                *(undefined4 *)puVar9 = 0x5c005c;
                *(undefined4 *)(puVar9 + 2) = 0x5c005c;
                *(undefined4 *)(puVar9 + 4) = 0x5c005c;
                *(undefined4 *)(puVar9 + 6) = 0x5c005c;
                puVar9 = puVar9 + 0x10;
                uVar7 = uVar7 - 0x10;
              } while (uVar7 != 0);
              bVar19 = uVar17 == uVar12;
              uVar17 = uVar17 & 0xf;
              local_3c = puVar6;
              if (bVar19) goto LAB_1011bba7;
            }
            do {
              puVar6[uVar14] = 0x5c;
              uVar14 = uVar14 + 1;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          else if (uVar17 != 0) goto joined_r0x1011bd44;
LAB_1011bba7:
          WVar15 = *pWVar18;
          pWVar11 = pWVar18;
          local_4c = uVar14;
        }
LAB_1011ba70:
      } while (WVar15 != L'\0');
    }
    puVar6 = local_50;
    uVar7 = local_48;
    piVar10 = local_44;
    uVar17 = local_40;
    if (uVar14 != 0 || bVar2) {
LAB_1011bda7:
      uVar17 = local_40;
      FUN_10093310((undefined8 *)&local_34,local_50,uVar14);
      if (uVar17 == local_48) {
        FUN_10135f30(&local_48);
      }
      *(ulonglong *)(local_44 + uVar17 * 4 + 2) = CONCAT44(iStack_28,local_2c);
      *(ulonglong *)(local_44 + uVar17 * 4) = CONCAT44(iStack_30,local_34);
      puVar6 = local_50;
      uVar7 = local_48;
      piVar10 = local_44;
      uVar17 = uVar17 + 1;
    }
    local_50 = puVar6;
    local_48 = uVar7;
    local_44 = piVar10;
    if (local_54 != 0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,puVar6);
    }
    if (local_24 != 0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,local_18);
    }
  }
  *local_14 = piVar10;
  local_14[1] = piVar10;
  local_14[2] = uVar7;
  local_14[3] = piVar10 + uVar17 * 4;
  return;
}
