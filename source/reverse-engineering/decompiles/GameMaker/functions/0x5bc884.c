// rea decompile_all
// name: FUN_005bc884
// address: 0x5bc884
// body: available
// range: 0x5bc884-0x5bc8c9 inclusive
// range: 0x5bc8cf-0x5bc8d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bc8a3 (push 0x5bc8ca followed by fs-segment stack chaining); handler 0x5bc8ca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005bc884(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;

  puStack_18 = &stack0xfffffffc;
  if (in_stack_00000008 != (undefined4 *)0x0) {
    *in_stack_00000008 = 0;
  }
  uStack_14 = in_stack_00000004;
  puStack_1c = &LAB_005bc8ca;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_005c0924(L"get_ownerElement",L"MSXML");
  FUN_0040b140(in_stack_00000008);
  *in_FS_OFFSET = uStack_20;
  return 0;
}
