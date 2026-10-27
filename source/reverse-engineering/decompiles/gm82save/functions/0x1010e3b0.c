// rea decompile_all
// name: FUN_1010e3b0
// address: 0x1010e3b0
// body: available
// range: 0x1010e3b0-0x1010e5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010e3b0(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;

  uVar13 = DAT_101633b8;
  if ((int)DAT_101633b8 == 0 && (int)((ulonglong)DAT_101633b8 >> 0x20) == 0) {
    uVar13 = FUN_1013c290();
  }
  uVar9 = (uint)((ulonglong)uVar13 >> 0x20);
  uVar6 = (uint)uVar13;
  uVar13 = __aulldiv(1000000000,0,uVar6,uVar9);
  uVar5 = param_2[1];
  uVar4 = (uint)uVar13 + 0xc4653600;
  if (uVar9 != 0 || -uVar9 < (uint)(1 < uVar6)) {
    uVar4 = (uint)uVar13;
  }
  uVar1 = *param_2;
  uVar11 = param_2[2];
  if (param_3 == uVar1 && param_4 == uVar5) {
    if (param_5 <= uVar11) {
LAB_1010e4f9:
      uVar10 = 0xffffffff;
      if (uVar5 < param_4 || uVar5 - param_4 < (uint)(uVar1 < param_3)) goto LAB_1010e54e;
      goto LAB_1010e506;
    }
LAB_1010e449:
    if (param_4 < uVar5 || param_4 - uVar5 < (uint)(param_3 < uVar1)) {
LAB_1010e58b:
      FUN_10136c10("overflow when subtracting durations",0x23,
                   &PTR_s_C__Users_runneradmin__rustup_too_1015724c);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar3 = param_3 - uVar1;
    uVar7 = (param_4 - uVar5) - (uint)(param_3 < uVar1);
    uVar8 = param_5;
    if (param_5 < uVar11) {
      if (uVar3 == 0 && uVar7 == 0) goto LAB_1010e58b;
      uVar8 = param_5 + 1000000000;
      bVar12 = uVar3 != 0;
      uVar3 = uVar3 - 1;
      uVar7 = (uVar7 - 1) + (uint)bVar12;
    }
    uVar8 = uVar8 - uVar11;
    if (999999999 < uVar8) {
      if ((uVar3 & uVar7) == 0xffffffff) goto LAB_1010e572;
      bVar12 = 0xfffffffe < uVar3;
      uVar3 = uVar3 + 1;
      uVar7 = uVar7 + bVar12;
      uVar8 = uVar8 + 0xc4653600;
    }
    uVar10 = 0;
    uVar6 = (uint)(uVar9 < (uVar6 < 2));
    bVar12 = uVar7 == 0 && (uint)(uVar6 < uVar3) <= -uVar7;
    if (uVar3 == uVar6 && uVar7 == 0) {
      bVar12 = uVar8 <= uVar4;
    }
    if (!bVar12) goto LAB_1010e4f9;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    if (uVar5 < param_4 || uVar5 - param_4 < (uint)(uVar1 < param_3)) goto LAB_1010e449;
LAB_1010e506:
    uVar4 = uVar1 - param_3;
    uVar5 = (uVar5 - param_4) - (uint)(uVar1 < param_3);
    if (uVar11 < param_5) {
      if (uVar4 == 0 && uVar5 == 0) {
        uVar10 = 0xffffffff;
        goto LAB_1010e54e;
      }
      bVar12 = uVar4 != 0;
      uVar4 = uVar4 - 1;
      uVar5 = (uVar5 - 1) + (uint)bVar12;
      uVar11 = uVar11 + 1000000000;
    }
    uVar10 = uVar11 - param_5;
    if (999999999 < uVar10) {
      if ((uVar4 & uVar5) == 0xffffffff) {
LAB_1010e572:
        FUN_10136c10("overflow in Duration::new",0x19,
                     &PTR_s_C__Users_runneradmin__rustup_too_1015708c);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      bVar12 = 0xfffffffe < uVar4;
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 + bVar12;
      uVar10 = uVar10 + 0xc4653600;
    }
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
LAB_1010e54e:
  param_1[2] = uVar10;
  return;
}
