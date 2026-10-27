// rea decompile_all
// name: FUN_1011b240
// address: 0x1011b240
// body: available
// range: 0x1011b240-0x1011b282 inclusive
// range: 0x1011b290-0x1011b2ac inclusive
// range: 0x1011b2b0-0x1011b4cd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1011b281) */

void __fastcall FUN_1011b240(DWORD *param_1,LPCWSTR param_2,DWORD *param_3)

{
  LPVOID lpMem;
  code *pcVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE pvVar5;
  uint uVar6;
  uint uVar7;
  WCHAR *lpBuffer;
  LPVOID pvVar8;
  LPWSTR pWVar9;
  uint uVar10;
  bool bVar11;
  uint local_438;
  uint local_430;
  LPWSTR local_42c;
  uint local_428;
  DWORD *local_424;
  LPWSTR local_420;
  uint local_41c;
  LPVOID local_418;
  DWORD local_414;
  WCHAR local_410 [512];

  uVar6 = 0x200;
  uVar7 = 0;
  local_430 = 0;
  local_42c = (LPWSTR)0x2;
  local_428 = 0;
  local_420 = (LPWSTR)0x2;
  local_424 = param_1;
  do {
    local_438 = 0x200;
    lpBuffer = local_410;
    uVar10 = uVar6;
    uVar2 = local_428;
LAB_1011b2c1:
    local_428 = uVar2;
    SetLastError(0);
    uVar6 = GetFullPathNameW(param_2,uVar10,lpBuffer,(LPWSTR *)0x0);
    if ((uVar6 == 0) && (DVar3 = GetLastError(), DVar3 != 0)) {
      DVar3 = GetLastError();
      pWVar9 = local_42c;
      *(undefined1 *)(local_424 + 1) = 0;
      local_424[2] = DVar3;
      *local_424 = 0xffffffff;
      if (local_430 != 0) {
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pWVar9);
      }
      if (*param_3 == 0) {
        return;
      }
      pWVar9 = (LPWSTR)param_3[1];
LAB_1011b3d4:
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pWVar9);
      return;
    }
    if (uVar6 == uVar10) {
      DVar3 = GetLastError();
      if (DVar3 != 0x7a) {
        FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10156b90);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar6 = uVar10 * 2;
    }
    else if (uVar6 <= uVar10) {
      if (local_438 < uVar6) {
        FUN_10136a50(0,uVar6,local_438,&PTR_s_C__Users_runneradmin__rustup_too_10156b58);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar7 = param_3[2];
      if (uVar7 < 5) {
        FUN_10136a50(4,uVar7 - 1,uVar7,&DAT_10156e98);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      DVar3 = *param_3;
      lpMem = (LPVOID)param_3[1];
      pvVar8 = lpMem;
      if ((uVar6 == uVar7 - 5) &&
         (iVar4 = memcmp(lpBuffer,(void *)((int)lpMem + 8),uVar6 * 2), iVar4 == 0)) {
        if (uVar6 == 0) {
          local_41c = 0;
          local_418 = (LPVOID)0x2;
          local_414 = 0;
        }
        else {
          local_418 = FUN_10107380(0,uVar6 * 2);
          if (local_418 == (LPVOID)0x0) {
            FUN_101366bc(2);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_41c = uVar6;
          memcpy(local_418,lpBuffer,uVar6 * 2);
          local_414 = uVar6;
        }
        FUN_1013c000(&local_41c);
        pvVar8 = local_418;
        uVar10 = local_41c;
        *(undefined2 *)((int)local_418 + uVar6 * 2) = 0;
        uVar7 = uVar6 + 1;
        bVar11 = DVar3 != 0;
        DVar3 = uVar10;
        if (bVar11) {
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,lpMem);
        }
      }
      *local_424 = DVar3;
      local_424[1] = (DWORD)pvVar8;
      local_424[2] = uVar7;
      pWVar9 = local_42c;
      if (local_430 == 0) {
        return;
      }
      goto LAB_1011b3d4;
    }
  } while (uVar6 < 0x201);
  lpBuffer = local_420;
  uVar10 = uVar7;
  local_438 = uVar7;
  uVar2 = uVar7;
  if (uVar6 - uVar7 != 0) {
    FUN_101359e0(&local_430,uVar7,uVar6 - uVar7,(LPVOID)0x2,2);
    local_420 = local_42c;
    uVar7 = local_430;
    lpBuffer = local_42c;
    uVar10 = local_430;
    local_438 = local_430;
    uVar2 = local_430;
  }
  goto LAB_1011b2c1;
}
