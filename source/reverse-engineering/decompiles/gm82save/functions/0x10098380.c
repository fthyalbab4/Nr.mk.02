// rea decompile_all
// name: FUN_10098380
// address: 0x10098380
// body: available
// range: 0x10098380-0x100983c2 inclusive
// range: 0x100983d0-0x10098408 inclusive
// range: 0x10098410-0x10098490 inclusive
// range: 0x100984a0-0x100984fe inclusive
// range: 0x10098500-0x1009855c inclusive
// range: 0x1009858d-0x10098688 inclusive
// range: 0x10098690-0x100986c3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_10098380(undefined4 param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  undefined6 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint unaff_EBX;
  byte *pbVar9;
  undefined2 uStack_6c;
  undefined2 local_6a;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined2 local_62;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  byte bStack_50;
  byte bStack_4f;
  undefined2 uStack_4e;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  byte *local_18;
  byte *local_14;

  local_40 = 0;
  local_2c = 0;
  local_44 = 0x10098394;
  uVar4 = 0;
  pbVar9 = param_3 + param_4;
  local_18 = param_3;
  local_14 = pbVar9;
  local_4c = param_1;
  local_48 = param_2;
  do {
    if ((uVar4 & 1) == 0) {
LAB_10098410:
      if (param_3 == pbVar9) {
        return 0;
      }
      bVar8 = *param_3;
      uVar4 = (uint)bVar8;
      if ((char)bVar8 < '\0') {
        pbVar1 = param_3 + 1;
        if (bVar8 < 0xe0) {
          param_3 = param_3 + 2;
          uVar4 = (uVar4 & 0x1f) << 6 | *pbVar1 & 0x3f;
        }
        else {
          uVar6 = param_3[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar8 < 0xf0) {
            param_3 = param_3 + 3;
            uVar4 = uVar6 | (uVar4 & 0x1f) << 0xc;
          }
          else {
            pbVar1 = param_3 + 3;
            param_3 = param_3 + 4;
            uVar4 = *pbVar1 & 0x3f | uVar6 << 6 | (uVar4 & 7) << 0x12;
          }
        }
      }
      else {
        param_3 = param_3 + 1;
      }
      FUN_10094e60((uint *)&local_5c,uVar4,0x10001);
      while( true ) {
        local_34 = CONCAT26(uStack_4e,
                            CONCAT15(bStack_4f,CONCAT14(bStack_50,CONCAT22(uStack_52,uStack_54))));
        local_3c = CONCAT26(uStack_56,CONCAT24(uStack_58,CONCAT22(uStack_5a,local_5c)));
        if (bStack_50 < bStack_4f) break;
        if (param_3 == pbVar9) {
          return 0;
        }
        bVar8 = *param_3;
        uVar4 = (uint)bVar8;
        if ((char)bVar8 < '\0') {
          pbVar1 = param_3 + 1;
          if (bVar8 < 0xe0) {
            param_3 = param_3 + 2;
            uVar4 = (uVar4 & 0x1f) << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar6 = param_3[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar8 < 0xf0) {
              param_3 = param_3 + 3;
              uVar4 = uVar6 | (uVar4 & 0x1f) << 0xc;
            }
            else {
              pbVar1 = param_3 + 3;
              param_3 = param_3 + 4;
              uVar4 = *pbVar1 & 0x3f | uVar6 << 6 | (uVar4 & 7) << 0x12;
            }
          }
        }
        else {
          param_3 = param_3 + 1;
        }
        if (uVar4 < 0x28) {
                    /* WARNING: Could not recover jumptable at 0x1009855b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)(*(int *)(&DAT_100986c4 + uVar4 * 4) + local_44))();
          return uVar5;
        }
        if (uVar4 == 0x5c) {
          local_5c = 0x5c5c;
          uStack_56 = 0;
          uStack_54 = 0;
          uStack_5a = 0;
          uStack_58 = 0;
          bStack_4f = 2;
          bStack_50 = 0;
        }
        else if (((uVar4 < 0x300) || (uVar6 = FUN_100953a0(uVar4), (char)uVar6 == '\0')) &&
                (bVar3 = FUN_10095140(uVar4), bVar3)) {
          local_5c = (undefined2)uVar4;
          uStack_5a = (undefined2)(uVar4 >> 0x10);
          bStack_4f = 0x81;
          bStack_50 = 0x80;
        }
        else {
          uStack_68 = 0;
          local_6a = 0;
          uStack_67 = (&DAT_10155cf4)[uVar4 >> 0x14];
          uVar6 = 0x1f;
          if ((uVar4 | 1) != 0) {
            for (; (uVar4 | 1) >> uVar6 == 0; uVar6 = uVar6 - 1) {
            }
          }
          uVar6 = (uVar6 ^ 0x1c) >> 2;
          uStack_66 = (&DAT_10155cf4)[uVar4 >> 0x10 & 0xf];
          uStack_65 = (&DAT_10155cf4)[uVar4 >> 0xc & 0xf];
          uStack_64 = (&DAT_10155cf4)[uVar4 >> 8 & 0xf];
          uStack_63 = (&DAT_10155cf4)[uVar4 >> 4 & 0xf];
          local_62 = CONCAT11(0x7d,(&DAT_10155cf4)[uVar4 & 0xf]);
          *(undefined2 *)((int)&uStack_6c + uVar6) = 0x755c;
          *(undefined1 *)((int)&local_6a + uVar6) = 0x7b;
          uStack_54 = local_62;
          uVar5 = CONCAT13(uStack_67,CONCAT12(uStack_68,local_6a));
          uVar2 = CONCAT15(uStack_65,CONCAT14(uStack_66,uVar5));
          bStack_4f = 10;
          local_5c = local_6a;
          uStack_5a = (undefined2)((uint)uVar5 >> 0x10);
          uStack_58 = (undefined2)((uint6)uVar2 >> 0x20);
          uStack_56 = (undefined2)(CONCAT17(uStack_63,CONCAT16(uStack_64,uVar2)) >> 0x30);
          bStack_50 = (char)uVar6 - 2;
        }
      }
      local_40 = 1;
      local_18 = param_3;
      unaff_EBX = (uint)CONCAT11(bStack_50 + 1,bStack_4f);
      local_34._5_3_ = (undefined3)((ulonglong)local_34 >> 0x28);
      local_34._0_5_ = CONCAT14(bStack_50 + 1,CONCAT22(uStack_52,uStack_54));
      bVar8 = bStack_50;
      if (bStack_4f < 0x81) goto LAB_100986ad;
LAB_100983d0:
      uVar4 = (uint)local_3c;
    }
    else {
      bVar8 = (byte)(unaff_EBX >> 8);
      bVar7 = (byte)unaff_EBX;
      if (bVar7 <= bVar8) goto LAB_10098410;
      unaff_EBX = (uint)CONCAT11(bVar8 + 1,bVar7);
      local_34._0_5_ = CONCAT14(bVar8 + 1,(undefined4)local_34);
      if (0x80 < bVar7) goto LAB_100983d0;
LAB_100986ad:
      uVar4 = (uint)*(byte *)((int)&local_3c + (uint)bVar8);
    }
    uVar5 = (**(code **)(local_48 + 0x10))(local_4c,uVar4);
    uVar4 = CONCAT31((int3)((uint)uVar5 >> 8),1);
    if ((char)uVar5 != '\0') {
      return uVar4;
    }
  } while( true );
}
