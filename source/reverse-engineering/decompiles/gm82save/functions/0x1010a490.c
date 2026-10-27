// rea decompile_all
// name: FUN_1010a490
// address: 0x1010a490
// body: available
// range: 0x1010a490-0x1010a5aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall FUN_1010a490(byte *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte local_24 [8];
  int local_1c;
  int local_14;

  FUN_1010a5e0(local_24,param_1,param_2);
  uVar3 = 6;
  uVar2 = param_2;
  pbVar4 = param_1;
  switch(local_24[0]) {
  case 0:
  case 3:
    uVar3 = local_1c + 4;
    break;
  case 1:
    iVar5 = local_14 + 1;
    if (local_14 == 0) {
      iVar5 = 0;
    }
    uVar3 = local_1c + 8 + iVar5;
    break;
  case 2:
    break;
  case 4:
    iVar5 = local_14 + 1;
    if (local_14 == 0) {
      iVar5 = 0;
    }
    uVar3 = local_1c + 2 + iVar5;
    break;
  case 5:
    uVar3 = 2;
    break;
  default:
    goto switchD_1010a4d8_default;
  }
  uVar2 = param_2 - uVar3;
  if (uVar3 <= param_2) {
    pbVar4 = param_1 + uVar3;
switchD_1010a4d8_default:
    if ((uVar2 == 0) || ((*pbVar4 != 0x2f && (*pbVar4 != 0x5c)))) {
      if (local_24[0] == 5) {
        return false;
      }
      if (local_24[0] == 0xff) {
        return false;
      }
    }
    FUN_1010a5e0(local_24,param_1,param_2);
    uVar3 = 6;
    switch(local_24[0]) {
    case 0:
    case 3:
      uVar3 = local_1c + 4;
      break;
    case 1:
      iVar5 = local_14 + 1;
      if (local_14 == 0) {
        iVar5 = 0;
      }
      uVar3 = local_1c + 8 + iVar5;
      break;
    case 2:
      break;
    case 4:
      iVar5 = local_14 + 1;
      if (local_14 == 0) {
        iVar5 = 0;
      }
      uVar3 = local_1c + 2 + iVar5;
      break;
    case 5:
      uVar3 = 2;
      break;
    default:
      goto switchD_1010a55e_default;
    }
    if (uVar3 <= param_2) {
switchD_1010a55e_default:
      return local_24[0] != 0xff;
    }
  }
  FUN_10136a50(uVar3,param_2,param_2,&PTR_s_C__Users_runneradmin__rustup_too_10158004);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
