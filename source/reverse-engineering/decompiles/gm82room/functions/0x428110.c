// rea decompile_all
// name: FUN_00428110
// address: 0x428110
// body: available
// range: 0x428110-0x42819c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42812c (push 0x4281ba followed by fs-segment stack chaining); handler 0x4281ba lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x428143 (push 0x42819d followed by fs-segment stack chaining); handler 0x42819d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00428110(undefined2 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  VARIANTARG *pVVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  VARIANTARG local_14;

  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  puStack_28 = &LAB_004281ba;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_34 = (undefined1 *)0x428138;
  VariantInit(&local_14);
  puStack_34 = &LAB_0042819d;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uVar6 = 8;
  uVar5 = 0;
  uVar4 = 0x400;
  pVVar2 = &local_14;
  puVar3 = param_1;
  uVar1 = (**(code **)PTR_DAT_00689388)();
  FUN_004246f8(uVar1,*param_1,CONCAT22(extraout_var,0x100),pVVar2,puVar3,uVar4,uVar5,uVar6);
  FUN_00408350(&local_18,local_14.n1._8_4_);
  FUN_00408984(local_18,1,0x7fffffff);
  *in_FS_OFFSET = param_2;
  FUN_00424ab4(&local_14,param_2,puVar3,&LAB_004281a4);
  return;
}
