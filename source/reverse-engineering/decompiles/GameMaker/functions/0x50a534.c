// rea decompile_all
// name: FUN_0050a534
// address: 0x50a534
// body: available
// range: 0x50a534-0x50a588 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0050a534(int param_1)

{
  char cVar1;
  int iVar2;

  if ((((*(int *)(param_1 + 0x5c) == 0) ||
       (cVar1 = FUN_00405d08(*(int *)(param_1 + 0x5c),param_1), cVar1 == '\0')) &&
      (cVar1 = FUN_00521388(*(undefined4 *)PTR_DAT_00782280,param_1), cVar1 == '\0')) &&
     (cVar1 = FUN_00449ddc(param_1), cVar1 == '\0')) {
    iVar2 = FUN_004eac28(0xb040,0,param_1);
    if (iVar2 != 1) {
      return 0;
    }
  }
  return 1;
}
