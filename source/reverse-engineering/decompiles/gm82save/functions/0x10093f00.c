// rea decompile_all
// name: FUN_10093f00
// address: 0x10093f00
// body: available
// range: 0x10093f00-0x10094105 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall
FUN_10093f00(undefined4 *param_1,undefined1 (*param_2) [16],undefined1 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  ushort uVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  ushort uVar18;
  ushort uVar19;
  uint uVar17;

  uVar2 = param_1[2];
  if ((uVar2 & 0x18000000) == 0) {
    iVar8 = param_1[1];
  }
  else {
    if ((uVar2 & 0x10000000) == 0) {
      if (param_3 < (undefined1 *)0x10) {
        if (param_3 == (undefined1 *)0x0) {
          uVar7 = 0;
          uVar9 = (uint)*(ushort *)(param_1 + 3);
          if (uVar9 != 0) goto LAB_1009401c;
        }
        else {
          uVar7 = 0;
          puVar11 = param_3;
          pauVar12 = param_2;
          do {
            puVar4 = *pauVar12;
            pauVar12 = (undefined1 (*) [16])(*pauVar12 + 1);
            uVar7 = uVar7 + (-0x41 < (char)*puVar4);
            puVar11 = puVar11 + -1;
          } while (puVar11 != (undefined1 *)0x0);
          uVar9 = (uint)*(ushort *)(param_1 + 3);
          if (uVar7 < uVar9) {
LAB_1009401c:
            uVar10 = uVar9 - uVar7;
            uVar13 = 0;
            switch(uVar2 >> 0x1d & 3) {
            case 1:
              uVar13 = uVar10;
              break;
            case 2:
              uVar13 = (uVar10 & 0xffff) >> 1;
            }
            uVar17 = uVar13 + 1;
            uVar3 = *param_1;
            iVar8 = param_1[1];
            while (uVar14 = (short)uVar17 - 1, uVar17 = (uint)uVar14, uVar14 != 0) {
              cVar5 = (**(code **)(iVar8 + 0x10))(uVar3,uVar2 & 0x1fffff);
              if (cVar5 != '\0') {
                return 1;
              }
            }
            cVar5 = (**(code **)(iVar8 + 0xc))(uVar3,param_2,param_3);
            if (cVar5 != '\0') {
              return 1;
            }
            uVar18 = (short)uVar10 - (short)uVar13;
            uVar14 = 0xffff;
            do {
              uVar19 = uVar18;
              if ((ushort)((((short)uVar13 + (short)uVar7) - (short)uVar9) + uVar14) == -1) break;
              cVar5 = (**(code **)(iVar8 + 0x10))(uVar3,uVar2 & 0x1fffff);
              uVar19 = uVar14 + 1;
              uVar14 = uVar19;
            } while (cVar5 == '\0');
            return uVar19 < uVar18;
          }
        }
      }
      else {
        uVar7 = FUN_10094120(param_2,(int)param_3);
        uVar9 = (uint)*(ushort *)(param_1 + 3);
        if (uVar7 < uVar9) goto LAB_1009401c;
      }
    }
    else {
      uVar7 = (uint)*(ushort *)((int)param_1 + 0xe);
      if (uVar7 == 0) {
        param_3 = (undefined1 *)0x0;
        uVar9 = 0;
      }
      else {
        pauVar15 = (undefined1 (*) [16])(param_3 + (int)param_2);
        param_3 = (undefined1 *)0x0;
        uVar9 = uVar7;
        pauVar12 = param_2;
        do {
          if (pauVar12 == pauVar15) goto LAB_10093fff;
          bVar1 = (*pauVar12)[0];
          if ((char)bVar1 < '\0') {
            if (bVar1 < 0xe0) {
              pauVar16 = (undefined1 (*) [16])(*pauVar12 + 2);
            }
            else {
              pauVar16 = (undefined1 (*) [16])((int)pauVar12 + (4 - (uint)(bVar1 < 0xf0)));
            }
          }
          else {
            pauVar16 = (undefined1 (*) [16])(*pauVar12 + 1);
          }
          param_3 = param_3 + ((int)pauVar16 - (int)pauVar12);
          uVar9 = uVar9 - 1;
          pauVar12 = pauVar16;
        } while (uVar9 != 0);
        uVar9 = 0;
      }
LAB_10093fff:
      uVar7 = uVar7 - uVar9;
      uVar9 = (uint)*(ushort *)(param_1 + 3);
      if (uVar7 < uVar9) goto LAB_1009401c;
    }
    iVar8 = param_1[1];
  }
  uVar6 = (**(code **)(iVar8 + 0xc))(*param_1,param_2,param_3);
  return uVar6;
}
