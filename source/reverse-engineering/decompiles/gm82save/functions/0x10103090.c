// rea decompile_all
// name: FUN_10103090
// address: 0x10103090
// body: available
// range: 0x10103090-0x101032f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_10103090(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 uStack_39;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint auStack_20 [3];
  byte bStack_14;
  byte bStack_13;

  iVar12 = *param_1;
  if (iVar12 == 0) {
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      uVar7 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"?",(undefined1 *)0x1);
      return uVar7;
    }
  }
  else {
    uVar11 = param_1[2];
    local_38 = param_1[1];
    uVar8 = local_38;
    if (local_38 < uVar11) {
      uVar8 = uVar11;
    }
    uVar10 = uVar11;
    do {
      uVar4 = uVar10;
      uVar10 = uVar4 + 1;
      if (uVar10 - uVar8 == 1) goto LAB_1010328d;
      cVar6 = *(char *)(iVar12 + -1 + uVar10);
      param_1[2] = uVar10;
    } while ((byte)(cVar6 + 0x9fU) < 6 || (byte)(cVar6 - 0x30U) < 10);
    if (cVar6 == '_') {
      if ((uVar11 == 0) || (local_38 <= uVar11)) {
        if (local_38 < uVar4) goto LAB_10103119;
      }
      else if ((local_38 < uVar4) || (*(char *)(iVar12 + uVar11) < -0x40)) {
LAB_10103119:
        FUN_10136b90(iVar12,local_38,uVar11,uVar4,&PTR_s_C__Users_runneradmin__cargo_regi_10155eac);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      if ((uVar4 - uVar11 & 1) == 0) {
        iVar12 = iVar12 + uVar11;
        uVar11 = uVar4 - uVar11 & 0x7ffffffe;
        local_28 = 0;
        local_24 = 2;
        local_34 = iVar12;
        local_30 = uVar11;
        local_2c = iVar12 + uVar11;
        do {
          uVar8 = FUN_101036a0(&local_34);
        } while (uVar8 < 0xfffffffe);
        if (uVar8 == 0xfffffffe) {
          puVar2 = (undefined4 *)param_1[4];
          if (puVar2 == (undefined4 *)0x0) {
            return 0;
          }
          cVar6 = (**(code **)(puVar2[1] + 0x10))(*puVar2,0x22);
          if (cVar6 == '\0') {
            local_28 = 0;
            local_24 = 2;
            local_34 = iVar12;
            local_30 = uVar11;
            local_2c = iVar12 + uVar11;
            do {
              while( true ) {
                uVar11 = FUN_101036a0(&local_34);
                if (uVar11 == 0xfffffffe) {
                  uVar7 = (**(code **)(puVar2[1] + 0x10))(*puVar2,0x22);
                  return uVar7;
                }
                if (uVar11 != 0x27) break;
                cVar6 = (**(code **)(puVar2[1] + 0x10))(*puVar2,0x27);
                if (cVar6 != '\0') {
                  return 1;
                }
              }
              if (uVar11 == 0xffffffff) {
                FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_39,
                             &DAT_10155e88,&PTR_s_C__Users_runneradmin__rustup_too_101562d8);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              FUN_10103970(auStack_20,uVar11);
              bVar5 = bStack_13;
              uVar11 = auStack_20[0];
              uVar8 = (uint)bStack_14;
              if (bStack_13 < 0x81) {
                uVar11 = (uint)bStack_13;
                if (bStack_13 < bStack_14) {
                  uVar11 = uVar8;
                }
                while (uVar11 != uVar8) {
                  puVar1 = (undefined1 *)((int)auStack_20 + uVar8);
                  uVar8 = uVar8 + 1;
                  cVar6 = (**(code **)(puVar2[1] + 0x10))(*puVar2,*puVar1);
                  if (cVar6 != '\0') {
                    return 1;
                  }
                }
              }
              else {
                bVar9 = bStack_14 - 1;
                while (bVar9 = bVar9 + 1, bVar9 < bVar5) {
                  cVar6 = (**(code **)(puVar2[1] + 0x10))(*puVar2,uVar11);
                  if (cVar6 != '\0') {
                    return 1;
                  }
                }
              }
            } while( true );
          }
          return 1;
        }
      }
    }
LAB_1010328d:
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar6 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{invalid syntax}",
                             &DAT_00000010), cVar6 != '\0')) {
      return 1;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return 0;
}
