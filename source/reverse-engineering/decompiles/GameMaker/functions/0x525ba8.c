// rea decompile_all
// name: FUN_00525ba8
// address: 0x525ba8
// body: available
// range: 0x525ba8-0x525c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00525ba8(int *param_1,char param_2)

{
  if (param_1[0x6c] == 0) {
    param_2 = '\0';
  }
  if ((param_2 != (char)param_1[0x6e]) &&
     (((char)param_1[0x6e] == '\0' || (*(char *)((int)param_1 + 0x1ba) != '\0')))) {
    *(char *)(param_1 + 0x6e) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)((int)param_1 + 0x1ca) = 0;
      (**(code **)(*param_1 + 0x94))();
    }
    else {
      if (*(char *)((int)param_1 + 0x1ca) == '\0') {
        (**(code **)(*param_1 + 0x90))();
      }
      *(undefined1 *)((int)param_1 + 0x1ca) = 3;
    }
    if (param_2 != '\0') {
      FUN_00525b70(param_1);
    }
  }
  return;
}
