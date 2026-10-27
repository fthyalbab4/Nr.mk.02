// rea decompile_all
// name: FUN_004aeb08
// address: 0x4aeb08
// body: available
// range: 0x4aeb08-0x4aeb83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004aeb08(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar4;
  int iStack_14;
  undefined1 auStack_10 [4];

  uVar1 = (**(code **)*param_2)();
  uVar2 = FUN_0043f234(param_2);
  if (extraout_EDX_00 == extraout_EDX) {
    if (uVar1 <= uVar2) {
      return extraout_EDX;
    }
  }
  else if (extraout_EDX <= extraout_EDX_00) {
    return extraout_EDX;
  }
  FUN_0043f488(param_2,&iStack_14,4);
  iVar4 = 0;
  for (iVar3 = FUN_004ae56c(param_1); (iVar4 < iStack_14 && (iVar3 != 0));
      iVar3 = FUN_004ad2a8(iVar3)) {
    FUN_0043f488(param_2,auStack_10,1);
    FUN_004aceec(iVar3,auStack_10[0]);
    iVar4 = iVar4 + 1;
  }
  return iVar3;
}
