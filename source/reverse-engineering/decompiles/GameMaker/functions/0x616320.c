// rea decompile_all
// name: FUN_00616320
// address: 0x616320
// body: available
// range: 0x616320-0x616390 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x616340 (push 0x616391 followed by fs-segment stack chaining); handler 0x616391 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00616320(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x616333;
  iVar3 = FUN_0043bb30(param_1);
  puStack_1c = &LAB_00616391;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = *(int *)(iVar3 + 8);
  puStack_18 = &stack0xfffffffc;
  if (0 < iVar1) {
    puStack_18 = &stack0xfffffffc;
    if (SBORROW4(iVar1,1)) {
      puStack_18 = &stack0xfffffffc;
      FUN_00405944(0,iVar1 + -1);
    }
    uVar4 = FUN_0043b048(iVar3);
    if (SBORROW4(*(int *)(iVar3 + 8),1)) {
      FUN_00405944(uVar4,*(int *)(iVar3 + 8) + -1);
    }
    FUN_0043aee0(iVar3);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00616398;
  puStack_1c = (undefined1 *)0x616390;
  FUN_0043bba0(param_1,uStack_20,puVar2);
  return;
}
