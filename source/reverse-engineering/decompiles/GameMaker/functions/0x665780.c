// rea decompile_all
// name: FUN_00665780
// address: 0x665780
// body: available
// range: 0x665780-0x6657dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00665780(int *param_1)

{
  char cVar1;
  int *piVar2;

  FUN_00678f54(param_1);
  cVar1 = FUN_00672334(param_1[0x6d]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x104))();
  }
  piVar2 = (int *)FUN_00679e90(param_1);
  cVar1 = (**(code **)(*piVar2 + 0x120))();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_00679e90(param_1);
    cVar1 = (**(code **)(*piVar2 + 0x120))();
    if (cVar1 == '\0') {
      return;
    }
    if ((char)param_1[0x75] != '\0') {
      return;
    }
  }
  (**(code **)(*param_1 + 0x108))();
  return;
}
