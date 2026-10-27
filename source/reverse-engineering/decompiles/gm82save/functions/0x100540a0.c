// rea decompile_all
// name: FUN_100540a0
// address: 0x100540a0
// body: available
// range: 0x100540a0-0x1005416a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_100540a0(byte *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  uint in_EAX;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint uVar6;
  undefined3 uVar7;
  uint uVar8;
  bool bVar9;

  if (param_2 == 1) {
    bVar1 = *param_1;
    in_EAX = (uint)bVar1;
    uVar6 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
    if (in_EAX != 0x2b) {
      uVar3 = 1;
      if (in_EAX == 0x2d) goto LAB_10054129;
      goto LAB_100540ca;
    }
  }
  else if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    bVar1 = *param_1;
LAB_100540ca:
    uVar5 = param_2 - (uint)(bVar1 == 0x2b);
    pbVar4 = param_1 + (bVar1 == 0x2b);
    if (uVar5 < 3) {
      if (uVar5 == 0) {
        uVar3 = 0;
        uVar6 = 0;
      }
      else {
        uVar3 = 1;
        uVar8 = *pbVar4 - 0x30;
        uVar6 = 1;
        if (uVar8 < 10) {
          if (uVar5 == 1) {
            uVar3 = 0;
            uVar6 = uVar8;
          }
          else {
            uVar5 = pbVar4[1] - 0x30;
            uVar3 = CONCAT31((int3)(uVar5 >> 8),9 < uVar5);
            uVar6 = 1;
            if (9 >= uVar5) {
              uVar6 = (uint)(byte)((char)uVar5 + (char)uVar8 * '\n');
            }
          }
        }
      }
      goto LAB_10054129;
    }
    in_EAX = 0;
    do {
      bVar9 = uVar5 == 0;
      uVar5 = uVar5 - 1;
      if (bVar9) {
        uVar3 = 0;
        uVar6 = in_EAX;
        goto LAB_10054129;
      }
      uVar2 = (ushort)(byte)in_EAX * (CONCAT11(10,(byte)in_EAX) >> 8);
      in_EAX = (uint)uVar2;
      if ((char)(uVar2 >> 8) != '\0') {
        in_EAX = (uint)(byte)(((byte)(*pbVar4 - 0x30) < 10) + 1);
        uVar6 = in_EAX;
        goto LAB_10054127;
      }
      uVar6 = *pbVar4 - 0x30;
      uVar7 = (undefined3)(uVar6 >> 8);
      if (9 < uVar6) {
        uVar6 = CONCAT31(uVar7,1);
        goto LAB_10054127;
      }
      pbVar4 = pbVar4 + 1;
      in_EAX = (uint)(byte)((byte)uVar2 + (byte)uVar6);
    } while (!CARRY1((byte)uVar2,(byte)uVar6));
    uVar6 = CONCAT31(uVar7,2);
  }
LAB_10054127:
  uVar3 = CONCAT31((int3)(in_EAX >> 8),1);
LAB_10054129:
  return CONCAT44(uVar6,uVar3);
}
