// rea decompile_all
// name: FUN_0059ae44
// address: 0x59ae44
// body: available
// range: 0x59ae44-0x59af0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59ae62 (push 0x59af0d followed by fs-segment stack chaining); handler 0x59af0d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059ae44(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1e [26];

  puStack_38 = &stack0xfffffffc;
  local_24 = 0;
  local_28 = 0;
  puStack_3c = &LAB_0059af0d;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  FUN_0043f234(param_2);
  uVar3 = (**(code **)*param_2)();
  uVar4 = FUN_0043f234(param_2);
  if (extraout_EDX - extraout_EDX_00 == (uint)(uVar3 < uVar4)) {
    bVar1 = 0x1a < uVar3 - uVar4;
  }
  else {
    bVar1 = 0 < (int)((extraout_EDX - extraout_EDX_00) - (uint)(uVar3 < uVar4));
  }
  if (bVar1) {
    FUN_0043f488(param_2,local_1e,0x1a);
    FUN_004080b0(&local_28,local_1e,4);
    FUN_00415690(local_28,&local_24);
    FUN_00408640(local_24,L"8BPS");
  }
  FUN_0043f254(param_2);
  puVar2 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0059af14;
  puStack_3c = (undefined1 *)0x59af0c;
  thunk_FUN_00406e80(&local_28,2,puVar2);
  return;
}
