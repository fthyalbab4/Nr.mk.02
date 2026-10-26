// rea decompile_all
// name: FUN_100196e0
// address: 0x100196e0
// body: available
// range: 0x100196e0-0x100197e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * __fastcall FUN_100196e0(uint *param_1,uint *param_2,uint *param_3,uint param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *local_18;

  local_18 = param_1;
  if (7 < param_4) {
    uVar6 = param_4 >> 3;
    local_18 = FUN_100196e0(param_1,param_1 + uVar6 * 4,param_1 + uVar6 * 7,uVar6,param_5);
    param_2 = FUN_100196e0(param_2,param_2 + uVar6 * 4,param_2 + uVar6 * 7,uVar6,param_5);
    param_3 = FUN_100196e0(param_3,param_3 + uVar6 * 4,param_3 + uVar6 * 7,uVar6,param_5);
  }
  uVar6 = *local_18;
  uVar4 = uVar6;
  if (((uVar6 < 0x100) && (uVar1 = *param_2, uVar4 = uVar1, uVar1 < 0x100)) &&
     (uVar4 = *param_3, uVar4 < 0x100)) {
    iVar7 = *(int *)*param_5;
    iVar2 = ((int *)*param_5)[1];
    iVar8 = -(*(int *)(iVar7 + uVar6 * 4) * *(int *)(iVar2 + uVar6 * 4));
    iVar5 = -(*(int *)(iVar7 + uVar1 * 4) * *(int *)(iVar2 + uVar1 * 4));
    iVar7 = -(*(int *)(iVar7 + uVar4 * 4) * *(int *)(iVar2 + uVar4 * 4));
    if (iVar5 < iVar7 != iVar8 < iVar5) {
      param_2 = param_3;
    }
    if (iVar8 < iVar7 != iVar8 < iVar5) {
      param_2 = local_18;
    }
    return param_2;
  }
  FUN_10136b52(uVar4,0x100,&DAT_1013fb14);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
