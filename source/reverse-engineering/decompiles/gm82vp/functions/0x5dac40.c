// rea decompile_all
// name: FUN_005dac40
// address: 0x5dac40
// body: available
// range: 0x5dac40-0x5dad4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dac40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_8;

  piVar10 = (int *)(param_4 + -4);
  local_8 = param_1;
  do {
    uVar6 = (uint)(local_8 + param_2) >> 1;
    iVar8 = param_2;
    iVar9 = local_8;
    do {
      for (; *(ushort *)(*(int *)(*piVar10 + 200) + iVar9 * 0xc) <
             *(ushort *)(*(int *)(*piVar10 + 200) + uVar6 * 0xc); iVar9 = iVar9 + 1) {
      }
      for (; iVar7 = uVar6 * 3,
          *(ushort *)(*(int *)(*piVar10 + 200) + uVar6 * 0xc) <
          *(ushort *)(*(int *)(*piVar10 + 200) + iVar8 * 0xc); iVar8 = iVar8 + -1) {
      }
      if (iVar9 <= iVar8) {
        iVar7 = *(int *)(*piVar10 + 200);
        uVar3 = *(undefined4 *)(iVar7 + iVar9 * 0xc);
        uVar4 = *(undefined4 *)(iVar7 + 4 + iVar9 * 0xc);
        uVar5 = *(undefined4 *)(iVar7 + 8 + iVar9 * 0xc);
        puVar1 = (undefined4 *)(*(int *)(*piVar10 + 200) + iVar9 * 0xc);
        puVar2 = (undefined4 *)(*(int *)(*piVar10 + 200) + iVar8 * 0xc);
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        iVar7 = *(int *)(*piVar10 + 200);
        *(undefined4 *)(iVar7 + iVar8 * 0xc) = uVar3;
        *(undefined4 *)(iVar7 + 4 + iVar8 * 0xc) = uVar4;
        *(undefined4 *)(iVar7 + 8 + iVar8 * 0xc) = uVar5;
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + -1;
      }
    } while (iVar9 <= iVar8);
    if (local_8 < iVar8) {
      FUN_005dac40(local_8,iVar8,iVar7,param_4);
    }
    local_8 = iVar9;
  } while (iVar9 < param_2);
  return;
}
