// rea decompile_all
// name: FUN_1012b140
// address: 0x1012b140
// body: available
// range: 0x1012b140-0x1012b249 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012b140(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  code *pcVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_20;
  uint local_1c;

  bVar1 = *(byte *)(param_1 + 6);
  uVar9 = param_1[4];
  uVar2 = param_1[5];
  uVar8 = (uint)(bVar1 >> 3);
  local_20 = uVar9;
  local_1c = uVar2;
  if (0x47 < bVar1) {
    FUN_10136a50(0,uVar8,8,&PTR_s_C__Users_runneradmin__cargo_regi_1015bfc4);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar3 = param_1[3];
  uVar10 = param_1[1];
  uVar7 = param_1[2] + iVar3;
  if (uVar10 - uVar7 < uVar8) {
    FUN_101369c0("buf.len() must fit in remaining()",0x43,
                 &PTR_s_C__Users_runneradmin__cargo_regi_1015bfb4);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar10 < uVar7) {
    FUN_10136a50(uVar7,uVar10,uVar10,&PTR_s_C__Users_runneradmin__cargo_regi_1015bfb4);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  memcpy((void *)(uVar7 + *param_1),&local_20,uVar8);
  param_1[3] = iVar3 + uVar8;
  uVar8 = (CONCAT11(bVar1,bVar1) & 0x78ff) & 0xffffff07;
  *(char *)(param_1 + 6) = (char)uVar8;
  bVar6 = (byte)(uVar8 >> 8);
  bVar4 = bVar6 & 0x1f;
  uVar10 = uVar2 >> (bVar1 & 0x18);
  uVar8 = uVar10;
  uVar9 = uVar9 >> bVar4 | uVar2 << 0x20 - bVar4;
  if ((bVar1 & 0x20) != 0) {
    uVar8 = 0;
    uVar9 = uVar10;
  }
  if (0x3f < bVar6) {
    uVar9 = 0;
    uVar8 = 0;
  }
  param_1[5] = uVar8;
  param_1[4] = uVar9;
  return;
}
