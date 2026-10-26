// rea decompile_all
// name: FUN_1001ad20
// address: 0x1001ad20
// body: available
// range: 0x1001ad20-0x1001ad35 inclusive
// range: 0x1001ad40-0x1001ae64 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1001ad20(undefined4 *param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  uVar8 = (param_2 >> 1) + param_2;
  do {
    uVar8 = uVar8 - 1;
    uVar7 = uVar8 - param_2;
    if (uVar8 < param_2) {
      uVar1 = *param_1;
      uVar7 = 0;
      *param_1 = param_1[uVar8];
      param_1[uVar8] = uVar1;
    }
    uVar9 = uVar8;
    if (param_2 < uVar8) {
      uVar9 = param_2;
    }
    uVar10 = uVar7 * 2 + 1;
    if (uVar10 < uVar9) {
      iVar2 = *param_3;
      iVar3 = param_3[1];
      do {
        uVar11 = uVar10;
        if (uVar7 * 2 + 2 < uVar9) {
          uVar11 = param_1[uVar10];
          uVar6 = uVar11;
          if ((0xff < uVar11) || (uVar6 = param_1[uVar7 * 2 + 2], 0xff < uVar6)) goto LAB_1001ae51;
          uVar11 = uVar10 + (-(*(int *)(iVar2 + uVar11 * 4) * *(int *)(iVar3 + uVar11 * 4)) <
                            -(*(int *)(iVar2 + uVar6 * 4) * *(int *)(iVar3 + uVar6 * 4)));
        }
        uVar4 = param_1[uVar7];
        uVar6 = uVar4;
        if ((0xff < uVar4) || (uVar6 = param_1[uVar11], 0xff < uVar6)) {
LAB_1001ae51:
          FUN_10136b52(uVar6,0x100,&DAT_1013fb14);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (-(*(int *)(iVar2 + uVar6 * 4) * *(int *)(iVar3 + uVar6 * 4)) <=
            -(*(int *)(iVar2 + uVar4 * 4) * *(int *)(iVar3 + uVar4 * 4))) break;
        uVar10 = uVar11 * 2 + 1;
        param_1[uVar7] = uVar6;
        param_1[uVar11] = uVar4;
        uVar7 = uVar11;
      } while (uVar10 < uVar9);
    }
    if (uVar8 == 0) {
      return;
    }
  } while( true );
}
