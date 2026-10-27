// rea decompile_all
// name: FUN_005fdfa8
// address: 0x5fdfa8
// body: available
// range: 0x5fdfa8-0x5fe00d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fdfbf (push 0x5fe00e followed by fs-segment stack chaining); handler 0x5fe00e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fdfa8(int *param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005fe00e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_3 != '\0') {
    param_2 = (**(code **)(**(int **)PTR_DAT_007826d0 + 0x30))(*(int **)PTR_DAT_007826d0,param_2);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  FUN_005e2948(param_2,&local_8);
  (**(code **)(*param_1 + 0x80))(param_1,local_8,0xffffffff);
  puVar1 = puStack_1c;
  *in_FS_OFFSET = 0;
  puStack_1c = &LAB_005fe015;
  uStack_20 = 0x5fe00d;
  FUN_00409ce0(&local_8,&DAT_004108f8,puVar1);
  return;
}
