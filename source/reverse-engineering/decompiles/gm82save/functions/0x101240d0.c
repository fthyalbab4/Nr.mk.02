// rea decompile_all
// name: FUN_101240d0
// address: 0x101240d0
// body: available
// range: 0x101240d0-0x10124247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_101240d0(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  void *_Src;

  uVar3 = param_1[1];
  if (uVar3 <= param_3) {
    param_3 = uVar3;
  }
  if (uVar3 == 0) {
    param_3 = 0;
  }
  else {
    param_1[1] = uVar3 - param_3;
    iVar1 = param_1[7];
    if (*(char *)(iVar1 + 2) == '\x01') {
      uVar3 = *(uint *)(iVar1 + 0x18);
      if ((param_3 + param_2 < param_2) || (uVar3 < param_3 + param_2)) goto LAB_101241e0;
      _Src = (void *)*param_1;
      memcpy((void *)(*(int *)(iVar1 + 0x14) + param_2),_Src,param_3);
      uVar3 = *(uint *)(iVar1 + 0x18);
      if (uVar3 < param_2) {
        FUN_10136a50(param_2,uVar3,uVar3,&PTR_s_C__Users_runneradmin__cargo_regi_1015d0e0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar3 - param_2 < param_3) {
        FUN_10136a50(0,param_3,uVar3 - param_2,&PTR_s_C__Users_runneradmin__cargo_regi_1015d0d0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar3 = FUN_10122760(param_1[0xc],(byte *)(param_2 + *(int *)(iVar1 + 0x14)),param_3);
      param_1[0xc] = uVar3;
    }
    else if (*(char *)(iVar1 + 2) == '\x02') {
      uVar3 = *(uint *)(iVar1 + 0x18);
      if ((param_3 + param_2 < param_2) || (uVar3 < param_3 + param_2)) {
LAB_101241e0:
        FUN_10136a50(param_2,param_3 + param_2,uVar3,&DAT_1015b800);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      _Src = (void *)*param_1;
      memcpy((void *)(*(int *)(iVar1 + 0x14) + param_2),_Src,param_3);
      uVar3 = *(uint *)(iVar1 + 0x18);
      if (uVar3 < param_2) {
        FUN_10136a50(param_2,uVar3,uVar3,&PTR_s_C__Users_runneradmin__cargo_regi_1015d0c0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar3 - param_2 < param_3) {
        FUN_10136a50(0,param_3,uVar3 - param_2,&PTR_s_C__Users_runneradmin__cargo_regi_1015d0b0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar3 = FUN_10122090(*(uint *)(iVar1 + 0xa0),(byte *)(param_2 + *(int *)(iVar1 + 0x14)),
                           param_3);
      *(uint *)(iVar1 + 0xa0) = uVar3;
    }
    else {
      uVar3 = *(uint *)(iVar1 + 0x18);
      if ((param_3 + param_2 < param_2) || (uVar3 < param_3 + param_2)) goto LAB_101241e0;
      _Src = (void *)*param_1;
      memcpy((void *)(param_2 + *(int *)(iVar1 + 0x14)),_Src,param_3);
    }
    *param_1 = (int)_Src + param_3;
    param_1[2] = param_1[2] + param_3;
  }
  return param_3;
}
