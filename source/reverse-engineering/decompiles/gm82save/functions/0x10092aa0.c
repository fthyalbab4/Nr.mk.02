// rea decompile_all
// name: FUN_10092aa0
// address: 0x10092aa0
// body: available
// range: 0x10092aa0-0x10092b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10092aa0(undefined8 *param_1,int *param_2,ushort *param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  HANDLE pvVar5;
  int *piVar6;
  LPVOID lpMem;
  undefined8 local_1c;
  int *local_14;

  if ((param_4 & 1) == 0) {
    *(undefined1 *)param_1 = 0xff;
    local_1c = *param_1;
    local_14 = param_2;
    uVar4 = FUN_10093d70(&local_1c,0x1013f5c0,param_3,param_4);
    if ((char)uVar4 == '\0') {
      if ((char)local_1c == '\x03') {
        piVar6 = local_1c._4_4_;
        puVar2 = (undefined4 *)local_1c._4_4_[1];
        lpMem = (LPVOID)*local_1c._4_4_;
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
        HeapFree(pvVar5,0,piVar6);
      }
    }
    else {
      if ((char)local_1c == -1) {
        FUN_101369c0("a formatting trait implementation returned an error when the underlying stream did not"
                     ,0xad,&PTR_s_C__Users_runneradmin__rustup_too_101568f0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      *param_1 = local_1c;
    }
  }
  else {
    iVar1 = param_2[2];
    piVar6 = (int *)(param_4 >> 1);
    if (piVar6 < (int *)(*param_2 - iVar1)) {
      memcpy((void *)(param_2[1] + iVar1),param_3,(size_t)piVar6);
      *(undefined1 *)param_1 = 0xff;
      param_2[2] = iVar1 + (int)piVar6;
    }
    else {
      FUN_101364f0(param_1,param_2,(int *)param_3,piVar6);
    }
  }
  return;
}
