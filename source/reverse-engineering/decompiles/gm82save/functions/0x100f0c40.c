// rea decompile_all
// name: FUN_100f0c40
// address: 0x100f0c40
// body: available
// range: 0x100f0c40-0x100f0cf8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_100f0c40(int *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint local_18;
  undefined1 *local_14;
  undefined1 *local_10;

  local_14 = (undefined1 *)&local_18;
  iVar2 = param_1[1];
  local_18 = *(uint *)(*param_1 + 0x50);
  uVar4 = param_1[2];
  if (local_18 != 0) {
    if (local_18 < uVar4) {
      if (-0x41 < *(char *)(iVar2 + local_18)) goto LAB_100f0c77;
    }
    else if (local_18 == uVar4) goto LAB_100f0c77;
    FUN_10136b90(iVar2,uVar4,local_18,uVar4,&PTR_s_C__Users_runneradmin__cargo_regi_10153eb8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_100f0c77:
  if (local_18 != uVar4) {
    bVar1 = *(byte *)(iVar2 + local_18);
    uVar4 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar5 = *(byte *)(iVar2 + 1 + local_18) & 0x3f;
      if (bVar1 < 0xe0) {
        uVar4 = (uVar4 & 0x1f) << 6 | uVar5;
      }
      else {
        uVar5 = *(byte *)(iVar2 + 2 + local_18) & 0x3f | uVar5 << 6;
        if (bVar1 < 0xf0) {
          uVar4 = uVar5 | (uVar4 & 0x1f) << 0xc;
        }
        else {
          uVar4 = *(byte *)(iVar2 + 3 + local_18) & 0x3f | uVar5 << 6 | (uVar4 & 7) << 0x12;
        }
      }
    }
    return uVar4;
  }
  local_10 = &LAB_10096fc0;
  FUN_101369c0(&DAT_10153ec8,&local_14,&PTR_s_C__Users_runneradmin__cargo_regi_10153ee4);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
