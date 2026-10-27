// rea decompile_all
// name: FUN_1011d090
// address: 0x1011d090
// body: available
// range: 0x1011d090-0x1011d142 inclusive
// range: 0x1011d150-0x1011d196 inclusive
// range: 0x1011d1a0-0x1011d1bb inclusive
// range: 0x1011d1c0-0x1011d260 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011d090(char *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *lpMem;
  HANDLE pvVar3;
  LPVOID lpMem_00;
  int iVar4;
  undefined8 *puVar5;
  undefined4 local_4c;
  HANDLE local_48;
  char *local_44;
  HANDLE local_40;
  LPVOID local_3c;
  int local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined5 local_20;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 local_18;
  undefined4 uStack_17;

  iVar4 = 0x1011d0a8;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 7;
  local_20 = 0;
  uStack_1a = 0;
  uStack_17 = 0;
  uStack_1b = 1;
  local_18 = 1;
  uStack_19 = 1;
  FUN_1011b760((undefined8 *)&local_4c,&local_34,param_2,param_3);
  if ((char)local_4c == -1) {
    local_40 = local_48;
    local_4c = local_48;
    local_44 = param_1;
    if (param_5 != (int *)0x0) {
      local_38 = 0x1011d0a8;
LAB_1011d166:
      puVar5 = (undefined8 *)&local_34;
      FUN_1010c100((undefined1 *)puVar5,&local_4c,param_4,param_5);
      lpMem = local_30;
      if ((local_34 & 0xff) == 0xff) {
        if (local_30 != (int *)0x0) {
          if (param_5 < local_30) {
            FUN_10136a50((uint)local_30,(uint)param_5,(uint)param_5,
                         &PTR_s_C__Users_runneradmin__rustup_too_101594d0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          param_4 = (int *)((int)param_4 + (int)local_30);
          param_5 = (int *)((int)param_5 - (int)local_30);
          goto LAB_1011d15e;
        }
        puVar5 = (undefined8 *)&DAT_10158308;
        goto switchD_1011d189_caseD_0;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch((&switchD_1011d189::switchdataD_1011d264)[local_34 & 0xff] + iVar4) {
      case 0x1011d150:
        if ((char)local_30[2] == '#') goto LAB_1011d15e;
        break;
      case 0x1011d18b:
        if (local_34._1_1_ != '#') break;
LAB_1011d15e:
        if (param_5 == (int *)0x0) goto LAB_1011d223;
        goto LAB_1011d166;
      case 0x1011d1c0:
        if ((char)local_30[2] == '#') {
          puVar1 = (undefined4 *)local_30[1];
          lpMem_00 = (LPVOID)*local_30;
          if ((code *)*puVar1 != (code *)0x0) {
            local_3c = lpMem_00;
            (*(code *)*puVar1)(lpMem_00);
            lpMem_00 = local_3c;
          }
          if (puVar1[1] != 0) {
            if (8 < (uint)puVar1[2]) {
              lpMem_00 = *(LPVOID *)((int)lpMem_00 + -4);
            }
            pvVar3 = GetProcessHeap();
            HeapFree(pvVar3,0,lpMem_00);
          }
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,lpMem);
          iVar4 = local_38;
          goto LAB_1011d15e;
        }
      }
switchD_1011d189_caseD_0:
      *(undefined8 *)local_44 = *puVar5;
      goto LAB_1011d23d;
    }
LAB_1011d223:
    *local_44 = -1;
LAB_1011d23d:
    CloseHandle(local_40);
  }
  else {
    param_1[3] = local_4c._3_1_;
    *(undefined2 *)(param_1 + 1) = local_4c._1_2_;
    *param_1 = (char)local_4c;
    *(HANDLE *)(param_1 + 4) = local_48;
  }
  return;
}
