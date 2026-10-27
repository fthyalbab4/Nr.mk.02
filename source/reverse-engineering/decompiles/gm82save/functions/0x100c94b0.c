// rea decompile_all
// name: FUN_100c94b0
// address: 0x100c94b0
// body: available
// range: 0x100c94b0-0x100c95d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100c94b0(uint *param_1)

{
  uint uVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;

  uVar5 = param_1[5];
  uVar1 = param_1[2];
  _Src = (void *)param_1[1];
  if (param_1[3] - uVar5 < uVar1) {
    FUN_101359e0(param_1 + 3,uVar5,uVar1,&DAT_00000004,0xc);
    uVar5 = param_1[5];
  }
  else if (uVar1 == 0) goto LAB_100c94ee;
  memcpy((void *)(uVar5 * 0xc + param_1[4]),_Src,uVar1 * 0xc);
LAB_100c94ee:
  uVar5 = uVar5 + uVar1;
  param_1[5] = uVar5;
  param_1[2] = 0;
  if (uVar5 == 0) {
    if (*param_1 == 0) {
      FUN_10135e90(param_1);
    }
    puVar4 = (undefined4 *)param_1[1];
    *puVar4 = 0;
    puVar4[1] = 4;
  }
  else {
    uVar5 = uVar5 - 1;
    param_1[5] = uVar5;
    uVar2 = *(undefined4 *)(param_1[4] + uVar5 * 0xc);
    uVar3 = *(undefined4 *)(param_1[4] + 4 + uVar5 * 0xc);
    if (*param_1 == 0) {
      FUN_10135e90(param_1);
    }
    puVar4 = (undefined4 *)param_1[1];
    puVar4[1] = uVar3;
    *puVar4 = uVar2;
  }
  puVar4[2] = 0;
  param_1[2] = 1;
  if (param_1[5] == 0) {
    if (*param_1 == 1) {
      FUN_10135e90(param_1);
      puVar4 = (undefined4 *)param_1[1];
    }
    puVar4[3] = 0;
    puVar4[4] = 4;
  }
  else {
    uVar5 = param_1[5] - 1;
    param_1[5] = uVar5;
    uVar2 = *(undefined4 *)(param_1[4] + uVar5 * 0xc);
    uVar3 = *(undefined4 *)(param_1[4] + 4 + uVar5 * 0xc);
    if (*param_1 == 1) {
      FUN_10135e90(param_1);
      puVar4 = (undefined4 *)param_1[1];
    }
    puVar4[3] = uVar2;
    puVar4[4] = uVar3;
  }
  puVar4[5] = 0;
  param_1[2] = 2;
  return;
}
