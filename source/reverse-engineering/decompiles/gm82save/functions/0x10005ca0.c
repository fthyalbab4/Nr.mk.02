// rea decompile_all
// name: FUN_10005ca0
// address: 0x10005ca0
// body: available
// range: 0x10005ca0-0x10005dda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_10005ca0(undefined1 *param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  undefined4 *puVar4;

  switch(*param_1) {
  case 0:
    if (param_1[4] != '\x03') {
      return;
    }
    puVar4 = *(undefined4 **)(param_1 + 8);
    goto LAB_10005db1;
  case 1:
  case 2:
    if (param_1[4] == '\x03') {
      puVar4 = *(undefined4 **)(param_1 + 8);
      puVar2 = (undefined4 *)puVar4[1];
      pvVar1 = (LPVOID)*puVar4;
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(pvVar1);
      }
      if (puVar2[1] != 0) {
        FUN_10093cf0(pvVar1,puVar2[2]);
      }
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,puVar4);
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    break;
  case 3:
    if (*(int *)(param_1 + 0x14) != 0) {
      pvVar1 = *(LPVOID *)(param_1 + 0x18);
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,pvVar1);
    }
    if (param_1[4] != '\"') {
      return;
    }
    if (param_1[8] != '\x03') {
      return;
    }
    puVar4 = *(undefined4 **)(param_1 + 0xc);
LAB_10005db1:
    puVar2 = (undefined4 *)puVar4[1];
    pvVar1 = (LPVOID)*puVar4;
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(pvVar1);
    }
    if (puVar2[1] != 0) {
      FUN_10093cf0(pvVar1,puVar2[2]);
    }
    break;
  default:
    if (*(int *)(param_1 + 4) == 0) {
      return;
    }
    puVar4 = *(undefined4 **)(param_1 + 8);
    break;
  case 5:
    if (*(int *)(param_1 + 0xc) != 0) {
      pvVar1 = *(LPVOID *)(param_1 + 0x10);
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,pvVar1);
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x1c);
    break;
  case 7:
    if (*(int *)(param_1 + 4) != 0) {
      pvVar1 = *(LPVOID *)(param_1 + 8);
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,pvVar1);
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      return;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    break;
  case 8:
  case 9:
  case 10:
  case 0x12:
    goto switchD_10005cbd_caseD_8;
  }
  pvVar3 = GetProcessHeap();
  HeapFree(pvVar3,0,puVar4);
switchD_10005cbd_caseD_8:
  return;
}
