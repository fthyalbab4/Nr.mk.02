// rea decompile_all
// name: FUN_004f1040
// address: 0x4f1040
// body: available
// range: 0x4f1040-0x4f112f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f105b (push 0x4f1130 followed by fs-segment stack chaining); handler 0x4f1130 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f1040(int *param_1,int param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004f1130;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar2 = FUN_00405c98(param_2,&PTR_FUN_00509914);
  if (cVar2 == '\0') goto LAB_004f1115;
  if (param_3 == '\0') {
LAB_004f109e:
    FUN_004ee6d8(param_1,*(undefined4 *)(param_2 + 100));
  }
  else {
    FUN_004ee6a0(param_1,&local_8);
    uVar3 = local_8 == 0;
    if ((bool)uVar3) goto LAB_004f109e;
    FUN_004ee6a0(param_1,&local_c);
    FUN_00408640(local_c,param_1[2]);
    if ((bool)uVar3) goto LAB_004f109e;
  }
  if (param_3 == '\0') {
LAB_004f10b7:
    (**(code **)(*param_1 + 0x74))(param_1,*(undefined1 *)(param_2 + 0x6a));
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x5c))();
    if (cVar2 == '\x01') goto LAB_004f10b7;
  }
  if ((param_3 == '\0') || (param_1[0x20] == 0)) {
    FUN_00407eb8(param_1 + 0x20,*(undefined4 *)(param_2 + 0x7c));
  }
  if ((param_3 == '\0') || (*(char *)((int)param_1 + 0x59) == '\x01')) {
    FUN_004ee5c0(param_1,*(undefined1 *)(param_2 + 0x86));
  }
  if ((param_3 == '\0') || (*(short *)((int)param_1 + 0x112) == 0)) {
    param_1[0x44] = *(int *)(param_2 + 0x40);
    param_1[0x45] = *(int *)(param_2 + 0x44);
  }
LAB_004f1115:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004f1137;
  puStack_20 = (undefined1 *)0x4f112f;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
