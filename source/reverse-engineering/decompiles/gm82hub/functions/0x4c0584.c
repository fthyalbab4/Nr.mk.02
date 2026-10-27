// rea decompile_all
// name: FUN_004c0584
// address: 0x4c0584
// body: available
// range: 0x4c0584-0x4c05c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c0584(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;

  uVar1 = FUN_0040ec30(param_2[2],param_2 + 0x13,*param_2,param_2[8],param_2[0xd],0,param_2[7],
                       param_2[6],param_2[5],param_2[4],param_2[3],param_2[1]);
  *(undefined4 *)(param_1 + 600) = uVar1;
  return;
}
