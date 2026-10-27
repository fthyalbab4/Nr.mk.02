// rea decompile_all
// name: FUN_0052f298
// address: 0x52f298
// body: available
// range: 0x52f298-0x52f2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f298(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;

  iVar1 = FUN_0043f234(param_2);
  FUN_0043f254(param_2);
  iVar2 = (**(code **)*param_2)();
  FUN_0052f12c(param_1,iVar2);
  FUN_0043f4f8(param_1,param_2,extraout_ECX,iVar2,iVar2 >> 0x1f);
  FUN_0043f254(param_2,iVar1 >> 0x1f,extraout_ECX_00,iVar1,iVar1 >> 0x1f);
  return;
}
