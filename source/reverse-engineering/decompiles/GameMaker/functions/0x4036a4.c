// rea decompile_all
// name: FUN_004036a4
// address: 0x4036a4
// body: available
// range: 0x4036a4-0x4036d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004036a4(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  uVar3 = param_1 - 1U & 0xfffffffc;
  iVar2 = FUN_00402e10();
  puVar1 = (uint *)(uVar3 + iVar2);
  uVar3 = uVar3 | -(uint)(iVar2 == 0);
  if (uVar3 < 0x40a2c) {
    iVar4 = -uVar3;
    do {
      *(double *)(iVar4 + (int)puVar1) = (double)(float10)0;
      iVar4 = iVar4 + 8;
    } while (iVar4 < 0);
    *puVar1 = -(uint)(iVar2 == 0);
    ffree((float10)0);
  }
  return;
}
