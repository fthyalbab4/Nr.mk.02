// rea decompile_all
// name: FUN_10002090
// address: 0x10002090
// body: available
// range: 0x10002090-0x100020e7 inclusive
// range: 0x100020f0-0x1000220e inclusive
// range: 0x10002210-0x100022ca inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_10002090(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;

  pbVar6 = param_1 + param_2;
  if (param_2 == 0) {
    pbVar5 = (byte *)0x0;
    pbVar7 = (byte *)0x0;
    pbVar8 = param_1;
joined_r0x100021ca:
    do {
      do {
        pbVar2 = pbVar6;
        if (pbVar8 == pbVar2) goto LAB_100022bc;
        uVar4 = (uint)(char)pbVar2[-1];
        if ((int)uVar4 < 0) {
          bVar9 = pbVar2[-2];
          if ((char)bVar9 < -0x40) {
            bVar1 = pbVar2[-3];
            if ((char)bVar1 < -0x40) {
              uVar3 = bVar1 & 0x3f | (pbVar2[-4] & 7) << 6;
              pbVar6 = pbVar2 + -4;
            }
            else {
              pbVar6 = pbVar2 + -3;
              uVar3 = bVar1 & 0xf;
            }
            uVar3 = bVar9 & 0x3f | uVar3 << 6;
          }
          else {
            pbVar6 = pbVar2 + -2;
            uVar3 = bVar9 & 0x1f;
          }
          uVar4 = uVar4 & 0x3f | uVar3 << 6;
        }
        else {
          pbVar6 = pbVar2 + -1;
        }
      } while ((uVar4 - 9 < 5) || (uVar4 == 0x20));
      if (uVar4 < 0x85) break;
      uVar3 = uVar4 >> 8;
      if (uVar3 < 0x20) {
        if (uVar3 == 0) {
          bVar9 = (&DAT_10154dd4)[uVar4 & 0xff];
        }
        else {
          if (uVar3 != 0x16) break;
          bVar9 = uVar4 == 0x1680;
        }
      }
      else if (uVar3 == 0x20) {
        bVar9 = (byte)(&DAT_10154dd4)[uVar4 & 0xff] >> 1;
      }
      else {
        if (uVar3 != 0x30) break;
        bVar9 = uVar4 == 0x3000;
      }
    } while ((bVar9 & 1) != 0);
    pbVar5 = pbVar2 + ((int)pbVar5 - (int)pbVar8);
  }
  else {
    pbVar7 = (byte *)0x0;
    pbVar5 = param_1;
    do {
      bVar9 = *pbVar5;
      uVar4 = (uint)bVar9;
      if ((char)bVar9 < '\0') {
        if (bVar9 < 0xe0) {
          pbVar8 = pbVar5 + 2;
          uVar4 = (uVar4 & 0x1f) << 6 | pbVar5[1] & 0x3f;
        }
        else {
          uVar3 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
          if (bVar9 < 0xf0) {
            pbVar8 = pbVar5 + 3;
            uVar4 = uVar3 | (uVar4 & 0x1f) << 0xc;
          }
          else {
            pbVar8 = pbVar5 + 4;
            uVar4 = pbVar5[3] & 0x3f | uVar3 << 6 | (uVar4 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar8 = pbVar5 + 1;
      }
      pbVar5 = pbVar7 + ((int)pbVar8 - (int)pbVar5);
      if ((4 < uVar4 - 9) && (uVar4 != 0x20)) {
        if (uVar4 < 0x85) goto joined_r0x100021ca;
        uVar3 = uVar4 >> 8;
        if (uVar3 < 0x20) {
          if (uVar3 == 0) {
            bVar9 = (&DAT_10154dd4)[uVar4 & 0xff];
          }
          else {
            if (uVar3 != 0x16) goto joined_r0x100021ca;
            bVar9 = uVar4 == 0x1680;
          }
        }
        else if (uVar3 == 0x20) {
          bVar9 = (byte)(&DAT_10154dd4)[uVar4 & 0xff] >> 1;
        }
        else {
          if (uVar3 != 0x30) goto joined_r0x100021ca;
          bVar9 = uVar4 == 0x3000;
        }
        if ((bVar9 & 1) == 0) goto joined_r0x100021ca;
      }
      pbVar7 = pbVar5;
      pbVar5 = pbVar8;
    } while (pbVar8 != pbVar6);
    pbVar7 = (byte *)0x0;
    pbVar5 = (byte *)0x0;
  }
LAB_100022bc:
  return CONCAT44((int)pbVar5 - (int)pbVar7,param_1 + (int)pbVar7);
}
