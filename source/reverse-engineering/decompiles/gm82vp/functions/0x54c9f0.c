// rea decompile_all
// name: FUN_0054c9f0
// address: 0x54c9f0
// body: available
// range: 0x54c9f0-0x54ca3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054c9f0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = (**(code **)(*(int *)param_1[1] + 0x54))((int *)param_1[1],param_2);
  if (iVar1 == -1) {
    iVar1 = (**(code **)*param_1)();
    uVar2 = (**(code **)(iVar1 + 8))(iVar1,1,1);
    FUN_00551244(uVar2,param_2);
    (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1],param_2,uVar2);
  }
  else {
    uVar2 = (**(code **)(*(int *)param_1[1] + 0x18))((int *)param_1[1],iVar1);
  }
  return uVar2;
}
