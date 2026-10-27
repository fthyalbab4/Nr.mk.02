// rea decompile_all
// name: FUN_006bc62c
// address: 0x6bc62c
// body: available
// range: 0x6bc62c-0x6bc67b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bc62c(int param_1)

{
  int iVar1;

  iVar1 = FUN_006bcca0();
  if (iVar1 != 0) {
    iVar1 = FUN_004d437c(L"Are you sure you want to delete all triggers?",0,3,0,0xffffffff,
                         0xffffffff,0);
    if (iVar1 != 7) {
      FUN_006bc964();
      FUN_006bc078(param_1);
      FUN_006bc118(param_1,0xffffffff);
      *(undefined1 *)(param_1 + 0xa026) = 1;
      FUN_006bcb60();
    }
  }
  return;
}
