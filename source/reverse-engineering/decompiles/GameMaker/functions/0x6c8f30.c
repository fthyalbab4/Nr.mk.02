// rea decompile_all
// name: FUN_006c8f30
// address: 0x6c8f30
// body: available
// range: 0x6c8f30-0x6c8f83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c8f52 (push 0x6c8f84 followed by fs-segment stack chaining); handler 0x6c8f84 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c8f30(undefined4 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_8;

  local_8 = 0;
  if (param_2 != '\0') {
    puStack_24 = (undefined1 *)0x6c8f43;
    param_1 = FUN_00405fb0();
  }
  puStack_28 = &LAB_006c8f84;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_006c99a0(&PTR_FUN_006c9d24,&local_8);
  FUN_006c8fa8(param_1,0,local_8);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006c8f8b;
  puStack_28 = (undefined1 *)0x6c8f83;
  FUN_0040b140(&local_8,uStack_2c,puVar1);
  return;
}
