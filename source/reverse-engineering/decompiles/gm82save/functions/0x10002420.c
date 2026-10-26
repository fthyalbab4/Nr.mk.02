// rea decompile_all
// name: FUN_10002420
// address: 0x10002420
// body: available
// range: 0x10002420-0x1000246e inclusive
// range: 0x10002470-0x10002521 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10002420(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;

  if (param_2 != 0) {
    iVar5 = param_2 + param_1;
    do {
      uVar4 = (uint)*(char *)(iVar5 + -1);
      if ((int)uVar4 < 0) {
        bVar6 = *(byte *)(iVar5 + -2);
        if ((char)bVar6 < -0x40) {
          bVar2 = *(byte *)(iVar5 + -3);
          if ((char)bVar2 < -0x40) {
            pbVar1 = (byte *)(iVar5 + -4);
            iVar5 = iVar5 + -4;
            uVar3 = bVar2 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            iVar5 = iVar5 + -3;
            uVar3 = bVar2 & 0xf;
          }
          uVar3 = bVar6 & 0x3f | uVar3 << 6;
        }
        else {
          iVar5 = iVar5 + -2;
          uVar3 = bVar6 & 0x1f;
        }
        uVar4 = uVar4 & 0x3f | uVar3 << 6;
      }
      else {
        iVar5 = iVar5 + -1;
      }
      if ((4 < uVar4 - 9) && (uVar4 != 0x20)) {
        if (uVar4 < 0x85) {
          return;
        }
        uVar3 = uVar4 >> 8;
        if (uVar3 < 0x20) {
          if (uVar3 == 0) {
            bVar6 = (&DAT_10154dd4)[uVar4 & 0xff];
          }
          else {
            if (uVar3 != 0x16) {
              return;
            }
            bVar6 = uVar4 == 0x1680;
          }
        }
        else if (uVar3 == 0x20) {
          bVar6 = (byte)(&DAT_10154dd4)[uVar4 & 0xff] >> 1;
        }
        else {
          if (uVar3 != 0x30) {
            return;
          }
          bVar6 = uVar4 == 0x3000;
        }
        if ((bVar6 & 1) == 0) {
          return;
        }
      }
    } while (param_1 != iVar5);
  }
  return;
}
