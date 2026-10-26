// rea decompile_all
// name: FUN_00587324
// address: 0x587324
// body: available
// range: 0x587324-0x5873b1 inclusive
// range: 0x5873e7-0x5873ed inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x58735a (push 0x5873b2 followed by fs-segment stack chaining); handler 0x5873b2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_00587324(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x58733e;
  puVar1 = (undefined1 *)FUN_00404304(0x40);
  if (puVar1 != (undefined1 *)0x0) {
    puStack_20 = &LAB_005873b2;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    uVar2 = FUN_00404304(0x2d00);
    *(undefined4 *)(puVar1 + 0x24) = uVar2;
    uVar2 = FUN_00404304(param_3);
    *(undefined4 *)(puVar1 + 0x28) = uVar2;
    *(undefined4 *)(puVar1 + 0x2c) = uVar2;
    *(int *)(puVar1 + 0x2c) = *(int *)(puVar1 + 0x2c) + param_3;
    *(undefined4 *)(puVar1 + 0x38) = param_2;
    *puVar1 = 0;
    FUN_005872bc(puVar1,param_1,0);
    *in_FS_OFFSET = uStack_24;
  }
  return puVar1;
}
