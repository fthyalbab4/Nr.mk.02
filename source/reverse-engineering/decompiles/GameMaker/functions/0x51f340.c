// rea decompile_all
// name: FUN_0051f340
// address: 0x51f340
// body: available
// range: 0x51f340-0x51f38d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0051f340(int param_1,LPMSG param_2)

{
  int iVar1;
  BOOL BVar2;
  bool bVar3;

  bVar3 = false;
  iVar1 = *(int *)(param_1 + 0x44);
  if ((((iVar1 != 0) && (*(char *)(iVar1 + 0x29e) == '\x02')) &&
      (*(int *)(DAT_007882f0 + 0x68) != 0)) &&
     (*(char *)(*(int *)(DAT_007882f0 + 0x68) + 0x29e) == '\x01')) {
    BVar2 = TranslateMDISysAccel(*(HWND *)(iVar1 + 0x37c),param_2);
    bVar3 = BVar2 != 0;
  }
  return bVar3;
}
