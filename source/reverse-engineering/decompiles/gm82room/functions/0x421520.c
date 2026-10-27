// rea decompile_all
// name: FUN_00421520
// address: 0x421520
// body: available
// range: 0x421520-0x42158c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00421520(void)

{
  undefined4 uVar1;

  uVar1 = DAT_0068cda4;
  DAT_0068cda4 = 0;
  FUN_00405fdc(uVar1);
  uVar1 = DAT_0068cd9c;
  DAT_0068cd9c = 0;
  FUN_00405fdc(uVar1);
  uVar1 = DAT_0068cdac;
  DAT_0068cdac = 0;
  FUN_00405fdc(uVar1);
  uVar1 = DAT_0068cdb0;
  DAT_0068cdb0 = 0;
  FUN_00405fdc(uVar1);
  uVar1 = DAT_0068cda8;
  DAT_0068cda8 = 0;
  FUN_00405fdc(uVar1);
  uVar1 = DAT_0068cda0;
  DAT_0068cda0 = 0;
  FUN_00405fdc(uVar1);
  return;
}
