// rea decompile_all
// name: FUN_00536bec
// address: 0x536bec
// body: available
// range: 0x536bec-0x536cd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x536c07 (push 0x536cd5 followed by fs-segment stack chaining); handler 0x536cd5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00536bec(undefined4 param_1)

{
  IErrorInfo **pperrinfo;
  HRESULT HVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_30 = &LAB_00536cd5;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_18 = 0;
  pperrinfo = (IErrorInfo **)FUN_0040b268(&local_8);
  HVar1 = GetErrorInfo(0,pperrinfo);
  if (HVar1 == 0) {
    FUN_00407dd0(&local_c);
    (**(code **)(*local_8 + 0x10))();
    FUN_00407dd0(&local_10);
    (**(code **)(*local_8 + 0x14))();
    FUN_00407dd0(&local_14);
    (**(code **)(*local_8 + 0x18))();
    (**(code **)(*local_8 + 0x1c))();
  }
  FUN_0040840c(&local_1c,local_c);
  uVar4 = local_1c;
  FUN_0040840c(&local_20,local_14);
  uVar2 = local_18;
  uVar3 = local_20;
  FUN_0040840c(&local_24,local_10);
  FUN_00536548(&LAB_00536240,1,local_24,uVar2,uVar3,uVar4,param_1);
  *in_FS_OFFSET = uVar2;
  thunk_FUN_004072fc(&local_24,3,uVar4,&LAB_00536cdc);
  FUN_00407de8(&local_14,3);
  FUN_0040b268(&local_8);
  return;
}
