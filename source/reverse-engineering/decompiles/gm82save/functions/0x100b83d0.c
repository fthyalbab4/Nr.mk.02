// rea decompile_all
// name: FUN_100b83d0
// address: 0x100b83d0
// body: available
// range: 0x100b83d0-0x100b86af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100b83d0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  byte local_5c;
  byte local_54;
  int local_48;
  uint local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined4 local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  uint local_18;
  uint local_14;

  uVar1 = *(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 0x1a4) < uVar1) {
    *(undefined1 *)param_1 = 0x25;
  }
  else {
    pbVar2 = *(byte **)(param_2 + 0x14);
    *(uint *)(param_2 + 0x1a4) = *(uint *)(param_2 + 0x1a4) - uVar1;
    uVar10 = 0x21e;
    if (uVar1 != 0) {
      uVar15 = 0;
      pbVar6 = pbVar2;
LAB_100b8410:
      pbVar16 = pbVar6 + 1;
      if (*pbVar6 != 0) goto code_r0x100b8416;
      uVar10 = 0x11e;
      if (0xffffffb0 < uVar15 - 0x50) {
        if (*(int *)(param_2 + 0x60) == -1) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101505ac);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        local_48 = (uVar1 - 1) - uVar15;
        local_40 = 0;
        local_3c = 1;
        uStack_3a = 0;
        local_38._0_2_ = 0;
        local_38._2_2_ = 0;
        local_14 = uVar1 - (uVar15 + 1);
        FUN_10137980(&local_40,0,uVar15);
        uVar13 = 0;
        uVar17 = CONCAT22(local_38._2_2_,(undefined2)local_38);
        do {
          local_54 = pbVar2[uVar13];
          uVar12 = ((char)local_54 < '\0') + 1;
          if (local_40 - uVar17 < uVar12) {
            local_18 = uVar13;
            local_38 = uVar17;
            FUN_10137980(&local_40,uVar17,uVar12);
            iVar7 = CONCAT22(uStack_3a,local_3c);
            uVar13 = local_18;
          }
          else {
            iVar7 = CONCAT22(uStack_3a,local_3c);
          }
          if ((char)local_54 < '\0') {
            uVar11 = CONCAT11(local_54,local_54 >> 6) & 0xbfff;
            local_54 = (byte)uVar11 | 0xc0;
            *(char *)(iVar7 + 1 + uVar17) = (char)(uVar11 >> 8);
          }
          uVar13 = uVar13 + 1;
          *(byte *)(iVar7 + uVar17) = local_54;
          uVar17 = uVar17 + uVar12;
        } while (uVar15 != uVar13);
        local_34 = 0;
        local_30 = 1;
        local_2c = 0;
        if (uVar1 != uVar15 + 1) {
          local_38 = uVar17;
          FUN_10137980(&local_34,0,local_14);
          uVar17 = local_38;
          do {
            uVar1 = local_2c;
            local_5c = *pbVar16;
            uVar15 = ((char)local_5c < '\0') + 1;
            if (local_34 - local_2c < uVar15) {
              local_38 = uVar17;
              FUN_10137980(&local_34,local_2c,uVar15);
              uVar17 = local_38;
            }
            if ((char)local_5c < '\0') {
              bVar14 = local_5c & 0xbf;
              local_5c = local_5c >> 6 | 0xc0;
              *(byte *)(local_30 + 1 + uVar1) = bVar14;
            }
            pbVar16 = pbVar16 + 1;
            *(byte *)(local_30 + uVar1) = local_5c;
            local_2c = uVar1 + uVar15;
            local_48 = local_48 + -1;
          } while (local_48 != 0);
        }
        uVar13 = local_2c;
        iVar8 = local_30;
        uVar15 = local_34;
        uVar1 = local_40;
        local_38._2_2_ = (undefined2)(uVar17 >> 0x10);
        local_38._0_2_ = (undefined2)uVar17;
        local_28 = CONCAT22((undefined2)local_38,uStack_3a);
        local_24 = local_38._2_2_;
        if (local_40 != 0xffffffff) {
          iVar3 = *(int *)(param_2 + 0x104);
          local_1c = local_38._2_2_;
          local_20 = local_28;
          if (iVar3 == *(int *)(param_2 + 0xfc)) {
            local_38 = uVar17;
            FUN_10138c50((uint *)(param_2 + 0xfc));
          }
          iVar4 = *(int *)(param_2 + 0x100);
          *(uint *)(iVar4 + iVar3 * 0x18) = uVar1;
          *(short *)(iVar4 + 4 + iVar3 * 0x18) = (short)iVar7;
          *(undefined4 *)(iVar4 + 6 + iVar3 * 0x18) = local_20;
          *(undefined2 *)(iVar4 + 10 + iVar3 * 0x18) = local_1c;
          *(int *)(iVar4 + 0x10 + iVar3 * 0x18) = iVar8;
          *(uint *)(iVar4 + 0xc + iVar3 * 0x18) = uVar15;
          *(uint *)(iVar4 + 0x14 + iVar3 * 0x18) = uVar13;
          *(int *)(param_2 + 0x104) = iVar3 + 1;
          uVar9 = 2;
          goto LAB_100b842f;
        }
        *(undefined1 *)param_1 = 0x1e;
        *(char *)((int)param_1 + 1) = (char)iVar7;
        goto LAB_100b842d;
      }
    }
LAB_100b842b:
    *param_1 = uVar10;
  }
LAB_100b842d:
  uVar9 = 0xff;
LAB_100b842f:
  *(undefined1 *)((int)param_1 + 0x19) = uVar9;
  return;
code_r0x100b8416:
  uVar15 = uVar15 + 1;
  pbVar6 = pbVar16;
  if (uVar1 == uVar15) goto LAB_100b842b;
  goto LAB_100b8410;
}
