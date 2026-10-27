// rea decompile_all
// name: FUN_100a7ed0
// address: 0x100a7ed0
// body: available
// range: 0x100a7ed0-0x100a809b inclusive
// range: 0x100a80a0-0x100a81ce inclusive
// range: 0x100a81d0-0x100a8259 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100a7ed0(byte *param_1,uint param_2,uint *param_3)

{
  code *pcVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_3c;
  undefined1 local_35;
  uint *local_34;
  byte *local_30;
  uint local_2c;
  uint *local_28;
  undefined4 local_24;
  uint *local_20;
  uint local_1c;
  uint *local_18;
  uint local_14;

  local_30 = param_1;
  FUN_1010a5e0((undefined1 *)&local_24,param_1,param_2);
  uVar9 = local_24 & 0xff;
  if (uVar9 == 0xff) {
    uVar9 = 0;
    bVar12 = false;
  }
  else {
    local_34 = local_20;
    local_28 = local_18;
    local_35 = local_24._1_1_;
    local_3c = uVar9;
    local_2c = param_2;
    FUN_100a8280(param_3,&local_3c,4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar9) {
    default:
      local_3c = local_1c;
      FUN_100a8280(param_3,&local_3c,4);
      FUN_100a8280(param_3,local_34,local_1c);
      uVar9 = local_1c + 4;
      break;
    case 1:
      local_3c = local_1c;
      FUN_100a8280(param_3,&local_3c,4);
      FUN_100a8280(param_3,local_34,local_1c);
      local_3c = local_14;
      FUN_100a8280(param_3,&local_3c,4);
      FUN_100a8280(param_3,local_28,local_14);
      iVar3 = local_14 + 1;
      if (local_14 == 0) {
        iVar3 = 0;
      }
      uVar9 = local_1c + 8 + iVar3;
      break;
    case 2:
      local_3c = CONCAT31(local_3c._1_3_,local_35);
      FUN_100a8280(param_3,&local_3c,1);
      uVar9 = 6;
      break;
    case 4:
      local_3c = local_1c;
      FUN_100a8280(param_3,&local_3c,4);
      FUN_100a8280(param_3,local_34,local_1c);
      local_3c = local_14;
      FUN_100a8280(param_3,&local_3c,4);
      FUN_100a8280(param_3,local_28,local_14);
      iVar3 = local_14 + 1;
      if (local_14 == 0) {
        iVar3 = 0;
      }
      uVar9 = local_1c + 2 + iVar3;
      break;
    case 5:
      local_3c = CONCAT31(local_3c._1_3_,local_35);
      FUN_100a8280(param_3,&local_3c,1);
      uVar9 = 2;
    }
    bVar12 = (byte)local_24 < 3;
    param_2 = local_2c;
    if (local_2c < uVar9) {
      FUN_10136a50(uVar9,local_2c,local_2c,&PTR_s_C__Users_runneradmin__rustup_too_1014f67c);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  pbVar2 = local_30;
  uVar10 = 0;
  local_2c = param_2 - uVar9;
  uVar7 = 0;
  if (local_2c == 0) goto LAB_100a8213;
  if (bVar12) {
    uVar10 = 0;
    uVar5 = 0;
    uVar8 = 0;
    do {
      uVar11 = uVar5 + 1;
      uVar7 = uVar8;
      if ((pbVar2[uVar5 + uVar9] == 0x5c) &&
         (uVar4 = uVar5 - uVar8, uVar7 = uVar11, uVar8 <= uVar5 && uVar4 != 0)) {
        uVar10 = (uVar10 + uVar4) * 0x40000000 | uVar10 + uVar4 >> 2;
        FUN_100a8280(param_3,(uint *)(pbVar2 + uVar8 + uVar9),uVar4);
      }
      uVar5 = uVar11;
      uVar8 = uVar7;
    } while (local_2c != uVar11);
    goto LAB_100a8213;
  }
  uVar7 = 0;
  uVar10 = 0;
  uVar5 = 0;
  if (param_2 != uVar9 + 1) {
    uVar10 = 0;
    uVar5 = 0;
    local_30 = local_30 + uVar9 + 2;
    puVar6 = (uint *)(uVar9 - param_2);
    uVar7 = 0;
    local_34 = puVar6;
    do {
      if ((local_30[uVar5 - 2] == 0x2f) || (local_30[uVar5 - 2] == 0x5c)) {
        if (uVar7 <= uVar5 && uVar5 - uVar7 != 0) {
          uVar10 = (uVar10 - uVar7) + uVar5;
          uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
          FUN_100a8280(param_3,(uint *)(pbVar2 + uVar7 + uVar9),uVar5 - uVar7);
          puVar6 = local_34;
        }
        if ((int)puVar6 + uVar5 == -2) {
          uVar7 = 1;
          if (local_30[uVar5 - 1] != 0x2e) goto LAB_100a8150;
        }
        else if (((int)puVar6 + uVar5 == -1) || (local_30[uVar5 - 1] != 0x2e)) {
LAB_100a8150:
          uVar7 = 0;
        }
        else {
          uVar7 = (uint)(local_30[uVar5] == 0x2f || local_30[uVar5] == 0x5c);
          puVar6 = local_34;
        }
        uVar7 = uVar7 + 1 + uVar5;
      }
      uVar5 = uVar5 + 1;
    } while ((int)puVar6 + uVar5 != -1);
  }
  if ((pbVar2[uVar5 + uVar9] != 0x5c) && (pbVar2[uVar5 + uVar9] != 0x2f)) goto LAB_100a8213;
  uVar8 = uVar5 + 1;
  uVar11 = uVar5 - uVar7;
  if (uVar7 <= uVar5 && uVar11 != 0) {
    uVar10 = (uVar10 + uVar11) * 0x40000000 | uVar10 + uVar11 >> 2;
    FUN_100a8280(param_3,(uint *)(pbVar2 + uVar7 + uVar9),uVar11);
  }
  if (local_2c - uVar8 == 1) {
    uVar7 = 1;
    if (pbVar2[uVar8 + uVar9] != 0x2e) {
LAB_100a820b:
      uVar7 = 0;
    }
  }
  else {
    if ((local_2c == uVar8) || (pbVar2[uVar8 + uVar9] != 0x2e)) goto LAB_100a820b;
    uVar7 = (uint)(pbVar2[uVar8 + uVar9 + 1] == 0x2f || pbVar2[uVar8 + uVar9 + 1] == 0x5c);
  }
  uVar7 = uVar7 + uVar8;
LAB_100a8213:
  uVar5 = local_2c - uVar7;
  if (uVar7 <= local_2c && uVar5 != 0) {
    uVar10 = (uVar10 + uVar5) * 0x40000000 | uVar10 + uVar5 >> 2;
    FUN_100a8280(param_3,(uint *)(pbVar2 + uVar7 + uVar9),uVar5);
  }
  local_24 = uVar10;
  FUN_100a8280(param_3,&local_24,4);
  return;
}
