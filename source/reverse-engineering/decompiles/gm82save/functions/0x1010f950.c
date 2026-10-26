// rea decompile_all
// name: FUN_1010f950
// address: 0x1010f950
// body: available
// range: 0x1010f950-0x1010fa21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_1010f950(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  HANDLE hHeap;
  undefined3 extraout_var;
  uint uVar2;
  uint local_2c;
  int *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  code *local_1c;
  int local_18;
  LPVOID local_14;

                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 1:
    uVar2 = (**(code **)(param_2[1] + 0xc))
                      (*param_2,(&PTR_s_entity_not_found_10160e20)[(byte)param_1[1]],
                       *(undefined4 *)(&DAT_10160d78 + (uint)(byte)param_1[1] * 4));
    return uVar2;
  case 2:
    uVar1 = FUN_10093f00(param_2,(undefined1 (*) [16])**(undefined4 **)(param_1 + 4),
                         (undefined1 *)(*(undefined4 **)(param_1 + 4))[1]);
    return CONCAT31(extraout_var,uVar1);
  case 3:
    uVar2 = (**(code **)((*(undefined4 **)(param_1 + 4))[1] + 0x10))
                      (**(undefined4 **)(param_1 + 4),param_2);
    return uVar2;
  }
  local_2c = *(uint *)(param_1 + 4);
  FUN_1010eec0(&local_18,local_2c);
  local_24 = &LAB_100922c0;
  local_1c = FUN_1009c910;
  local_28 = &local_18;
  local_20 = (undefined1 *)&local_2c;
  uVar2 = FUN_10093d70(*param_2,param_2[1],(ushort *)&DAT_10159375,(uint)&local_28);
  if (local_18 != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,local_14);
  }
  return uVar2;
}
