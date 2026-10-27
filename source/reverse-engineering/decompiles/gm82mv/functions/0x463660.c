// rea decompile_all
// name: FUN_00463660
// address: 0x463660
// body: available
// range: 0x463660-0x46370a inclusive
// range: 0x463731-0x463740 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x463682 (push 0x46370b followed by fs-segment stack chaining); handler 0x46370b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00463660(int *param_1,undefined4 param_2)

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
  puStack_74 = &LAB_0046370b;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  FUN_004635b0(param_1);
  FUN_004635c0(param_1);
  uVar1 = FUN_0045b0f4(param_2);
  local_8 = (HANDLE)FUN_004625f8(*(undefined4 *)(param_1[10] + 8),
                                 *(undefined4 *)(param_1[10] + 0x10),uVar1);
  FUN_00404f38(local_60,0x54,0);
  GetObjectW(local_8,0x54,local_60);
  iVar2 = *(int *)(param_1[10] + 0x10);
  if (*(int *)(param_1[10] + 0x10) != DAT_0068f104) {
    iVar2 = FUN_00462594();
  }
  local_c = iVar2;
  uVar1 = 0;
  FUN_004639e4(param_1,local_8,local_c,0,*(undefined1 *)(param_1[10] + 0x71),local_60);
  *in_FS_OFFSET = uVar1;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}
