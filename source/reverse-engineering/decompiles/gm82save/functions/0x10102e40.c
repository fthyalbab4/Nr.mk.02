// rea decompile_all
// name: FUN_10102e40
// address: 0x10102e40
// body: available
// range: 0x10102e40-0x10102ec9 inclusive
// range: 0x10102ed0-0x10102f87 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10102e40(uint *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_64;
  int local_60;
  int local_58 [18];

  FUN_100969a0(local_58,param_2,param_3,&DAT_10155e98,1);
  do {
    FUN_10092330(&local_64,local_58);
  } while (local_64 == 0);
  iVar4 = param_3;
  if (local_64 == 1) {
    iVar4 = local_60;
  }
  uVar7 = 0;
  if ((uint)(param_3 - iVar4) < 0x11) {
    uVar8 = 0;
    if (param_3 != iVar4) {
      uVar8 = 0;
      pbVar5 = (byte *)(iVar4 + param_2);
      uVar7 = 0;
      do {
        bVar2 = *pbVar5;
        uVar9 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          pbVar1 = pbVar5 + 1;
          if (bVar2 < 0xe0) {
            pbVar5 = pbVar5 + 2;
            uVar9 = (uVar9 & 0x1f) << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar6 = pbVar5[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar2 < 0xf0) {
              uVar9 = uVar6 | (uVar9 & 0x1f) << 0xc;
              pbVar5 = pbVar5 + 3;
            }
            else {
              pbVar1 = pbVar5 + 3;
              pbVar5 = pbVar5 + 4;
              uVar9 = *pbVar1 & 0x3f | uVar6 << 6 | (uVar9 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar5 = pbVar5 + 1;
        }
        uVar6 = uVar9 - 0x30;
        if (0x39 < uVar9) {
          uVar6 = (uVar9 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar6) {
          FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_10155e9c);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uVar7 = uVar7 << 4 | uVar8 >> 0x1c;
        uVar8 = uVar8 << 4 | uVar6;
      } while (pbVar5 != (byte *)(param_3 + param_2));
    }
    param_1[3] = uVar7;
    uVar7 = 1;
    param_1[2] = uVar8;
  }
  *param_1 = uVar7;
  param_1[1] = 0;
  return;
}
