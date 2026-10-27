// rea decompile_all
// name: FUN_0052e570
// address: 0x52e570
// body: available
// range: 0x52e570-0x52e5e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e570(int param_1)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;

  iVar2 = 0;
  uVar4 = 0;
  uVar1 = 0;
  puVar3 = (ushort *)(param_1 + 0x8c);
  do {
    uVar1 = uVar1 + *puVar3;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 2;
  } while (iVar2 < 7);
  puVar3 = (ushort *)(param_1 + 0x8c + iVar2 * 4);
  for (; iVar2 < 0x80; iVar2 = iVar2 + 1) {
    uVar4 = uVar4 + *puVar3;
    puVar3 = puVar3 + 2;
  }
  puVar3 = (ushort *)(param_1 + 0x8c + iVar2 * 4);
  for (; iVar2 < 0x100; iVar2 = iVar2 + 1) {
    uVar1 = uVar1 + *puVar3;
    puVar3 = puVar3 + 2;
  }
  *(bool *)(param_1 + 0x1c) = uVar1 <= uVar4 >> 2;
  return;
}
