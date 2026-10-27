// rea decompile_all
// name: FUN_005c4b48
// address: 0x5c4b48
// body: available
// range: 0x5c4b48-0x5c4c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4b48(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;

  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar5 = *param_2;
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x1be) + 0x18) + iVar5 * 4);
  for (; iVar3 = param_2[2], iVar5 <= param_2[1]; iVar5 = iVar5 + 1) {
    for (; iVar3 <= param_2[3]; iVar3 = iVar3 + 1) {
      puVar7 = (ushort *)(*piVar1 + iVar3 * 0x40 + param_2[4] * 2);
      for (iVar6 = param_2[4]; iVar6 <= param_2[5]; iVar6 = iVar6 + 1) {
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        uVar4 = (uint)uVar2;
        if (uVar4 != 0) {
          local_28 = local_28 + uVar4;
          local_24 = local_24 + (iVar5 * 8 + 4) * uVar4;
          local_20 = local_20 + (iVar3 * 4 + 2) * uVar4;
          local_1c = local_1c + (iVar6 * 8 + 4) * uVar4;
        }
      }
    }
    piVar1 = piVar1 + 1;
  }
  iVar5 = local_28 >> 1;
  piVar1 = *(int **)(param_1 + 0x84);
  *(char *)(*piVar1 + param_3) = (char)((iVar5 + local_24) / local_28);
  *(char *)(piVar1[1] + param_3) = (char)((iVar5 + local_20) / local_28);
  *(char *)(piVar1[2] + param_3) = (char)((iVar5 + local_1c) / local_28);
  return;
}
