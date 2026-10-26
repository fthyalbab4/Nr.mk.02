// rea decompile_all
// name: FUN_00402a30
// address: 0x402a30
// body: available
// range: 0x402a30-0x402a61 inclusive
// range: 0x402a64-0x402a8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402a30(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;

  uVar2 = param_2 - 0xb30U >> 8;
  uVar2 = (uVar2 - 0x3ff & -(uint)(uVar2 < 0x3ff)) + 0x3ff;
  puVar1 = (undefined4 *)(&DAT_00783ad0)[uVar2 * 2];
  *param_1 = &DAT_00783acc + uVar2 * 2;
  param_1[1] = puVar1;
  *puVar1 = param_1;
  (&DAT_00783ad0)[uVar2 * 2] = param_1;
  if (puVar1 != &DAT_00783acc + uVar2 * 2) {
    return;
  }
  (&DAT_00783a4c)[(uVar2 & 0x1fffffff) >> 5 & 0xff] =
       (&DAT_00783a4c)[(uVar2 & 0x1fffffff) >> 5 & 0xff] | 1 << ((byte)uVar2 & 0x1f);
  _DAT_00783a48 = _DAT_00783a48 | 1 << ((byte)(uVar2 * 8 >> 8) & 0x1f);
  return;
}
