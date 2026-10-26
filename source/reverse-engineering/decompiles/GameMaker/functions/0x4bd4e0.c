// rea decompile_all
// name: FUN_004bd4e0
// address: 0x4bd4e0
// body: available
// range: 0x4bd4e0-0x4bd55c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bd4e0(int *param_1,int *param_2)

{
  char cVar1;

  if ((((*(byte *)(param_1 + 7) & 0x10) == 0) &&
      (((*param_2 == 0x201 || (*param_2 == 0x203)) && (cVar1 = FUN_004eefcc(param_1), cVar1 == '\0')
       ))) && (cVar1 = FUN_004ed7f4(param_1), cVar1 == '\x01')) {
    cVar1 = FUN_004f40d8(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
    param_1[0x15] = param_1[0x15] | 1;
    (**(code **)(*param_1 + -0x14))(param_1,param_2);
    return;
  }
  if (((*param_2 != 0xf) && (*param_2 != 0x14)) || (*(char *)(param_1[0xa7] + 0xc) == '\0')) {
    FUN_004f42f0(param_1,param_2);
  }
  return;
}
