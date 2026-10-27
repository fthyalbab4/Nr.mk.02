// rea decompile_all
// name: FUN_10097970
// address: 0x10097970
// body: available
// range: 0x10097970-0x10097bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

uint * __fastcall FUN_10097970(uint *param_1,uint param_2)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;

  if (param_2 < 8) {
    uVar8 = param_1[0x28];
    if (0x28 < uVar8) {
LAB_10097bb2:
      FUN_10136a50(0,uVar8,0x28,&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar8 == 0) {
      param_1[0x28] = 0;
    }
    else {
      uVar3 = *(uint *)(&DAT_10149a44 + param_2 * 4);
      iVar7 = uVar8 * 4;
      uVar5 = 0;
      puVar6 = param_1;
      do {
        lVar2 = (ulonglong)uVar3 * (ulonglong)*puVar6 + (ulonglong)uVar5;
        uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
        *puVar6 = (uint)lVar2;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + -4;
      } while (iVar7 != 0);
      if (uVar5 == 0) {
        param_1[0x28] = uVar8;
      }
      else {
        if (uVar8 == 0x28) {
LAB_10097bc3:
          FUN_10136b52(0x28,0x28,&PTR_s_C__Users_runneradmin__rustup_too_10145400);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        param_1[uVar8] = uVar5;
        param_1[0x28] = uVar8 + 1;
      }
    }
  }
  else {
    uVar3 = param_2 & 7;
    if (uVar3 != 0) {
      uVar5 = *(uint *)(&DAT_10149a44 + uVar3 * 4);
      uVar8 = param_1[0x28];
      if (0x28 < uVar8) goto LAB_10097bb2;
      if (uVar8 == 0) {
        param_1[0x28] = 0;
      }
      else {
        iVar7 = uVar8 * 4;
        uVar4 = 0;
        puVar6 = param_1;
        do {
          lVar2 = (ulonglong)(uVar5 >> (sbyte)uVar3) * (ulonglong)*puVar6 + (ulonglong)uVar4;
          uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
          *puVar6 = (uint)lVar2;
          puVar6 = puVar6 + 1;
          iVar7 = iVar7 + -4;
        } while (iVar7 != 0);
        if (uVar4 == 0) {
          param_1[0x28] = uVar8;
        }
        else {
          if (uVar8 == 0x28) goto LAB_10097bc3;
          param_1[uVar8] = uVar4;
          param_1[0x28] = uVar8 + 1;
        }
      }
    }
    if ((param_2 & 8) != 0) {
      uVar8 = param_1[0x28];
      if (0x28 < uVar8) goto LAB_10097bb2;
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        iVar7 = uVar8 * 4;
        uVar3 = 0;
        puVar6 = param_1;
        do {
          lVar2 = (ulonglong)*puVar6 * 0x5f5e1 + (ulonglong)uVar3;
          uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
          *puVar6 = (uint)lVar2;
          puVar6 = puVar6 + 1;
          iVar7 = iVar7 + -4;
        } while (iVar7 != 0);
        if (uVar3 != 0) {
          if (uVar8 == 0x28) goto LAB_10097bc3;
          param_1[uVar8] = uVar3;
          uVar8 = uVar8 + 1;
        }
      }
      param_1[0x28] = uVar8;
    }
    if ((param_2 & 0x10) != 0) {
      FUN_100957c0(param_1,(uint *)&DAT_10149a6c,2);
    }
    if ((param_2 & 0x20) != 0) {
      FUN_100957c0(param_1,(uint *)&DAT_10149a74,3);
    }
    if ((param_2 & 0x40) != 0) {
      FUN_100957c0(param_1,(uint *)&DAT_10149a80,5);
    }
    if ((char)param_2 < '\0') {
      FUN_100957c0(param_1,(uint *)&DAT_10149a94,10);
    }
    if ((param_2 & 0x100) != 0) {
      FUN_100957c0(param_1,(uint *)&DAT_10149abc,0x13);
    }
    FUN_10095a30(param_1,param_2);
  }
  return param_1;
}
