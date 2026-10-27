// rea decompile_all
// name: FUN_1002c4b0
// address: 0x1002c4b0
// body: available
// range: 0x1002c4b0-0x1002c647 inclusive
// range: 0x1002c650-0x1002c6b0 inclusive
// range: 0x1002c6c0-0x1002c6e0 inclusive
// range: 0x1002c6f0-0x1002c736 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1002c4b0(undefined8 *param_1,int param_2,undefined4 param_3,uint param_4,undefined8 *param_5,
            char param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_81;
  undefined8 local_80;
  uint local_78;
  undefined8 *local_74;
  uint local_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int iStack_54;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  int iStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint uStack_30;
  undefined4 local_2c;
  int iStack_28;
  undefined4 local_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  int local_1c;
  int local_18;
  int local_14;

  uVar8 = 0;
  if (param_4 < 0x80) {
    local_81 = 1;
    uVar4 = param_4;
    bVar5 = 0;
    bVar3 = 0;
  }
  else {
    bVar6 = (byte)param_4 & 0x3f | 0x80;
    if (param_4 < 0x800) {
      uVar4 = param_4 >> 6 | 0xc0;
      local_81 = 2;
      uVar8 = 0;
      bVar5 = bVar6;
      bVar3 = 0;
    }
    else {
      bVar3 = (byte)(param_4 >> 6) & 0x3f | 0x80;
      if (param_4 < 0x10000) {
        uVar4 = param_4 >> 0xc | 0xe0;
        local_81 = 3;
        bVar5 = bVar3;
        bVar3 = bVar6;
      }
      else {
        local_81 = 4;
        bVar5 = (byte)(param_4 >> 0xc) & 0x3f | 0x80;
        uVar8 = (uint)bVar6 << 0x18;
        uVar4 = param_4 >> 0x12 | 0xf0;
      }
    }
  }
  local_44 = param_4;
  uStack_30 = uVar4 & 0xff | (uint)bVar5 << 8 | (uint)bVar3 << 0x10 | uVar8;
  local_3c = param_3;
  uStack_38 = 0;
  local_34 = param_3;
  local_2c = CONCAT31(local_2c._1_3_,local_81);
  iStack_28 = 0;
  local_24 = param_3;
  uStack_20 = 1;
  local_74 = param_1;
  iStack_40 = param_2;
  if (param_6 != '\0') {
    FUN_10053450((int)&local_44);
  }
  local_78 = *(uint *)(param_5 + 1);
  local_58 = local_2c;
  iStack_54 = iStack_28;
  local_80 = *param_5;
  local_60 = CONCAT44(uStack_30,local_34);
  local_70 = local_44;
  iStack_6c = iStack_40;
  local_48 = *(undefined4 *)((int)param_5 + 0xc);
  local_68 = CONCAT44(uStack_38,local_3c);
  local_50._5_1_ = (char)((ushort)uStack_20 >> 8);
  if (local_50._5_1_ == '\0') {
    local_50 = CONCAT26(uStack_1e,CONCAT24(uStack_20,local_24));
    do {
      iVar7 = iStack_6c;
      FUN_10090ba0(&local_1c,(int)&local_70);
      uVar1 = local_50;
      uVar8 = local_78;
      if (local_1c == 1) {
        iVar9 = local_18 - iStack_54;
        iVar7 = iVar7 + iStack_54;
        iStack_54 = local_14;
        if (iVar9 == 0) goto LAB_1002c70e;
LAB_1002c650:
        iVar9 = iVar9 - (uint)(*(char *)(iVar7 + -1 + iVar9) == '\r');
      }
      else {
        if (local_50._5_1_ != '\0') break;
        local_50._0_6_ = CONCAT15(1,(undefined5)local_50);
        uVar2 = local_50;
        local_50._4_1_ = SUB81(uVar1,4);
        local_50._0_4_ = (int)uVar1;
        if ((local_50._4_1_ != '\x01') && ((int)local_50 == iStack_54)) break;
        iVar9 = (int)local_50 - iStack_54;
        iVar7 = iStack_54 + iStack_6c;
        local_50 = uVar2;
        if (iVar9 != 0) goto LAB_1002c650;
LAB_1002c70e:
        iVar9 = 0;
      }
      if (local_78 == (uint)local_80) {
        FUN_101359e0((uint *)&local_80,local_78,1,&DAT_00000004,8);
      }
      *(int *)(local_80._4_4_ + uVar8 * 8) = iVar7;
      *(int *)(local_80._4_4_ + 4 + uVar8 * 8) = iVar9;
      local_78 = uVar8 + 1;
    } while (local_50._5_1_ == '\0');
  }
  *(uint *)(param_5 + 1) = local_78;
  *param_5 = local_80;
  *local_74 = local_80;
  local_74[1] = param_5[1];
  return;
}
