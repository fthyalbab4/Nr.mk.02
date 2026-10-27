// rea decompile_all
// name: FUN_10111bd0
// address: 0x10111bd0
// body: available
// range: 0x10111bd0-0x10111e34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10111bd0(uint *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint local_18;

  uVar11 = param_1[2];
  uVar9 = 0;
  bVar4 = false;
  if (2 < uVar11) {
    uVar5 = param_1[1];
    uVar9 = 0;
    bVar2 = *(byte *)((uVar5 - 2) + uVar11);
    bVar4 = false;
    if (((bVar2 & 0xf0) == 0xa0) && (uVar9 = 0, *(char *)((uVar5 - 3) + uVar11) == -0x13)) {
      bVar4 = true;
      uVar9 = (*(byte *)((uVar5 - 1) + uVar11) & 0x3f) << 10 | (bVar2 & 0xf) << 0x10;
    }
  }
  if ((((param_3 < 3) || (*param_2 != 0xed)) || (bVar2 = param_2[1], (bVar2 & 0xf0) != 0xb0)) ||
     (!bVar4)) {
    if ((char)param_1[3] == '\0') {
LAB_10111d84:
      if (*param_1 - uVar11 < param_3) {
        FUN_101359e0(param_1,uVar11,param_3,(LPVOID)0x1,1);
        uVar11 = param_1[2];
      }
      else if (param_3 == 0) goto LAB_10111da4;
      memcpy((void *)(param_1[1] + uVar11),param_2,param_3);
    }
    else if (param_3 != 0) {
      pbVar10 = param_2 + param_3;
      pbVar8 = param_2;
      do {
        bVar2 = *pbVar8;
        pbVar6 = pbVar8 + 1;
        if ((char)bVar2 < '\0') {
          if (bVar2 < 0xe0) {
            if (pbVar6 != pbVar10) {
              pbVar6 = pbVar8 + 2;
            }
          }
          else if (bVar2 == 0xed) {
            if ((pbVar6 == pbVar10) || (pbVar8 + 2 == pbVar10)) break;
            if (0x9f < pbVar8[1]) {
              *(undefined1 *)(param_1 + 3) = 0;
              break;
            }
            pbVar6 = pbVar8 + 3;
          }
          else {
            pbVar8 = pbVar8 + 2;
            if (pbVar6 == pbVar10) {
              pbVar8 = pbVar6;
            }
            pbVar6 = pbVar8 + (pbVar8 != pbVar10);
            if (0xef < bVar2) {
              pbVar6 = pbVar6 + (pbVar6 != pbVar10);
            }
          }
        }
        pbVar8 = pbVar6;
      } while (pbVar6 != pbVar10);
      goto LAB_10111d84;
    }
LAB_10111da4:
    uVar11 = uVar11 + param_3;
    goto LAB_10111da6;
  }
  bVar3 = param_2[2];
  if (2 < uVar11) {
    uVar11 = uVar11 - 3;
    param_1[2] = uVar11;
  }
  local_18 = *param_1;
  uVar5 = local_18 - uVar11;
  if (uVar5 < param_3 + 1) {
    FUN_101359e0(param_1,uVar11,param_3 + 1,(LPVOID)0x1,1);
    local_18 = *param_1;
    uVar11 = param_1[2];
    uVar5 = local_18 - uVar11;
  }
  uVar7 = (bVar2 & 0xf) * 0x40 + (bVar3 & 0x3f);
  uVar9 = uVar7 | uVar9;
  uVar1 = uVar9 + 0x10000;
  if (uVar5 < 4) {
    FUN_101366d0(param_1,uVar11,4);
    local_18 = *param_1;
    uVar11 = param_1[2];
  }
  uVar5 = param_1[1];
  *(uint *)(uVar5 + uVar11) =
       (uVar1 >> 0x12) + 0x808080f0 +
       (uVar1 >> 4 & 0x3f00 | (uVar9 & 0xfc0) << 10 | (uVar7 & 0x3f) << 0x18);
  uVar11 = uVar11 + 4;
  uVar9 = param_3 - 3;
  param_1[2] = uVar11;
  if (local_18 - uVar11 < uVar9) {
    FUN_101359e0(param_1,uVar11,uVar9,(LPVOID)0x1,1);
    uVar5 = param_1[1];
    uVar11 = param_1[2];
LAB_10111cee:
    memcpy((void *)(uVar5 + uVar11),param_2 + 3,uVar9);
  }
  else if (param_3 != 3) goto LAB_10111cee;
  uVar11 = uVar11 + uVar9;
LAB_10111da6:
  param_1[2] = uVar11;
  return;
}
