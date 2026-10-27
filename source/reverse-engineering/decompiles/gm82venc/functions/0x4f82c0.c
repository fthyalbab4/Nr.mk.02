// rea decompile_all
// name: FUN_004f82c0
// address: 0x4f82c0
// body: available
// range: 0x4f82c0-0x4f830a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f82c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;

  iVar1 = FUN_004f7b90(param_1,param_3);
  puVar2 = (undefined1 *)(iVar1 + param_2 * 3);
  puVar2[2] = (char)param_4;
  puVar2[1] = (char)((uint)param_4 >> 8);
  *puVar2 = (char)((uint)param_4 >> 0x10);
  return;
}
