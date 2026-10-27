// rea decompile_all
// name: FUN_1004f5f0
// address: 0x1004f5f0
// body: available
// range: 0x1004f5f0-0x1004f669 inclusive
// range: 0x1004f670-0x1004f70c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1004f5f0(undefined4 *param_1,undefined *param_2)

{
  uint uVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  size_t _Size;
  int unaff_EDI;
  undefined1 auStack_1c [8];
  undefined2 uStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_e;

  uStack_10 = (undefined2)unaff_ESI;
  uStack_e = (undefined2)((uint)unaff_ESI >> 0x10);
  do {
    uVar1 = *(uint *)(param_2 + 100);
    if (uVar1 != 0) {
      if (*(int *)(param_2 + 0x58) == 0) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10141964);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      _Dst = *(void **)(param_2 + 0x60);
      uVar5 = (*(code *)0x44006c)(param_1,*(int *)(param_2 + 0x58));
      while( true ) {
        if (uVar5 == 0) {
          param_1[1] = 0;
          *param_1 = 0x1701;
          return;
        }
        _Size = uVar1 - uVar5;
        if (uVar1 < uVar5) {
          FUN_10136a50(0,uVar5,uVar1,&PTR_s_C__Users_runneradmin__rustup_too_1015de64);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *(undefined4 *)(param_2 + 100) = 0;
        if (_Size == 0) break;
        memmove(_Dst,(void *)(uVar5 + (int)_Dst),_Size);
        *(size_t *)(param_2 + 100) = _Size;
        uVar5 = (*(code *)0x44006c)();
        uVar1 = _Size;
      }
    }
    iVar2 = *(int *)(param_2 + 8);
    iVar3 = *(int *)(param_2 + 0xc);
    FUN_100a4740(auStack_1c,param_2,1,(undefined *)0x0,(uint *)(param_2 + 0x5c),4);
    if (unaff_EDI != -1) {
      FUN_100a3340((undefined1 *)&uStack_14,(undefined8 *)&stack0xfffffff4);
      *(uint *)((int)param_1 + 2) = CONCAT22(uStack_10,uStack_12);
      *(undefined2 *)((int)param_1 + 6) = uStack_e;
      *(undefined2 *)param_1 = uStack_14;
      return;
    }
  } while (iVar3 != *(int *)(param_2 + 0xc) || iVar2 != *(int *)(param_2 + 8));
  *(undefined1 *)param_1 = 0xff;
  return;
}
