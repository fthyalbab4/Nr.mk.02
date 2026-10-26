// rea decompile_all
// name: FUN_0051fad4
// address: 0x51fad4
// body: available
// range: 0x51fad4-0x51fb91 inclusive
// range: 0x51fb99-0x51fb9e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51fb02 (push 0x51fb92 followed by fs-segment stack chaining); handler 0x51fb92 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051fad4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined2 local_16;
  int local_14;
  int local_c;
  int *local_8;

  if (*(int *)(param_1 + 0x10) != 0) {
    puStack_24 = (undefined1 *)0x51faf4;
    local_8 = (int *)FUN_00405fac(&LAB_004319cc,1);
    puStack_28 = &LAB_0051fb92;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    iVar2 = *(int *)(param_1 + 0x14) + 0xe + *(int *)(param_1 + 0x18);
    puStack_24 = &stack0xfffffffc;
    (**(code **)(*local_8 + 4))(local_8,iVar2);
    FUN_00404f38(&local_16,0xe,0);
    local_16 = 0x4d42;
    local_c = *(int *)(param_1 + 0x14) + 0xe;
    local_14 = iVar2;
    (**(code **)(*local_8 + 0x10))(local_8,&local_16,0xe);
    (**(code **)(*local_8 + 0x10))
              (local_8,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
    (**(code **)(*local_8 + 0x10))
              (local_8,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    FUN_0043c854(local_8);
    (**(code **)(**(int **)(param_1 + 4) + 0x5c))(*(int **)(param_1 + 4),local_8);
    puVar1 = puStack_24;
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x51fb99;
    puStack_28 = (undefined1 *)0x51fb91;
    FUN_00405fdc(local_8,uStack_2c,puVar1);
    return;
  }
  return;
}
