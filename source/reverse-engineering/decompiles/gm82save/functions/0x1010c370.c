// rea decompile_all
// name: FUN_1010c370
// address: 0x1010c370
// body: available
// range: 0x1010c370-0x1010c3db inclusive
// range: 0x1010c3e0-0x1010c3fd inclusive
// range: 0x1010c400-0x1010c61b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010c370(undefined8 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *lpMem;
  uint uVar3;
  uint uVar4;
  DWORD DVar5;
  HANDLE pvVar6;
  uint uVar7;
  uint nSize;
  uint uVar8;
  LPWSTR pWVar9;
  LPVOID pvVar10;
  uint local_43c;
  LPWSTR local_438;
  uint local_434;
  LPWSTR local_430;
  uint local_42c;
  LPCWSTR local_428;
  int local_424;
  uint uStack_420;
  int *local_41c;
  undefined4 uStack_418;
  int local_414;
  int local_410;
  LPCWSTR local_40c;
  int *local_408;

  FUN_1010c620((undefined8 *)&local_410,param_2,param_3);
  if (local_410 == -1) {
    if ((char)local_40c == '\x03') {
      puVar1 = (undefined4 *)local_408[1];
      pvVar10 = (LPVOID)*local_408;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(pvVar10);
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          pvVar10 = *(LPVOID *)((int)pvVar10 + -4);
        }
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pvVar10);
      }
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,local_408);
    }
    *(undefined4 *)param_1 = 0xffffffff;
    return;
  }
  uVar7 = 0x200;
  uVar8 = 0;
  local_43c = 0;
  local_438 = (LPWSTR)0x2;
  local_414 = local_410;
  local_434 = 0;
  local_430 = (LPWSTR)0x2;
  local_428 = local_40c;
  do {
    local_42c = 0x200;
    nSize = uVar7;
    pWVar9 = (LPWSTR)&local_410;
    uVar3 = local_434;
    uVar4 = local_42c;
LAB_1010c412:
    local_42c = uVar4;
    local_434 = uVar3;
    SetLastError(0);
    uVar7 = GetEnvironmentVariableW(local_428,pWVar9,nSize);
    if ((uVar7 == 0) && (DVar5 = GetLastError(), DVar5 != 0)) {
      local_41c = (int *)GetLastError();
      uStack_420 = uStack_420 & 0xffffff00;
      local_424 = -1;
      if (local_43c == 0) {
        *(undefined4 *)param_1 = 0xffffffff;
        goto joined_r0x1010c5bd;
      }
LAB_1010c549:
      pWVar9 = local_438;
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,pWVar9);
      lpMem = local_41c;
joined_r0x1010c562:
      local_41c = lpMem;
      if (local_424 == -1) {
        *(undefined4 *)param_1 = 0xffffffff;
        if ((char)uStack_420 == '\x03') {
          puVar1 = (undefined4 *)lpMem[1];
          pvVar10 = (LPVOID)*lpMem;
          if ((code *)*puVar1 != (code *)0x0) {
            (*(code *)*puVar1)(pvVar10);
          }
          if (puVar1[1] != 0) {
            if (8 < (uint)puVar1[2]) {
              pvVar10 = *(LPVOID *)((int)pvVar10 + -4);
            }
            pvVar6 = GetProcessHeap();
            HeapFree(pvVar6,0,pvVar10);
          }
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,0,lpMem);
        }
      }
      else {
        param_1[1] = CONCAT44(uStack_418,lpMem);
        *param_1 = CONCAT44(uStack_420,local_424);
      }
joined_r0x1010c5bd:
      if (local_414 == 0) {
        return;
      }
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,local_428);
      return;
    }
    if (uVar7 == nSize) {
      DVar5 = GetLastError();
      if (DVar5 != 0x7a) {
        FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10156b90);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar7 = nSize * 2;
    }
    else if (uVar7 <= nSize) {
      if (local_42c < uVar7) {
        FUN_10136a50(0,uVar7,local_42c,&PTR_s_C__Users_runneradmin__rustup_too_10156b58);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      FUN_10093310((undefined8 *)&local_424,(ushort *)pWVar9,uVar7);
      lpMem = local_41c;
      if (local_43c != 0) goto LAB_1010c549;
      goto joined_r0x1010c562;
    }
  } while (uVar7 < 0x201);
  nSize = uVar8;
  pWVar9 = local_430;
  uVar3 = uVar8;
  uVar4 = uVar8;
  if (uVar7 - uVar8 != 0) {
    FUN_101359e0(&local_43c,uVar8,uVar7 - uVar8,(LPVOID)0x2,2);
    local_430 = local_438;
    nSize = local_43c;
    uVar8 = local_43c;
    pWVar9 = local_438;
    uVar3 = local_43c;
    uVar4 = local_43c;
  }
  goto LAB_1010c412;
}
