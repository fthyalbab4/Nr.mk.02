// rea decompile_all
// name: FUN_0042bbc0
// address: 0x42bbc0
// body: available
// range: 0x42bbc0-0x42bc36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042bbc0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;

  bVar2 = false;
  if (param_2 != 0) {
    iVar1 = **(int **)(param_1 + 0xb + (uint)*(byte *)(param_1 + 1));
    pbVar7 = (byte *)(iVar1 + 0xf + (uint)*(byte *)(iVar1 + 1));
    iVar1 = *(int *)(iVar1 + 7 + (uint)*(byte *)(iVar1 + 1));
    iVar4 = 0;
    do {
      uVar5 = (uint)*pbVar7;
      if (uVar5 == *(uint *)(param_2 + -4)) {
        while (!bVar2) {
          bVar6 = *(byte *)((uVar5 - 1) + param_2);
          if ((bVar6 & 0x80) != 0) {
            bVar2 = true;
            break;
          }
          bVar6 = bVar6 ^ pbVar7[uVar5];
          if ((bVar6 & 0x80) != 0) break;
          if ((bVar6 & 0xdf) != 0) goto LAB_0042bc23;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            return iVar4;
          }
        }
        cVar3 = FUN_0042bb4c(pbVar7);
        if (cVar3 != '\0') {
          return iVar4;
        }
LAB_0042bc23:
        uVar5 = (uint)*pbVar7;
      }
      iVar4 = iVar4 + 1;
      pbVar7 = pbVar7 + uVar5 + 1;
    } while (iVar4 <= iVar1);
  }
  return -1;
}
