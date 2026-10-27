// rea decompile_all
// name: FUN_0041c464
// address: 0x41c464
// body: available
// range: 0x41c464-0x41c4c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c464(void)

{
  int iVar1;
  int iVar2;
  int local_10;
  undefined1 local_c;

  iVar1 = FUN_004044f4();
  for (iVar2 = 0; (iVar2 < 7 && (iVar1 != (&DAT_0067ccfc)[iVar2 * 2])); iVar2 = iVar2 + 1) {
  }
  if (iVar2 < 7) {
    iVar2 = FUN_0041bd4c(&LAB_00411310,1,(&DAT_0067cd00)[iVar2 * 2]);
  }
  else {
    local_c = 0;
    local_10 = iVar1;
    iVar2 = FUN_0041bf50(&LAB_00411310,1,PTR_LAB_00688b58,0,&local_10);
  }
  *(int *)(iVar2 + 0x18) = iVar1;
  return;
}
