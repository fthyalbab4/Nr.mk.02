// rea decompile_all
// name: FUN_0074e65c
// address: 0x74e65c
// body: available
// range: 0x74e65c-0x74e6df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074e65c(int param_1)

{
  char cVar1;
  undefined4 local_c;
  undefined1 local_8;

  if (*(char *)(param_1 + 0x54) == '\0') {
    cVar1 = *(char *)(param_1 + 100);
    if (cVar1 == '\x02') {
      FUN_0041bfec(&PTR_LAB_00744298,1,PTR_PTR_00782110);
      FUN_00406618();
    }
    else if (cVar1 == '\x03') {
      FUN_0041bfec(&PTR_LAB_00744298,1,PTR_PTR_007818d8);
      FUN_00406618();
    }
    else if (cVar1 == '\x04') {
      local_c = *(undefined4 *)(param_1 + 0x14);
      local_8 = 0x11;
      FUN_0041c0bc(&PTR_LAB_00744298,1,PTR_PTR_00781e08,0,&local_c);
      FUN_00406618();
    }
    else if (cVar1 == '\x05') {
      FUN_0041e9c8();
    }
  }
  return;
}
