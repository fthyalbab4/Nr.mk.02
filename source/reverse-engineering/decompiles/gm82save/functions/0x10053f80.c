// rea decompile_all
// name: FUN_10053f80
// address: 0x10053f80
// body: available
// range: 0x10053f80-0x10053fe6 inclusive
// range: 0x10053ff0-0x1005403b inclusive
// range: 0x10054040-0x10054090 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10053f80(undefined1 *param_1,byte *param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;

  if (param_3 == 1) {
    bVar2 = *param_2;
    if ((bVar2 != 0x2d) && (bVar2 != 0x2b)) goto LAB_10053fb1;
LAB_10053fa3:
    param_1[1] = 1;
  }
  else {
    if (param_3 != 0) {
      bVar2 = *param_2;
LAB_10053fb1:
      if (bVar2 == 0x2d) {
        pbVar6 = param_2 + 1;
        iVar3 = 0;
        iVar4 = param_3 - 1;
        if (param_3 < 9) {
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            bVar2 = *pbVar6;
            if (9 < bVar2 - 0x30) goto LAB_10053fa3;
            pbVar6 = pbVar6 + 1;
            iVar3 = iVar3 * 10 - (bVar2 - 0x30);
          }
        }
        else {
          do {
            iVar5 = (int)((longlong)iVar3 * 10);
            if ((longlong)iVar5 != (longlong)iVar3 * 10) {
              if (9 < (byte)(*pbVar6 - 0x30)) goto LAB_10053fa3;
LAB_10054088:
              param_1[1] = 3;
              goto LAB_10053fa7;
            }
            uVar7 = *pbVar6 - 0x30;
            if (9 < uVar7) goto LAB_10053fa3;
            iVar3 = iVar5 - uVar7;
            if (SBORROW4(iVar5,uVar7)) goto LAB_10054088;
            pbVar6 = pbVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      else {
        if (bVar2 == 0x2b) {
          param_2 = param_2 + 1;
          param_3 = param_3 - 1;
        }
        iVar3 = 0;
        if (param_3 < 8) {
          for (; param_3 != 0; param_3 = param_3 - 1) {
            bVar2 = *param_2;
            if (9 < bVar2 - 0x30) goto LAB_10053fa3;
            param_2 = param_2 + 1;
            iVar3 = (bVar2 - 0x30) + iVar3 * 10;
          }
        }
        else {
          do {
            iVar4 = (int)((longlong)iVar3 * 10);
            if ((longlong)iVar4 != (longlong)iVar3 * 10) {
              if (9 < (byte)(*param_2 - 0x30)) goto LAB_10053fa3;
LAB_10054073:
              param_1[1] = 2;
              goto LAB_10053fa7;
            }
            uVar7 = *param_2 - 0x30;
            if (9 < uVar7) goto LAB_10053fa3;
            iVar3 = iVar4 + uVar7;
            if (SCARRY4(iVar4,uVar7)) goto LAB_10054073;
            param_2 = param_2 + 1;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
      }
      *(int *)(param_1 + 4) = iVar3;
      uVar1 = 0;
      goto LAB_10054061;
    }
    param_1[1] = 0;
  }
LAB_10053fa7:
  uVar1 = 1;
LAB_10054061:
  *param_1 = uVar1;
  return;
}
