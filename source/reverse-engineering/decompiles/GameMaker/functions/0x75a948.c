// rea decompile_all
// name: FUN_0075a948
// address: 0x75a948
// body: available
// range: 0x75a948-0x75a9b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0075a948(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;

  FUN_00408d1c(param_3,&DAT_007568dc);
  uVar1 = FUN_00408df4(param_3,&DAT_007568dc);
  FUN_00738660(uVar1,0x24);
  uVar1 = FUN_0073cdfc(param_2);
  piVar2 = (int *)FUN_0075a8d4(param_1,uVar1);
  if (piVar2 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00408df4(param_3,&DAT_007568dc);
    uVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2,uVar1);
  }
  return uVar1;
}
