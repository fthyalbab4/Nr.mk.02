// rea decompile_all
// name: FUN_004a92c8
// address: 0x4a92c8
// body: available
// range: 0x4a92c8-0x4a9321 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a92c8(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  char cVar2;

  if ((param_4 != '\0') && ((*(int *)(param_1 + 0xac) != 0 || (*(int *)(param_1 + 0x6c) != 0)))) {
    FUN_004a602c(param_1);
  }
  if (*(int *)(param_1 + 100) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    cVar2 = FUN_004061f8(uVar1,&PTR_FUN_004a445c);
    if (cVar2 != '\0') {
      FUN_004ab6b0(uVar1);
    }
  }
  else {
    FUN_004a92c8(*(int *)(param_1 + 100),param_1,param_3,0);
  }
  return;
}
