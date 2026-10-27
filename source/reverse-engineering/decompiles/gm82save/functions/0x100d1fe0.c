// rea decompile_all
// name: FUN_100d1fe0
// address: 0x100d1fe0
// body: available
// range: 0x100d1fe0-0x100d2093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_100d1fe0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char local_1e;
  char local_1d;
  undefined4 local_1c;
  char *local_18;
  undefined1 *local_14;
  char *local_10;
  undefined1 *local_c;
  undefined4 *local_8;
  undefined1 *local_4;

  puVar1 = (undefined4 *)*param_1;
  local_1d = *(char *)(puVar1 + 1);
  local_1e = *(char *)((int)puVar1 + 5);
  local_1c = *puVar1;
  if (local_1d == local_1e) {
    local_18 = &local_1e;
    local_10 = (char *)&local_1c;
    local_14 = &LAB_100d1e60;
    local_c = &LAB_100908e0;
    local_1e = local_1d;
    FUN_10093d70(*param_2,param_2[1],(ushort *)&DAT_10152d58,(uint)&local_18);
    return;
  }
  local_18 = &local_1d;
  local_10 = &local_1e;
  local_14 = &LAB_100d1e60;
  local_8 = &local_1c;
  local_c = &LAB_100d1e60;
  local_4 = &LAB_100908e0;
  FUN_10093d70(*param_2,param_2[1],(ushort *)&DAT_10153087,(uint)&local_18);
  return;
}
