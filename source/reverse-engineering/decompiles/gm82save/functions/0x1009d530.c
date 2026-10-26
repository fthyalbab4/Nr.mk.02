// rea decompile_all
// name: FUN_1009d530
// address: 0x1009d530
// body: available
// range: 0x1009d530-0x1009d5e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_1009d530(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint local_c;

  local_c = *param_1;
  if ((*(byte *)((int)param_2 + 0xb) & 0x18) == 0) {
    (**(code **)(param_2[1] + 0x10))(*param_2,local_c);
    return;
  }
  uVar1 = (undefined1)local_c;
  if (local_c < 0x80) {
    local_c = local_c & 0xff;
    puVar2 = (undefined1 *)0x1;
  }
  else {
    uVar4 = (undefined1)(local_c >> 6);
    if (local_c < 0x800) {
      puVar2 = (undefined1 *)0x2;
      local_c = (ushort)(CONCAT11(uVar1,uVar4) | 0xc0) & 0xffff3fff | 0x8000;
    }
    else {
      uVar3 = (undefined1)(local_c >> 0xc);
      if (local_c < 0x10000) {
        puVar2 = (undefined1 *)0x3;
        local_c = (CONCAT12(uVar1,CONCAT11(uVar4,uVar3)) & 0xff3fff | 0x80e0) & 0xff3fffff |
                  0x800000;
      }
      else {
        puVar2 = &DAT_00000004;
        local_c = CONCAT13(uVar1,CONCAT12(uVar4,CONCAT11(uVar3,(char)(local_c >> 0x12)))) &
                  0x3f3f3fff | 0x808080f0;
      }
    }
  }
  FUN_10093f00(param_2,(undefined1 (*) [16])&local_c,puVar2);
  return;
}
