// rea decompile_all
// name: FUN_0040442c
// address: 0x40442c
// body: available
// range: 0x40442c-0x404474 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040442c(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;

  uVar2 = param_1 & 0xffffff7f;
  if (DAT_00783008 != (code *)0x0) {
    (*DAT_00783008)(uVar2,param_2);
  }
  if ((byte)uVar2 == 0) {
    iVar1 = FUN_0040bd38();
    uVar2 = *(uint *)(iVar1 + 4);
  }
  else if ((byte)uVar2 < 0x1b) {
    uVar2 = (uint)(byte)(&DAT_0077377c)[param_1 & 0x7f];
  }
  FUN_00404420(uVar2 & 0xff,param_2);
  return;
}
