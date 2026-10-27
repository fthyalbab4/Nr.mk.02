// rea decompile_all
// name: FUN_00543058
// address: 0x543058
// body: available
// range: 0x543058-0x543139 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x543089 (push 0x54313a followed by fs-segment stack chaining); handler 0x54313a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00543058(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_FS_OFFSET;
  undefined1 uVar5;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  int local_8;

  local_18 = 0;
  puStack_24 = (undefined1 *)0x543076;
  local_14 = param_3;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = (undefined1 *)0x54307e;
  thunk_FUN_00407ad0(local_c);
  puStack_28 = &LAB_0054313a;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  iVar2 = local_8;
  puStack_24 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_24 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_24 = &stack0xfffffffc;
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  iVar2 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
    iVar2 = FUN_00407488(&local_c,local_c);
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + -4);
  }
  iVar2 = (iVar4 - iVar3) + 1;
  uVar5 = iVar2 == 0;
  FUN_00408984(local_c,iVar2,iVar3);
  FUN_0040891c(local_18,local_8);
  if ((bool)uVar5) {
    FUN_00408194(local_14,local_c);
  }
  else {
    FUN_00408678(local_14,local_c,local_8);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = (int)&local_18;
  puStack_28 = &LAB_00543141;
  iStack_2c = 0x54312c;
  thunk_FUN_004072d8(&local_18,&local_18,puVar1);
  iStack_2c = 0x543139;
  thunk_FUN_004072fc(&local_c,2);
  return;
}
