// rea decompile_all
// name: FUN_00554448
// address: 0x554448
// body: available
// range: 0x554448-0x5544e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00554448(int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  char cVar11;
  int *local_24;
  undefined4 *local_20;
  int local_10;

  piVar3 = *(int **)(*(int *)(param_1 + 0x1cc) + 0x18);
  iVar4 = *(int *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x78);
  local_10 = 0;
  local_24 = param_3;
  local_20 = param_2;
  if (0 < param_4) {
    do {
      pbVar9 = (byte *)*local_20;
      pcVar6 = (char *)*local_24;
      for (iVar1 = iVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
        cVar11 = '\0';
        iVar10 = 0;
        piVar8 = piVar3;
        if (0 < iVar5) {
          do {
            iVar7 = *piVar8;
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            piVar8 = piVar8 + 1;
            iVar10 = iVar10 + 1;
            cVar11 = cVar11 + *(char *)(iVar7 + (uint)bVar2);
          } while (iVar10 < iVar5);
        }
        *pcVar6 = cVar11;
        pcVar6 = pcVar6 + 1;
      }
      local_10 = local_10 + 1;
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    } while (local_10 < param_4);
  }
  return;
}
