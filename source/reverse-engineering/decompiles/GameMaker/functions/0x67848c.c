// rea decompile_all
// name: FUN_0067848c
// address: 0x67848c
// body: available
// range: 0x67848c-0x6784e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067848c(int *param_1)

{
  char cVar1;
  int *piVar2;

  if ((param_1[0x6d] != 0) && (*(int *)(param_1[0x6d] + 0x3c) != 0)) {
    piVar2 = (int *)FUN_00679e90(param_1);
    cVar1 = (**(code **)(*piVar2 + 0x120))();
    if (cVar1 == '\0') {
      FUN_006799a0(param_1);
    }
    (**(code **)(*param_1 + 0x94))();
    piVar2 = (int *)FUN_00679e90(param_1);
    cVar1 = (**(code **)(*piVar2 + 0x120))();
    if (cVar1 == '\0') {
      (**(code **)(**(int **)(param_1[0x6d] + 0x3c) + 0x18))
                (*(int **)(param_1[0x6d] + 0x3c),param_1);
    }
  }
  return;
}
