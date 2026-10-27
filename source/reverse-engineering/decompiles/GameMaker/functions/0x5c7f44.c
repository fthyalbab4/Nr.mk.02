// rea decompile_all
// name: FUN_005c7f44
// address: 0x5c7f44
// body: available
// range: 0x5c7f44-0x5c80de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c7f61 (push 0x5c80df followed by fs-segment stack chaining); handler 0x5c80df lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c7f44(int *param_1)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  int *in_stack_ffffffbc;
  int *in_stack_ffffffc4;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined4 **local_28;
  int *local_24;
  uint *local_20;
  int *local_1c;
  undefined4 *local_18;
  int *local_14;
  undefined1 local_c [4];
  uint local_8;

  local_14 = (int *)&stack0xfffffffc;
  iVar1 = 6;
  do {
    local_8 = 0;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_18 = &DAT_005c80df;
  local_1c = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  local_20 = &local_8;
  local_24 = (int *)param_1[8];
  local_28 = (undefined4 **)0x5c7f71;
  (**(code **)(*local_24 + 0x58))();
  local_28 = (undefined4 **)0x5c7f76;
  FUN_0040b250();
  if ((short)local_8 == 0) {
    local_28 = (undefined4 **)0x5c7f85;
    local_28 = (undefined4 **)FUN_0040b140(local_c);
    local_2c = (int *)0x5c7f8e;
    local_2c = (int *)FUN_0040b140(&stack0xfffffff0);
    local_30 = (int *)0x0;
    local_34 = (int *)0x5c7f99;
    local_34 = (int *)FUN_0040b140(&local_14);
    (**(code **)(*(int *)param_1[8] + 0x38))();
    FUN_0040b250();
    in_stack_ffffffc4 = local_14;
    (**(code **)(*local_14 + 0x80))();
    FUN_0040b250();
    in_stack_ffffffbc = (int *)param_1[8];
    (**(code **)(*in_stack_ffffffbc + 0x54))();
    FUN_0040b250();
    (**(code **)(*param_1 + 0x18))(param_1,0,*param_1,in_stack_ffffffbc,unaff_EBX);
  }
  else {
    local_28 = &local_18;
    local_2c = (int *)0x5c7fe5;
    local_2c = (int *)FUN_0040b140(&local_1c);
    local_30 = (int *)param_1[8];
    local_34 = (int *)0x5c7fef;
    (**(code **)(*local_30 + 0x20))();
    local_34 = (int *)0x5c7ff4;
    FUN_0040b250();
    local_34 = local_1c;
    (**(code **)(*local_1c + 0x10))();
    FUN_0040b250();
    if ((int)local_18 < 2) {
      FUN_0040b140(&local_20);
      FUN_0040b140(&local_24);
      (**(code **)(*(int *)param_1[8] + 0x20))();
      FUN_0040b250();
      (**(code **)(*local_24 + 0xc))();
      FUN_0040b250();
      (**(code **)(*local_20 + 0x18))();
      FUN_0040b250();
      if ((ushort)((local_8 & 0xffff) - 3) < 2) goto LAB_005c8094;
    }
    thunk_FUN_00406e5c(&local_30);
    (**(code **)(*(int *)param_1[8] + 0xc))();
    FUN_0040b250();
    local_2c = local_30;
    local_28 = (undefined4 **)CONCAT31(local_28._1_3_,0x11);
    FUN_0040b75c(PTR_PTR_00781e8c,&local_34);
    FUN_005c40b0(local_34,&local_2c,0);
  }
LAB_005c8094:
  *in_FS_OFFSET = in_stack_ffffffbc;
  thunk_FUN_00406e80(&local_34,2,in_stack_ffffffc4,&LAB_005c80e6);
  FUN_0040b140(&local_24);
  FUN_0040b140(&local_20);
  FUN_0040b140(&local_1c);
  FUN_0040b140(&local_14);
  FUN_0040b140(&stack0xfffffff0);
  FUN_0040b140(local_c);
  return;
}
