// rea decompile_all
// name: FUN_005f6d4c
// address: 0x5f6d4c
// body: available
// range: 0x5f6d4c-0x5f6d90 inclusive
// range: 0x5f6d9d-0x5f6da3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f6d5f (push 0x5f6d91 followed by fs-segment stack chaining); handler 0x5f6d91 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f6d4c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *in_FS_OFFSET;
  uint uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_005f6d91;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_1c;
  uVar2 = (uint)*(byte *)(param_1 + 0x29);
  iVar1 = **(int **)PTR_DAT_007826d0;
  (**(code **)(iVar1 + 0xc))
            (*(int **)PTR_DAT_007826d0,*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x18),uVar2,*(undefined2 *)(param_1 + 0x20));
  FUN_005f6cd0(param_1);
  *in_FS_OFFSET = uVar2;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}
