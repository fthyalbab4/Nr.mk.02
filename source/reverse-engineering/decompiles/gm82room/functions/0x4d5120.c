// rea decompile_all
// name: FUN_004d5120
// address: 0x4d5120
// body: available
// range: 0x4d5120-0x4d51de inclusive
// range: 0x4d5203-0x4d520d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d5187 (push 0x4d51fc followed by fs-segment stack chaining); handler 0x4d51fc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d51ae (push 0x4d51df followed by fs-segment stack chaining); handler 0x4d51df lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004d5120(int *param_1,int *param_2)

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
    puStack_20 = (undefined1 *)0x4d5138;
    iVar2 = FUN_004d3f14(param_1);
    puStack_20 = (undefined1 *)0x4d5141;
    iVar3 = FUN_004d3f14(param_2);
    if (iVar2 == iVar3) {
      puStack_20 = (undefined1 *)0x4d5155;
      iVar2 = FUN_004d3f14(param_1);
      if (iVar2 != 0) {
LAB_004d516d:
        puStack_20 = (undefined1 *)0x4d5179;
        uVar4 = FUN_00405fac(&LAB_004319cc,1);
        puStack_24 = &LAB_004d51fc;
        uStack_28 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_28;
        puStack_2c = (undefined1 *)0x4d5194;
        puStack_20 = &stack0xfffffffc;
        (**(code **)(*param_1 + 0x40))(param_1,uVar4);
        puStack_2c = (undefined1 *)0x4d51a0;
        uVar5 = FUN_00405fac(&LAB_004319cc,1);
        puStack_30 = &LAB_004d51df;
        uStack_34 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_34;
        puStack_2c = &stack0xfffffffc;
        (**(code **)(*param_2 + 0x40))(param_2,uVar5);
        FUN_004d50dc(uVar4,uVar5);
        puVar1 = puStack_2c;
        *in_FS_OFFSET = uStack_34;
        puStack_2c = &LAB_004d51e6;
        puStack_30 = (undefined1 *)0x4d51de;
        uVar6 = FUN_00405fdc(uVar5,uStack_34,puVar1);
        return uVar6;
      }
      puStack_20 = (undefined1 *)0x4d5160;
      iVar2 = FUN_004d3f14(param_2);
      if (iVar2 != 0) goto LAB_004d516d;
      local_5 = 1;
      goto LAB_004d5203;
    }
  }
  local_5 = 0;
LAB_004d5203:
  return (uint)local_5;
}
