// rea decompile_all
// name: FUN_00553504
// address: 0x553504
// body: available
// range: 0x553504-0x55367b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00553504(int param_1,int *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;

  iVar3 = *(int *)(param_1 + 0x1c4);
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar5 = *(int *)(param_1 + 0x144);
  iVar6 = *(int *)(iVar3 + 0x14);
  iVar7 = *(int *)(iVar3 + 0x18);
  iVar3 = *(int *)(iVar3 + 0x1c);
  pbVar8 = *(byte **)(*param_2 + param_3 * 4);
  pbVar9 = *(byte **)(param_2[1] + param_3 * 4);
  pbVar10 = *(byte **)(param_2[2] + param_3 * 4);
  puVar15 = (undefined1 *)*param_4;
  for (uVar13 = *(uint *)(param_1 + 0x70) >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
    iVar11 = *(int *)(iVar4 + (uint)bVar2 * 4);
    iVar16 = *(int *)(iVar3 + (uint)bVar1 * 4) + *(int *)(iVar7 + (uint)bVar2 * 4) >> 0x10;
    iVar12 = *(int *)(iVar6 + (uint)bVar1 * 4);
    uVar14 = (uint)*pbVar8;
    puVar15[2] = *(undefined1 *)(iVar5 + uVar14 + iVar11);
    puVar15[1] = *(undefined1 *)(iVar5 + uVar14 + iVar16);
    *puVar15 = *(undefined1 *)(iVar5 + uVar14 + iVar12);
    uVar14 = (uint)pbVar8[1];
    pbVar8 = pbVar8 + 2;
    puVar15[5] = *(undefined1 *)(iVar5 + uVar14 + iVar11);
    puVar15[4] = *(undefined1 *)(iVar5 + uVar14 + iVar16);
    puVar15[3] = *(undefined1 *)(iVar5 + uVar14 + iVar12);
    puVar15 = puVar15 + 6;
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    iVar3 = *(int *)(iVar3 + (uint)*pbVar9 * 4);
    iVar7 = *(int *)(iVar7 + (uint)*pbVar10 * 4);
    iVar6 = *(int *)(iVar6 + (uint)*pbVar9 * 4);
    uVar13 = (uint)*pbVar8;
    puVar15[2] = *(undefined1 *)(iVar5 + uVar13 + *(int *)(iVar4 + (uint)*pbVar10 * 4));
    puVar15[1] = *(undefined1 *)(iVar5 + uVar13 + (iVar3 + iVar7 >> 0x10));
    *puVar15 = *(undefined1 *)(iVar5 + uVar13 + iVar6);
  }
  return;
}
