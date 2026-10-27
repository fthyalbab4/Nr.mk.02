// rea decompile_all
// name: FUN_00491ea0
// address: 0x491ea0
// body: available
// range: 0x491ea0-0x491f6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x491ec2 (push 0x491f6f followed by fs-segment stack chaining); handler 0x491f6f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491ea0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int *in_FS_OFFSET;
  undefined1 *in_stack_ffffffc0;
  undefined4 uVar2;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  int local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];

  puStack_2c = &stack0xfffffffc;
  local_1c = 0;
  local_10 = 0;
  puStack_30 = &LAB_00491f6f;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  iVar1 = (**(code **)(*param_1 + 0x58))();
  if (param_2 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x58))();
    if (0 < iVar1) {
      if (*(short *)((int)param_1 + 0xd2) == 0) {
        FUN_0040b75c(PTR_PTR_007823e4,&local_10);
        FUN_0041beb8(&PTR_LAB_00410b4c,1,local_10);
        param_3 = (int *)0x491f21;
        FUN_00406618();
      }
      else {
        in_stack_ffffffc0 = local_c;
        (*(code *)param_1[0x34])(param_1[0x35],param_1,param_2,in_stack_ffffffc0,local_8);
      }
      goto LAB_00491f51;
    }
  }
  local_14 = 0;
  param_3 = &local_18;
  uVar2 = 0;
  local_18 = param_2;
  FUN_0040b75c(PTR_PTR_007824e4,&local_1c);
  FUN_0041bef4(&PTR_LAB_00410b4c,1,local_1c,uVar2);
  in_stack_ffffffc0 = (undefined1 *)0x491f51;
  FUN_00406618();
LAB_00491f51:
  *in_FS_OFFSET = (int)in_stack_ffffffc0;
  thunk_FUN_00406e5c(&local_1c,in_stack_ffffffc0,param_3,&LAB_00491f76);
  thunk_FUN_00406e5c(&local_10);
  return;
}
