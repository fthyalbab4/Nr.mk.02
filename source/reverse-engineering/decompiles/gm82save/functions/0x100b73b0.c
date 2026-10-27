// rea decompile_all
// name: FUN_100b73b0
// address: 0x100b73b0
// body: available
// range: 0x100b73b0-0x100b7582 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_100b73b0(undefined8 *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined **local_154;
  undefined1 *local_150;
  undefined4 local_14c [2];
  undefined4 local_144;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_10c;
  undefined4 local_e8;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 local_50;
  undefined1 local_44;
  undefined1 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  byte local_d;
  byte local_c;

  local_c = *(byte *)((int)param_1 + 0x33);
  local_24 = *(undefined8 *)((int)param_1 + 0x1c);
  local_1c = *(undefined4 *)((int)param_1 + 0x24);
  local_2c = *(undefined8 *)((int)param_1 + 0x14);
  local_d = *(byte *)((int)param_1 + 0x32);
  local_f = *(undefined1 *)((int)param_1 + 0x31);
  local_34 = *(undefined8 *)((int)param_1 + 0xc);
  local_18 = param_1[5];
  local_120 = *param_1;
  local_118 = *(undefined4 *)(param_1 + 1);
  local_10 = 0;
  local_8c = 0xfffffffe;
  local_80 = 0xfffffffe;
  local_38 = 2;
  local_74 = 0xfffffffe;
  local_14c[0] = 0;
  local_144 = 0;
  local_68 = 0xfffffffe;
  iVar3 = (local_c + 7 >> 3) * *(int *)(&DAT_10160114 + (uint)local_d * 4);
  local_114 = 0;
  local_10c = 0;
  local_e = 0xff;
  local_5c = 0xfffffffe;
  local_44 = 2;
  local_e8 = 0;
  local_bc = 0;
  local_50 = 0xfffffffe;
  local_b0 = 0;
  local_ac = 4;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 4;
  local_9c = 0;
  local_98 = 0;
  local_94 = 4;
  local_90 = 0;
  uVar4 = iVar3 - 1;
  if ((uVar4 < 8 & 0xafU >> ((byte)uVar4 & 0x1f)) == 0) {
    local_154 = &PTR_s_Not_a_possible_byte_rounded_pixe_10150634;
    local_150 = &LAB_10093d10;
    FUN_101369c0(&DAT_1015063c,&local_154,&PTR_s_C__Users_runneradmin__cargo_regi_1015066c);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar1 = (&DAT_1016012f)[iVar3];
  FUN_100b7130((int)local_14c);
  return uVar1;
}
