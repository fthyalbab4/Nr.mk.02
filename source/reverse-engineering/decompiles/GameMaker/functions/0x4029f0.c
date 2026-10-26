// rea decompile_all
// name: FUN_004029f0
// address: 0x4029f0
// body: available
// range: 0x4029f0-0x4029fe inclusive
// range: 0x402a00-0x402a2d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004029f0(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;

  piVar4 = (int *)param_1[1];
  piVar2 = (int *)*param_1;
  *piVar4 = (int)piVar2;
  piVar2[1] = (int)piVar4;
  if (piVar4 == piVar2) {
    piVar4 = piVar4 + -0x1e0eb3;
    bVar3 = (byte)((uint)piVar4 >> 3) & 0x1f;
    puVar1 = &DAT_00783a4c + ((uint)piVar4 >> 8 & 0xff);
    *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    if (*puVar1 == 0) {
      bVar3 = (byte)((uint)piVar4 >> 8) & 0x1f;
      _DAT_00783a48 = _DAT_00783a48 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      return;
    }
  }
  return;
}
