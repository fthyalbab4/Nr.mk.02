// rea decompile_all
// name: FUN_10110b00
// address: 0x10110b00
// body: available
// range: 0x10110b00-0x10110bfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_10110b00(byte *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint local_4c;
  undefined4 uStack_48;
  int local_44;
  int local_3c;
  byte *local_30;
  uint local_2c;
  int local_18;
  undefined2 local_14;
  undefined1 local_12;

  FUN_1010a5e0((undefined1 *)&local_4c,param_1,param_2);
  uVar3 = 6;
  uVar2 = param_2;
  pbVar5 = param_1;
  switch(local_4c & 0xff) {
  case 0:
  case 3:
    uVar3 = local_44 + 4;
    break;
  case 1:
    iVar4 = local_3c + 1;
    if (local_3c == 0) {
      iVar4 = 0;
    }
    uVar3 = local_44 + 8 + iVar4;
    break;
  case 2:
    break;
  case 4:
    iVar4 = local_3c + 1;
    if (local_3c == 0) {
      iVar4 = 0;
    }
    uVar3 = local_44 + 2 + iVar4;
    break;
  case 5:
    uVar3 = 2;
    break;
  default:
    goto switchD_10110b3f_default;
  }
  uVar2 = param_2 - uVar3;
  if (param_2 < uVar3) {
    FUN_10136a50(uVar3,param_2,param_2,&PTR_s_C__Users_runneradmin__rustup_too_10158004);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pbVar5 = param_1 + uVar3;
switchD_10110b3f_default:
  if (uVar2 == 0) {
    local_12 = false;
  }
  else {
    local_12 = *pbVar5 == 0x2f || *pbVar5 == 0x5c;
  }
  local_18 = local_3c;
  local_14 = 0x200;
  local_30 = param_1;
  local_2c = param_2;
  FUN_101102a0((byte *)&local_4c,(int *)&local_30);
  uVar6 = 0;
  if (((char)local_4c != -1) && (uVar6 = 0, (char)local_4c == '\t')) {
    uVar6 = uStack_48;
  }
  return uVar6;
}
