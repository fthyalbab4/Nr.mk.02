// rea decompile_all
// name: FUN_0041e4f0
// address: 0x41e4f0
// body: available
// range: 0x41e4f0-0x41e523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e51f to 0x41e45c FUN_0041e45c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041e4f0(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;

  uVar1 = 0;
  pbVar4 = param_1;
  while( true ) {
    uVar2 = uVar1 << 5 | uVar1 >> 0x1b;
    bVar3 = *pbVar4;
    if ((bVar3 & 0x80) != 0) {
      uVar1 = FUN_0041e45c(param_1);
      return uVar1;
    }
    if (bVar3 == 0) break;
    if (('@' < (char)bVar3) && ((char)bVar3 < '[')) {
      bVar3 = bVar3 | 0x20;
    }
    uVar1 = CONCAT31((int3)((uVar1 << 5) >> 8),(byte)uVar2 ^ bVar3);
    pbVar4 = pbVar4 + 1;
  }
  return uVar2;
}
