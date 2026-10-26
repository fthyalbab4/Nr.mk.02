// rea decompile_all
// name: FUN_0074c8b0
// address: 0x74c8b0
// body: available
// range: 0x74c8b0-0x74c910 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074c8b0(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 *puVar2;

  cVar1 = FUN_0074c7b4(param_1);
  if (cVar1 == '\0') {
    FUN_004168b0(param_2);
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0) {
      puVar2 = (undefined2 *)FUN_0074ca5c(param_1,**(undefined4 **)(param_1 + 4));
      FUN_00409300(puVar2 + 1,*puVar2,param_1 + 0x18);
      FUN_00740a24(param_1 + 0x18);
    }
    FUN_00407eb8(param_2,*(undefined4 *)(param_1 + 0x18));
  }
  return;
}
