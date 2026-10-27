// rea decompile_all
// name: FUN_100913c0
// address: 0x100913c0
// body: available
// range: 0x100913c0-0x100914d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_100913c0(int param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 local_3d;
  uint local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_20;
  undefined8 local_1c;

  if (param_4 != 0) {
    if (param_4 < param_2) {
      if (-0x41 < *(char *)(param_1 + param_4)) goto LAB_100913ed;
    }
    else if (param_4 == param_2) goto LAB_100913ed;
    FUN_10136b90(param_1,param_2,0,param_4,&PTR_s_C__Users_runneradmin__cargo_regi_10143bd4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_100913ed:
  uVar6 = 0;
  if (param_3 < 0x80) {
    local_3d = 1;
    uVar4 = param_3;
    bVar2 = 0;
    bVar3 = 0;
  }
  else {
    bVar5 = (byte)param_3 & 0x3f | 0x80;
    if (param_3 < 0x800) {
      uVar4 = param_3 >> 6 | 0xc0;
      local_3d = 2;
      uVar6 = 0;
      bVar2 = bVar5;
      bVar3 = 0;
    }
    else {
      bVar3 = (byte)(param_3 >> 6) & 0x3f | 0x80;
      if (param_3 < 0x10000) {
        uVar4 = param_3 >> 0xc | 0xe0;
        local_3d = 3;
        bVar2 = bVar3;
        bVar3 = bVar5;
      }
      else {
        local_3d = 4;
        bVar2 = (byte)(param_3 >> 0xc) & 0x3f | 0x80;
        uVar6 = (uint)bVar5 << 0x18;
        uVar4 = param_3 >> 0x12 | 0xf0;
      }
    }
  }
  local_24 = uVar4 & 0xff | (uint)bVar2 << 8 | (uint)bVar3 << 0x10 | uVar6;
  local_30 = param_4;
  local_2c = 0;
  local_28 = param_4;
  local_38 = param_3;
  local_20 = local_3d;
  local_34 = param_1;
  FUN_10080230((undefined4 *)&local_1c,(int)&local_38);
  return local_1c;
}
