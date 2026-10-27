// rea decompile_all
// name: FUN_0061fbc0
// address: 0x61fbc0
// body: available
// range: 0x61fbc0-0x61fc3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061fbc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0056195c();
  if (param_1 < iVar1) {
    iVar1 = param_1;
  }
  iVar2 = FUN_0056196c();
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if ((iVar1 != DAT_006886b4) || (iVar2 != DAT_006886b8)) {
    DAT_006886b4 = iVar1;
    DAT_006886b8 = iVar2;
    FUN_0061fc50(0,0,iVar1,iVar2);
    FUN_0061fc94();
  }
  return;
}
