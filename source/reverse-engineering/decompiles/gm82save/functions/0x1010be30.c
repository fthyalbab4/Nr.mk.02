// rea decompile_all
// name: FUN_1010be30
// address: 0x1010be30
// body: available
// range: 0x1010be30-0x1010c0fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010be30(char *param_1,DWORD param_2,byte *param_3,LPCSTR param_4,byte *param_5)

{
  code *pcVar1;
  char cVar2;
  HANDLE hConsoleHandle;
  DWORD DVar3;
  BOOL BVar4;
  byte bVar5;
  undefined **ppuVar6;
  LPCSTR pCVar7;
  undefined4 uVar8;
  HANDLE local_38;
  LPCSTR local_34;
  LPCSTR pCStack_30;
  undefined4 local_2c;
  LPCSTR local_28;
  LPCSTR local_24;
  LPCSTR local_20;
  LPCSTR local_1c;
  LPCSTR local_18 [2];

  if (param_4 == (LPCSTR)0x0) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *param_1 = -1;
    return;
  }
  hConsoleHandle = GetStdHandle(param_2);
  if (hConsoleHandle == (HANDLE)0x0) {
    DVar3 = 6;
  }
  else {
    if (hConsoleHandle != (HANDLE)0xffffffff) {
      local_38 = (HANDLE)0x0;
      BVar4 = GetConsoleMode(hConsoleHandle,(LPDWORD)&local_38);
      if (BVar4 == 0) {
        local_38 = hConsoleHandle;
        FUN_1010c100(param_1,&local_38,(int *)param_3,param_4);
        return;
      }
      bVar5 = param_5[4];
      if (bVar5 == 0) {
        pCVar7 = (LPCSTR)0x1000;
        if (param_4 < (LPCSTR)0x1000) {
          pCVar7 = param_4;
        }
        FUN_10095490(&local_2c,(int)param_3,(uint)pCVar7);
        if ((char)local_2c != '\0') {
          if (local_28 == (LPCSTR)0x0) {
            bVar5 = *param_3;
            ppuVar6 = &PTR_s_Windows_stdio_in_console_mode_do_10158838;
            cVar2 = '\x02';
            if (((byte)(bVar5 + 0x3e) < 0x33) &&
               (param_4 < (LPCSTR)(uint)(byte)(&DAT_101586e8)[bVar5])) {
              ppuVar6 = (undefined **)0x1;
              *param_5 = bVar5;
              param_5[4] = 1;
              cVar2 = -1;
            }
            *(undefined ***)(param_1 + 4) = ppuVar6;
            *param_1 = cVar2;
            return;
          }
          if (param_4 < local_28) {
            FUN_10136a50(0,(uint)local_28,(uint)param_4,
                         &PTR_s_C__Users_runneradmin__rustup_too_10158864);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          FUN_10095490(&local_38,(int)param_3,(uint)local_28);
          local_28 = local_34;
          local_24 = pCStack_30;
          if (local_38 == (HANDLE)0x1) {
            FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,local_18,&DAT_10158844,
                         &PTR_s_C__Users_runneradmin__rustup_too_10158854);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        FUN_1010c1c0(param_1,hConsoleHandle,local_28,(uint)local_24);
        return;
      }
      if (3 < bVar5) {
        FUN_101369c0("Unexpected number of bytes for incomplete UTF-8 codepoint.",0x75,
                     &PTR_s_C__Users_runneradmin__rustup_too_101588b0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((char)*param_3 < -0x40) {
        param_5[bVar5] = *param_3;
        bVar5 = param_5[4] + 1;
        param_5[4] = bVar5;
        pCVar7 = (LPCSTR)(uint)(byte)(&DAT_101586e8)[*param_5];
        if ((byte)(&DAT_101586e8)[*param_5] <= bVar5) {
          local_20 = pCVar7;
          if (4 < bVar5) {
            FUN_10136a50(0,(uint)bVar5,4,&PTR_s_C__Users_runneradmin__rustup_too_101588e0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          uVar8 = 0x1010bf95;
          FUN_10095490(&local_38,(int)param_5,(uint)bVar5);
          param_5[4] = 0;
          if (local_38 == (HANDLE)0x1) goto LAB_1010bf55;
          local_1c = pCStack_30;
          if (pCStack_30 != pCVar7) {
            FUN_101369ea(0,&local_20,&local_1c,0,uVar8,
                         &PTR_s_C__Users_runneradmin__rustup_too_101588c0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          FUN_1010c1c0((undefined1 *)&local_2c,hConsoleHandle,local_34,(uint)pCVar7);
          if ((char)local_2c != -1) {
            param_1[3] = local_2c._3_1_;
            *(undefined2 *)(param_1 + 1) = local_2c._1_2_;
            *param_1 = (char)local_2c;
            *(LPCSTR *)(param_1 + 4) = local_28;
            return;
          }
          local_18[0] = local_28;
          if (local_28 != pCVar7) {
            local_2c = pCVar7;
            FUN_101369ea(0,local_18,&local_2c,0,local_34,
                         &PTR_s_C__Users_runneradmin__rustup_too_101588d0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        param_1[4] = '\x01';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        *param_1 = -1;
        return;
      }
      param_5[4] = 0;
LAB_1010bf55:
      *param_1 = '\x02';
      *(undefined ***)(param_1 + 4) = &PTR_s_Windows_stdio_in_console_mode_do_10158838;
      return;
    }
    DVar3 = GetLastError();
  }
  *param_1 = '\0';
  *(DWORD *)(param_1 + 4) = DVar3;
  return;
}
