// rea decompile_all
// name: FUN_0040bb73
// address: 0x40bb73
// body: available
// range: 0x40bb73-0x40bbb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0040bb73(void)

{
  int iVar1;
  HMODULE hLibModule;
  undefined4 uVar2;
  int in_stack_00000004;

  if ((in_stack_00000004 == 0) || (*(int *)(*(int *)(in_stack_00000004 + 4) + 0x18) == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(in_stack_00000004 + 4);
    hLibModule = *(HMODULE *)(iVar1 + 8);
    FUN_0040b90b();
    FreeLibrary(hLibModule);
    *(undefined4 *)(iVar1 + 8) = 0;
    FUN_0040b8aa();
    uVar2 = 1;
  }
  return uVar2;
}
