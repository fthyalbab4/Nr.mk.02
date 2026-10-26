// rea decompile_all
// name: FUN_004436f8
// address: 0x4436f8
// body: available
// range: 0x4436f8-0x4437a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x443717 (push 0x4437a5 followed by fs-segment stack chaining); handler 0x4437a5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004436f8(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_c;
  int local_8;

  puStack_14 = (undefined1 *)0x44370c;
  local_8 = param_2;
  FUN_00407ad0(param_2);
  puStack_18 = &LAB_004437a5;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = local_8;
  puStack_14 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_14 = &stack0xfffffffc, *(short *)(local_8 + -10) != 1)) {
    puStack_14 = &stack0xfffffffc;
    iVar2 = FUN_004074b8(&local_8,local_8,0);
  }
  local_c = 0;
  if (iVar2 != 0) {
    local_c = *(int *)(iVar2 + -4);
  }
  if (0xff < local_c) {
    local_c = 0xff;
  }
  FUN_00441578(param_1,&local_c,1);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
    iVar2 = FUN_004074b8(&local_8,local_8,0);
  }
  FUN_00441578(param_1,iVar2,local_c);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004437ac;
  puStack_18 = (undefined1 *)0x4437a4;
  FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
