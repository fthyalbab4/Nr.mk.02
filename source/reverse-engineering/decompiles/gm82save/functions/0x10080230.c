// rea decompile_all
// name: FUN_10080230
// address: 0x10080230
// body: available
// range: 0x10080230-0x100803a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10080230(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint _Size;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;

  uVar2 = *(uint *)(param_2 + 0xc);
  uVar9 = *(uint *)(param_2 + 0x10);
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar9 <= uVar3 && uVar2 <= uVar9) {
    _Size = (uint)*(byte *)(param_2 + 0x18);
    iVar4 = *(int *)(param_2 + 4);
    iVar6 = iVar4 + uVar2;
    uVar1 = _Size - 1;
    if (_Size < 5) {
      do {
        uVar11 = FUN_100975a0(*(byte *)(param_2 + 0x14 + uVar1),iVar6,uVar9 - uVar2);
        if ((int)uVar11 != 1) goto LAB_10080380;
        uVar9 = (int)((ulonglong)uVar11 >> 0x20) + uVar2;
        uVar10 = uVar9 - uVar1;
        if (((uVar1 <= uVar9) && (uVar10 + _Size <= uVar3 && !CARRY4(uVar10,_Size))) &&
           (iVar7 = memcmp((void *)(iVar4 + uVar10),(void *)(param_2 + 0x14),_Size), iVar7 == 0)) {
          uVar8 = 1;
          *(uint *)(param_2 + 0x10) = uVar10;
          param_1[1] = uVar10;
          param_1[2] = uVar10 + _Size;
          goto LAB_10080388;
        }
        *(uint *)(param_2 + 0x10) = uVar9;
      } while ((uVar2 <= uVar9) && (uVar9 <= uVar3));
      goto LAB_10080383;
    }
    do {
      uVar11 = FUN_100975a0(*(byte *)(param_2 + 0x14 + uVar1),iVar6,uVar9 - uVar2);
      if ((int)uVar11 != 1) goto LAB_10080380;
      uVar9 = (int)((ulonglong)uVar11 >> 0x20) + uVar2;
      if ((uVar1 <= uVar9) && ((uVar9 - uVar1) + _Size <= uVar3 && !CARRY4(uVar9 - uVar1,_Size))) {
        FUN_10136a50(0,_Size,4,&PTR_s_C__Users_runneradmin__rustup_too_10143670);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      *(uint *)(param_2 + 0x10) = uVar9;
    } while ((uVar2 <= uVar9) && (uVar9 <= uVar3));
  }
  uVar8 = 0;
  goto LAB_10080388;
LAB_10080380:
  *(uint *)(param_2 + 0x10) = uVar2;
LAB_10080383:
  uVar8 = 0;
LAB_10080388:
  *param_1 = uVar8;
  return;
}
