// rea decompile_all
// name: FUN_0065cb40
// address: 0x65cb40
// body: available
// range: 0x65cb40-0x65cbd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65cb70 (push 0x65cbd6 followed by fs-segment stack chaining); handler 0x65cbd6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065cb40(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_24;
  int local_20;
  undefined4 local_1c [6];

  puVar4 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  puStack_34 = (undefined1 *)0x65cb65;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_38 = &LAB_0065cbd6;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_24 = *(int *)(param_1 + 4);
  puStack_34 = &stack0xfffffffc;
  if (-1 < local_24 + -1) {
    local_20 = 0;
    puStack_34 = &stack0xfffffffc;
    do {
      iVar2 = *(int *)(param_1 + 8);
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        do {
          FUN_00409360(*(int *)(*(int *)(param_1 + 0xc) + local_20 * 4) + iVar3 * 0x18,local_1c,
                       &DAT_00615f70);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0065cbdd;
  puStack_38 = (undefined1 *)0x65cbd5;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
