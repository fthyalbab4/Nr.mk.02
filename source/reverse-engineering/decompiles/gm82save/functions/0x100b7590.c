// rea decompile_all
// name: FUN_100b7590
// address: 0x100b7590
// body: available
// range: 0x100b7590-0x100b7758 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_100b7590(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_150 [2];
  undefined4 local_148;
  undefined8 local_124;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_ec;
  undefined4 local_c0;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_84;
  undefined4 local_78;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_54;
  undefined1 local_48;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  byte local_11;
  byte local_10;

  local_11 = *(byte *)((int)param_1 + 0x32);
  local_20 = *(undefined4 *)((int)param_1 + 0x24);
  local_28 = *(undefined8 *)((int)param_1 + 0x1c);
  local_38 = *(undefined8 *)((int)param_1 + 0xc);
  local_30 = *(undefined8 *)((int)param_1 + 0x14);
  local_10 = *(byte *)((int)param_1 + 0x33);
  local_1c = param_1[5];
  local_13 = *(undefined1 *)((int)param_1 + 0x31);
  uVar3 = param_2 * *(int *)(&DAT_10160138 + (uint)local_11 * 4);
  local_124 = *param_1;
  local_11c = *(undefined4 *)(param_1 + 1);
  local_14 = 0;
  local_90 = 0xfffffffe;
  local_84 = 0xfffffffe;
  local_3c = 2;
  local_78 = 0xfffffffe;
  local_150[0] = 0;
  local_148 = 0;
  local_6c = 0xfffffffe;
  local_118 = 0;
  local_110 = 0;
  local_12 = 0xff;
  local_60 = 0xfffffffe;
  local_48 = 2;
  local_ec = 0;
  local_c0 = 0;
  local_54 = 0xfffffffe;
  local_b4 = 0;
  local_b0 = 4;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 4;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 4;
  local_94 = 0;
  if (local_10 != 8) {
    if (local_10 == 0x10) {
      uVar3 = uVar3 * 2;
    }
    else {
      if (8 < local_10) {
        FUN_10136ca0(&PTR_s_C__Users_runneradmin__cargo_regi_101502e4);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      bVar2 = (byte)(8 / local_10);
      uVar3 = (uVar3 / bVar2 + 1) - (uint)(uVar3 % (uint)bVar2 == 0);
    }
  }
  FUN_100b7130((int)local_150);
  return uVar3 + 1;
}
