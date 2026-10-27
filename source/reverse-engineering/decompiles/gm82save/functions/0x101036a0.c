// rea decompile_all
// name: FUN_101036a0
// address: 0x101036a0
// body: available
// range: 0x101036a0-0x10103960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_101036a0(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 (*pauVar11) [16];
  byte local_58;
  byte local_57 [3];
  undefined1 *local_54;
  uint local_50;
  uint local_4c;
  byte *local_48;
  int local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_34;
  undefined1 **local_30;
  undefined1 (*local_2c) [16];
  undefined1 (**local_28) [16];
  undefined1 *local_24;
  int *local_20;
  undefined1 *local_1c;
  undefined1 (*local_18) [16];
  int local_14;

  uVar4 = param_1[4];
  iVar6 = param_1[1] - uVar4;
  if ((uint)param_1[1] < uVar4) {
    return 0xfffffffe;
  }
  pbVar5 = (byte *)*param_1;
  *param_1 = (int)(pbVar5 + uVar4);
  param_1[1] = iVar6;
  if (uVar4 != 2) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10155d9c);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar7 = (uint)*pbVar5;
  uVar4 = uVar7 - 0x30;
  if (0x39 < uVar7) {
    uVar4 = (uVar7 - 0x41 & 0xffffffdf) + 10;
  }
  if (uVar4 < 0x10) {
    uVar9 = (uint)pbVar5[1];
    uVar7 = uVar9 - 0x30;
    if (0x39 < uVar9) {
      uVar7 = (uVar9 - 0x41 & 0xffffffdf) + 10;
    }
    local_48 = pbVar5;
    if (uVar7 < 0x10) {
      local_58 = (byte)uVar7 | (char)uVar4 << 4;
      if ((char)local_58 < '\0') {
        if (local_58 < 0xc0) {
          return 0xffffffff;
        }
        local_50 = 2;
        if (((0xdf < local_58) && (local_50 = 3, 0xef < local_58)) &&
           (local_50 = 4, 0xf7 < local_58)) {
          return 0xffffffff;
        }
        pbVar10 = local_57;
        iVar8 = 0;
        local_57[0] = 0;
        local_57[1] = 0;
        local_57[2] = 0;
        local_38 = iVar6 + -2;
        local_44 = local_50 * 2 + -2;
        pbVar5 = pbVar5 + 4;
        local_54 = &local_58;
        local_4c = local_50;
        local_40 = iVar6;
        local_3c = param_1;
        do {
          piVar3 = local_3c;
          iVar6 = local_44;
          if ((uint)(local_40 + iVar8) < 2) {
            return 0xffffffff;
          }
          *param_1 = (int)pbVar5;
          param_1[1] = local_38 + iVar8;
          uVar7 = (uint)pbVar5[-2];
          uVar4 = uVar7 - 0x30;
          if (0x39 < uVar7) {
            uVar4 = (uVar7 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar4) goto LAB_101038e2;
          uVar9 = (uint)pbVar5[-1];
          uVar7 = uVar9 - 0x30;
          if (0x39 < uVar9) {
            uVar7 = (uVar9 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar7) goto LAB_101038e2;
          iVar8 = iVar8 + -2;
          pbVar5 = pbVar5 + 2;
          *pbVar10 = (byte)uVar7 | (char)uVar4 << 4;
          pbVar10 = pbVar10 + 1;
          uVar4 = local_4c;
          param_1 = piVar3;
        } while (iVar6 + iVar8 != 0);
      }
      else {
        local_57[0] = 0;
        local_57[1] = 0;
        local_57[2] = 0;
        local_50 = 1;
        uVar4 = 1;
        local_54 = &local_58;
      }
      FUN_10095490(&local_30,(int)&local_58,uVar4);
      if (local_30 == (undefined1 **)0x1) {
        return 0xffffffff;
      }
      local_18 = local_2c;
      local_14 = (int)local_28;
      if (local_28 != (undefined1 (**) [16])0x0) {
        bVar1 = (*local_2c)[0];
        uVar4 = (uint)bVar1;
        if ((char)bVar1 < '\0') {
          uVar7 = (byte)(*local_2c)[1] & 0x3f;
          if (bVar1 < 0xe0) {
            pauVar11 = (undefined1 (*) [16])(*local_2c + 2);
            uVar4 = (uVar4 & 0x1f) << 6 | uVar7;
          }
          else {
            uVar7 = (byte)(*local_2c)[2] & 0x3f | uVar7 << 6;
            if (bVar1 < 0xf0) {
              pauVar11 = (undefined1 (*) [16])(*local_2c + 3);
              uVar4 = uVar7 | (uVar4 & 0x1f) << 0xc;
            }
            else {
              pauVar11 = (undefined1 (*) [16])(*local_2c + 4);
              uVar4 = (byte)(*local_2c)[3] & 0x3f | uVar7 << 6 | (uVar4 & 7) << 0x12;
            }
          }
        }
        else {
          pauVar11 = (undefined1 (*) [16])(*local_2c + 1);
        }
        if (pauVar11 == (undefined1 (*) [16])(*local_2c + (int)local_28)) {
          return uVar4;
        }
      }
      local_34 = FUN_10103c40(local_2c,(undefined1 (*) [16])(*local_2c + (int)local_28));
      local_30 = &local_54;
      local_28 = &local_18;
      local_20 = &local_34;
      local_2c = (undefined1 (*) [16])&LAB_10103cf0;
      local_24 = &LAB_10103ea0;
      local_1c = &LAB_10096fc0;
      FUN_101369c0(&DAT_10155d14,&local_30,&PTR_s_C__Users_runneradmin__cargo_regi_10155d8c);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
LAB_101038e2:
  FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10155dac);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}
