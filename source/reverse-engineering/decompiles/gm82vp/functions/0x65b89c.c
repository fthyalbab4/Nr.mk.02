// rea decompile_all
// name: FUN_0065b89c
// address: 0x65b89c
// body: available
// range: 0x65b89c-0x65b9de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65b8e6 (push 0x65b9df followed by fs-segment stack chaining); handler 0x65b9df lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b89c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_FS_OFFSET;
  int iStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  int local_3c;
  undefined4 local_34 [6];
  undefined4 local_1c [6];

  puVar4 = local_34;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_4c = (undefined1 *)0x65b8cd;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_4c = (undefined1 *)0x65b8db;
  FUN_0040923c(local_34,&DAT_00615f70);
  puStack_50 = &LAB_0065b9df;
  iStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_54;
  puStack_4c = &stack0xfffffffc;
  iVar2 = FUN_00409c34(*(undefined4 *)(param_1 + 0xc));
  if (iVar2 <= *(int *)(param_1 + 4)) {
    FUN_00409dfc(param_1 + 8,&DAT_00658bf4,1,*(int *)(param_1 + 4) + 0x10);
    FUN_00409dfc(param_1 + 0xc,&DAT_00658bf4,1,*(int *)(param_1 + 4) + 0x10);
  }
  iVar2 = *(int *)(param_1 + 4) + -1;
  iVar1 = FUN_0065b4b8(param_1,local_1c,0);
  iVar1 = iVar1 + 1;
  iVar3 = *(int *)(param_1 + 4) + -1;
  if (iVar1 - iVar3 == 0 || iVar1 < iVar3) {
    local_3c = (iVar1 - iVar3) + -1;
    do {
      FUN_00409360(*(int *)(param_1 + 8) + 0x18 + iVar3 * 0x18,*(int *)(param_1 + 8) + iVar3 * 0x18,
                   &DAT_00615f70);
      FUN_00409360(*(int *)(param_1 + 0xc) + 0x18 + iVar3 * 0x18,
                   *(int *)(param_1 + 0xc) + iVar3 * 0x18,&DAT_00615f70);
      iVar3 = iVar3 + -1;
      local_3c = local_3c + 1;
    } while (local_3c != 0);
  }
  FUN_00409360(*(int *)(param_1 + 8) + iVar1 * 0x18,local_1c,&DAT_00615f70);
  FUN_00409360(*(int *)(param_1 + 0xc) + iVar1 * 0x18,local_34,&DAT_00615f70);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  *in_FS_OFFSET = iVar2;
  puStack_50 = &LAB_0065b9e6;
  iStack_54 = 0x65b9de;
  FUN_00409120(local_34,&DAT_00615f70,2);
  return;
}
