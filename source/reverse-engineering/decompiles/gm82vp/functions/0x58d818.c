// rea decompile_all
// name: FUN_0058d818
// address: 0x58d818
// body: available
// range: 0x58d818-0x58d975 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058d818(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  int local_18;

  bVar9 = 0;
  iVar1 = DAT_00686b30 + param_1 * 0x58;
  local_18 = *(int *)(iVar1 + 8);
  if (-1 < local_18 + -1) {
    iVar4 = 0;
    do {
      iVar5 = DAT_00686b28 + *(int *)(*(int *)(iVar1 + 4) + 4 + iVar4 * 0x68) * 0x120;
      piVar2 = (int *)(*(int *)(iVar1 + 4) + 8 + iVar4 * 0x68);
      *piVar2 = *piVar2 + 1;
      if (*(int *)(*(int *)(iVar1 + 4) + 0xc + iVar4 * 0x68) <=
          *(int *)(*(int *)(iVar1 + 4) + 8 + iVar4 * 0x68)) {
        *(undefined1 *)(*(int *)(iVar1 + 4) + iVar4 * 0x68) = 0;
        iVar6 = *(int *)(iVar5 + 0x4c);
        if ((iVar6 < 0) && (iVar3 = FUN_004047b8(-iVar6), iVar3 == 0)) {
          iVar6 = 1;
        }
        if (0 < iVar6) {
          FUN_0058d360(param_1,*(undefined4 *)(iVar5 + 0x48),iVar6,
                       *(undefined4 *)(*(int *)(iVar1 + 4) + 0x18 + iVar4 * 0x68),
                       *(undefined4 *)(*(int *)(iVar1 + 4) + 0x1c + iVar4 * 0x68),
                       *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10 + iVar4 * 0x68),
                       *(undefined4 *)(*(int *)(iVar1 + 4) + 0x14 + iVar4 * 0x68));
        }
      }
      if (*(char *)(*(int *)(iVar1 + 4) + iVar4 * 0x68) != '\0') {
        iVar6 = *(int *)(iVar5 + 0x54);
        if ((iVar6 < 0) && (iVar3 = FUN_004047b8(-iVar6), iVar3 == 0)) {
          iVar6 = 1;
        }
        if (0 < iVar6) {
          FUN_0058d360(param_1,*(undefined4 *)(iVar5 + 0x50),iVar6,
                       *(undefined4 *)(*(int *)(iVar1 + 4) + 0x18 + iVar4 * 0x68),
                       *(undefined4 *)(*(int *)(iVar1 + 4) + 0x1c + iVar4 * 0x68),
                       *(undefined4 *)(*(int *)(iVar1 + 4) + 0x10 + iVar4 * 0x68),
                       *(undefined4 *)(*(int *)(iVar1 + 4) + 0x14 + iVar4 * 0x68));
        }
      }
      iVar4 = iVar4 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar4 = 0;
  local_18 = *(int *)(iVar1 + 8);
  if (-1 < local_18 + -1) {
    iVar5 = 0;
    do {
      if (*(char *)(*(int *)(iVar1 + 4) + iVar5 * 0x68) != '\0') {
        if (iVar4 != iVar5) {
          puVar7 = (undefined4 *)(*(int *)(iVar1 + 4) + iVar5 * 0x68);
          puVar8 = (undefined4 *)(*(int *)(iVar1 + 4) + iVar4 * 0x68);
          for (iVar6 = 0x1a; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
            puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
          }
        }
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  *(int *)(iVar1 + 8) = iVar4;
  return;
}
