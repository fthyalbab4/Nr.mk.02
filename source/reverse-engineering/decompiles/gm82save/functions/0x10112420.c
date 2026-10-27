// rea decompile_all
// name: FUN_10112420
// address: 0x10112420
// body: available
// range: 0x10112420-0x1011250b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10112420(undefined8 *param_1,HANDLE param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  HANDLE pvVar5;
  LPVOID lpMem;
  undefined1 local_18;
  char cStack_17;
  undefined2 uStack_16;
  int *piStack_14;

  iVar1 = param_3[2];
  FUN_10112300(&local_18,param_2,(int *)(*param_3 + iVar1),param_3[1] - iVar1);
  switch(local_18) {
  case 0:
    uVar4 = FUN_1010dc70((int)piStack_14);
    if ((char)uVar4 != '\v') goto LAB_101124eb;
    goto LAB_101124e6;
  case 1:
    cVar3 = cStack_17;
    break;
  case 2:
    cVar3 = (char)piStack_14[2];
    break;
  case 3:
    if ((char)piStack_14[2] == '\v') {
      *(undefined1 *)param_1 = 0xff;
      puVar2 = (undefined4 *)piStack_14[1];
      lpMem = (LPVOID)*piStack_14;
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lpMem);
      }
      if (puVar2[1] != 0) {
        if (8 < (uint)puVar2[2]) {
          lpMem = *(LPVOID *)((int)lpMem + -4);
        }
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,lpMem);
      }
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,piStack_14);
      return;
    }
    goto LAB_101124eb;
  default:
    param_3[2] = iVar1 + (int)piStack_14;
    *(undefined1 *)param_1 = 0xff;
    return;
  }
  if (cVar3 == '\v') {
LAB_101124e6:
    *(undefined1 *)param_1 = 0xff;
  }
  else {
LAB_101124eb:
    *param_1 = CONCAT44(piStack_14,CONCAT22(uStack_16,CONCAT11(cStack_17,local_18)));
  }
  return;
}
