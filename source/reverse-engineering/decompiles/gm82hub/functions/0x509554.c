// rea decompile_all
// name: FUN_00509554
// address: 0x509554
// body: available
// range: 0x509554-0x5095be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00509554(int param_1)

{
  undefined2 *puVar1;
  int iVar2;

  iVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x8c);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x11e);
  iVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x980);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x1e);
  iVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0xa74);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 0x13);
  *(undefined2 *)(param_1 + 0x48c) = 1;
  *(undefined4 *)(param_1 + 0x16a4) = 0;
  *(undefined4 *)(param_1 + 0x16a0) = 0;
  *(undefined4 *)(param_1 + 0x16a8) = 0;
  *(undefined4 *)(param_1 + 0x1698) = 0;
  return;
}
