// rea decompile_all
// name: FUN_1010fa40
// address: 0x1010fa40
// body: available
// range: 0x1010fa40-0x1010fb57 inclusive
// range: 0x1010fb60-0x1010fb7a inclusive
// range: 0x1010fb80-0x1010ff63 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1010fb56) */

void __fastcall FUN_1010fa40(undefined8 *param_1,uint *param_2,char param_3)

{
  LPVOID lpMem;
  code *pcVar1;
  bool bVar2;
  LPWSTR pWVar3;
  uint *puVar4;
  uint uVar5;
  WCHAR WVar6;
  DWORD DVar7;
  HANDLE pvVar8;
  WCHAR WVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  LPCWSTR local_440;
  LPWSTR local_43c;
  LPWSTR local_438;
  uint local_430;
  LPWSTR local_42c;
  uint local_428;
  char local_424 [4];
  LPCWSTR local_420;
  undefined8 *local_418;
  uint *local_414;
  WCHAR local_410 [512];

  uVar13 = param_2[2];
  local_440 = (LPCWSTR)param_2[1];
  if (uVar13 < 4) {
    if (uVar13 == 0) goto LAB_1010fb1c;
    if (uVar13 == 3) {
      if (local_440[1] == L':') {
        WVar6 = local_440[2];
        if (WVar6 != L'\0') goto LAB_1010fac4;
        if ((*local_440 != L'/') && (*local_440 != L'\\')) goto LAB_1010fb10;
      }
    }
    else if (uVar13 == 1) {
      if (*local_440 == L'\0') goto LAB_1010fb10;
      goto LAB_1010fb1c;
    }
    goto LAB_1010faf0;
  }
  if ((*(int *)(local_440 + 2) == 0x5c003f && *(int *)local_440 == 0x5c005c) ||
     (*(int *)(local_440 + 2) == 0x5c003f && *(int *)local_440 == 0x3f005c)) goto LAB_1010fb10;
  if (0xf7 < uVar13) goto LAB_1010fb1c;
  if (local_440[1] == L':') {
    WVar6 = local_440[2];
LAB_1010fac4:
    if ((WVar6 != L'/') && (WVar6 != L'\\')) goto LAB_1010faf0;
    WVar6 = *local_440;
    if ((WVar6 != L'/') && (WVar6 != L'\\')) goto LAB_1010fb10;
  }
  else {
LAB_1010faf0:
    WVar6 = *local_440;
  }
  if (((WVar6 != L'\\') && (WVar6 != L'/')) || ((local_440[1] != L'\\' && (local_440[1] != L'/'))))
  {
LAB_1010fb1c:
    uVar13 = 0x200;
    uVar11 = 0;
    local_430 = 0;
    local_42c = (LPWSTR)0x2;
    local_428 = 0;
    local_43c = (LPWSTR)0x2;
    local_418 = param_1;
    local_414 = param_2;
    do {
      uVar10 = uVar13;
      local_438 = local_410;
      uVar12 = 0x200;
      uVar5 = local_428;
LAB_1010fb90:
      local_428 = uVar5;
      SetLastError(0);
      uVar13 = GetFullPathNameW(local_440,uVar10,local_438,(LPWSTR *)0x0);
      if ((uVar13 == 0) && (DVar7 = GetLastError(), DVar7 != 0)) {
        DVar7 = GetLastError();
        pWVar3 = local_42c;
        if (local_430 != 0) {
          pvVar8 = GetProcessHeap();
          HeapFree(pvVar8,0,pWVar3);
        }
        *(DWORD *)(local_418 + 1) = DVar7;
        *(undefined4 *)((int)local_418 + 4) = 0;
        *(undefined4 *)local_418 = 0xffffffff;
        if (*local_414 == 0) {
          return;
        }
        lpMem = (LPVOID)local_414[1];
        pvVar8 = GetProcessHeap();
        HeapFree(pvVar8,0,lpMem);
        return;
      }
      puVar4 = local_414;
      if (uVar13 == uVar10) {
        DVar7 = GetLastError();
        if (DVar7 != 0x7a) {
          FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10156b90);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar13 = uVar10 * 2;
      }
      else if (uVar13 <= uVar10) {
        if (uVar12 < uVar13) {
          FUN_10136a50(0,uVar13,uVar12,&PTR_s_C__Users_runneradmin__rustup_too_10156b58);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_414[2] = 0;
        if ((param_3 == '\0') && (uVar13 < 0xf7)) {
          uVar11 = *local_414;
          uVar12 = 0;
          uVar10 = uVar11;
          if (uVar11 <= uVar13) {
            uVar10 = uVar13 + 1;
            FUN_10136460((undefined4 *)local_424,uVar11,local_440,uVar10,(LPVOID)0x2,2);
            if (local_424[0] != '\0') goto LAB_1010ff55;
            puVar4[1] = (uint)local_420;
            local_440 = local_420;
            *puVar4 = uVar10;
          }
        }
        else {
          if (uVar13 < 3) {
            if (uVar13 != 2) goto LAB_1010fd41;
            WVar9 = *local_438;
            WVar6 = local_438[1];
            goto LAB_1010fd14;
          }
          WVar6 = local_438[1];
          if ((WVar6 == L':') && (local_438[2] == L'\\')) {
LAB_1010fce7:
            uVar11 = 4;
            local_43c =
            L"\\\\?\\\\\\?\\UNC\\甼歮潮湷䌾尺獕牥屳畲湮牥摡業屮爮獵畴屰潴汯档楡獮湜杩瑨祬砭㘸㙟ⴴ捰眭湩潤獷洭癳屣楬屢畲瑳楬屢牳屣畲瑳汜扩慲祲獜摴獜捲獜獹灜潲散獳睜湩潤獷捜楨摬灟灩⹥獲"
            ;
LAB_1010fd35:
            bVar2 = false;
          }
          else {
            WVar9 = *local_438;
            if (uVar13 == 3) {
LAB_1010fd14:
              if ((WVar6 == L'\\') && (WVar9 == L'\\')) {
                local_438 = local_438 + 2;
                uVar13 = uVar13 - 2;
                local_43c =
                L"\\\\?\\UNC\\甼歮潮湷䌾尺獕牥屳畲湮牥摡業屮爮獵畴屰潴汯档楡獮湜杩瑨祬砭㘸㙟ⴴ捰眭湩潤獷洭癳屣楬屢畲瑳楬屢牳屣畲瑳汜扩慲祲獜摴獜捲獜獹灜潲散獳睜湩潤獷捜楨摬灟灩⹥獲"
                ;
                uVar11 = 8;
                goto LAB_1010fd35;
              }
            }
            else if ((WVar9 == L'\\') && (WVar6 != L'?')) {
              WVar9 = L'\\';
              if (WVar6 == L'\\') {
                WVar6 = L'\\';
                if (local_438[2] == L'?') {
                  WVar9 = L'\\';
                  if (local_438[3] == L'\\') goto LAB_1010fd41;
                }
                else if (local_438[2] == L'.') {
                  WVar9 = L'\\';
                  if (local_438[3] == L'\\') {
                    local_438 = local_438 + 4;
                    uVar13 = uVar13 - 4;
                    goto LAB_1010fce7;
                  }
                }
                else {
                  WVar9 = L'\\';
                }
              }
              goto LAB_1010fd14;
            }
LAB_1010fd41:
            local_43c = (LPWSTR)0x2;
            uVar11 = 0;
            bVar2 = true;
          }
          uVar12 = *local_414;
          uVar10 = uVar13 + 1 + uVar11;
          if (uVar12 < uVar10) {
            FUN_10136460((undefined4 *)local_424,uVar12,local_440,uVar10,(LPVOID)0x2,2);
            if (local_424[0] != '\0') {
LAB_1010ff55:
              FUN_101366bc((int)local_420);
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            puVar4[1] = (uint)local_420;
            *puVar4 = uVar10;
            local_440 = local_420;
            if (uVar11 <= uVar10) goto LAB_1010fd5e;
LAB_1010fec1:
            FUN_101359e0(puVar4,0,uVar11,(LPVOID)0x2,2);
            local_440 = (LPCWSTR)puVar4[1];
            uVar12 = puVar4[2];
            uVar10 = *puVar4;
LAB_1010fd64:
            memcpy(local_440 + uVar12,local_43c,uVar11 * 2);
          }
          else {
            uVar10 = uVar12;
            if (uVar12 < uVar11) goto LAB_1010fec1;
LAB_1010fd5e:
            uVar12 = 0;
            if (!bVar2) goto LAB_1010fd64;
          }
          uVar12 = uVar12 + uVar11;
          puVar4[2] = uVar12;
        }
        if (uVar10 - uVar12 < uVar13) {
          FUN_101359e0(puVar4,uVar12,uVar13,(LPVOID)0x2,2);
          local_440 = (LPCWSTR)puVar4[1];
          uVar12 = puVar4[2];
          uVar10 = *puVar4;
LAB_1010fd9b:
          memcpy(local_440 + uVar12,local_438,uVar13 * 2);
        }
        else if (uVar13 != 0) goto LAB_1010fd9b;
        uVar12 = uVar12 + uVar13;
        puVar4[2] = uVar12;
        if (uVar12 == uVar10) {
          FUN_1013c000(puVar4);
          local_440 = (LPCWSTR)puVar4[1];
        }
        pWVar3 = local_42c;
        local_440[uVar12] = L'\0';
        puVar4[2] = uVar12 + 1;
        if (local_430 != 0) {
          pvVar8 = GetProcessHeap();
          HeapFree(pvVar8,0,pWVar3);
        }
        uVar13 = puVar4[2];
        uVar14 = *(undefined8 *)puVar4;
        param_1 = local_418;
        goto LAB_1010fdf6;
      }
    } while (uVar13 < 0x201);
    uVar10 = uVar11;
    local_438 = local_43c;
    uVar12 = uVar11;
    uVar5 = uVar11;
    if (uVar13 - uVar11 != 0) {
      FUN_101359e0(&local_430,uVar11,uVar13 - uVar11,(LPVOID)0x2,2);
      local_43c = local_42c;
      uVar10 = local_430;
      uVar11 = local_430;
      local_438 = local_42c;
      uVar12 = local_430;
      uVar5 = local_430;
    }
    goto LAB_1010fb90;
  }
LAB_1010fb10:
  uVar13 = param_2[2];
  uVar14 = *(undefined8 *)param_2;
LAB_1010fdf6:
  *(uint *)(param_1 + 1) = uVar13;
  *param_1 = uVar14;
  return;
}
