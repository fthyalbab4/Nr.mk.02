// rea decompile_all
// name: FUN_10106960
// address: 0x10106960
// body: available
// range: 0x10106960-0x101069de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10106960(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint local_30 [10];

  if (DAT_101633c0 == 0) {
    FUN_1013c860(local_30);
    sVar3 = (short)local_30[0];
    uVar2 = DAT_101633c0;
    uVar1 = local_30[0];
  }
  else {
    sVar3 = (short)DAT_101633c0;
    uVar2 = DAT_101633c0;
    uVar1 = local_30[0];
  }
  local_30[0] = uVar2;
  puVar5 = &LAB_101061e0;
  DAT_101633c0 = local_30[0];
  if (-1 < sVar3) {
    if (local_30[0] == 0) {
      local_30[0] = uVar1;
      FUN_1013c860(local_30);
    }
    puVar5 = (undefined1 *)0x0;
    if ((local_30[0] >> 9 & 1) != 0) {
      puVar5 = &LAB_101061c0;
    }
  }
  param_1[1] = 1;
  puVar4 = &LAB_10106200;
  if (puVar5 != (undefined1 *)0x0) {
    puVar4 = puVar5;
  }
  *param_1 = puVar4;
  return;
}
