// rea decompile_all
// name: FUN_100975a0
// address: 0x100975a0
// body: available
// range: 0x100975a0-0x10097689 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_100975a0(byte param_1,int param_2,uint param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint local_18;

  uVar7 = (param_2 + 3U & 0xfffffffc) - param_2;
  local_18 = param_3;
  uVar6 = param_3;
  if ((uVar7 <= param_3) &&
     (uVar4 = param_3 - uVar7 & 7, uVar6 = param_3 - uVar4, local_18 = uVar7, param_3 < uVar4)) {
    FUN_10136a50(uVar6,param_3,param_3,&PTR_s_C__Users_runneradmin__rustup_too_10145a30);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pbVar5 = (byte *)((param_3 - 1) + param_2);
  iVar8 = param_3 - uVar6;
  do {
    if (iVar8 == 0) {
      uVar7 = (uint)param_1;
      uVar4 = uVar7 * 0x1010101;
      goto LAB_10097600;
    }
    iVar8 = iVar8 + -1;
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + -1;
  } while (bVar1 != param_1);
  uVar9 = iVar8 + uVar6;
  goto LAB_1009764f;
  while( true ) {
    uVar6 = *(uint *)(param_2 + -8 + uVar9) ^ uVar4;
    uVar7 = *(uint *)(param_2 + -4 + uVar9) ^ uVar4;
    uVar7 = ~((0x1010100 - uVar7 | uVar7) & (0x1010100 - uVar6 | uVar6));
    uVar6 = uVar9 - 8;
    if ((uVar7 & 0x80808080) != 0) break;
LAB_10097600:
    uVar9 = uVar6;
    if (uVar9 <= local_18) break;
  }
  if (param_3 < uVar9) {
    FUN_10136a50(0,uVar9,param_3,&PTR_s_C__Users_runneradmin__rustup_too_10145a20);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  do {
    if (uVar9 == 0) {
      uVar3 = 0;
      goto LAB_10097658;
    }
    pbVar5 = (byte *)(param_2 + -1 + uVar9);
    uVar9 = uVar9 - 1;
    uVar7 = uVar9;
  } while (*pbVar5 != param_1);
LAB_1009764f:
  uVar3 = 1;
  uVar7 = uVar9;
LAB_10097658:
  return CONCAT44(uVar7,uVar3);
}
