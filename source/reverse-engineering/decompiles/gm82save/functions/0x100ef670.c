// rea decompile_all
// name: FUN_100ef670
// address: 0x100ef670
// body: available
// range: 0x100ef670-0x100ef690 inclusive
// range: 0x100ef6a0-0x100ef729 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100ef670(byte *param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int local_1c;

  local_1c = 0;
  pbVar7 = param_1 + 2;
  pbVar8 = param_1;
  do {
    pbVar6 = pbVar7;
    bVar1 = pbVar8[3];
    uVar2 = *(undefined2 *)(pbVar8 + 2);
    bVar5 = (byte)uVar2;
    bVar3 = bVar5 < *pbVar8;
    if (*pbVar8 == bVar5) {
      bVar3 = bVar1 < pbVar8[1];
    }
    iVar4 = local_1c;
    pbVar7 = pbVar6;
    if (bVar3) {
      do {
        *(undefined2 *)pbVar7 = *(undefined2 *)(pbVar7 + -2);
        pbVar8 = param_1;
        if (iVar4 == 0) break;
        bVar3 = bVar5 < pbVar7[-4];
        if (pbVar7[-4] == bVar5) {
          bVar3 = bVar1 < pbVar7[-3];
        }
        pbVar8 = pbVar7 + -2;
        iVar4 = iVar4 + 2;
        pbVar7 = pbVar8;
      } while (bVar3);
      *(undefined2 *)pbVar8 = uVar2;
    }
    local_1c = local_1c + -2;
    pbVar7 = pbVar6 + 2;
    pbVar8 = pbVar6;
    if (pbVar6 + 2 == param_1 + param_2 * 2) {
      return;
    }
  } while( true );
}
