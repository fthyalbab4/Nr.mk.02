// rea decompile_all
// name: FUN_0050c044
// address: 0x50c044
// body: available
// range: 0x50c044-0x50c0f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050c044(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar6 = param_1 % 0xfa + 6;
  if (iVar6 < 0) {
    iVar6 = param_1 % 0xfa + 0x106;
  }
  param_1 = param_1 / 0xfa;
  if (param_1 < 0) {
    param_1 = param_1 + 0x100;
  }
  iVar4 = 0;
  puVar2 = &DAT_0068f754;
  do {
    *puVar2 = (char)iVar4;
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x100);
  iVar4 = 0;
  puVar2 = &DAT_0068f854;
  do {
    *puVar2 = (char)iVar4;
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x100);
  iVar4 = 1;
  do {
    iVar5 = (iVar4 * iVar6 + param_1) % 0xfe;
    uVar1 = (&DAT_0068f755)[iVar5];
    (&DAT_0068f755)[iVar5] = (&DAT_0068f756)[iVar5];
    (&DAT_0068f756)[iVar5] = uVar1;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x2711);
  iVar6 = 1;
  pbVar3 = &DAT_0068f755;
  do {
    (&DAT_0068f854)[*pbVar3] = (char)iVar6;
    iVar6 = iVar6 + 1;
    pbVar3 = pbVar3 + 1;
  } while (iVar6 != 0x100);
  return;
}
