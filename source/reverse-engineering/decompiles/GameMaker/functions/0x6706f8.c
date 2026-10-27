// rea decompile_all
// name: FUN_006706f8
// address: 0x6706f8
// body: available
// range: 0x6706f8-0x67075d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67071c (push 0x67075e followed by fs-segment stack chaining); handler 0x67075e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006706f8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x67070e;
  puVar2 = (undefined4 *)FUN_00405a4c(&LAB_00433630,1);
  puStack_18 = &LAB_0067075e;
  puStack_1c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0043f64c(puVar2,param_1);
  FUN_0043f254(puVar2);
  uVar3 = (**(code **)*puVar2)();
  FUN_0043f4f8(param_2,puVar2);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uVar3;
  puStack_1c = &LAB_00670765;
  FUN_00405a7c(puVar2,uVar3,puVar1);
  return;
}
