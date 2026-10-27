// rea decompile_all
// name: FUN_005c737c
// address: 0x5c737c
// body: available
// range: 0x5c737c-0x5c745a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c739f (push 0x5c745b followed by fs-segment stack chaining); handler 0x5c745b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c737c(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int in_stack_ffffffc4;
  undefined4 *puVar3;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_14 = (int *)0x0;
  puStack_28 = &LAB_005c745b;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  local_10 = param_3;
  cVar1 = FUN_005c85a0(param_1);
  if (cVar1 == '\t') {
    FUN_0040b184(&local_8,param_1[8],&DAT_005c746c);
  }
  else {
    FUN_0040b140(&local_8);
    (**(code **)(*(int *)param_1[8] + 0x38))();
    FUN_0040b250();
  }
  puVar3 = &local_c;
  FUN_005c40d4(local_8,local_10,1,puVar3,param_6);
  if (param_2 == 0) {
    (**(code **)(*param_1 + 4))(param_1,local_c,param_4);
  }
  else {
    in_stack_ffffffc4 = param_1[7];
    iVar2 = FUN_005c5adc(param_2,1,local_c,in_stack_ffffffc4,param_1);
    if (iVar2 != 0) {
      iVar2 = iVar2 + 0x48;
    }
    FUN_0040b158(param_4,iVar2);
  }
  FUN_005c6acc(param_1,&local_14);
  (**(code **)(*local_14 + 0x58))(local_14,param_5,*param_4);
  *in_FS_OFFSET = in_stack_ffffffc4;
  FUN_0040b140(&local_14,in_stack_ffffffc4,puVar3,&LAB_005c7462);
  FUN_0040b140(&local_c);
  FUN_0040b140(&local_8);
  return;
}
