// rea decompile_all
// name: FUN_1010b4c0
// address: 0x1010b4c0
// body: available
// range: 0x1010b4c0-0x1010b65b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010b4c0(int *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char *pcVar10;

  bVar2 = *(byte *)(param_2 + 7);
  iVar9 = 0;
  if (bVar2 < 2) {
    uVar6 = (uint)*(byte *)((int)param_2 + 0x1e);
    uVar7 = FUN_1010b3c0(param_2);
    if (bVar2 == 0) {
      switch((char)param_2[2]) {
      case '\0':
      case '\x03':
        iVar9 = param_2[4] + 4;
        break;
      case '\x01':
        iVar9 = param_2[6] + 1;
        if (param_2[6] == 0) {
          iVar9 = 0;
        }
        iVar9 = param_2[4] + 8 + iVar9;
        break;
      case '\x02':
        iVar9 = 6;
        break;
      case '\x04':
        iVar9 = param_2[6] + 1;
        if (param_2[6] == 0) {
          iVar9 = 0;
        }
        iVar9 = param_2[4] + 2 + iVar9;
        break;
      case '\x05':
        iVar9 = 2;
      }
    }
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
  }
  uVar3 = param_2[1];
  uVar1 = uVar6 + iVar9 + (uVar7 & 0xff);
  if (uVar3 < uVar1) {
    FUN_10136a50(uVar1,uVar3,uVar3,&PTR_s_C__Users_runneradmin__rustup_too_10157ccc);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar1 == uVar3) {
    bVar2 = *(byte *)(param_2 + 2);
    iVar9 = 0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 2);
    pcVar10 = (char *)((uVar3 - 1) + *param_2);
    uVar6 = (uVar6 + iVar9 + (uVar7 & 0xff)) - uVar3;
    if (bVar2 < 3) {
      do {
        if (*pcVar10 == '\\') goto LAB_1010b56f;
        pcVar10 = pcVar10 + -1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0);
    }
    else {
      do {
        if ((*pcVar10 == '/') || (*pcVar10 == '\\')) goto LAB_1010b56f;
        pcVar10 = pcVar10 + -1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0);
    }
    iVar9 = 0;
  }
joined_r0x1010b58c:
  iVar5 = uVar3 - uVar1;
  pcVar10 = (char *)(*param_2 + uVar1);
  if (iVar5 == 0) {
    bVar8 = 0xff;
  }
  else if (iVar5 == 2) {
    bVar8 = ((char)((ushort)*(undefined2 *)pcVar10 >> 8) == '.' &&
            (char)*(undefined2 *)pcVar10 == '.') ^ 9;
  }
  else {
    bVar8 = 9;
    if ((iVar5 == 1) && (*pcVar10 == '.')) {
      bVar8 = (bVar2 < 3) - 1U | 7;
    }
  }
  *param_1 = iVar9 + iVar5;
  *(byte *)(param_1 + 1) = bVar8;
  param_1[2] = (int)pcVar10;
  param_1[3] = iVar5;
  return;
LAB_1010b56f:
  uVar1 = uVar1 + 1 + ~uVar6;
  if (uVar3 < uVar1) {
    FUN_10136a50(uVar1,uVar3,uVar3,&PTR_s_C__Users_runneradmin__rustup_too_10157cbc);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  iVar9 = 1;
  goto joined_r0x1010b58c;
}
