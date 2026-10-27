// rea decompile_all
// name: FUN_0050b2d0
// address: 0x50b2d0
// body: available
// range: 0x50b2d0-0x50b330 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0050b2d0(int *param_1)

{
  char cVar1;

  if ((param_1[0x17] == 0) || (*(char *)(param_1[0x17] + 0x58) == '\0')) {
    (**(code **)(*param_1 + 0x48))();
    if (((*(char *)((int)param_1 + 0x6a) != '\0') && (*(char *)((int)param_1 + 0x95) != '\0')) &&
       ((*(char *)((int)param_1 + 0x69) == '\0' ||
        ((*(char *)((int)param_1 + 0x69) != '\0' && (param_1[0x1b] == 0)))))) {
      FUN_0050ade8(param_1,*(byte *)((int)param_1 + 0x69) ^ 1);
    }
    if ((*(char *)((int)param_1 + 0x6a) != '\0') && (cVar1 = FUN_0050a534(param_1), cVar1 != '\0'))
    {
      return 1;
    }
  }
  return 0;
}
