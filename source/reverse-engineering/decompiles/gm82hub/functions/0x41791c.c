// rea decompile_all
// name: FUN_0041791c
// address: 0x41791c
// body: available
// range: 0x41791c-0x41795d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041791c(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined3 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;

  iVar4 = 0;
  iVar6 = param_3;
  pcVar8 = param_2;
  if (param_3 != 0) {
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    param_3 = param_3 - iVar6;
    bVar9 = true;
LAB_00417935:
    do {
      if (param_3 != 0) {
        param_3 = param_3 + -1;
        pcVar1 = param_2 + 1;
        pcVar8 = param_1 + 1;
        bVar9 = *param_1 == *param_2;
        param_1 = pcVar8;
        param_2 = pcVar1;
        if (bVar9) goto LAB_00417935;
      }
      if (bVar9) {
        return;
      }
      bVar3 = param_1[-1];
      uVar5 = (undefined3)((uint)iVar4 >> 8);
      iVar4 = CONCAT31(uVar5,bVar3);
      if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
        iVar4 = CONCAT31(uVar5,bVar3 - 0x20);
      }
      bVar3 = param_2[-1];
      uVar7 = (uint)bVar3;
      if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
        uVar7 = (uint)(byte)(bVar3 - 0x20);
      }
      iVar4 = iVar4 - uVar7;
      bVar9 = true;
    } while (iVar4 == 0);
  }
  return;
}
