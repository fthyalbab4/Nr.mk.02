// rea decompile_all
// name: FUN_005351d0
// address: 0x5351d0
// body: available
// range: 0x5351d0-0x53525c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005351d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar4;

  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar2 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    iVar2 = *(int *)(param_1 + 0x1c) + -1;
    if (0 < iVar2) {
      iVar3 = 1;
      do {
        fVar4 = in_ST5;
        FUN_00404868();
        *(double *)(param_1 + 0x20) = (double)(in_ST0 + (float10)*(double *)(param_1 + 0x20));
        iVar1 = *(int *)(param_1 + 0x18);
        *(undefined4 *)(iVar1 + 0x18 + iVar3 * 0x20) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(iVar1 + 0x1c + iVar3 * 0x20) = *(undefined4 *)(param_1 + 0x24);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
        in_ST0 = in_ST1;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        in_ST3 = in_ST4;
        in_ST4 = in_ST5;
        in_ST5 = fVar4;
      } while (iVar2 != 0);
    }
  }
  return;
}
