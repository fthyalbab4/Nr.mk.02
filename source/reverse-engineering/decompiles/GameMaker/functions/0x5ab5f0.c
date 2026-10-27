// rea decompile_all
// name: FUN_005ab5f0
// address: 0x5ab5f0
// body: available
// range: 0x5ab5f0-0x5ab626 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ab5f0(int *param_1)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;

  uVar1 = 0;
  do {
    bVar2 = (byte)uVar1;
    bVar3 = bVar2 < 0xf;
    if (bVar2 < 0x10) {
      bVar3 = (*(byte *)((int)param_1 + ((int)(short)(uVar1 & 0x7f) >> 3) + 0x30e) >> (uVar1 & 7) &
              1) != 0;
    }
    *(bool *)((int)param_1 + (uint)bVar2 * 0x10 + 0x27b) = bVar3;
    uVar1 = uVar1 + 1;
  } while ((char)uVar1 != '\t');
  (**(code **)(*param_1 + 0x90))();
  return;
}
