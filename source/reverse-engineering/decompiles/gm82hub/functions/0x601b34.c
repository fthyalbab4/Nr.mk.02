// rea decompile_all
// name: FUN_00601b34
// address: 0x601b34
// body: available
// range: 0x601b34-0x601b95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00601b34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined1 local_64 [48];
  int local_34;

  *param_4 = 0;
  param_4[2] = 0;
  param_4[3] = 0xbff00000;
  iVar1 = FUN_0060b364(*(undefined4 *)PTR_DAT_0068939c,0,param_3,*(undefined4 *)(param_6 + 0x38),
                       *(undefined4 *)(param_6 + 0x3c),*(undefined4 *)(param_6 + 0x20),
                       *(undefined4 *)(param_6 + 0x24),*(undefined4 *)(param_6 + 8),
                       *(undefined4 *)(param_6 + 0xc));
  if (-1 < iVar1) {
    FUN_00609014(*(undefined4 *)PTR_DAT_0068939c,iVar1,local_64);
    *(double *)(param_4 + 2) = (double)local_34;
  }
  return;
}
