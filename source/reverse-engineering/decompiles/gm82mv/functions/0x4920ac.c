// rea decompile_all
// name: FUN_004920ac
// address: 0x4920ac
// body: available
// range: 0x4920ac-0x492145 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004920ac(int param_1,int param_2)

{
  char cVar1;

  if (*(int *)(param_1 + 0x2b4) != 0) {
    FUN_004d5084(*(int *)(param_1 + 0x2b4),*(undefined4 *)(param_1 + 0x2b8));
  }
  *(int *)(param_1 + 0x2b4) = param_2;
  if (param_2 == 0) {
    FUN_00491ff8(param_1,0);
  }
  else {
    FUN_004d50c8(param_2,*(undefined4 *)(param_1 + 0x2b8));
    FUN_00446174(*(undefined4 *)(param_1 + 0x2b4),param_1);
  }
  FUN_004d08e8();
  cVar1 = FUN_004d09f4();
  if (((cVar1 != '\0') && (cVar1 = FUN_004c4988(param_1), cVar1 != '\0')) &&
     (cVar1 = FUN_00492028(), cVar1 != '\0')) {
    FUN_004c0aa8(param_1);
    return;
  }
  FUN_00492424(param_1);
  return;
}
