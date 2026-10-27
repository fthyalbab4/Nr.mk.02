// rea decompile_all
// name: FUN_1012b0b0
// address: 0x1012b0b0
// body: available
// range: 0x1012b0b0-0x1012b13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012b0b0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  code *pcVar5;
  uint _Size;

  iVar2 = *(int *)(param_1 + 0x1c);
  FUN_1012b140((int *)(iVar2 + 0x58));
  uVar3 = *(uint *)(iVar2 + 0x5c);
  uVar4 = *(uint *)(iVar2 + 0x60);
  if (uVar3 < uVar4) {
    FUN_10136a50(uVar4,uVar3,uVar3,&PTR_s_C__Users_runneradmin__cargo_regi_1015b8b0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  _Size = *(uint *)(iVar2 + 100);
  if (_Size <= uVar3 - uVar4) {
    uVar3 = *(uint *)(param_1 + 0x10);
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    if (_Size != 0) {
      _Dst = *(void **)(param_1 + 0xc);
      memcpy(_Dst,(void *)(uVar4 + *(int *)(iVar2 + 0x58)),_Size);
      *(uint *)(param_1 + 0xc) = (int)_Dst + _Size;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + _Size;
      *(uint *)(param_1 + 0x10) = uVar3 - _Size;
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + _Size;
      piVar1 = (int *)(iVar2 + 100);
      *piVar1 = *piVar1 - _Size;
      if (*piVar1 == 0) {
        *(undefined4 *)(iVar2 + 0x60) = 0;
      }
    }
    return;
  }
  FUN_10136a50(0,_Size,uVar3 - uVar4,&PTR_s_C__Users_runneradmin__cargo_regi_1015b8a0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}
