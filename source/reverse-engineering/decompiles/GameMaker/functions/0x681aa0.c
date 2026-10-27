// rea decompile_all
// name: FUN_00681aa0
// address: 0x681aa0
// body: available
// range: 0x681aa0-0x681ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00681aa0(void)

{
  char cVar1;
  undefined4 uVar2;

  cVar1 = (**(code **)(**(int **)(DAT_0078a1f4 + 0x3c0) + 0xec))();
  if (cVar1 != '\0') {
    return 0xffffffff;
  }
  cVar1 = (**(code **)(**(int **)(DAT_0078a1f4 + 0x3c4) + 0xec))();
  if (cVar1 == '\0') {
    uVar2 = *(undefined4 *)(*(int *)(DAT_0078a1f4 + 0x3cc) + 0xc);
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}
