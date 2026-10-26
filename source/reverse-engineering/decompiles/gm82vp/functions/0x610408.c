// rea decompile_all
// name: FUN_00610408
// address: 0x610408
// body: available
// range: 0x610408-0x61047d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x610434 (push 0x61047e followed by fs-segment stack chaining); handler 0x61047e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00610408(int param_1,char param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_8;

  if (param_2 != '\0') {
    puStack_24 = (undefined1 *)0x61041a;
    local_8 = param_3;
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
  }
  puStack_24 = (undefined1 *)0x610429;
  local_8 = param_3;
  thunk_FUN_00407ad0(param_3);
  puStack_28 = &LAB_0061047e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_006104a4(param_1);
  *(undefined4 *)(param_1 + 0xc) = 7;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_00408194(param_1 + 0x50,local_8);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00610485;
  puStack_28 = (undefined1 *)0x61047d;
  thunk_FUN_004072d8(&local_8,uStack_2c,puVar1);
  return;
}
