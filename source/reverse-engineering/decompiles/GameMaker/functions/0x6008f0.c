// rea decompile_all
// name: FUN_006008f0
// address: 0x6008f0
// body: available
// range: 0x6008f0-0x600957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006008f0(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;

  FUN_005f53bc(param_1);
  *(undefined4 *)(param_1 + 0xc4) = 0x8000;
  *(undefined4 *)(param_1 + 200) = 0x8000;
  *(undefined4 *)(param_1 + 0xb0) = 0x4000;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  uVar1 = FUN_005f8c30(&DAT_005f7f5c,1,extraout_ECX,&LAB_005fdd08,param_1);
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  uVar1 = FUN_004213b8();
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  return;
}
