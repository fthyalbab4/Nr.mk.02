// rea decompile_all
// name: FUN_0054aa48
// address: 0x54aa48
// body: available
// range: 0x54aa48-0x54aab0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054aa48(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  FUN_0043b5c8(*(undefined4 *)(param_1 + 0x10),&LAB_0054a7cc);
  iVar4 = *(int *)(param_1 + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_0043b048(*(undefined4 *)(param_1 + 0x10),iVar3);
      if (*piVar1 == 0) {
        iVar4 = *(int *)(param_1 + 8) + -1;
        if (iVar3 <= iVar4) {
          iVar5 = (iVar4 - iVar3) + 1;
          iVar4 = iVar3;
          do {
            puVar2 = (undefined4 *)FUN_0043b048(*(undefined4 *)(param_1 + 0x10),iVar4);
            *puVar2 = 0xffffffff;
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(int *)(param_1 + 8) = iVar3;
        FUN_0043b328(*(undefined4 *)(param_1 + 0x10),iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return *(undefined4 *)(param_1 + 8);
}
