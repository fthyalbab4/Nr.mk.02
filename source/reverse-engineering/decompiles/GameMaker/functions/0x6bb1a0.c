// rea decompile_all
// name: FUN_006bb1a0
// address: 0x6bb1a0
// body: available
// range: 0x6bb1a0-0x6bb2fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6bb1c6 (push 0x6bb2fb followed by fs-segment stack chaining); handler 0x6bb2fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bb1a0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 local_18 [16];
  undefined4 local_8;

  puStack_28 = (undefined1 *)0x6bb1bb;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  bVar3 = true;
  puStack_2c = &LAB_006bb2fb;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00408640(*(undefined4 *)(*(int *)(param_1 + 0x388) + 0x288),local_8);
  if (!bVar3) {
    FUN_00407eb8(*(int *)(param_1 + 0x388) + 0x288,local_8);
    FUN_006ba714(*(undefined4 *)(param_1 + 0x388),local_8);
  }
  iVar2 = FUN_006ba050(*(undefined4 *)(param_1 + 0x388));
  if (iVar2 == 0) {
    FUN_0051acd0(param_1);
  }
  else {
    iVar2 = FUN_006ba050(*(undefined4 *)(param_1 + 0x388));
    bVar3 = iVar2 == 1;
    if (bVar3) {
      FUN_00408640(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x388) + 0x28c) + 8),local_8);
      if (bVar3) {
        FUN_0051acd0(param_1);
        goto LAB_006bb2e5;
      }
    }
    if (param_3 < 0) {
      param_3 = 0;
    }
    iVar2 = FUN_0051c650(*(undefined4 *)PTR_DAT_007828e0);
    if (iVar2 < *(int *)PTR_DAT_0078221c + param_3) {
      param_3 = FUN_0051c650(*(undefined4 *)PTR_DAT_007828e0);
      param_3 = param_3 - *(int *)PTR_DAT_0078221c;
    }
    if (param_4 < 0) {
      param_4 = 0;
    }
    iVar2 = FUN_0051c644(*(undefined4 *)PTR_DAT_007828e0);
    if (iVar2 < *(int *)PTR_DAT_007821e4 + param_4) {
      param_4 = (param_4 + -0x14) - *(int *)PTR_DAT_007821e4;
    }
    FUN_00438c38(param_3,param_4,*(int *)PTR_DAT_0078221c + param_3,local_18,
                 *(int *)PTR_DAT_007821e4 + param_4);
    FUN_004edf50(param_1,local_18);
    if (*(char *)(param_1 + 0x59) == '\0') {
      FUN_0051acd8(param_1);
    }
  }
LAB_006bb2e5:
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_006bb302;
  puStack_2c = (undefined1 *)0x6bb2fa;
  thunk_FUN_00406e5c(&local_8,uStack_30,puVar1);
  return;
}
