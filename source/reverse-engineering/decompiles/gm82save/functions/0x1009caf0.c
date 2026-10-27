// rea decompile_all
// name: FUN_1009caf0
// address: 0x1009caf0
// body: available
// range: 0x1009caf0-0x1009cba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1009caf0(uint param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;

  pcVar4 = (char *)0x1;
  if ((param_4[2] & 0x200000) != 0) {
    pcVar4 = "+";
  }
  if (param_1 != 0 || param_2 != 0) {
    iVar7 = 1;
    puVar6 = &DAT_10156d2e;
    uVar5 = 100000000;
    uVar3 = param_3;
    goto LAB_1009cb9b;
  }
  if (param_3 < 1000000) {
    if (999 < param_3) {
      uVar2 = param_3 / 1000;
      iVar1 = uVar2 * 1000;
      iVar7 = 3;
      puVar6 = &DAT_10149dec;
      uVar5 = 100;
      goto LAB_1009cb87;
    }
    iVar7 = 2;
    puVar6 = &DAT_10149dea;
    uVar5 = 1;
    uVar3 = 0;
  }
  else {
    uVar2 = param_3 / 1000000;
    iVar1 = uVar2 * 1000000;
    iVar7 = 2;
    puVar6 = &DAT_10149def;
    uVar5 = 100000;
LAB_1009cb87:
    uVar3 = param_3 - iVar1;
    param_3 = uVar2;
  }
  param_2 = 0;
  param_1 = param_3;
LAB_1009cb9b:
  FUN_1009cbb0(param_4,param_1,param_2,uVar3,uVar5,pcVar4,(param_4[2] & 0x200000) >> 0x15,
               (int)puVar6,iVar7);
  return;
}
