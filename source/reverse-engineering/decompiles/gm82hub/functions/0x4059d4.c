// rea decompile_all
// name: FUN_004059d4
// address: 0x4059d4
// body: available
// range: 0x4059d4-0x405a29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004059d4(uint param_1,uint param_2,undefined1 *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;

  param_2 = param_2 & 0xff;
  uVar5 = param_1 >> 8 & 0xff;
  for (uVar3 = uVar5; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = 0;
    param_3 = param_3 + 1;
  }
  if (uVar5 * 8 <= param_2) {
    param_2 = uVar5 * 8 - 1;
  }
  if ((param_1 & 0xff) <= param_2) {
    bVar1 = -1 << ((byte)param_1 & 7);
    uVar3 = (param_1 & 0xff) >> 3;
    bVar2 = 0xff >> (~(byte)param_2 & 7);
    pbVar6 = param_3 + (uVar3 - uVar5);
    iVar4 = (param_2 >> 3) - uVar3;
    if (iVar4 == 0) {
      *pbVar6 = bVar1 & bVar2;
    }
    else {
      *pbVar6 = bVar1;
      while( true ) {
        pbVar6 = pbVar6 + 1;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) break;
        *pbVar6 = 0xff;
      }
      *pbVar6 = bVar2;
    }
  }
  return;
}
