// rea decompile_all
// name: FUN_0065bab0
// address: 0x65bab0
// body: available
// range: 0x65bab0-0x65bb74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65bae0 (push 0x65bb75 followed by fs-segment stack chaining); handler 0x65bb75 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065bab0(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_FS_OFFSET;
  int iStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_20;
  undefined4 local_1c [6];

  puVar5 = local_1c;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_30 = (undefined1 *)0x65bad5;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_34 = &LAB_0065bb75;
  iStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_38;
  iVar4 = *(int *)(param_1 + 4);
  puStack_30 = &stack0xfffffffc;
  iVar2 = FUN_0065b3d8(param_1,local_1c,0);
  if (-1 < iVar2) {
    iVar3 = FUN_0065a204(*(int *)(param_1 + 8) + iVar2 * 0x18,local_1c);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 4) + -2;
      if (iVar2 <= iVar3) {
        local_20 = (iVar3 - iVar2) + 1;
        do {
          FUN_00409360(*(int *)(param_1 + 8) + iVar2 * 0x18,
                       *(int *)(param_1 + 8) + 0x18 + iVar2 * 0x18,&DAT_00615f70);
          FUN_00409360(*(int *)(param_1 + 0xc) + iVar2 * 0x18,
                       *(int *)(param_1 + 0xc) + 0x18 + iVar2 * 0x18,&DAT_00615f70);
          iVar2 = iVar2 + 1;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    }
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = iVar4 + -1;
  puStack_34 = &LAB_0065bb7c;
  iStack_38 = 0x65bb74;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
