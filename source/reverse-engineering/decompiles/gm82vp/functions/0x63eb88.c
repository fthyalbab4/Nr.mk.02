// rea decompile_all
// name: FUN_0063eb88
// address: 0x63eb88
// body: available
// range: 0x63eb88-0x63ec61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x63eba6 (push 0x63ec62 followed by fs-segment stack chaining); handler 0x63ec62 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063eb88(void)

{
  undefined1 *puVar1;
  int iVar2;
  LPCWSTR lpFileName;
  undefined4 *in_FS_OFFSET;
  int in_stack_0000000c;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_0063ec62;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if (*PTR_PTR_0068909c == '\0') {
LAB_0063ec12:
    puStack_24 = puVar1;
    FUN_004083c0(&local_18,*(undefined4 *)(in_stack_0000000c + 0x10));
    lpFileName = (LPCWSTR)FUN_00408220(local_18);
    DeleteFileW(lpFileName);
  }
  else {
    FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x10));
    iVar2 = FUN_00408d44(&DAT_0063ec7c,local_8);
    if (iVar2 == 0) {
      FUN_004083c0(&local_c,*(undefined4 *)(in_stack_0000000c + 0x10));
      iVar2 = FUN_00408d44(&DAT_0063ec8c,local_c);
      puVar1 = puStack_24;
      if (iVar2 == 0) goto LAB_0063ec12;
    }
    FUN_0040778c(&local_14,"In Secure mode you cannot delete file ",
                 *(undefined4 *)(in_stack_0000000c + 0x10));
    FUN_004083c0(&local_10,local_14);
    FUN_0061156c(local_10,0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0063ec69;
  puStack_28 = (undefined1 *)0x63ec4c;
  thunk_FUN_004072d8(&local_18,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x63ec54;
  FUN_004072d8(&local_14);
  puStack_28 = (undefined1 *)0x63ec61;
  thunk_FUN_004072fc(&local_10,3);
  return;
}
