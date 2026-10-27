// rea decompile_all
// name: FUN_004f24ac
// address: 0x4f24ac
// body: available
// range: 0x4f24ac-0x4f256a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f24cc (push 0x4f256b followed by fs-segment stack chaining); handler 0x4f256b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f24ac(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  uint local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  puStack_28 = &LAB_004f256b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_8 = param_3;
  FUN_004f2178(param_1,param_4);
  if (0 < param_4) {
    (**(code **)(*param_2 + 0xc))(param_2,*(undefined4 *)(param_1 + 4),param_4);
  }
  (**(code **)(*param_2 + 0xc))(param_2,&local_10,4);
  local_10 = FUN_004f16d8(local_10);
  uVar2 = FUN_004f1638(0xffffffff,&local_8,4);
  uVar3 = FUN_004f1638(uVar2,*(undefined4 *)(param_1 + 4),param_4);
  local_9 = (uVar3 ^ 0xffffffff) == local_10;
  if (!(bool)local_9) {
    FUN_0040b9d0(PTR_LAB_006893cc,&local_14);
    FUN_004f62b8(*(undefined4 *)(param_1 + 0xc),&LAB_004ede60,local_14);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004f2572;
  puStack_28 = (undefined1 *)0x4f256a;
  thunk_FUN_004072d8(&local_14,uStack_2c,puVar1);
  return;
}
