// rea decompile_all
// name: FUN_10093270
// address: 0x10093270
// body: available
// range: 0x10093270-0x1009330e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10093270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;

  if ((*(char *)((int)param_2 + 0xc) == '\0') && (*(int *)(param_2 + 1) != 0)) {
    pbVar5 = *(byte **)((int)param_2 + 4) + *(int *)(param_2 + 1);
    pbVar4 = *(byte **)((int)param_2 + 4);
    do {
      bVar2 = *pbVar4;
      pbVar3 = pbVar4 + 1;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xe0) {
          if (pbVar3 != pbVar5) {
            pbVar3 = pbVar4 + 2;
          }
        }
        else if (bVar2 == 0xed) {
          if ((pbVar3 == pbVar5) || (pbVar4 + 2 == pbVar5)) break;
          if (0x9f < pbVar4[1]) {
            uVar1 = *param_2;
            param_1[1] = param_2[1];
            *param_1 = uVar1;
            return;
          }
          pbVar3 = pbVar4 + 3;
        }
        else {
          pbVar4 = pbVar4 + 2;
          if (pbVar3 == pbVar5) {
            pbVar4 = pbVar3;
          }
          pbVar3 = pbVar4 + (pbVar4 != pbVar5);
          if (0xef < bVar2) {
            pbVar3 = pbVar3 + (pbVar3 != pbVar5);
          }
        }
      }
      pbVar4 = pbVar3;
    } while (pbVar3 != pbVar5);
  }
  uVar1 = *param_2;
  *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((int)param_1 + 4) = uVar1;
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}
