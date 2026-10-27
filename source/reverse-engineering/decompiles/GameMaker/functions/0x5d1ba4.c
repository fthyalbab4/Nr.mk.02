// rea decompile_all
// name: FUN_005d1ba4
// address: 0x5d1ba4
// body: available
// range: 0x5d1ba4-0x5d1c64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d1bbf (push 0x5d1c65 followed by fs-segment stack chaining); handler 0x5d1c65 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d1ba4(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_005d1c65;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00409d1c(&local_8,param_1[1],&DAT_005cc42c);
  param_1[2] = 0;
  FUN_00409be0(param_1 + 1,&DAT_005cc42c,1,0);
  FUN_005d12d8(param_1,0);
  param_1[4] = 0;
  local_c = FUN_00409a18(local_8);
  if (-1 < local_c + -1) {
    iVar2 = 0;
    do {
      if (*(int *)(local_8 + iVar2 * 0xc) != 0) {
        (**(code **)(*param_1 + 4))(param_1,*(undefined4 *)(local_8 + 4 + iVar2 * 0xc),1);
        (**(code **)(*param_1 + 8))(param_1,*(undefined4 *)(local_8 + 8 + iVar2 * 0xc),1);
      }
      iVar2 = iVar2 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005d1c6c;
  puStack_20 = (undefined1 *)0x5d1c64;
  FUN_00409ce0(&local_8,&DAT_005cc42c,puVar1);
  return;
}
