// rea decompile_all
// name: FUN_10092830
// address: 0x10092830
// body: available
// range: 0x10092830-0x10092919 inclusive
// range: 0x10092920-0x1009295a inclusive
// range: 0x10092960-0x100929a8 inclusive
// range: 0x100929b0-0x10092a81 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10092830(uint *param_1,longlong *param_2,int param_3,undefined **param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  HANDLE pvVar5;
  uint uVar6;
  uint _Size;
  undefined **ppuVar7;
  uint uVar8;
  size_t _Size_00;
  undefined *lpMem;
  void *local_40;
  int local_38;
  uint local_24;
  undefined **local_20;
  char local_1c;
  char local_1b;

  if (param_4 != (undefined **)0x0) {
    local_38 = param_3;
LAB_10092870:
    do {
      if (*(uint *)((int)param_2 + 0x6c) != 0) {
        iVar4 = (int)param_2[0xb];
        if (iVar4 == -1) {
LAB_10092a38:
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10141964);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar6 = *(uint *)(param_2 + 0xc);
        local_40 = *(void **)(param_2 + 0xd);
        _Size = *(uint *)((int)param_2 + 0x6c);
        while( true ) {
          uVar8 = _Size;
          if (iVar4 - uVar6 < _Size) {
            FUN_101359e0((uint *)(param_2 + 0xb),uVar6,_Size,(LPVOID)0x1,1);
            uVar6 = *(uint *)(param_2 + 0xc);
            uVar8 = *(uint *)((int)param_2 + 0x6c);
          }
          memcpy((void *)(*(int *)((int)param_2 + 0x5c) + uVar6),local_40,_Size);
          uVar6 = uVar6 + _Size;
          _Size_00 = uVar8 - _Size;
          *(uint *)(param_2 + 0xc) = uVar6;
          if (uVar8 < _Size) {
            FUN_10136a50(0,_Size,uVar8,&PTR_s_C__Users_runneradmin__rustup_too_1015de64);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          *(undefined4 *)((int)param_2 + 0x6c) = 0;
          if (_Size_00 == 0) break;
          local_40 = *(void **)(param_2 + 0xd);
          memmove(local_40,(void *)(_Size + (int)local_40),_Size_00);
          *(size_t *)((int)param_2 + 0x6c) = _Size_00;
          iVar4 = (int)param_2[0xb];
          _Size = _Size_00;
          if (iVar4 == -1) goto LAB_10092a38;
        }
      }
      lVar3 = *param_2;
      FUN_100a3b90(&local_1c,param_2,local_38,param_4,(uint *)((int)param_2 + 100),0);
      if (local_1c == '\0') {
        ppuVar7 = (undefined **)((int)*param_2 - (int)lVar3);
        if ((local_1b != '\x02') && (ppuVar7 == (undefined **)0x0)) goto LAB_10092870;
switchD_10092992_default:
        if (ppuVar7 == (undefined **)0x0) {
          local_20 = &PTR_DAT_101582f8;
          local_24 = 2;
switchD_10092992_caseD_0:
          *param_1 = local_24;
          param_1[1] = (uint)local_20;
          return;
        }
        if (param_4 < ppuVar7) {
          FUN_10136a50((uint)ppuVar7,(uint)param_4,(uint)param_4,
                       &PTR_s_C__Users_runneradmin__rustup_too_101594d0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        local_38 = local_38 + (int)ppuVar7;
        param_4 = (undefined **)((int)param_4 - (int)ppuVar7);
      }
      else {
        FUN_1010d340((undefined1 *)&local_24,0x14,"corrupt deflate stream",0x16);
        ppuVar7 = local_20;
        switch(local_24 & 0xff) {
        case 0:
          goto switchD_10092992_caseD_0;
        case 1:
          if ((local_24 & 0xff00) != 0x2300) goto switchD_10092992_caseD_0;
          break;
        case 2:
          if (*(char *)(local_20 + 2) != '#') goto switchD_10092992_caseD_0;
          break;
        case 3:
          if (*(char *)(local_20 + 2) != '#') goto switchD_10092992_caseD_0;
          puVar1 = (undefined4 *)local_20[1];
          lpMem = *local_20;
          if ((code *)*puVar1 != (code *)0x0) {
            (*(code *)*puVar1)(lpMem);
          }
          if (puVar1[1] != 0) {
            if (8 < (uint)puVar1[2]) {
              lpMem = *(undefined **)(lpMem + -4);
            }
            pvVar5 = GetProcessHeap();
            HeapFree(pvVar5,0,lpMem);
          }
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,ppuVar7);
          break;
        default:
          goto switchD_10092992_default;
        }
      }
    } while (param_4 != (undefined **)0x0);
  }
  *(undefined1 *)param_1 = 0xff;
  return;
}
