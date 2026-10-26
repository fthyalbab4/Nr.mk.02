// rea decompile_all
// name: FUN_0065b2c4
// address: 0x65b2c4
// body: available
// range: 0x65b2c4-0x65b3a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65b2e8 (push 0x65b3a7 followed by fs-segment stack chaining); handler 0x65b3a7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b2c4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_20;
  undefined1 local_1c [24];

  puStack_34 = (undefined1 *)0x65b2dd;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_38 = &LAB_0065b3a7;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_20 = *(int *)(param_1 + 4) * 8;
  puStack_34 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (0 < local_20) {
    do {
      puStack_34 = puVar1;
      FUN_004047b8(*(undefined4 *)(param_1 + 4));
      iVar2 = FUN_004102e4();
      FUN_004047b8(*(undefined4 *)(param_1 + 4));
      iVar3 = FUN_004102e4();
      FUN_00409360(local_1c,*(int *)(param_1 + 8) + iVar2 * 0x18,&DAT_00615f70);
      FUN_00409360(*(int *)(param_1 + 8) + iVar2 * 0x18,*(int *)(param_1 + 8) + iVar3 * 0x18,
                   &DAT_00615f70);
      FUN_00409360(*(int *)(param_1 + 8) + iVar3 * 0x18,local_1c,&DAT_00615f70);
      local_20 = local_20 + -1;
      puVar1 = puStack_34;
    } while (local_20 != 0);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0065b3ae;
  puStack_38 = (undefined1 *)0x65b3a6;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
