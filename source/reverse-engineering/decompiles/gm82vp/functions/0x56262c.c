// rea decompile_all
// name: FUN_0056262c
// address: 0x56262c
// body: available
// range: 0x56262c-0x562763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056262c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_14;

  local_14 = (double)CONCAT44(DAT_0068640c,DAT_00686408);
  if (local_14 == 0.0) {
    *param_1 = 0;
    *param_2 = 0;
    iVar1 = FUN_004baf44(DAT_006863dc);
    *param_3 = iVar1;
    iVar1 = FUN_004baf84(DAT_006863dc);
    *param_4 = iVar1;
  }
  else {
    if (local_14 < 0.0) {
      FUN_004baf44(DAT_006863dc);
      FUN_004baf84(DAT_006863dc);
    }
    iVar1 = FUN_004048b8();
    *param_3 = iVar1;
    iVar1 = FUN_004048b8();
    *param_4 = iVar1;
    iVar1 = FUN_004baf44(DAT_006863dc);
    iVar2 = iVar1 - *param_3 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((iVar1 - *param_3 & 1U) != 0);
    }
    *param_1 = iVar2;
    iVar1 = FUN_004baf84(DAT_006863dc);
    iVar2 = iVar1 - *param_4 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((iVar1 - *param_4 & 1U) != 0);
    }
    *param_2 = iVar2;
  }
  return;
}
