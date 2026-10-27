// rea decompile_all
// name: FUN_100cdef0
// address: 0x100cdef0
// body: available
// range: 0x100cdef0-0x100cdfc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100cdef0(uint *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *_Dst;
  uint uVar6;

  FUN_100cf1b0(param_1,*(uint *)(param_2 + 0x150));
  iVar1 = *(int *)(*(int *)(param_2 + 0x144) + 0x10);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(*(int *)(*(int *)(param_2 + 0x144) + 0xc) + -4 + iVar1 * 8);
  }
  param_1[10] = uVar4;
  uVar6 = *(int *)(param_2 + 0x15c) * 2;
  if (uVar6 <= uVar4) {
    uVar6 = uVar4;
  }
  param_1[0xb] = uVar6;
  lVar2 = (ulonglong)uVar4 * (ulonglong)*(uint *)(param_2 + 0x150);
  uVar4 = (uint)lVar2;
  if (((int)((ulonglong)lVar2 >> 0x20) == 0) && (uVar5 = uVar4 + uVar6, !CARRY4(uVar4,uVar6))) {
    uVar4 = param_1[9];
    uVar6 = uVar5 - uVar4;
    if (uVar4 <= uVar5 && uVar6 != 0) {
      if (param_1[7] - uVar4 < uVar6) {
        FUN_101359e0(param_1 + 7,uVar4,uVar6,&DAT_00000004,4);
        uVar4 = param_1[9];
        uVar5 = param_1[8];
        _Dst = (undefined4 *)(uVar5 + uVar4 * 4);
      }
      else {
        uVar5 = param_1[8];
        _Dst = (undefined4 *)(uVar5 + uVar4 * 4);
      }
      if (1 < uVar6) {
        memset(_Dst,0,uVar6 * 4 - 4);
        iVar1 = uVar4 + uVar6;
        uVar4 = (uVar4 - 1) + uVar6;
        _Dst = (undefined4 *)((uVar5 - 4) + iVar1 * 4);
      }
      uVar5 = uVar4 + 1;
      *_Dst = 0;
    }
    param_1[9] = uVar5;
    return;
  }
  FUN_10136c10("slot table length doesn\'t overflow",0x22,
               &PTR_s_C__Users_runneradmin__cargo_regi_1015283c);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}
