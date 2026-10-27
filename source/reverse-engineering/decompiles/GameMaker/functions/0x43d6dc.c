// rea decompile_all
// name: FUN_0043d6dc
// address: 0x43d6dc
// body: available
// range: 0x43d6dc-0x43d765 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43d72b (push 0x43d766 followed by fs-segment stack chaining); handler 0x43d766 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043d6dc(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  uVar1 = *(undefined1 *)(param_1 + 4);
  uVar2 = *(undefined2 *)(param_1 + 6);
  uVar3 = *(undefined2 *)(param_1 + 0xc);
  puStack_18 = (undefined1 *)0x43d714;
  FUN_0043e910(param_1,0x2c);
  puStack_18 = (undefined1 *)0x43d720;
  FUN_0043e95c(param_1,CONCAT22(extraout_var,0x22));
  puStack_1c = &LAB_0043d766;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_0043d774(param_1,param_2);
  *in_FS_OFFSET = uStack_20;
  *(undefined2 *)(param_1 + 6) = uVar2;
  *(undefined2 *)(param_1 + 0xc) = uVar3;
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}
