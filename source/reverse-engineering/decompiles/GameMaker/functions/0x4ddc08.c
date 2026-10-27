// rea decompile_all
// name: FUN_004ddc08
// address: 0x4ddc08
// body: available
// range: 0x4ddc08-0x4ddcaf inclusive
// range: 0x4ddcb7-0x4ddcda inclusive
// range: 0x4ddcf4-0x4ddcfb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ddc50 (push 0x4ddcdb followed by fs-segment stack chaining); handler 0x4ddcdb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ddc86 (push 0x4ddcb0 followed by fs-segment stack chaining); handler 0x4ddcb0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004ddc08(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_18;
  char local_11;
  int local_10;
  undefined2 local_a;
  int local_8;

  puStack_24 = (undefined1 *)0x4ddc1c;
  local_10 = param_1;
  cVar3 = FUN_004dda18();
  if (cVar3 != '\0') {
    return 0;
  }
  puStack_24 = (undefined1 *)0x4ddc2b;
  local_a = FUN_004dda54(param_2);
  local_18 = *(int *)(local_10 + 0x38);
  puStack_24 = (undefined1 *)0x4ddc45;
  FUN_0044dd6c(DAT_0078823c,&local_18);
  puStack_28 = &LAB_004ddcdb;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar2 = local_8;
  do {
    local_8 = iVar2;
    local_11 = '\0';
    puStack_30 = (undefined1 *)0x4ddc65;
    local_8 = FUN_004dd678(local_10,local_a,2);
    puVar1 = puStack_24;
    if (local_8 != 0) {
      puStack_30 = (undefined1 *)0x4ddc7b;
      FUN_0044dd6c(DAT_0078823c,&local_8);
      puStack_34 = &LAB_004ddcb0;
      uStack_38 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_38;
      puStack_30 = &stack0xfffffffc;
      local_11 = FUN_004ddab4(&local_8,0);
      puVar1 = puStack_30;
      *in_FS_OFFSET = uStack_38;
      puStack_30 = (undefined1 *)0x4ddcb7;
      puStack_34 = (undefined1 *)0x4ddcaf;
      uVar4 = (**(code **)(*DAT_0078823c + 4))(DAT_0078823c,*DAT_0078823c,puVar1);
      return uVar4;
    }
  } while ((local_18 != 0) && (iVar2 = 0, local_11 == '\x02'));
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &DAT_004ddce2;
  puStack_28 = (undefined1 *)0x4ddcda;
  uVar4 = (**(code **)(*DAT_0078823c + 4))(DAT_0078823c,*DAT_0078823c,puVar1);
  return uVar4;
}
