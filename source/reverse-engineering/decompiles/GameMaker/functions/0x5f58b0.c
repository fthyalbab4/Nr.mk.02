// rea decompile_all
// name: FUN_005f58b0
// address: 0x5f58b0
// body: available
// range: 0x5f58b0-0x5f58d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005f58b0(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;

  if (DAT_0077db64 != 0) {
    cVar2 = FUN_005e0a78();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_005f58c8;
    }
  }
  bVar1 = false;
LAB_005f58c8:
  uVar3 = 0;
  if (bVar1) {
    uVar3 = *(undefined1 *)(DAT_0077db64 + 0x34);
  }
  return uVar3;
}
