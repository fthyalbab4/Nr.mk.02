// rea decompile_all
// name: FUN_004f5b9c
// address: 0x4f5b9c
// body: available
// range: 0x4f5b9c-0x4f5c25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f5baf (push 0x4f5c26 followed by fs-segment stack chaining); handler 0x4f5c26 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f5b9c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_004f5c26;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (PTR_DAT_00782974[0xc] != '\0') {
    puVar1 = &stack0xfffffffc;
    if (*(int *)(param_1 + 0x1d0) != 0) {
      FUN_0051cbb0(*(undefined4 *)PTR_DAT_007828e0,&local_8);
      iVar2 = FUN_00415c5c(*(undefined4 *)(param_1 + 0x1d0),local_8);
      puVar1 = puStack_10;
      if (iVar2 != 0) {
        ActivateKeyboardLayout(*(HKL *)(*(int *)PTR_DAT_007828e0 + 0x40),1);
        puVar1 = puStack_10;
      }
    }
    puStack_10 = puVar1;
    puVar1 = puStack_10;
    if (*(char *)(param_1 + 0x1cc) == '\0') {
      uVar3 = FUN_004f76a8(param_1);
      FUN_004fda54(uVar3,1);
      puVar1 = puStack_10;
    }
  }
  puStack_10 = puVar1;
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004f5c2d;
  puStack_14 = (undefined1 *)0x4f5c25;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
