// rea decompile_all
// name: FUN_1012a720
// address: 0x1012a720
// body: available
// range: 0x1012a720-0x1012a986 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012a720(int param_1,uint param_2,uint param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  uint local_20;
  uint local_1c;

  bVar7 = *(byte *)(param_1 + 0x70);
  bVar6 = bVar7 + 3;
  if (bVar6 < 0x40) {
    uVar8 = (uint)param_4 << (bVar7 & 0x1f);
    local_20 = uVar8;
    local_1c = 0 << (bVar7 & 0x1f) | (uint)(param_4 >> 0x20 - (bVar7 & 0x1f));
    if ((bVar7 & 0x20) != 0) {
      local_20 = 0;
      local_1c = uVar8;
    }
    local_1c = local_1c | *(uint *)(param_1 + 0x6c);
    local_20 = local_20 | *(uint *)(param_1 + 0x68);
  }
  else {
    FUN_1012a990((int *)(param_1 + 0x58),(uint)param_4,0,bVar6);
    bVar6 = *(byte *)(param_1 + 0x70);
    local_20 = *(uint *)(param_1 + 0x68);
    local_1c = *(uint *)(param_1 + 0x6c);
  }
  bVar7 = ((bVar6 >> 3) + 1) - ((bVar6 & 7) == 0);
  uVar8 = (uint)bVar7;
  if (8 < bVar7) {
    FUN_10136a50(0,uVar8,8,&PTR_s_C__Users_runneradmin__cargo_regi_1015bfa4);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar1 = *(int *)(param_1 + 0x60);
  iVar11 = *(int *)(param_1 + 100);
  uVar2 = *(uint *)(param_1 + 0x5c);
  uVar10 = iVar11 + iVar1;
  if (uVar2 - uVar10 < uVar8) {
    FUN_101369c0("buf.len() must fit in remaining()",0x43,
                 &PTR_s_C__Users_runneradmin__cargo_regi_1015bf94);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar2 < uVar10) {
    FUN_10136a50(uVar10,uVar2,uVar2,&PTR_s_C__Users_runneradmin__cargo_regi_1015bf94);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar3 = *(int *)(param_1 + 0x58);
  memcpy((void *)(uVar10 + iVar3),&local_20,uVar8);
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar10 = param_3 - param_2;
  if ((param_3 < param_2) || (*(uint *)(param_1 + 0x18) < param_3)) {
    FUN_10136a50(param_2,param_3,*(uint *)(param_1 + 0x18),
                 &PTR_s_C__Users_runneradmin__cargo_regi_1015db34);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar11 = iVar11 + uVar8;
  uVar8 = iVar11 + iVar1;
  if (uVar2 - uVar8 < 2) {
    FUN_101369c0("buf.len() must fit in remaining()",0x43,
                 &PTR_s_C__Users_runneradmin__cargo_regi_1015db04);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar2 < uVar8) {
    FUN_10136a50(uVar8,uVar2,uVar2,&PTR_s_C__Users_runneradmin__cargo_regi_1015db04);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar4 = *(int *)(param_1 + 0x14);
  uVar9 = (ushort)uVar10;
  *(ushort *)(iVar3 + uVar8) = uVar9;
  uVar8 = iVar11 + 2 + iVar1;
  if (uVar2 - uVar8 < 2) {
    FUN_101369c0("buf.len() must fit in remaining()",0x43,
                 &PTR_s_C__Users_runneradmin__cargo_regi_1015db14);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (uVar2 < uVar8) {
    FUN_10136a50(uVar8,uVar2,uVar2,&PTR_s_C__Users_runneradmin__cargo_regi_1015db14);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  iVar11 = iVar11 + 4;
  *(ushort *)(iVar3 + uVar8) = ~uVar9;
  *(int *)(param_1 + 100) = iVar11;
  if (uVar9 != 0) {
    uVar8 = iVar1 + iVar11;
    if (uVar2 - uVar8 < uVar10) {
      FUN_101369c0("buf.len() must fit in remaining()",0x43,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1015db24);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (uVar2 < uVar8) {
      FUN_10136a50(uVar8,uVar2,uVar2,&PTR_s_C__Users_runneradmin__cargo_regi_1015db24);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    memcpy((void *)(iVar3 + uVar8),(void *)(iVar4 + param_2),uVar10);
    *(uint *)(param_1 + 100) = iVar11 + uVar10;
  }
  return;
}
