// rea decompile_all
// name: FUN_1011b4d0
// address: 0x1011b4d0
// body: available
// range: 0x1011b4d0-0x1011b511 inclusive
// range: 0x1011b520-0x1011b53d inclusive
// range: 0x1011b540-0x1011b755 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011b4d0(DWORD *param_1,LPCWSTR param_2,DWORD *param_3)

{
  LPVOID lpMem;
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  HANDLE pvVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  LPVOID pvVar10;
  WCHAR *lpBuffer;
  LPWSTR pWVar11;
  uint local_434;
  LPWSTR local_430;
  uint local_42c;
  DWORD *local_428;
  LPWSTR local_424;
  uint local_420;
  uint local_41c;
  LPVOID local_418;
  DWORD local_414;
  WCHAR local_410 [512];

  uVar8 = 0x200;
  uVar9 = 0;
  local_434 = 0;
  local_430 = (LPWSTR)0x2;
  local_42c = 0;
  local_424 = (LPWSTR)0x2;
  local_428 = param_1;
  do {
    local_420 = 0x200;
    lpBuffer = local_410;
    uVar7 = uVar8;
    uVar2 = local_42c;
    uVar3 = local_420;
LAB_1011b552:
    local_420 = uVar3;
    local_42c = uVar2;
    SetLastError(0);
    uVar8 = GetFullPathNameW(param_2,uVar7,lpBuffer,(LPWSTR *)0x0);
    if ((uVar8 == 0) && (DVar4 = GetLastError(), DVar4 != 0)) {
      DVar4 = GetLastError();
      pWVar11 = local_430;
      *(undefined1 *)(local_428 + 1) = 0;
      local_428[2] = DVar4;
      *local_428 = 0xffffffff;
      if (local_434 != 0) {
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pWVar11);
      }
      if (*param_3 == 0) {
        return;
      }
      pWVar11 = (LPWSTR)param_3[1];
LAB_1011b666:
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,pWVar11);
      return;
    }
    if (uVar8 == uVar7) {
      DVar4 = GetLastError();
      if (DVar4 != 0x7a) {
        FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10156b90);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar8 = uVar7 * 2;
    }
    else if (uVar8 <= uVar7) {
      if (local_420 < uVar8) {
        FUN_10136a50(0,uVar8,local_420,&PTR_s_C__Users_runneradmin__rustup_too_10156b58);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar9 = param_3[2];
      if (uVar9 < 7) {
        FUN_10136a50(6,uVar9 - 1,uVar9,&DAT_10156e88);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      DVar4 = *param_3;
      lpMem = (LPVOID)param_3[1];
      if ((uVar8 == uVar9 - 7) &&
         (iVar5 = memcmp(lpBuffer,(void *)((int)lpMem + 0xc),uVar8 * 2), iVar5 == 0)) {
        if (uVar8 == 0) {
          local_41c = 0;
          local_418 = (LPVOID)0x2;
          local_414 = 0;
        }
        else {
          local_418 = FUN_10107380(0,uVar8 * 2);
          if (local_418 == (LPVOID)0x0) {
            FUN_101366bc(2);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_41c = uVar8;
          memcpy(local_418,lpBuffer,uVar8 * 2);
          local_414 = uVar8;
        }
        FUN_1013c000(&local_41c);
        pvVar10 = local_418;
        uVar7 = local_41c;
        *(undefined2 *)((int)local_418 + uVar8 * 2) = 0;
        uVar9 = uVar8 + 1;
        if (DVar4 != 0) {
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,0,lpMem);
        }
      }
      else {
        *(undefined2 *)((int)lpMem + 0xc) = 0x43;
        uVar7 = DVar4;
        pvVar10 = lpMem;
      }
      *local_428 = uVar7;
      local_428[1] = (DWORD)pvVar10;
      local_428[2] = uVar9;
      pWVar11 = local_430;
      if (local_434 == 0) {
        return;
      }
      goto LAB_1011b666;
    }
  } while (uVar8 < 0x201);
  lpBuffer = local_424;
  uVar7 = uVar9;
  uVar2 = uVar9;
  uVar3 = uVar9;
  if (uVar8 - uVar9 != 0) {
    FUN_101359e0(&local_434,uVar9,uVar8 - uVar9,(LPVOID)0x2,2);
    local_424 = local_430;
    uVar9 = local_434;
    lpBuffer = local_430;
    uVar7 = local_434;
    uVar2 = local_434;
    uVar3 = local_434;
  }
  goto LAB_1011b552;
}
