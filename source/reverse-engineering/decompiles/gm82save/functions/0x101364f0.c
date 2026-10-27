// rea decompile_all
// name: FUN_101364f0
// address: 0x101364f0
// body: available
// range: 0x101364f0-0x10136586 inclusive
// range: 0x10136590-0x101365d7 inclusive
// range: 0x101365e0-0x101365fb inclusive
// range: 0x10136600-0x101366a8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101364f0(undefined8 *param_1,int *param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *piVar3;
  HANDLE pvVar4;
  LPVOID lpMem;
  int iVar5;
  byte local_30;
  char cStack_2f;
  undefined2 uStack_2e;
  int *piStack_2c;
  undefined8 *local_28;
  undefined8 *local_24;
  int *local_20;
  int local_1c;
  LPVOID local_18;
  int *local_14;

  local_1c = 0x101364fc;
  piVar3 = (int *)*param_2;
  if ((int *)((int)piVar3 - param_2[2]) < param_4) {
    FUN_10053090((undefined8 *)&local_30,(int)param_2);
    if (local_30 != 0xff) {
      *param_1 = CONCAT44(piStack_2c,CONCAT22(uStack_2e,CONCAT11(cStack_2f,local_30)));
      return;
    }
    piVar3 = (int *)*param_2;
  }
  local_28 = param_1;
  if (param_4 < piVar3) {
    iVar5 = param_2[2];
    memcpy((void *)(param_2[1] + iVar5),param_3,(size_t)param_4);
    param_2[2] = iVar5 + (int)param_4;
    *(undefined1 *)local_28 = 0xff;
  }
  else {
    *(undefined1 *)(param_2 + 3) = 1;
    if (param_4 != (int *)0x0) {
      local_14 = param_2 + 4;
      iVar5 = local_1c;
      local_24 = (undefined8 *)&local_30;
      local_20 = param_2;
LAB_101365a6:
      FUN_1010c100(&local_30,local_14,param_3,param_4);
      piVar3 = piStack_2c;
      if (local_30 == 0xff) {
        if (piStack_2c != (int *)0x0) {
          if (param_4 < piStack_2c) {
            FUN_10136a50((uint)piStack_2c,(uint)param_4,(uint)param_4,
                         &PTR_s_C__Users_runneradmin__rustup_too_101594d0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          param_3 = (int *)((int)param_3 + (int)piStack_2c);
          param_4 = (int *)((int)param_4 - (int)piStack_2c);
          goto LAB_1013659e;
        }
        local_24 = (undefined8 *)&DAT_10158308;
        goto switchD_101365ca_caseD_1013667b;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch((&switchD_101365ca::switchdataD_101366ac)[local_30] + iVar5) {
      case 0x10136590:
        if ((char)piStack_2c[2] == '#') goto LAB_1013659e;
        break;
      case 0x101365cc:
        if (cStack_2f != '#') break;
LAB_1013659e:
        if (param_4 == (int *)0x0) goto LAB_10136664;
        goto LAB_101365a6;
      case 0x10136600:
        param_2 = local_20;
        if ((char)piStack_2c[2] == '#') {
          puVar1 = (undefined4 *)piStack_2c[1];
          lpMem = (LPVOID)*piStack_2c;
          if ((code *)*puVar1 != (code *)0x0) {
            local_18 = lpMem;
            (*(code *)*puVar1)(lpMem);
            lpMem = local_18;
          }
          if (puVar1[1] != 0) {
            if (8 < (uint)puVar1[2]) {
              lpMem = *(LPVOID *)((int)lpMem + -4);
            }
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,lpMem);
          }
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,piVar3);
          param_2 = local_20;
          iVar5 = local_1c;
          goto LAB_1013659e;
        }
      }
switchD_101365ca_caseD_1013667b:
      *local_28 = *local_24;
      goto LAB_1013668b;
    }
LAB_10136664:
    *(undefined1 *)local_28 = 0xff;
LAB_1013668b:
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}
