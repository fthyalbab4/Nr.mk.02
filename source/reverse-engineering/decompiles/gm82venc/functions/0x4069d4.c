// rea decompile_all
// name: FUN_004069d4
// address: 0x4069d4
// body: available
// range: 0x4069d4-0x406a53 inclusive
// range: 0x406a74-0x406a79 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4069f4 (push 0x406a54 followed by fs-segment stack chaining); handler 0x406a54 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004069d4(void)

{
  undefined4 *puVar1;
  code *extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;

  if ((*(uint *)(in_stack_00000004 + 4) & 6) != 0) {
    puStack_18 = &LAB_00406a54;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    uStack_20 = *in_FS_OFFSET;
    uStack_28 = *(undefined4 *)(in_stack_00000004 + 0x18);
    uStack_2c = *(undefined4 *)(in_stack_00000004 + 0x14);
    iStack_24 = in_stack_00000004;
    uStack_30 = 0x406a0d;
    puVar1 = (undefined4 *)FUN_0040bfac();
    uStack_30 = *puVar1;
    *puVar1 = &uStack_30;
    *(undefined1 **)(in_stack_00000008 + 4) = &LAB_00406a54;
    FUN_004066bc();
    (*extraout_ECX)();
    puVar1 = (undefined4 *)FUN_0040bfac();
    *puVar1 = *(undefined4 *)*puVar1;
    *in_FS_OFFSET = uStack_1c;
  }
  return 1;
}
