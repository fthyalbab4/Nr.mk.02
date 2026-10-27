// rea decompile_all
// name: FUN_0065bcd4
// address: 0x65bcd4
// body: available
// range: 0x65bcd4-0x65bd6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65bd08 (push 0x65bd6c followed by fs-segment stack chaining); handler 0x65bd6c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065bcd4(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_FS_OFFSET;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c [6];

  puVar4 = local_1c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_2c = (undefined1 *)0x65bcfd;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_30 = &LAB_0065bd6c;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  iVar3 = *(int *)(param_1 + 4);
  puStack_2c = &stack0xfffffffc;
  iVar2 = FUN_0065b3d8(param_1,local_1c,0);
  iVar2 = iVar2 + -1;
  if (iVar2 == -2) {
    iVar2 = *(int *)(param_1 + 4) + -1;
  }
  if (iVar2 < 0) {
    param_3[2] = 0;
    param_3[3] = 0;
    *param_3 = 0;
  }
  else {
    FUN_00409360(param_3,*(int *)(param_1 + 8) + iVar2 * 0x18,&DAT_00615f70);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = iVar3 + -1;
  puStack_30 = &LAB_0065bd73;
  iStack_34 = 0x65bd6b;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
