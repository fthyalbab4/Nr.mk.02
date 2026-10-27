// rea decompile_all
// name: FUN_100b9140
// address: 0x100b9140
// body: available
// range: 0x100b9140-0x100b948f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b9140(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint local_94;
  int local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined6 local_42;
  undefined2 uStack_3c;
  undefined6 uStack_3a;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;

  uVar8 = *(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x1a4) < uVar8) {
    *(undefined1 *)param_1 = 0x25;
  }
  else {
    pbVar2 = *(byte **)(param_2 + 0x14);
    uVar12 = 0x21e;
    *(uint *)(param_2 + 0x1a4) = *(uint *)(param_2 + 0x1a4) - uVar8;
    if (uVar8 != 0) {
      uVar11 = uVar8 - 4;
      uVar9 = 0;
      pbVar6 = pbVar2;
      do {
        if (*pbVar6 == 0) {
          uVar12 = 0x11e;
          if (0xffffffb0 < uVar9 - 0x50) {
            uVar13 = uVar8 - (uVar9 + 1);
            if (uVar13 == 0) {
              uVar5 = 0xff;
              *(undefined2 *)param_1 = 0x71e;
              goto LAB_100b91a6;
            }
            if (uVar13 == 1) {
              uVar5 = 0xff;
              *(undefined2 *)param_1 = 0x51e;
              goto LAB_100b91a6;
            }
            if (uVar9 + 3 == uVar8) goto LAB_100b928f;
            pbVar1 = pbVar2 + uVar9 + 1;
            uVar14 = 0;
            goto LAB_100b9213;
          }
          break;
        }
        uVar11 = uVar11 - 1;
        pbVar6 = pbVar6 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar11 != 0xfffffffc);
    }
    *param_1 = uVar12;
  }
  uVar5 = 0xff;
  goto LAB_100b91a6;
  while (bVar15 = uVar14 != uVar11, uVar14 = uVar14 + 1, bVar15) {
LAB_100b9213:
    if (pbVar6[uVar14 + 3] == 0) {
      if ((0xfffffffd < uVar14) || (uVar13 < uVar14 + 2)) {
        FUN_10136a50(2,uVar14 + 2,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_1015055c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar11 = uVar14 + 3;
      if (uVar13 < uVar11) {
        FUN_10136a50(uVar11,uVar13,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_1015054c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (uVar9 + 1 + uVar11 != uVar8) {
        iVar7 = uVar9 + uVar14;
        local_94 = 0;
        goto LAB_100b927f;
      }
      break;
    }
  }
  goto LAB_100b928f;
  while( true ) {
    local_94 = local_94 + 1;
    iVar7 = iVar7 + 1;
    if (uVar8 - 4 == iVar7) break;
LAB_100b927f:
    if (pbVar2[iVar7 + 4] == 0) {
      uVar8 = local_94 + uVar14 + 3;
      if ((CARRY4(local_94,uVar14 + 3)) || (uVar13 < uVar8)) {
        FUN_10136a50(uVar11,uVar8,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_1015053c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar11 = uVar8 + 1;
      if (uVar13 <= uVar8) {
        FUN_10136a50(uVar11,uVar13,uVar13,&PTR_s_C__Users_runneradmin__cargo_regi_1015052c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (*(int *)(param_2 + 0x60) == -1) {
        FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_1015051c);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      FUN_100b9490(&local_48,pbVar2,uVar9,*pbVar1,pbVar1[1],(uint *)(pbVar1 + 2),uVar14,
                   (int)(pbVar1 + uVar14 + 3),local_94,pbVar1 + uVar11,uVar13 - uVar11);
      if (local_48 == -1) {
        uVar5 = 0xff;
        *(undefined1 *)param_1 = 0x1e;
        *(undefined1 *)((int)param_1 + 1) = local_44;
      }
      else {
        iVar7 = *(int *)(param_2 + 0x11c);
        if (iVar7 == *(int *)(param_2 + 0x114)) {
          FUN_10138c00((uint *)(param_2 + 0x114));
        }
        iVar3 = *(int *)(param_2 + 0x118);
        iVar10 = iVar7 * 0x38;
        *(int *)(iVar3 + iVar10) = local_48;
        *(undefined1 *)(iVar3 + 4 + iVar10) = local_44;
        *(undefined1 *)(iVar3 + 5 + iVar10) = local_43;
        *(ulonglong *)(iVar3 + 6 + iVar10) = CONCAT26(uStack_3c,local_42);
        *(ulonglong *)(iVar3 + 0xc + iVar10) = CONCAT62(uStack_3a,uStack_3c);
        *(undefined8 *)(iVar3 + 0x14 + iVar10) = local_34;
        *(undefined8 *)(iVar3 + 0x1c + iVar10) = local_2c;
        *(undefined8 *)(iVar3 + 0x24 + iVar10) = local_24;
        *(undefined8 *)(iVar3 + 0x2c + iVar10) = local_1c;
        *(undefined4 *)(iVar3 + 0x34 + iVar10) = local_14;
        *(int *)(param_2 + 0x11c) = iVar7 + 1;
        uVar5 = 2;
      }
      goto LAB_100b91a6;
    }
  }
LAB_100b928f:
  uVar5 = 0xff;
  *(undefined2 *)param_1 = 0x21e;
LAB_100b91a6:
  *(undefined1 *)((int)param_1 + 0x19) = uVar5;
  return;
}
