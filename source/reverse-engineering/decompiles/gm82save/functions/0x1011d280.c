// rea decompile_all
// name: FUN_1011d280
// address: 0x1011d280
// body: available
// range: 0x1011d280-0x1011d38e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011d280(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  int local_30;
  byte *pbStack_2c;
  int iStack_28;
  uint local_24;

  FUN_1010c370((undefined8 *)&local_30,param_2,0x11);
  if (local_30 == -1) {
    local_30 = -1;
  }
  else {
    if ((local_24 & 1) == 0) {
      if (iStack_28 == 0) {
        iStack_28 = 0;
      }
      else {
        pbVar1 = pbStack_2c + iStack_28;
        pbVar4 = pbStack_2c;
        do {
          bVar2 = *pbVar4;
          pbVar3 = pbVar4 + 1;
          if ((char)bVar2 < '\0') {
            if (bVar2 < 0xe0) {
              if (pbVar3 != pbVar1) {
                pbVar3 = pbVar4 + 2;
              }
            }
            else if (bVar2 == 0xed) {
              if ((pbVar3 == pbVar1) || (pbVar4 + 2 == pbVar1)) break;
              if (0x9f < pbVar4[1]) {
                uVar5 = CONCAT44(iStack_28,pbStack_2c);
                param_1[3] = local_24;
                goto LAB_1011d35c;
              }
              pbVar3 = pbVar4 + 3;
            }
            else {
              pbVar4 = pbVar4 + 2;
              if (pbVar3 == pbVar1) {
                pbVar4 = pbVar3;
              }
              pbVar3 = pbVar4 + (pbVar4 != pbVar1);
              if (0xef < bVar2) {
                pbVar3 = pbVar3 + (pbVar3 != pbVar1);
              }
            }
          }
          pbVar4 = pbVar3;
        } while (pbVar3 != pbVar1);
      }
    }
    param_1[3] = iStack_28;
    uVar5 = CONCAT44(pbStack_2c,local_30);
    local_30 = -2;
LAB_1011d35c:
    *(undefined8 *)(param_1 + 1) = uVar5;
  }
  *param_1 = local_30;
  return;
}
