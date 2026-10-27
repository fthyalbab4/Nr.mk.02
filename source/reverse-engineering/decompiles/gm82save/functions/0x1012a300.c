// rea decompile_all
// name: FUN_1012a300
// address: 0x1012a300
// body: available
// range: 0x1012a300-0x1012a578 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1012a300(int param_1,uint param_2,uint param_3,short *param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_30;
  short sStack_2c;
  short sStack_2a;
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  short local_12;

  local_30 = (uint)(ushort)(*param_4 * 2) << 0x10;
  sVar4 = (*param_4 * 2 + param_4[1]) * 2;
  sVar5 = (sVar4 + param_4[2]) * 2;
  _sStack_2c = CONCAT22(sVar5,sVar4);
  sVar4 = (sVar5 + param_4[3]) * 2;
  sVar5 = (sVar4 + param_4[4]) * 2;
  _sStack_28 = CONCAT22(sVar5,sVar4);
  sVar4 = (sVar5 + param_4[5]) * 2;
  sVar5 = (sVar4 + param_4[6]) * 2;
  _sStack_24 = CONCAT22(sVar5,sVar4);
  local_20 = (sVar5 + param_4[7]) * 2;
  local_1e = (local_20 + param_4[8]) * 2;
  local_1c = (local_1e + param_4[9]) * 2;
  local_1a = (local_1c + param_4[10]) * 2;
  sStack_18 = (local_1a + param_4[0xb]) * 2;
  sStack_16 = (sStack_18 + param_4[0xc]) * 2;
  sStack_14 = (sStack_16 + param_4[0xd]) * 2;
  local_12 = (sStack_14 + param_4[0xe]) * 2;
  if (!SBORROW2(0,local_12 + param_4[0xf])) {
    FUN_101369c0("inconsistent bit counts",0x2f,&PTR_s_C__Users_runneradmin__cargo_regi_1015dd20);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar9 = 0;
  if (param_2 == 0x120) {
    do {
      uVar8 = uVar9 + (uVar9 < param_3);
      if (0x11f < uVar9) {
LAB_1012a564:
        FUN_10136b52(uVar9,param_2,&PTR_s_C__Users_runneradmin__cargo_regi_1015dcd0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar1 = *(ushort *)(param_1 + 2 + uVar9 * 4);
      uVar6 = (uint)uVar1;
      if (uVar6 != 0) {
        if (0xf < uVar1) {
LAB_1012a532:
          FUN_101369c0(&DAT_1015dce0,0x31,&PTR_s_C__Users_runneradmin__cargo_regi_1015dcf8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar2 = *(ushort *)((int)&local_30 + uVar6 * 2);
        uVar7 = uVar2 << 8 | uVar2 >> 8;
        *(ushort *)((int)&local_30 + uVar6 * 2) = uVar2 + 1;
        uVar6 = uVar7 >> 4 & 0xf0f | (uVar7 & 0xf0f) << 4;
        uVar6 = (uVar6 >> 2 & 0x3333) + (uVar6 & 0x3333) * 4;
        *(short *)(param_1 + uVar9 * 4) =
             (short)((uVar6 >> 1 & 0x5555) + (uVar6 & 0x5555) * 2 >> (-(char)uVar1 & 0xfU));
      }
    } while ((uVar9 < param_3) && (uVar9 = uVar8, uVar8 <= param_3));
  }
  else {
    do {
      uVar8 = uVar9 + (uVar9 < param_3);
      if (param_2 <= uVar9) goto LAB_1012a564;
      uVar1 = *(ushort *)(param_1 + 2 + uVar9 * 4);
      uVar6 = (uint)uVar1;
      if (uVar6 != 0) {
        if (0xf < uVar1) goto LAB_1012a532;
        uVar2 = *(ushort *)((int)&local_30 + uVar6 * 2);
        uVar7 = uVar2 << 8 | uVar2 >> 8;
        *(ushort *)((int)&local_30 + uVar6 * 2) = uVar2 + 1;
        uVar6 = uVar7 >> 4 & 0xf0f | (uVar7 & 0xf0f) << 4;
        uVar6 = (uVar6 >> 2 & 0x3333) + (uVar6 & 0x3333) * 4;
        *(short *)(param_1 + uVar9 * 4) =
             (short)((uVar6 >> 1 & 0x5555) + (uVar6 & 0x5555) * 2 >> (-(char)uVar1 & 0xfU));
      }
    } while ((uVar9 < param_3) && (uVar9 = uVar8, uVar8 <= param_3));
  }
  return;
}
