// rea decompile_all
// name: FUN_1011d450
// address: 0x1011d450
// body: available
// range: 0x1011d450-0x1011d55a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011d450(int *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  int local_20;
  byte *local_1c;
  int local_18;
  int local_14;

  piVar3 = *(int **)(param_2 + 4);
  if (piVar3 != *(int **)(param_2 + 0xc)) {
    *(int **)(param_2 + 4) = piVar3 + 4;
    local_20 = *piVar3;
    if (local_20 != -1) {
      local_1c = (byte *)piVar3[1];
      local_18 = piVar3[2];
      if (((*(byte *)(piVar3 + 3) & 1) == 0) && (local_18 != 0)) {
        pbVar1 = local_1c + local_18;
        pbVar6 = local_1c;
        do {
          bVar2 = *pbVar6;
          pbVar5 = pbVar6 + 1;
          if ((char)bVar2 < '\0') {
            if (bVar2 < 0xe0) {
              if (pbVar5 != pbVar1) {
                pbVar5 = pbVar6 + 2;
              }
            }
            else if (bVar2 == 0xed) {
              if ((pbVar5 == pbVar1) || (pbVar6 + 2 == pbVar1)) break;
              if (0x9f < pbVar6[1]) {
                local_14 = (uint)*(uint3 *)((int)piVar3 + 0xd) << 8;
                FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_20,
                             &PTR_FUN_10156f68,&PTR_s_C__Users_runneradmin__rustup_too_10156fec);
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              pbVar5 = pbVar6 + 3;
            }
            else {
              pbVar6 = pbVar6 + 2;
              if (pbVar5 == pbVar1) {
                pbVar6 = pbVar5;
              }
              pbVar5 = pbVar6 + (pbVar6 != pbVar1);
              if (0xef < bVar2) {
                pbVar5 = pbVar5 + (pbVar5 != pbVar1);
              }
            }
          }
          pbVar6 = pbVar5;
        } while (pbVar5 != pbVar1);
      }
      *param_1 = local_20;
      param_1[1] = (int)local_1c;
      param_1[2] = local_18;
      return;
    }
  }
  *param_1 = -1;
  return;
}
