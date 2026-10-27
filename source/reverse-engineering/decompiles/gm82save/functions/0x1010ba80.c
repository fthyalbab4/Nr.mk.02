// rea decompile_all
// name: FUN_1010ba80
// address: 0x1010ba80
// body: available
// range: 0x1010ba80-0x1010baa4 inclusive
// range: 0x1010bab0-0x1010bafc inclusive
// range: 0x1010bb00-0x1010bb1b inclusive
// range: 0x1010bb20-0x1010bbb5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_1010ba80(undefined8 *param_1,byte *param_2,byte *param_3,int *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  int *lpMem;
  HANDLE pvVar4;
  LPVOID lpMem_00;
  int iVar5;
  byte *pbVar6;
  byte local_20;
  char local_1f;
  int *local_1c;
  LPVOID local_18;
  int local_14;

  iVar5 = 0x1010ba90;
  if (param_4 != (int *)0x0) {
    local_14 = 0x1010ba90;
    do {
      FUN_1010be30((char *)&local_20,0xfffffff4,param_3,(LPCSTR)param_4,param_2);
      lpMem = local_1c;
      if (local_20 == 0xff) {
        if (local_1c == (int *)0x0) {
          pbVar6 = (byte *)&DAT_10158308;
          goto switchD_1010baef_caseD_1010bb90;
        }
        if (param_4 < local_1c) {
          FUN_10136a50((uint)local_1c,(uint)param_4,(uint)param_4,
                       &PTR_s_C__Users_runneradmin__rustup_too_101594d0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        param_3 = param_3 + (int)local_1c;
        param_4 = (int *)((int)param_4 - (int)local_1c);
      }
      else {
        pbVar6 = &local_20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch((&switchD_1010baef::switchdataD_1010bbb8)[local_20] + iVar5) {
        case 0x1010bab0:
          cVar3 = (char)local_1c[2];
          break;
        case 0x1010baf1:
          cVar3 = local_1f;
          break;
        case 0x1010bb20:
          pbVar6 = &local_20;
          if ((char)local_1c[2] != '#') goto switchD_1010baef_caseD_1010bb90;
          puVar1 = (undefined4 *)local_1c[1];
          lpMem_00 = (LPVOID)*local_1c;
          if ((code *)*puVar1 != (code *)0x0) {
            local_18 = lpMem_00;
            (*(code *)*puVar1)(lpMem_00);
            lpMem_00 = local_18;
          }
          if (puVar1[1] != 0) {
            if (8 < (uint)puVar1[2]) {
              lpMem_00 = *(LPVOID *)((int)lpMem_00 + -4);
            }
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,lpMem_00);
          }
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,lpMem);
          iVar5 = local_14;
          goto LAB_1010babe;
        case 0x1010bb90:
          goto switchD_1010baef_caseD_1010bb90;
        }
        pbVar6 = &local_20;
        if (cVar3 != '#') {
switchD_1010baef_caseD_1010bb90:
          *param_1 = *(undefined8 *)pbVar6;
          return;
        }
      }
LAB_1010babe:
    } while (param_4 != (int *)0x0);
  }
  *(undefined1 *)param_1 = 0xff;
  return;
}
