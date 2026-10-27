// rea decompile_all
// name: FUN_0060b274
// address: 0x60b274
// body: available
// range: 0x60b274-0x60b2f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060b274(int param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_8;

  local_8 = 0;
  iVar4 = *(int *)(param_1 + 0x88);
  if (-1 < iVar4 + -1) {
    iVar2 = 0;
    do {
      if (*(double *)(*(int *)(param_1 + 0x8c) + 0x28 + iVar2 * 0x60) != param_4) {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x8c) + iVar2 * 0x60);
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x8c) + local_8 * 0x60);
        for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
        local_8 = local_8 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)(param_1 + 0x88) = local_8;
  return;
}
