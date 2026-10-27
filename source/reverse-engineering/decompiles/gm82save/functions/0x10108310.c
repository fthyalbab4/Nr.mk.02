// rea decompile_all
// name: FUN_10108310
// address: 0x10108310
// body: available
// range: 0x10108310-0x1010834d inclusive
// range: 0x10108350-0x1010836d inclusive
// range: 0x10108370-0x10108468 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10108310(undefined8 *param_1)

{
  code *pcVar1;
  LPWSTR lpMem;
  uint uVar2;
  uint uVar3;
  DWORD DVar4;
  HANDLE hHeap;
  uint nBufferLength;
  uint uVar5;
  uint uVar6;
  WCHAR *lpBuffer;
  uint local_428;
  LPWSTR local_424;
  uint local_420;
  undefined8 *local_41c;
  LPWSTR local_418;
  uint local_414;
  WCHAR local_410 [512];

  uVar5 = 0x200;
  uVar6 = 0;
  local_428 = 0;
  local_424 = (LPWSTR)0x2;
  local_420 = 0;
  local_418 = (LPWSTR)0x2;
  local_41c = param_1;
  do {
    local_414 = 0x200;
    nBufferLength = uVar5;
    lpBuffer = local_410;
    uVar2 = local_420;
    uVar3 = local_414;
LAB_10108382:
    local_414 = uVar3;
    local_420 = uVar2;
    SetLastError(0);
    uVar5 = GetCurrentDirectoryW(nBufferLength,lpBuffer);
    if ((uVar5 == 0) && (DVar4 = GetLastError(), DVar4 != 0)) {
      DVar4 = GetLastError();
      *(undefined1 *)((int)local_41c + 4) = 0;
      *(DWORD *)(local_41c + 1) = DVar4;
      *(undefined4 *)local_41c = 0xffffffff;
      lpMem = local_424;
joined_r0x10108438:
      if (local_428 != 0) {
        local_424 = lpMem;
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
      }
      return;
    }
    if (uVar5 == nBufferLength) {
      DVar4 = GetLastError();
      if (DVar4 != 0x7a) {
        FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10156b90);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar5 = nBufferLength * 2;
    }
    else if (uVar5 <= nBufferLength) {
      if (local_414 < uVar5) {
        FUN_10136a50(0,uVar5,local_414,&PTR_s_C__Users_runneradmin__rustup_too_10156b58);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      FUN_10093310(local_41c,(ushort *)lpBuffer,uVar5);
      lpMem = local_424;
      goto joined_r0x10108438;
    }
  } while (uVar5 < 0x201);
  nBufferLength = uVar6;
  lpBuffer = local_418;
  uVar2 = uVar6;
  uVar3 = uVar6;
  if (uVar5 - uVar6 != 0) {
    FUN_101359e0(&local_428,uVar6,uVar5 - uVar6,(LPVOID)0x2,2);
    local_418 = local_424;
    nBufferLength = local_428;
    uVar6 = local_428;
    lpBuffer = local_424;
    uVar2 = local_428;
    uVar3 = local_428;
  }
  goto LAB_10108382;
}
