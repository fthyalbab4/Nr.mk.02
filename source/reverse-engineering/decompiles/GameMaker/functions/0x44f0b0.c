// rea decompile_all
// name: FUN_0044f0b0
// address: 0x44f0b0
// body: available
// range: 0x44f0b0-0x44f123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44f0c8 (push 0x44f124 followed by fs-segment stack chaining); handler 0x44f124 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044f0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  puStack_1c = &LAB_0044f124;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = FUN_0043b048(*(undefined4 *)(*(int *)(param_4 + -4) + 0x14),*(undefined4 *)(param_4 + -8))
  ;
  FUN_0040b158(&local_8,*(undefined4 *)(iVar2 + 4));
  FUN_0040b184(&local_c,local_8,&DAT_0044f134);
  (**(code **)(*local_c + 0x3c))(local_c,param_1,param_2);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0044f12b;
  puStack_1c = (undefined1 *)0x44f11b;
  FUN_0040b140(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x44f123;
  FUN_0040b140(&local_8);
  return;
}
