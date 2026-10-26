// rea decompile_all
// name: FUN_10019ba0
// address: 0x10019ba0
// body: available
// range: 0x10019ba0-0x10019bdc inclusive
// range: 0x10019be0-0x10019c96 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10019ba0(uint *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  code *pcVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int local_1c;

  if (param_2 < param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (param_3 != param_2) {
    puVar3 = param_1 + param_3;
    local_1c = param_3 * -4 + 4;
    do {
      uVar1 = *puVar3;
      uVar4 = uVar1;
      if ((0xff < uVar1) || (uVar4 = puVar3[-1], 0xff < uVar4)) {
LAB_10019c7d:
        FUN_10136b52(uVar4,0x100,&DAT_1013fb14);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      puVar6 = puVar3;
      iVar7 = local_1c;
      if (-(*(int *)(*param_4 + uVar1 * 4) * *(int *)(param_4[1] + uVar1 * 4)) <
          -(*(int *)(*param_4 + uVar4 * 4) * *(int *)(param_4[1] + uVar4 * 4))) {
        do {
          *puVar6 = uVar4;
          puVar5 = param_1;
          if (iVar7 == 0) break;
          uVar4 = puVar6[-2];
          if (0xff < uVar4) goto LAB_10019c7d;
          puVar5 = puVar6 + -1;
          puVar6 = puVar5;
          iVar7 = iVar7 + 4;
        } while (-(*(int *)(*param_4 + uVar1 * 4) * *(int *)(param_4[1] + uVar1 * 4)) <
                 -(*(int *)(*param_4 + uVar4 * 4) * *(int *)(param_4[1] + uVar4 * 4)));
        *puVar5 = uVar1;
      }
      local_1c = local_1c + -4;
      puVar3 = puVar3 + 1;
    } while (puVar3 != param_1 + param_2);
  }
  return;
}
