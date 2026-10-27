// rea decompile_all
// name: FUN_1010c780
// address: 0x1010c780
// body: available
// range: 0x1010c780-0x1010c796 inclusive
// range: 0x1010c7a0-0x1010c8c2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010c780(uint *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;

  uVar9 = (uint)*(ushort *)(param_2 + 2);
  pbVar7 = (byte *)*param_2;
  pbVar3 = (byte *)param_2[1];
  do {
    uVar4 = (ushort)uVar9;
    if (uVar4 == 0) {
      if (pbVar7 == pbVar3) {
        return;
      }
      bVar2 = *pbVar7;
      uVar4 = (ushort)bVar2;
      if (-1 < (char)bVar2) {
        pbVar7 = pbVar7 + 1;
        goto LAB_1010c870;
      }
      pbVar1 = pbVar7 + 1;
      uVar9 = bVar2 & 0x1f;
      if (bVar2 < 0xe0) {
        pbVar7 = pbVar7 + 2;
        uVar4 = (ushort)(uVar9 << 6) | (ushort)(*pbVar1 & 0x3f);
        goto LAB_1010c870;
      }
      uVar8 = pbVar7[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
      if (bVar2 < 0xf0) {
        pbVar7 = pbVar7 + 3;
        uVar8 = uVar8 | uVar9 << 0xc;
      }
      else {
        pbVar1 = pbVar7 + 3;
        pbVar7 = pbVar7 + 4;
        uVar8 = *pbVar1 & 0x3f | uVar8 << 6 | (bVar2 & 7) << 0x12;
      }
      if (uVar8 < 0x10000) {
        uVar4 = (ushort)uVar8;
        goto LAB_1010c870;
      }
      uVar9 = uVar8 & 0x3ff | 0xdc00;
      uVar4 = (ushort)(uVar8 + 0xff0000 >> 10) | 0xd800;
      uVar8 = param_1[2];
      if (uVar8 == *param_1) goto LAB_1010c87d;
    }
    else {
LAB_1010c870:
      uVar9 = 0;
      uVar8 = param_1[2];
      if (uVar8 == *param_1) {
LAB_1010c87d:
        uVar5 = (int)pbVar3 - (int)pbVar7;
        uVar6 = uVar5 + 3;
        if (0xfffffffc < uVar5) {
          uVar6 = 0xffffffff;
        }
        FUN_101359e0(param_1,uVar8,((uVar6 >> 2) - (uint)((short)uVar9 == 0)) + 2,(LPVOID)0x2,2);
      }
    }
    *(ushort *)(param_1[1] + uVar8 * 2) = uVar4;
    param_1[2] = uVar8 + 1;
  } while( true );
}
