// rea decompile_all
// name: FUN_00667560
// address: 0x667560
// body: available
// range: 0x667560-0x6675bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00667560(int *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;

  FUN_004f0524(param_1,param_2,param_3,param_4,param_5);
  if ((char)param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x5c))();
    if (cVar1 != '\0') {
      if (*(char *)((int)param_1 + 0x1f1) == '\0') {
        FUN_006678fc(param_1,2);
        (**(code **)(*param_1 + 0x90))();
      }
      *(undefined1 *)((int)param_1 + 0x1f2) = 1;
    }
  }
  return;
}
