// rea decompile_all
// name: FUN_00463220
// address: 0x463220
// body: available
// range: 0x463220-0x463280 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x463253 (push 0x463281 followed by fs-segment stack chaining); handler 0x463281 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00463220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x463234;
  FUN_00462ef0(param_1);
  puStack_1c = (undefined1 *)0x2;
  uStack_20 = 0x463245;
  puStack_18 = (undefined1 *)param_3;
  puVar2 = (undefined4 *)FUN_0044057c(&PTR_LAB_00433d68,1,param_2);
  puStack_1c = &LAB_00463281;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  uVar3 = (**(code **)*puVar2)();
  FUN_0046344c(param_1,puVar2,uVar3);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = 0;
  puStack_1c = &LAB_00463288;
  uStack_20 = 0x463280;
  FUN_00405a7c(puVar2,0,puVar1);
  return;
}
