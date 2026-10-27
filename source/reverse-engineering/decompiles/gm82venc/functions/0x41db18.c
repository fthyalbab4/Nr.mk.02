// rea decompile_all
// name: FUN_0041db18
// address: 0x41db18
// body: available
// range: 0x41db18-0x41dbae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041db18(void)

{
  LCID LVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  DAT_0068cd4c = 0x409;
  DAT_0068cd50 = 9;
  DAT_0068cd54 = 1;
  LVar1 = GetThreadLocale();
  if (LVar1 != 0) {
    DAT_0068cd4c = LVar1;
  }
  if ((ushort)LVar1 != 0) {
    DAT_0068cd50 = (uint)((ushort)LVar1 & 0x3ff);
    DAT_0068cd54 = (LVar1 & 0xffff) >> 10;
  }
  puVar3 = &DAT_0041dbb0;
  puVar4 = &DAT_0067cbcc;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if ((DAT_0067cb88 < 5) || (DAT_0067cb84 != 2)) {
    iVar2 = GetSystemMetrics(0x4a);
    DAT_0068cd59 = iVar2 != 0;
  }
  else {
    DAT_0068cd59 = true;
  }
  DAT_0068cd58 = 1;
  FUN_0041dabc();
  return;
}
