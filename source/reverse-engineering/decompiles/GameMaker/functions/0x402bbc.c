// rea decompile_all
// name: FUN_00402bbc
// address: 0x402bbc
// body: available
// range: 0x402bbc-0x402c1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00402bbc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint dwSize;

  dwSize = param_1 + 0x10013U & 0xffff0000;
  puVar3 = VirtualAlloc((LPVOID)0x0,dwSize,0x101000,4);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[2] = param_1;
    puVar3[3] = dwSize | 4;
    FUN_00402b74();
    puVar1 = DAT_00785ad4;
    *puVar3 = &DAT_00785ad0;
    puVar2 = puVar3;
    puVar3[1] = DAT_00785ad4;
    DAT_00785ad4 = puVar2;
    *puVar1 = puVar3;
    DAT_00785acc = 0;
    puVar3 = puVar3 + 4;
  }
  return puVar3;
}
