// rea decompile_all
// name: FUN_1012b440
// address: 0x1012b440
// body: available
// range: 0x1012b440-0x1012b78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __fastcall FUN_1012b440(int param_1,void *param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint _Size;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint _Size_00;
  uint uVar7;
  int *local_24;
  uint local_20;

  iVar5 = *(int *)(param_1 + 0x1c);
  uVar4 = *(uint *)(iVar5 + 0x5c);
  uVar3 = *(uint *)(iVar5 + 0x60);
  uVar2 = uVar4 - uVar3;
  if (uVar3 <= uVar4) {
    uVar7 = *(uint *)(iVar5 + 100);
    _Size_00 = uVar7;
    if (uVar2 < uVar7) {
LAB_1012b6b4:
      FUN_10136a50(0,_Size_00,uVar2,&PTR_s_C__Users_runneradmin__cargo_regi_1015b8a0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar2 = uVar3 + uVar7;
    _Size = uVar4 - uVar2;
    local_20 = param_3;
    uVar6 = param_3 - _Size;
    if (_Size <= param_3 && uVar6 != 0) {
      if (uVar4 < uVar2) {
LAB_1012b766:
        FUN_10136a50(uVar2,uVar4,uVar4,&PTR_s_C__Users_runneradmin__cargo_regi_1015cf80);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      memcpy((void *)(uVar2 + *(int *)(iVar5 + 0x58)),param_2,_Size);
      _Size_00 = uVar7 + _Size;
      *(uint *)(iVar5 + 100) = _Size_00;
      uVar4 = *(uint *)(iVar5 + 0x5c);
      uVar3 = *(uint *)(iVar5 + 0x60);
      uVar2 = uVar4 - uVar3;
      if (uVar4 < uVar3) goto LAB_1012b6c6;
      if (uVar2 < _Size_00) goto LAB_1012b6b4;
      if (_Size_00 < uVar7) {
        FUN_10136a50(uVar7,_Size_00,_Size_00,&PTR_s_C__Users_runneradmin__cargo_regi_1015cf90);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = FUN_10122090(*(uint *)(param_1 + 0x30),
                           (byte *)(uVar3 + *(int *)(iVar5 + 0x58) + uVar7),_Size);
      *(uint *)(param_1 + 0x30) = uVar3;
      *(int *)(iVar5 + 0x8c) = *(int *)(iVar5 + 0x8c) + _Size;
      FUN_1012b0b0(param_1);
      iVar5 = *(int *)(param_1 + 0x1c);
      uVar4 = *(uint *)(iVar5 + 0x5c);
      uVar2 = *(uint *)(iVar5 + 0x60);
      _Size_00 = uVar4 - uVar2;
      if (uVar4 < uVar2) {
LAB_1012b6d8:
        FUN_10136a50(uVar2,uVar4,uVar4,&PTR_s_C__Users_runneradmin__cargo_regi_1015b8b0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = *(uint *)(iVar5 + 100);
      uVar7 = _Size_00;
      if (_Size_00 < uVar3) {
LAB_1012b69c:
        FUN_10136a50(0,uVar3,uVar7,&PTR_s_C__Users_runneradmin__cargo_regi_1015b8a0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar3 != 0) {
LAB_1012b523:
        *(undefined1 *)(iVar5 + 1) = 0xff;
        return 0;
      }
      uVar7 = 0;
      param_2 = (void *)((int)param_2 + _Size);
      uVar3 = uVar2;
      local_20 = uVar6;
      if (_Size_00 < uVar6) {
        do {
          local_24 = (int *)(iVar5 + 0x58);
          if (uVar4 - uVar2 < _Size_00) {
            FUN_101369c0("buf.len() must fit in remaining()",0x43,
                         &PTR_s_C__Users_runneradmin__cargo_regi_1015cf80);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar4 < uVar2) goto LAB_1012b766;
          memcpy((void *)(uVar2 + *local_24),param_2,_Size_00);
          *(uint *)(iVar5 + 100) = _Size_00;
          uVar4 = *(uint *)(iVar5 + 0x5c);
          uVar3 = *(uint *)(iVar5 + 0x60);
          uVar2 = uVar4 - uVar3;
          if (uVar4 < uVar3) goto LAB_1012b6c6;
          if (uVar2 < _Size_00) goto LAB_1012b6b4;
          uVar3 = FUN_10122090(*(uint *)(param_1 + 0x30),(byte *)(uVar3 + *local_24),_Size_00);
          *(uint *)(param_1 + 0x30) = uVar3;
          *(int *)(iVar5 + 0x8c) = *(int *)(iVar5 + 0x8c) + _Size_00;
          FUN_1012b0b0(param_1);
          iVar5 = *(int *)(param_1 + 0x1c);
          uVar4 = *(uint *)(iVar5 + 0x5c);
          uVar2 = *(uint *)(iVar5 + 0x60);
          uVar7 = uVar4 - uVar2;
          if (uVar4 < uVar2) goto LAB_1012b6d8;
          uVar3 = *(uint *)(iVar5 + 100);
          if (uVar7 < uVar3) goto LAB_1012b69c;
          if (uVar3 != 0) goto LAB_1012b523;
          param_2 = (void *)((int)param_2 + _Size_00);
          uVar6 = uVar6 - _Size_00;
          _Size_00 = uVar7;
        } while (uVar7 < uVar6);
        uVar7 = 0;
        uVar3 = uVar2;
        local_20 = uVar6;
      }
    }
    uVar3 = uVar3 + uVar7;
    if (uVar4 - uVar3 < local_20) {
      FUN_101369c0("buf.len() must fit in remaining()",0x43,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1015cf60);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar4 < uVar3) {
      FUN_10136a50(uVar3,uVar4,uVar4,&PTR_s_C__Users_runneradmin__cargo_regi_1015cf60);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    memcpy((void *)(uVar3 + *(int *)(iVar5 + 0x58)),param_2,local_20);
    uVar3 = uVar7 + local_20;
    *(uint *)(iVar5 + 100) = uVar3;
    uVar4 = *(uint *)(iVar5 + 0x5c);
    uVar2 = *(uint *)(iVar5 + 0x60);
    if (uVar4 < uVar2) {
      FUN_10136a50(uVar2,uVar4,uVar4,&PTR_s_C__Users_runneradmin__cargo_regi_1015b8b0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar3 <= uVar4 - uVar2) {
      if (uVar7 <= uVar3) {
        uVar3 = FUN_10122090(*(uint *)(param_1 + 0x30),
                             (byte *)(uVar2 + *(int *)(iVar5 + 0x58) + uVar7),local_20);
        *(uint *)(param_1 + 0x30) = uVar3;
        *(undefined4 *)(iVar5 + 0x8c) = 0;
        return 3;
      }
      FUN_10136a50(uVar7,uVar3,uVar3,&PTR_s_C__Users_runneradmin__cargo_regi_1015cf70);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    FUN_10136a50(0,uVar3,uVar4 - uVar2,&PTR_s_C__Users_runneradmin__cargo_regi_1015b8a0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_1012b6c6:
  FUN_10136a50(uVar3,uVar4,uVar4,&PTR_s_C__Users_runneradmin__cargo_regi_1015b8b0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
