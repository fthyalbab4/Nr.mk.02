// rea decompile_all
// name: FUN_00644964
// address: 0x644964
// body: available
// range: 0x644964-0x6449e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644964(int param_1)

{
  int *piVar1;
  undefined4 uVar2;

  if (*(char *)(*(int *)(param_1 + 0x6ac) + 0x59) != '\0') {
    uVar2 = FUN_005b57c0(*(undefined4 *)(*(int *)(param_1 + 0x704) + 4),
                         *(undefined4 *)(*(int *)(param_1 + 0x704) + 8));
    FUN_00703978(*(undefined4 *)(param_1 + 0x704),uVar2,0,1,0);
    piVar1 = *(int **)(*(int *)(param_1 + 0x6b4) + 0x1b0);
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
    if (*(int *)(param_1 + 0x76c) != 0) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x770) + 0x1b0);
      (**(code **)(*piVar1 + 8))(piVar1,uVar2);
    }
    FUN_00405a7c(uVar2);
    FUN_006448b4(param_1);
    FUN_004eed28(*(undefined4 *)(param_1 + 0x6b4));
  }
  return;
}
