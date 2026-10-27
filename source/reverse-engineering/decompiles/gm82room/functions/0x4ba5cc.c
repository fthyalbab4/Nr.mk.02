// rea decompile_all
// name: FUN_004ba5cc
// address: 0x4ba5cc
// body: available
// range: 0x4ba5cc-0x4ba665 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ba5cc(int *param_1,char param_2)

{
  char cVar1;

  if (param_2 != *(char *)((int)param_1 + 99)) {
    cVar1 = *(char *)((int)param_1 + 99);
    *(char *)((int)param_1 + 99) = param_2;
    if ((*(byte *)(param_1 + 7) & 1) == 0) {
      if (((cVar1 == '\x03') || (*(char *)((int)param_1 + 99) != '\x03')) ||
         ((param_1[0x65] == param_1[0x10] &&
          (((param_1[0x66] == param_1[0x11] && (param_1[0x67] == param_1[0x12])) &&
           (param_1[0x68] == param_1[0x13])))))) {
        FUN_004baaac(param_1);
      }
      else {
        (**(code **)(*param_1 + 0x98))
                  (param_1,param_1[0x65],param_1[0x66],param_1[0x68],param_1[0x67]);
      }
    }
  }
  return;
}
