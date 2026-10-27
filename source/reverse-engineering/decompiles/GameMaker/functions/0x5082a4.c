// rea decompile_all
// name: FUN_005082a4
// address: 0x5082a4
// body: available
// range: 0x5082a4-0x508362 inclusive
// range: 0x508387-0x508391 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50830b (push 0x508380 followed by fs-segment stack chaining); handler 0x508380 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x508332 (push 0x508363 followed by fs-segment stack chaining); handler 0x508363 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005082a4(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  byte local_5;

  if (param_2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x5082bc;
    iVar2 = FUN_00507098(param_1);
    puStack_20 = (undefined1 *)0x5082c5;
    iVar3 = FUN_00507098(param_2);
    if (iVar2 == iVar3) {
      puStack_20 = (undefined1 *)0x5082d9;
      iVar2 = FUN_00507098(param_1);
      if (iVar2 != 0) {
LAB_005082f1:
        puStack_20 = (undefined1 *)0x5082fd;
        uVar4 = FUN_00405a4c(&LAB_00433630,1);
        puStack_24 = &LAB_00508380;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_2c = (undefined1 *)0x508318;
        puStack_20 = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x40))(param_1,uVar4);
        puStack_2c = (undefined1 *)0x508324;
        uVar5 = FUN_00405a4c(&LAB_00433630,1);
        puStack_30 = &LAB_00508363;
        uStack_34 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_34;
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*param_2 + 0x40))(param_2,uVar5);
        FUN_00508260(uVar4,uVar5);
        puVar1 = puStack_2c;
        *in_FS_OFFSET = uStack_34;
        puStack_2c = &LAB_0050836a;
        puStack_30 = (undefined1 *)0x508362;
        uVar6 = FUN_00405a7c(uVar5,uStack_34,puVar1);
        return uVar6;
      }
      puStack_20 = (undefined1 *)0x5082e4;
      iVar2 = FUN_00507098(param_2);
      if (iVar2 != 0) goto LAB_005082f1;
      local_5 = 1;
      goto LAB_00508387;
    }
  }
  local_5 = 0;
LAB_00508387:
  return (uint)local_5;
}
