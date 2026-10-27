// rea decompile_all
// name: FUN_0058e2bc
// address: 0x58e2bc
// body: available
// range: 0x58e2bc-0x58e509 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058e2bc(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_24;
  int local_20;

  iVar1 = DAT_00686b30 + param_1 * 0x58;
  local_24 = *(int *)(iVar1 + 0x20);
  if (-1 < local_24 + -1) {
    iVar7 = 0;
    do {
      if ((((*(double *)(*(int *)(iVar1 + 0x1c) + 8 + iVar7 * 0x30) <
             *(double *)(*(int *)(iVar1 + 0x1c) + 0x10 + iVar7 * 0x30)) &&
           (*(double *)(*(int *)(iVar1 + 0x1c) + 0x18 + iVar7 * 0x30) <
            *(double *)(*(int *)(iVar1 + 0x1c) + 0x20 + iVar7 * 0x30))) &&
          (*(char *)(*(int *)(iVar1 + 0x1c) + iVar7 * 0x30) != '\0')) &&
         (local_20 = *(int *)(iVar1 + 8), -1 < local_20 + -1)) {
        iVar6 = 0;
        do {
          puVar2 = (undefined1 *)(*(int *)(iVar1 + 4) + iVar6 * 0x68);
          if (((*(double *)(*(int *)(iVar1 + 0x1c) + 8 + iVar7 * 0x30) <= *(double *)(puVar2 + 0x10)
               ) && (*(double *)(puVar2 + 0x10) <=
                     *(double *)(*(int *)(iVar1 + 0x1c) + 0x10 + iVar7 * 0x30))) &&
             ((*(double *)(*(int *)(iVar1 + 0x1c) + 0x18 + iVar7 * 0x30) <=
               *(double *)(puVar2 + 0x18) &&
              (*(double *)(puVar2 + 0x18) <=
               *(double *)(*(int *)(iVar1 + 0x1c) + 0x20 + iVar7 * 0x30))))) {
            dVar3 = ((*(double *)(puVar2 + 0x10) -
                     (*(double *)(*(int *)(iVar1 + 0x1c) + 0x10 + iVar7 * 0x30) +
                     *(double *)(*(int *)(iVar1 + 0x1c) + 8 + iVar7 * 0x30)) / 2.0) * 2.0) /
                    (*(double *)(*(int *)(iVar1 + 0x1c) + 0x10 + iVar7 * 0x30) -
                    *(double *)(*(int *)(iVar1 + 0x1c) + 8 + iVar7 * 0x30));
            dVar4 = ((*(double *)(puVar2 + 0x18) -
                     (*(double *)(*(int *)(iVar1 + 0x1c) + 0x20 + iVar7 * 0x30) +
                     *(double *)(*(int *)(iVar1 + 0x1c) + 0x18 + iVar7 * 0x30)) / 2.0) * 2.0) /
                    (*(double *)(*(int *)(iVar1 + 0x1c) + 0x20 + iVar7 * 0x30) -
                    *(double *)(*(int *)(iVar1 + 0x1c) + 0x18 + iVar7 * 0x30));
            iVar5 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x28 + iVar7 * 0x30);
            if (iVar5 == 0) {
              *puVar2 = 0;
            }
            else if (iVar5 == 1) {
              *puVar2 = dVar3 * dVar3 + dVar4 * dVar4 <= 1.0;
            }
            else if (iVar5 == 2) {
              *puVar2 = ABS(dVar3) + ABS(dVar4) <= 1.0;
            }
          }
          iVar6 = iVar6 + 1;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      iVar7 = iVar7 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  iVar7 = 0;
  local_24 = *(int *)(iVar1 + 8);
  if (-1 < local_24 + -1) {
    iVar6 = 0;
    do {
      if (*(char *)(*(int *)(iVar1 + 4) + iVar6 * 0x68) != '\0') {
        if (iVar7 != iVar6) {
          puVar8 = (undefined4 *)(*(int *)(iVar1 + 4) + iVar6 * 0x68);
          puVar9 = (undefined4 *)(*(int *)(iVar1 + 4) + iVar7 * 0x68);
          for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        }
        iVar7 = iVar7 + 1;
      }
      iVar6 = iVar6 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  *(int *)(iVar1 + 8) = iVar7;
  return;
}
