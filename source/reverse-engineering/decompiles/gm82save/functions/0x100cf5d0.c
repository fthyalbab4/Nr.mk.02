// rea decompile_all
// name: FUN_100cf5d0
// address: 0x100cf5d0
// body: available
// range: 0x100cf5d0-0x100cf727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_100cf5d0(int *param_1,uint *param_2,int *param_3,void *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  void *_Src;
  HANDLE hHeap;
  SIZE_T SVar4;
  uint local_2c [3];
  void *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;

  iVar1 = *param_1;
  if ((*(char *)(iVar1 + 0x162) == '\x01') && (*(char *)(iVar1 + 0x163) != '\0')) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x144) + 0x10);
    local_1c = iVar2 * 2;
    if (param_5 < local_1c) {
      if (*(int *)(iVar1 + 0x15c) != 1) {
        SVar4 = iVar2 * 8;
        local_20 = FUN_10107380(0,SVar4);
        if (local_20 != (LPVOID)0x0) {
          memset(local_20,0,SVar4 - 4);
          _Src = local_20;
          *(undefined4 *)((int)local_20 + (SVar4 - 4)) = 0;
          FUN_100cf730((char *)local_2c,param_1,param_2,param_3,local_20,local_1c);
          memcpy(param_4,_Src,param_5 << 2);
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,_Src);
          return local_2c[0];
        }
        FUN_101366bc(4);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_18 = 0;
      local_14 = 0;
      FUN_100cf730((char *)local_2c,param_1,param_2,param_3,&local_18,2);
      if (param_5 < 3) {
        memcpy(param_4,&local_18,param_5 << 2);
        return local_2c[0];
      }
      FUN_10136a50(0,param_5,2,&PTR_s_C__Users_runneradmin__cargo_regi_101523c4);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  FUN_100cf730((char *)local_2c,param_1,param_2,param_3,param_4,param_5);
  return (uint)((char)local_2c[0] != '\0');
}
