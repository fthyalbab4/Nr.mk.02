// rea decompile_all
// name: FUN_004a8630
// address: 0x4a8630
// body: available
// range: 0x4a8630-0x4a865d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a8630(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 100); (iVar1 != 0 && (*(int *)(iVar1 + 0x7c) == 0));
      iVar1 = *(int *)(iVar1 + 100)) {
  }
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_004a9488();
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x48);
    }
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x7c);
  }
  return uVar2;
}
