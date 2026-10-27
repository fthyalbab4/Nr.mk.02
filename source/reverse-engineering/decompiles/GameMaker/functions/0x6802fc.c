// rea decompile_all
// name: FUN_006802fc
// address: 0x6802fc
// body: available
// range: 0x6802fc-0x680363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006802fc(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;

  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x284) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x284);
      *(undefined4 *)(param_1 + 0x284) = 0;
      FUN_00405a7c(uVar2);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x284) == 0) {
      uVar2 = FUN_0045f540(&PTR_LAB_00457450,1);
      *(undefined4 *)(param_1 + 0x284) = uVar2;
    }
    (**(code **)(**(int **)(param_1 + 0x284) + 8))(*(int **)(param_1 + 0x284),param_2);
    piVar1 = *(int **)(*(int *)(param_1 + 0x284) + 0xc);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x40))(piVar1,1);
    }
  }
  return;
}
