// rea decompile_all
// name: FUN_1004f710
// address: 0x1004f710
// body: available
// range: 0x1004f710-0x1004f7d9 inclusive
// range: 0x1004f7e0-0x1004f873 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1004f710(undefined2 *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  size_t _Size;
  uint uVar5;
  uint _Size_00;
  void *local_30;
  undefined2 local_24;
  undefined4 local_22;
  undefined2 local_1e;
  char local_1c [4];
  undefined4 local_18;
  undefined4 local_14;

  do {
    if (*(uint *)((int)param_2 + 0x6c) != 0) {
      iVar3 = (int)param_2[0xb];
      if (iVar3 == -1) {
LAB_1004f854:
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10141964);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar5 = *(uint *)(param_2 + 0xc);
      local_30 = *(void **)(param_2 + 0xd);
      _Size_00 = *(uint *)((int)param_2 + 0x6c);
      while( true ) {
        uVar4 = _Size_00;
        if (iVar3 - uVar5 < _Size_00) {
          FUN_101359e0((uint *)(param_2 + 0xb),uVar5,_Size_00,(LPVOID)0x1,1);
          uVar5 = *(uint *)(param_2 + 0xc);
          uVar4 = *(uint *)((int)param_2 + 0x6c);
        }
        memcpy((void *)(*(int *)((int)param_2 + 0x5c) + uVar5),local_30,_Size_00);
        uVar5 = uVar5 + _Size_00;
        _Size = uVar4 - _Size_00;
        *(uint *)(param_2 + 0xc) = uVar5;
        if (uVar4 < _Size_00) {
          FUN_10136a50(0,_Size_00,uVar4,&PTR_s_C__Users_runneradmin__rustup_too_1015de64);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *(undefined4 *)((int)param_2 + 0x6c) = 0;
        if (_Size == 0) break;
        local_30 = *(void **)(param_2 + 0xd);
        memmove(local_30,(void *)(_Size_00 + (int)local_30),_Size);
        *(size_t *)((int)param_2 + 0x6c) = _Size;
        iVar3 = (int)param_2[0xb];
        _Size_00 = _Size;
        if (iVar3 == -1) goto LAB_1004f854;
      }
    }
    lVar2 = param_2[1];
    iVar3 = *(int *)((int)param_2 + 0xc);
    FUN_100a3b90(local_1c,param_2,1,0,(uint *)((int)param_2 + 100),4);
    if (local_1c[0] == '\x01') {
      FUN_100a3090((undefined1 *)&local_24,local_18,local_14);
      *(undefined4 *)(param_1 + 1) = local_22;
      param_1[3] = local_1e;
      *param_1 = local_24;
      return;
    }
    if (iVar3 == *(int *)((int)param_2 + 0xc) && (int)lVar2 == (int)param_2[1]) {
      *(undefined1 *)param_1 = 0xff;
      return;
    }
  } while( true );
}
