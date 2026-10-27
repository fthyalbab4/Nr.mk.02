// rea decompile_all
// name: FUN_10110c70
// address: 0x10110c70
// body: available
// range: 0x10110c70-0x10110e40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10110d1c) */

void __fastcall FUN_10110c70(uint *param_1,char *param_2,uint param_3)

{
  byte *pbVar1;
  code *pcVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  char *pcVar7;
  int extraout_EDX;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char **local_28;
  undefined1 *local_24;
  char *local_1c;
  char *local_18;
  uint local_14;

  local_14 = param_3;
  pcVar7 = param_2;
  for (uVar5 = param_3; local_18 = param_2, uVar5 != 0; uVar5 = uVar5 - 1) {
    if ((*pcVar7 == '\\') || (*pcVar7 == '/')) {
      local_28 = &local_18;
      local_24 = &LAB_10110e50;
      FUN_101369c0(&DAT_10158014,&local_28,&PTR_s_C__Users_runneradmin__rustup_too_10158044);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pcVar7 = pcVar7 + 1;
  }
  pbVar1 = (byte *)param_1[1];
  local_1c = param_2;
  psVar6 = (short *)FUN_10110b00(pbVar1,param_1[2]);
  if (psVar6 != (short *)0x0) {
    iVar8 = extraout_EDX;
    psVar3 = psVar6;
    iVar13 = extraout_EDX;
    if ((extraout_EDX == 2) && (iVar8 = extraout_EDX, *psVar6 == 0x2e2e)) {
      iVar8 = 2;
      psVar4 = (short *)0x0;
      if (psVar6 != (short *)0x0) {
        psVar4 = psVar6;
      }
    }
    else {
      do {
        iVar9 = iVar8;
        if (iVar9 == 0) {
          iVar8 = 0;
          psVar3 = (short *)0x0;
          psVar4 = psVar6;
          goto joined_r0x10110d21;
        }
        iVar8 = iVar9 + -1;
      } while (*(char *)((int)psVar6 + iVar9 + -1) != '.');
      if (iVar8 == 0) {
        psVar4 = (short *)0x0;
        iVar8 = extraout_EDX;
        if (psVar6 != (short *)0x0) {
          psVar4 = psVar6;
        }
      }
      else {
        iVar13 = extraout_EDX - iVar9;
        psVar4 = (short *)((int)psVar6 + iVar9);
        if (psVar6 != (short *)0x0) {
          psVar4 = psVar6;
        }
      }
    }
joined_r0x10110d21:
    if (psVar4 != (short *)0x0) {
      if (psVar3 == (short *)0x0) {
        iVar8 = iVar13;
      }
      FUN_10110e70((int)param_1,(int)psVar4 + (iVar8 - (int)pbVar1));
      if (param_3 != 0) {
        uVar11 = *param_1;
        uVar10 = param_1[2];
        uVar5 = param_3 + 1;
        if (uVar11 - uVar10 < uVar5) {
          uVar12 = uVar5 + uVar10;
          if (CARRY4(uVar5,uVar10)) {
            FUN_101366bc(0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          FUN_10136460(&local_28,uVar11,(LPVOID)param_1[1],uVar12,(LPVOID)0x1,1);
          if (local_28 == (char **)0x1) {
            FUN_101366bc((int)local_24);
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          param_1[1] = (uint)local_24;
          *param_1 = uVar12;
          uVar11 = uVar12;
        }
        if (uVar11 == uVar10) {
          FUN_101359e0(param_1,uVar10,1,(LPVOID)0x1,1);
          uVar11 = *param_1;
          uVar10 = param_1[2];
        }
        uVar5 = param_1[1];
        *(undefined1 *)(uVar5 + uVar10) = 0x2e;
        uVar10 = uVar10 + 1;
        param_1[2] = uVar10;
        if (uVar11 - uVar10 < param_3) {
          FUN_101359e0(param_1,uVar10,param_3,(LPVOID)0x1,1);
          uVar5 = param_1[1];
          uVar10 = param_1[2];
        }
        memcpy((void *)(uVar5 + uVar10),local_1c,param_3);
        param_1[2] = uVar10 + param_3;
        *(undefined1 *)(param_1 + 3) = 0;
      }
    }
  }
  return;
}
