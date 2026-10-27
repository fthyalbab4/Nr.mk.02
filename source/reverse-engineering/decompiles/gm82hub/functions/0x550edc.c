// rea decompile_all
// name: FUN_00550edc
// address: 0x550edc
// body: available
// range: 0x550edc-0x550f5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00550edc(int param_1)

{
  char cVar1;
  undefined4 local_c;
  undefined1 local_8;

  if (*(char *)(param_1 + 0x54) == '\0') {
    cVar1 = *(char *)(param_1 + 100);
    if (cVar1 == '\x02') {
      FUN_0041be80(&LAB_00546b18,1,PTR_LAB_00689080);
      FUN_00406ab4();
    }
    else if (cVar1 == '\x03') {
      FUN_0041be80(&LAB_00546b18,1,PTR_LAB_00688ac8);
      FUN_00406ab4();
    }
    else if (cVar1 == '\x04') {
      local_c = *(undefined4 *)(param_1 + 0x14);
      local_8 = 0x11;
      FUN_0041bf50(&LAB_00546b18,1,PTR_LAB_00688e4c,0,&local_c);
      FUN_00406ab4();
    }
    else if (cVar1 == '\x05') {
      FUN_0041ebf4();
    }
  }
  return;
}
