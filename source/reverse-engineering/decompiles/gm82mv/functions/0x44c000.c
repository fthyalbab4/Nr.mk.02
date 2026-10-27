// rea decompile_all
// name: FUN_0044c000
// address: 0x44c000
// body: available
// range: 0x44c000-0x44c0b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44c01e (push 0x44c0fe followed by fs-segment stack chaining); handler 0x44c0fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44c03b (push 0x44c0b2 followed by fs-segment stack chaining); handler 0x44c0b2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044c000(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  int local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  local_8 = 0;
  puStack_28 = &LAB_0044c0fe;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x44c02d;
  local_c = param_1;
  local_10 = (int *)FUN_0043c790(&PTR_FUN_00430700,1);
  puStack_34 = &LAB_0044c0b2;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  iVar4 = *(int *)(*(int *)(local_c + 0x10) + 8);
  puStack_30 = &stack0xfffffffc;
  if (-1 < iVar4 + -1) {
    local_14 = 0;
    puStack_30 = &stack0xfffffffc;
    do {
      iVar3 = FUN_00438ec4(*(undefined4 *)(local_c + 0x10),local_14);
      cVar2 = (**(code **)(**(int **)(iVar3 + 4) + 0x18))();
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(iVar3 + 4) + 0xc))(*(int **)(iVar3 + 4),&local_18);
        (**(code **)(*local_10 + 0x3c))(local_10,local_18,iVar3);
      }
      local_14 = local_14 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0044b8b0(local_c,local_10,&local_8);
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0044c0b9;
  puStack_34 = (undefined1 *)0x44c0b1;
  FUN_00405fdc(local_10,uStack_38,puVar1);
  return;
}
