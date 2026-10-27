// rea decompile_all
// name: FUN_100fce40
// address: 0x100fce40
// body: available
// range: 0x100fce40-0x100fcf87 inclusive
// range: 0x100fcf90-0x100fd07d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100fce40(uint *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  char local_29;
  uint local_28;
  uint *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;

  iVar2 = *param_2;
  if (*(char *)(iVar2 + 0x65) == '\0') {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10154170);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar5 = FUN_100f0c40(param_2);
  if ((uVar5 < 0x30) || (uVar5 = FUN_100f0c40(param_2), 0x37 < uVar5)) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_101541bc);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_28 = *(uint *)(iVar2 + 0x50);
  local_14 = *(uint *)(iVar2 + 0x54);
  local_18 = *(uint *)(iVar2 + 0x58);
  local_24 = param_1;
  do {
    uVar6 = FUN_100f1250(param_2);
    if ((((char)uVar6 == '\0') || (uVar5 = FUN_100f0c40(param_2), uVar5 < 0x30)) ||
       (uVar5 = FUN_100f0c40(param_2), 0x37 < uVar5)) {
      uVar5 = *(uint *)(iVar2 + 0x50);
      break;
    }
    uVar5 = *(uint *)(iVar2 + 0x50);
  } while (uVar5 - local_28 < 3);
  iVar3 = param_2[1];
  uVar11 = param_2[2];
  iVar7 = uVar5 - local_28;
  if (uVar5 < local_28) goto LAB_100fcf00;
  local_1c = *(uint *)(iVar2 + 0x54);
  local_20 = *(uint *)(iVar2 + 0x58);
  if (local_28 != 0) {
    if (local_28 < uVar11) {
      if (*(char *)(iVar3 + local_28) < -0x40) goto LAB_100fcf00;
    }
    else if (local_28 != uVar11) goto LAB_100fcf00;
  }
  if (uVar5 != 0) {
    if (uVar5 < uVar11) {
      if (*(char *)(iVar3 + uVar5) < -0x40) {
LAB_100fcf00:
        FUN_10136b90(iVar3,uVar11,local_28,uVar5,&PTR_s_C__Users_runneradmin__cargo_regi_101541cc);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    else if (uVar5 != uVar11) goto LAB_100fcf00;
  }
  pcVar9 = (char *)(iVar3 + local_28);
  if (iVar7 == 1) {
    cVar12 = *pcVar9;
    local_29 = '\x01';
    if ((cVar12 == '+') || (cVar12 == '-')) goto LAB_100fd004;
  }
  else {
    if (iVar7 == 0) {
      local_29 = '\0';
      goto LAB_100fd004;
    }
    cVar12 = *pcVar9;
  }
  uVar8 = iVar7 - (uint)(cVar12 == '+');
  pbVar10 = (byte *)(pcVar9 + (cVar12 == '+'));
  uVar11 = 0;
  if (uVar8 < 9) {
    if (uVar8 == 0) goto LAB_100fcfc5;
    do {
      bVar1 = *pbVar10;
      if (7 < bVar1 - 0x30) goto LAB_100fd076;
      pbVar10 = pbVar10 + 1;
      uVar8 = uVar8 - 1;
      uVar11 = (bVar1 - 0x30) + uVar11 * 8;
    } while (uVar8 != 0);
  }
  else {
    do {
      if (0x1fffffff < uVar11) {
        local_29 = ((*pbVar10 & 0xf8) == 0x30) + '\x01';
        goto LAB_100fd004;
      }
      uVar13 = *pbVar10 - 0x30;
      if (7 < uVar13) goto LAB_100fd076;
      pbVar10 = pbVar10 + 1;
      uVar8 = uVar8 - 1;
      uVar11 = uVar13 + uVar11 * 8;
    } while (uVar8 != 0);
  }
  if ((uVar11 ^ 0xd800) - 0x110000 < 0xffef0800) {
    FUN_10136c10(&DAT_101541dc,0x14,&PTR_s_C__Users_runneradmin__cargo_regi_101541f0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
LAB_100fcfc5:
  local_24[1] = local_28;
  local_24[2] = local_14;
  local_24[3] = local_18;
  local_24[4] = uVar5;
  local_24[5] = local_1c;
  local_24[6] = local_20;
  *(undefined1 *)(local_24 + 7) = 3;
  *local_24 = uVar11;
  return;
LAB_100fd076:
  local_29 = '\x01';
LAB_100fd004:
  FUN_10136c40("valid octal number",0x12,&local_29,&DAT_10154200,
               &PTR_s_C__Users_runneradmin__cargo_regi_10154224);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
