// rea decompile_all
// name: FUN_00672ef8
// address: 0x672ef8
// body: available
// range: 0x672ef8-0x672f6b inclusive
// range: 0x672f73-0x672f82 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x672f32 (push 0x672f6c followed by fs-segment stack chaining); handler 0x672f6c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00672ef8(int param_1,undefined4 param_2)

{
  short *psVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;

  puStack_c = &stack0xfffffffc;
  if ((char)param_2 != *(char *)(param_1 + 0x29)) {
    *(char *)(param_1 + 0x29) = (char)param_2;
    iVar2 = *(int *)(param_1 + 0x20);
    local_8 = param_1;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
      psVar1 = (short *)(*(int *)(iVar2 + 0xc) + 0x1ac);
      *psVar1 = *psVar1 + 1;
      puStack_10 = &LAB_00672f6c;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      FUN_00672f84(param_1,param_1,param_2);
      (**(code **)(**(int **)(*(int *)(local_8 + 0x20) + 0xc) + 0x68))();
      puVar3 = puStack_c;
      *in_FS_OFFSET = uStack_14;
      puStack_c = (undefined1 *)0x672f80;
      puStack_10 = (undefined1 *)0x672f6b;
      FUN_004f2c1c(*(undefined4 *)(*(int *)(local_8 + 0x20) + 0xc),uStack_14,puVar3);
      return;
    }
    puStack_c = (undefined1 *)0x672f80;
    FUN_00672f84(param_1,param_1,param_2);
  }
  return;
}
