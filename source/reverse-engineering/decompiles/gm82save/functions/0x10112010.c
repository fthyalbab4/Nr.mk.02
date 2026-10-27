// rea decompile_all
// name: FUN_10112010
// address: 0x10112010
// body: available
// range: 0x10112010-0x101120cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10112010(uint *param_1,int param_2,int param_3)

{
  HANDLE hHeap;
  int iVar1;
  uint *puVar2;
  int local_88;
  LPCWSTR local_84;
  LPCWSTR local_80;
  uint local_7c;
  LPCWSTR local_78;
  LPCWSTR local_74;
  uint local_70;
  LPCWSTR local_6c;
  LPCWSTR local_68;
  LPCWSTR local_64;

  FUN_1010c620((undefined8 *)&local_7c,param_2,param_3);
  if (local_7c != 0xffffffff) {
    local_70 = local_7c;
    local_68 = local_74;
    local_6c = local_78;
    FUN_1010fa40((undefined8 *)&local_88,&local_70,'\x01');
    local_78 = local_84;
    local_74 = local_80;
    if (local_88 != -1) {
      FUN_101120d0(&local_70,local_84);
      if (local_88 != 0) {
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,local_84);
      }
      local_78 = local_68;
      local_74 = local_64;
      if ((local_70 & (uint)local_6c) != 0xffffffff) {
        puVar2 = &local_70;
        for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
          *param_1 = *puVar2;
          puVar2 = puVar2 + 1;
          param_1 = param_1 + 1;
        }
        return;
      }
    }
  }
  param_1[2] = (uint)local_78;
  param_1[3] = (uint)local_74;
  param_1[1] = 0xffffffff;
  *param_1 = 0xffffffff;
  return;
}
