// rea decompile_all
// name: FUN_00462fa0
// address: 0x462fa0
// body: available
// range: 0x462fa0-0x46304a inclusive
// range: 0x463071-0x463080 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x462fc2 (push 0x46304b followed by fs-segment stack chaining); handler 0x46304b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00462fa0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_78;
  undefined1 *puStack_74;
  undefined1 *puStack_70;
  undefined1 local_60 [84];
  int local_c;
  HANDLE local_8;

  puStack_70 = &stack0xfffffffc;
  local_8 = (HANDLE)0x0;
  local_c = 0;
  puStack_74 = &LAB_0046304b;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  FUN_00462ef0(param_1);
  FUN_00462f00(param_1);
  uVar1 = FUN_0045aa34(param_2);
  local_8 = (HANDLE)FUN_00461f38(*(undefined4 *)(param_1[10] + 8),
                                 *(undefined4 *)(param_1[10] + 0x10),uVar1);
  FUN_00404f08(local_60,0x54,0);
  GetObjectW(local_8,0x54,local_60);
  iVar2 = *(int *)(param_1[10] + 0x10);
  if (*(int *)(param_1[10] + 0x10) != DAT_00788104) {
    iVar2 = FUN_00461ed4();
  }
  local_c = iVar2;
  uVar1 = 0;
  FUN_00463324(param_1,local_8,local_c,0,*(undefined1 *)(param_1[10] + 0x71),local_60);
  *in_FS_OFFSET = uVar1;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}
