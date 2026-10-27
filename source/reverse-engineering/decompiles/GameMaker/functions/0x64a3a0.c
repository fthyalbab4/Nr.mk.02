// rea decompile_all
// name: FUN_0064a3a0
// address: 0x64a3a0
// body: available
// range: 0x64a3a0-0x64a3fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064a3a0(int param_1)

{
  undefined2 extraout_var;

  FUN_00407eb8(*(int *)PTR_DAT_00781e14 + 0x73c,L"Draw a polygon. <Esc> to end");
  FUN_004ee8f4(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x5dc),CONCAT22(extraout_var,0x10));
  FUN_004ee5c0(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x4ac),1);
  FUN_004ee5c0(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x4dc),1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}
