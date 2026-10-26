// rea decompile_all
// name: FUN_101125e0
// address: 0x101125e0
// body: available
// range: 0x101125e0-0x101126d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101125e0(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  SIZE_T SVar5;

  puVar3 = (ushort *)(param_2 + 0x30);
  uVar4 = 0x10c;
  puVar2 = puVar3;
  do {
    if (*puVar2 == 0) goto LAB_10112690;
    if (puVar2[1] == 0) {
      puVar2 = puVar2 + 1;
      goto LAB_10112690;
    }
    if (puVar2[2] == 0) {
      puVar2 = puVar2 + 2;
      goto LAB_10112690;
    }
    if (puVar2[3] == 0) {
      puVar2 = puVar2 + 3;
      goto LAB_10112690;
    }
    if (puVar2[4] == 0) {
      puVar2 = puVar2 + 4;
      goto LAB_10112690;
    }
    if (puVar2[5] == 0) {
      puVar2 = puVar2 + 5;
      goto LAB_10112690;
    }
    if (puVar2[6] == 0) {
      puVar2 = puVar2 + 6;
      goto LAB_10112690;
    }
    if (puVar2[7] == 0) {
      puVar2 = puVar2 + 7;
      goto LAB_10112690;
    }
    uVar4 = uVar4 - 8;
    puVar2 = puVar2 + 8;
  } while (0xf < uVar4);
  puVar2 = (ushort *)(param_2 + 0x230);
  if (*(ushort *)(param_2 + 0x230) != 0) {
    if (*(short *)(param_2 + 0x232) == 0) {
      puVar2 = (ushort *)(param_2 + 0x232);
    }
    else if (*(short *)(param_2 + 0x234) == 0) {
      puVar2 = (ushort *)(param_2 + 0x234);
    }
    else {
      SVar5 = 0x104;
      if (*(short *)(param_2 + 0x236) != 0) goto LAB_1011269e;
      puVar2 = (ushort *)(param_2 + 0x236);
    }
  }
LAB_10112690:
  SVar5 = (uint)((int)puVar2 - (int)puVar3) >> 1;
  if (0x209 < (uint)((int)puVar2 - (int)puVar3)) {
    FUN_10136a50(0,SVar5,0x104,&PTR_s_C__Users_runneradmin__rustup_too_10158614);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_1011269e:
  FUN_10093310(param_1,puVar3,SVar5);
  return;
}
