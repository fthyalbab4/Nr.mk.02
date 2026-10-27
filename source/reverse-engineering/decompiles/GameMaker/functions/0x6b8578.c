// rea decompile_all
// name: FUN_006b8578
// address: 0x6b8578
// body: available
// range: 0x6b8578-0x6b862c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b8595 (push 0x6b862d followed by fs-segment stack chaining); handler 0x6b862d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b8578(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_24 = &LAB_006b862d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x28c) + 0x40))();
  if (cVar2 != '\0') {
    local_8 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
    iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
    if (-1 < iVar3 + -1) {
      local_c = 0;
      do {
        FUN_006b7d0c(param_1,local_c,&local_10);
        (**(code **)(*local_8 + 0x38))(local_8,local_10);
        local_c = local_c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_004cf2f4(*(undefined4 *)(param_1 + 0x28c),&local_14);
    (**(code **)(*local_8 + 0x7c))(local_8,local_14);
    FUN_00405a7c(local_8);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006b8634;
  puStack_24 = (undefined1 *)0x6b8624;
  thunk_FUN_00406e5c(&local_14,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x6b862c;
  thunk_FUN_00406e5c(&local_10);
  return;
}
