// rea decompile_all
// name: FUN_10119da0
// address: 0x10119da0
// body: available
// range: 0x10119da0-0x10119e51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10119da0(DWORD *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  short *psVar3;

  uVar2 = param_2[2];
  if (0x104 < uVar2) {
    uVar1 = *(undefined8 *)param_2;
    param_1[2] = param_2[2];
    *(undefined8 *)param_1 = uVar1;
    return;
  }
  if ((((6 < uVar2) && (psVar3 = (short *)param_2[1], *psVar3 == 0x5c)) && (psVar3[1] == 0x5c)) &&
     ((psVar3[2] == 0x3f && (psVar3[3] == 0x5c)))) {
    if ((psVar3[5] == 0x3a) && (psVar3[6] == 0x5c)) {
      FUN_1011b240(param_1,psVar3 + 4,param_2);
      return;
    }
    if (((uVar2 != 7) && (psVar3[4] == 0x55)) &&
       ((psVar3[5] == 0x4e && ((psVar3[6] == 0x43 && (psVar3[7] == 0x5c)))))) {
      psVar3[6] = L'\\';
      FUN_1011b4d0(param_1,psVar3 + 6,param_2);
      return;
    }
  }
  FUN_1010fa40((undefined8 *)param_1,param_2,'\0');
  return;
}
