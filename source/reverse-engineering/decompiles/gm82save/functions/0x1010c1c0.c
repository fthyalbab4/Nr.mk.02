// rea decompile_all
// name: FUN_1010c1c0
// address: 0x1010c1c0
// body: available
// range: 0x1010c1c0-0x1010c2c5 inclusive
// range: 0x1010c2d0-0x1010c361 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_1010c1c0(undefined1 *param_1,HANDLE param_2,LPCSTR param_3,uint param_4)

{
  WCHAR WVar1;
  code *pcVar2;
  uint nNumberOfCharsToWrite;
  BOOL BVar3;
  DWORD DVar4;
  LPWSTR lpBuffer;
  int iVar5;
  LPWSTR lpWideCharStr;
  DWORD local_201c;
  HANDLE local_2018;
  undefined1 *local_2014;
  WCHAR local_2010 [4094];
  undefined4 uStack_14;

  uStack_14 = 0x1010c1ce;
  if (0x1000 < param_4) {
    param_4 = 0x1000;
    do {
      if (-0x41 < param_3[param_4]) goto LAB_1010c1fb;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
    param_4 = 0;
  }
LAB_1010c1fb:
  lpWideCharStr = local_2010;
  local_2018 = param_2;
  nNumberOfCharsToWrite = MultiByteToWideChar(0xfde9,8,param_3,param_4,lpWideCharStr,0x1000);
  if (nNumberOfCharsToWrite == 0) {
    FUN_101369c0("Unexpected error in MultiByteToWideChar",0x4f,
                 &PTR_s_C__Users_runneradmin__rustup_too_10158918);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (0x1000 < nNumberOfCharsToWrite) {
    FUN_10136a50(0,nNumberOfCharsToWrite,0x1000,&PTR_s_C__Users_runneradmin__rustup_too_10158938);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_201c = 0;
  BVar3 = WriteConsoleW(local_2018,lpWideCharStr,nNumberOfCharsToWrite,&local_201c,(LPVOID)0x0);
  DVar4 = local_201c;
  if (BVar3 == 0) {
    DVar4 = GetLastError();
    *param_1 = 0;
    *(DWORD *)(param_1 + 4) = DVar4;
    return;
  }
  local_2014 = param_1;
  if (local_201c != nNumberOfCharsToWrite) {
    if (nNumberOfCharsToWrite <= local_201c) {
      FUN_10136b52(local_201c,nNumberOfCharsToWrite,&PTR_s_C__Users_runneradmin__rustup_too_10158928
                  );
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lpBuffer = local_2010 + local_201c;
    if ((ushort)(local_2010[local_201c] + L'⌒') < 0x312) {
      local_201c = 0;
      BVar3 = WriteConsoleW(local_2018,lpBuffer,1,&local_201c,(LPVOID)0x0);
      if (BVar3 == 0) {
        GetLastError();
      }
      lpBuffer = local_2010 + DVar4 + 1;
    }
    else if (local_201c == 0) {
      param_4 = 0;
      goto LAB_1010c250;
    }
    param_4 = 0;
    do {
      WVar1 = *lpWideCharStr;
      iVar5 = 1;
      if ((0x7f < (ushort)WVar1) && (iVar5 = 2, 0x7ff < (ushort)WVar1)) {
        iVar5 = (uint)(0x311 < (ushort)(WVar1 + L'⌒')) * 2 + 1;
      }
      lpWideCharStr = lpWideCharStr + 1;
      param_4 = param_4 + iVar5;
    } while (lpWideCharStr != lpBuffer);
  }
LAB_1010c250:
  *(uint *)(local_2014 + 4) = param_4;
  *local_2014 = 0xff;
  return;
}
