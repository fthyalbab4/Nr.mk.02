// rea decompile_all
// name: FUN_1002da90
// address: 0x1002da90
// body: available
// range: 0x1002da90-0x1002dd4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall
FUN_1002da90(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_64 [3];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20;

  local_58 = param_1 ^ 0x70736575;
  uStack_54 = param_2 ^ 0x736f6d65;
  uStack_50 = param_1 ^ 0x6e657261;
  uStack_4c = param_2 ^ 0x6c796765;
  local_64[0] = param_5;
  local_48 = param_3 ^ 0x6e646f6d;
  uStack_44 = param_4 ^ 0x646f7261;
  uStack_40 = param_3 ^ 0x79746573;
  uStack_3c = param_4 ^ 0x74656462;
  local_2c = param_4;
  local_30 = param_3;
  local_28 = 0;
  local_20 = 0;
  local_38 = param_1;
  local_34 = param_2;
  FUN_100a8280(&local_58,local_64,4);
  local_64[0] = param_6;
  FUN_100a8280(&local_58,local_64,4);
  local_28._4_4_ = (int)local_20 << 0x18 | local_28._4_4_;
  uStack_3c = uStack_3c ^ local_28._4_4_;
  uStack_40 = uStack_40 ^ (uint)local_28;
  uVar1 = uStack_54 + uStack_44 + (uint)CARRY4(local_58,local_48);
  uVar8 = uStack_50 + uStack_40;
  uVar2 = uStack_4c + uStack_3c + (uint)CARRY4(uStack_50,uStack_40);
  uVar3 = (local_48 << 0xd | uStack_44 >> 0x13) ^ local_58 + local_48;
  uVar7 = (uStack_40 >> 0x10 | uStack_3c << 0x10) ^ uVar2;
  uVar4 = (uStack_40 << 0x10 | uStack_3c >> 0x10) ^ uVar8;
  uVar10 = (uStack_44 << 0xd | local_48 >> 0x13) ^ uVar1;
  uVar2 = uVar2 + uVar10 + (uint)CARRY4(uVar8,uVar3);
  uVar6 = local_58 + local_48 + uVar7 + (uint)CARRY4(uVar1,uVar4);
  uVar11 = (uVar3 << 0x11 | uVar10 >> 0xf) ^ uVar8 + uVar3;
  uVar5 = (uVar4 >> 0xb | uVar7 << 0x15) ^ uVar6;
  uVar9 = (uVar4 << 0x15 | uVar7 >> 0xb) ^ uVar1 + uVar4;
  local_28._0_4_ = uVar1 + uVar4 ^ (uint)local_28;
  uVar1 = (uVar3 >> 0xf | uVar10 << 0x11) ^ uVar2;
  uVar2 = uVar2 ^ 0xff;
  uVar4 = (uint)local_28 + uVar11;
  uVar6 = (uVar6 ^ local_28._4_4_) + uVar1 + (uint)CARRY4((uint)local_28,uVar11);
  uVar7 = uVar2 + uVar9;
  uVar2 = uVar8 + uVar3 + uVar5 + (uint)CARRY4(uVar2,uVar9);
  uVar12 = (uVar11 >> 0x13 | uVar1 << 0xd) ^ uVar6;
  uVar8 = (uVar11 << 0xd | uVar1 >> 0x13) ^ uVar4;
  uVar10 = (uVar9 >> 0x10 | uVar5 << 0x10) ^ uVar2;
  uVar9 = (uVar9 << 0x10 | uVar5 >> 0x10) ^ uVar7;
  uVar3 = uVar2 + uVar12 + (uint)CARRY4(uVar7,uVar8);
  uVar1 = uVar6 + uVar9;
  uVar2 = uVar4 + uVar10 + (uint)CARRY4(uVar6,uVar9);
  uVar4 = (uVar8 << 0x11 | uVar12 >> 0xf) ^ uVar7 + uVar8;
  uVar5 = (uVar8 >> 0xf | uVar12 << 0x11) ^ uVar3;
  uVar11 = (uVar9 << 0x15 | uVar10 >> 0xb) ^ uVar1;
  uVar10 = (uVar9 >> 0xb | uVar10 << 0x15) ^ uVar2;
  uVar9 = uVar2 + uVar5 + (uint)CARRY4(uVar1,uVar4);
  uVar2 = uVar3 + uVar11;
  uVar6 = uVar7 + uVar8 + uVar10 + (uint)CARRY4(uVar3,uVar11);
  uVar3 = (uVar4 << 0xd | uVar5 >> 0x13) ^ uVar1 + uVar4;
  uVar5 = (uVar4 >> 0x13 | uVar5 << 0xd) ^ uVar9;
  uVar8 = (uVar11 << 0x10 | uVar10 >> 0x10) ^ uVar2;
  uVar12 = (uVar11 >> 0x10 | uVar10 << 0x10) ^ uVar6;
  uVar10 = uVar6 + uVar5 + (uint)CARRY4(uVar2,uVar3);
  uVar11 = uVar9 + uVar8;
  uVar6 = uVar1 + uVar4 + uVar12 + (uint)CARRY4(uVar9,uVar8);
  uVar7 = (uVar3 << 0x11 | uVar5 >> 0xf) ^ uVar2 + uVar3;
  uVar4 = (uVar3 >> 0xf | uVar5 << 0x11) ^ uVar10;
  uVar5 = (uVar8 << 0x15 | uVar12 >> 0xb) ^ uVar11;
  uVar8 = (uVar8 >> 0xb | uVar12 << 0x15) ^ uVar6;
  uVar1 = uVar10 + uVar5;
  uVar2 = uVar2 + uVar3 + uVar8 + (uint)CARRY4(uVar10,uVar5);
  uVar9 = (uVar7 << 0xd | uVar4 >> 0x13) ^ uVar11 + uVar7;
  uVar3 = (uVar7 >> 0x13 | uVar4 << 0xd) ^ uVar6 + uVar4 + (uint)CARRY4(uVar11,uVar7);
  uVar6 = (uVar5 >> 0x10 | uVar8 << 0x10) ^ uVar2;
  uVar4 = (uVar5 << 0x10 | uVar8 >> 0x10) ^ uVar1;
  uVar2 = uVar2 + uVar3 + (uint)CARRY4(uVar1,uVar9);
  return CONCAT44((uVar3 << 0x11 | uVar9 >> 0xf) ^ uVar1 + uVar9 ^ (uVar4 >> 0xb | uVar6 << 0x15) ^
                  uVar2,(uVar9 << 0x11 | uVar3 >> 0xf) ^ uVar2 ^ (uVar4 << 0x15 | uVar6 >> 0xb) ^
                        uVar1 + uVar9);
}
