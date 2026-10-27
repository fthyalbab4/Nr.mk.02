// rea decompile_all
// name: FUN_0050280c
// address: 0x50280c
// body: available
// range: 0x50280c-0x50289d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x502829 (push 0x50289e followed by fs-segment stack chaining); handler 0x50289e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050280c(int *param_1,ushort param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  ushort local_10 [2];
  undefined1 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_0050289e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar3 = param_2;
  if ((ushort)(param_2 - 0x61) < 0x1a) {
    uVar3 = param_2 & 0xffdf;
  }
  uVar2 = FUN_00502800(param_1);
  if ((ushort)(uVar2 - 0x61) < 0x1a) {
    uVar2 = uVar2 & 0xffdf;
  }
  if (uVar2 != uVar3) {
    local_c = 9;
    local_10[0] = param_2;
    FUN_00417c88(&PTR_DAT_005028b8,local_10,0,&local_8);
    (**(code **)(*param_1 + 300))(param_1,local_8);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005028a5;
  puStack_24 = (undefined1 *)0x50289d;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar1);
  return;
}
