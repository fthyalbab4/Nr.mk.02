// rea decompile_all
// name: FUN_0060b440
// address: 0x60b440
// body: available
// range: 0x60b440-0x60b53d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060b440(int param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5,
                 double param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_c;
  int local_8;

  local_8 = 0;
  local_c = *(int *)(param_1 + 0x88);
  if (-1 < local_c + -1) {
    iVar2 = 0;
    do {
      if ((((param_5 < *(double *)(*(int *)(param_1 + 0x8c) + iVar2 * 0x60)) ||
           ((double)*(int *)(*(int *)(param_1 + 0x8c) + 0x1c + iVar2 * 0x60) *
            *(double *)(*(int *)(param_1 + 0x8c) + 0x38 + iVar2 * 0x60) +
            *(double *)(*(int *)(param_1 + 0x8c) + iVar2 * 0x60) <= param_5)) ||
          (param_4 < *(double *)(*(int *)(param_1 + 0x8c) + 8 + iVar2 * 0x60))) ||
         (((double)*(int *)(*(int *)(param_1 + 0x8c) + 0x20 + iVar2 * 0x60) *
           *(double *)(*(int *)(param_1 + 0x8c) + 0x40 + iVar2 * 0x60) +
           *(double *)(*(int *)(param_1 + 0x8c) + 8 + iVar2 * 0x60) <= param_4 ||
          (*(double *)(*(int *)(param_1 + 0x8c) + 0x28 + iVar2 * 0x60) != param_6)))) {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x8c) + iVar2 * 0x60);
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x8c) + local_8 * 0x60);
        for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        local_8 = local_8 + 1;
      }
      iVar2 = iVar2 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  *(int *)(param_1 + 0x88) = local_8;
  return;
}
