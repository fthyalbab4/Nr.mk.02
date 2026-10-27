// rea decompile_all
// name: FUN_004bdff8
// address: 0x4bdff8
// body: available
// range: 0x4bdff8-0x4be0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4be013 (push 0x4be0e8 followed by fs-segment stack chaining); handler 0x4be0e8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bdff8(int *param_1,int param_2,char param_3)

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
  puStack_20 = &LAB_004be0e8;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar2 = FUN_004061f8(param_2,&PTR_FUN_004d6790);
  if (cVar2 == '\0') goto LAB_004be0cd;
  if (param_3 == '\0') {
LAB_004be056:
    FUN_004bb690(param_1,*(undefined4 *)(param_2 + 100));
  }
  else {
    FUN_004bb658(param_1,&local_8);
    uVar3 = local_8 == 0;
    if ((bool)uVar3) goto LAB_004be056;
    FUN_004bb658(param_1,&local_c);
    FUN_0040891c(local_c,param_1[2]);
    if ((bool)uVar3) goto LAB_004be056;
  }
  if (param_3 == '\0') {
LAB_004be06f:
    (**(code **)(*param_1 + 0x74))(param_1,*(undefined1 *)(param_2 + 0x6a));
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x5c))();
    if (cVar2 == '\x01') goto LAB_004be06f;
  }
  if ((param_3 == '\0') || (param_1[0x20] == 0)) {
    FUN_00408194(param_1 + 0x20,*(undefined4 *)(param_2 + 0x7c));
  }
  if ((param_3 == '\0') || (*(char *)((int)param_1 + 0x59) == '\x01')) {
    FUN_004bb578(param_1,*(undefined1 *)(param_2 + 0x86));
  }
  if ((param_3 == '\0') || (*(short *)((int)param_1 + 0x112) == 0)) {
    param_1[0x44] = *(int *)(param_2 + 0x40);
    param_1[0x45] = *(int *)(param_2 + 0x44);
  }
LAB_004be0cd:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004be0ef;
  puStack_20 = (undefined1 *)0x4be0e7;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
