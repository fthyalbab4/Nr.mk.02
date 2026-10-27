// rea decompile_all
// name: FUN_005621a8
// address: 0x5621a8
// body: available
// range: 0x5621a8-0x562226 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005621a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar1 = DAT_00686400;
  iVar2 = DAT_00686404;
  if (0.0 < _DAT_00686408) {
    iVar1 = FUN_004048b8();
    iVar2 = FUN_004048b8();
  }
  iVar5 = iVar2;
  iVar3 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
  iVar4 = iVar3 - iVar2 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((iVar3 - iVar2 & 1U) != 0);
  }
  iVar2 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
  iVar3 = iVar2 - iVar1 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((iVar2 - iVar1 & 1U) != 0);
  }
  FUN_0056222c(iVar3,iVar4,iVar1,iVar5);
  return;
}
