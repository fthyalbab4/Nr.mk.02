// rea decompile_all
// name: FUN_0042895c
// address: 0x42895c
// body: available
// range: 0x42895c-0x4289f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42897b (push 0x428a1b followed by fs-segment stack chaining); handler 0x428a1b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x428992 (push 0x4289f9 followed by fs-segment stack chaining); handler 0x4289f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042895c(undefined2 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  int *in_FS_OFFSET;
  undefined4 *puVar2;
  VARIANTARG *pVVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iStack_3c;
  undefined1 *puStack_38;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  VARIANTARG local_14;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_2c = &LAB_00428a1b;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puStack_38 = (undefined1 *)0x428987;
  VariantInit(&local_14);
  puStack_38 = &LAB_004289f9;
  iStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_3c;
  uVar7 = 8;
  uVar6 = 0;
  uVar5 = 0x400;
  pVVar3 = &local_14;
  puVar4 = param_1;
  uVar1 = (**(code **)PTR_DAT_00689388)();
  FUN_004246f8(uVar1,*param_1,CONCAT22(extraout_var,8),pVVar3,puVar4,uVar5,uVar6,uVar7);
  puVar2 = &local_18;
  FUN_00408350(&local_1c,local_14.n1._8_4_);
  FUN_00408984(local_1c,1,0x7fffffff,puVar2);
  FUN_00408420(param_2,local_18);
  *in_FS_OFFSET = (int)pVVar3;
  FUN_00424ab4(&local_14,pVVar3,uVar5,&LAB_00428a00);
  return;
}
