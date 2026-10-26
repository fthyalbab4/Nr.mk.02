// rea decompile_all
// name: FUN_00586ef4
// address: 0x586ef4
// body: available
// range: 0x586ef4-0x586f8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x586f1d (push 0x586f8d followed by fs-segment stack chaining); handler 0x586f8d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00586ef4(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  undefined1 *in_stack_ffffffbc;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 local_1c [24];

  puStack_34 = (undefined1 *)0x586f12;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_38 = &LAB_00586f8d;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_3c;
  puStack_34 = &stack0xfffffffc;
  iVar2 = FUN_00586fa0(param_1,**(undefined4 **)(param_2 + 0x2c),param_3);
  if ((iVar2 == 0) &&
     (iVar2 = FUN_00586fa0(param_1,**(int **)(param_2 + 0x2c) + 0x38,local_1c), iVar2 == 0)) {
    in_stack_ffffffbc = local_1c;
    FUN_00572ed8(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(**(int **)(param_2 + 0x2c) + 0x68),
                 *(undefined4 *)(param_2 + 4),in_stack_ffffffbc,param_3);
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = (int)in_stack_ffffffbc;
  puStack_3c = &LAB_00586f94;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
