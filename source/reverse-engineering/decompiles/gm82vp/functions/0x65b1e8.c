// rea decompile_all
// name: FUN_0065b1e8
// address: 0x65b1e8
// body: available
// range: 0x65b1e8-0x65b2b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65b20f (push 0x65b2b5 followed by fs-segment stack chaining); handler 0x65b2b5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b1e8(int param_1,char param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  int local_28;
  int local_24;
  undefined1 local_1c [24];

  puStack_38 = (undefined1 *)0x65b204;
  FUN_00408ff8(local_1c,&DAT_00615f70);
  puStack_3c = &LAB_0065b2b5;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_28 = *(int *)(param_1 + 4) + -1;
  puStack_38 = &stack0xfffffffc;
  if (0 < local_28) {
    local_24 = 1;
    puStack_38 = &stack0xfffffffc;
    do {
      iVar3 = local_24;
      if (0 < local_24) {
        do {
          iVar2 = FUN_0065a204(*(int *)(param_1 + 8) + -0x18 + iVar3 * 0x18,
                               *(int *)(param_1 + 8) + iVar3 * 0x18);
          if (0 < iVar2 != (bool)param_2) break;
          FUN_00409360(local_1c,*(int *)(param_1 + 8) + -0x18 + iVar3 * 0x18,&DAT_00615f70);
          FUN_00409360(*(int *)(param_1 + 8) + -0x18 + iVar3 * 0x18,
                       *(int *)(param_1 + 8) + iVar3 * 0x18,&DAT_00615f70);
          FUN_00409360(*(int *)(param_1 + 8) + iVar3 * 0x18,local_1c,&DAT_00615f70);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_24 = local_24 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0065b2bc;
  puStack_3c = (undefined1 *)0x65b2b4;
  FUN_004090d0(local_1c,&DAT_00615f70,puVar1);
  return;
}
