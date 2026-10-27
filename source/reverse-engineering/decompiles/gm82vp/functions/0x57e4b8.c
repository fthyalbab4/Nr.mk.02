// rea decompile_all
// name: FUN_0057e4b8
// address: 0x57e4b8
// body: available
// range: 0x57e4b8-0x57e537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0057e4b8(int param_1)

{
  int iVar1;

  iVar1 = FUN_0045b5a4(&PTR_FUN_004550c0,1);
  FUN_0045bab4(iVar1,*(undefined4 *)(param_1 + 4));
  FUN_0045bb2c(iVar1,*(undefined4 *)(param_1 + 8));
  FUN_0045bbe0(iVar1,*(undefined1 *)(param_1 + 0x10));
  FUN_0045bb58(iVar1,0);
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_0045bb58(iVar1,*(byte *)(*(int *)(iVar1 + 0x10) + 0x1d) | 1);
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    FUN_0045bb58(iVar1,*(byte *)(*(int *)(iVar1 + 0x10) + 0x1d) | 2);
  }
  return iVar1;
}
