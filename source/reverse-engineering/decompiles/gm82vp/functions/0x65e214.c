// rea decompile_all
// name: FUN_0065e214
// address: 0x65e214
// body: available
// range: 0x65e214-0x65e34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65e238 (push 0x65e34c followed by fs-segment stack chaining); handler 0x65e34c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065e214(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int local_28;
  undefined1 local_1c [24];

  puStack_3c = (undefined1 *)0x65e22d;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_40 = &LAB_0065e34c;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_28 = *(int *)(param_1 + 4) * 8 * *(int *)(param_1 + 8);
  puStack_3c = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (0 < local_28) {
    do {
      puStack_3c = puVar1;
      FUN_004047b8(*(undefined4 *)(param_1 + 4));
      iVar2 = FUN_004102e4();
      FUN_004047b8(*(undefined4 *)(param_1 + 4));
      iVar3 = FUN_004102e4();
      FUN_004047b8(*(undefined4 *)(param_1 + 8));
      iVar4 = FUN_004102e4();
      FUN_004047b8(*(undefined4 *)(param_1 + 8));
      iVar5 = FUN_004102e4();
      FUN_00409360(local_1c,*(int *)(*(int *)(param_1 + 0xc) + iVar2 * 4) + iVar4 * 0x18,
                   &DAT_00615f70);
      FUN_00409360(*(int *)(*(int *)(param_1 + 0xc) + iVar2 * 4) + iVar4 * 0x18,
                   *(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) + iVar5 * 0x18,&DAT_00615f70);
      FUN_00409360(*(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) + iVar5 * 0x18,local_1c,
                   &DAT_00615f70);
      local_28 = local_28 + -1;
      puVar1 = puStack_3c;
    } while (local_28 != 0);
  }
  puVar1 = puStack_3c;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0065e353;
  puStack_40 = (undefined1 *)0x65e34b;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
