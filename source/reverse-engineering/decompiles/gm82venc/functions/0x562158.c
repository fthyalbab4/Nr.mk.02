// rea decompile_all
// name: FUN_00562158
// address: 0x562158
// body: available
// range: 0x562158-0x5621a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00562158(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
  iVar2 = FUN_004baf84(DAT_006863dc);
  iVar4 = iVar1 - iVar2 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((iVar1 - iVar2 & 1U) != 0);
  }
  iVar1 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
  iVar2 = FUN_004baf44(DAT_006863dc);
  iVar3 = iVar1 - iVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((iVar1 - iVar2 & 1U) != 0);
  }
  FUN_00562334(iVar3,iVar4);
  return;
}
