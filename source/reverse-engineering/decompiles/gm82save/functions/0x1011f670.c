// rea decompile_all
// name: FUN_1011f670
// address: 0x1011f670
// body: available
// range: 0x1011f670-0x1011f744 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011f670(int *param_1,HANDLE param_2,LPCVOID param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  LPVOID lpBuffer;
  BOOL BVar3;
  HANDLE hHeap;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  SIZE_T local_18;
  HANDLE local_14;

  uVar5 = param_4 >> 1;
  uVar1 = uVar5 * 2 + 2;
  iVar6 = uVar5 + 1;
  if (iVar6 < 0 || 0x7ffffffe < uVar1) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_14 = param_2;
  lpBuffer = FUN_10107380(0,uVar1);
  if (lpBuffer != (LPVOID)0x0) {
    local_18 = 0;
    BVar3 = ReadProcessMemory(local_14,param_3,lpBuffer,param_4,&local_18);
    if (BVar3 == 0) {
      GetLastError();
      iVar6 = 0x1b;
      pcVar4 = "Unable to read process data";
    }
    else {
      if (local_18 == param_4) {
        *(undefined2 *)((int)lpBuffer + uVar5 * 2) = 0;
        *param_1 = iVar6;
        param_1[1] = (int)lpBuffer;
        param_1[2] = iVar6;
        return;
      }
      iVar6 = 0x3a;
      pcVar4 = "ReadProcessMemory returned unexpected number of bytes read";
    }
    param_1[1] = (int)pcVar4;
    param_1[2] = iVar6;
    *param_1 = -1;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpBuffer);
    return;
  }
  FUN_101366bc(2);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}
