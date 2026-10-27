// rea decompile_all
// name: FUN_0049d228
// address: 0x49d228
// body: available
// range: 0x49d228-0x49d2c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x49d240 (push 0x49d2c7 followed by fs-segment stack chaining); handler 0x49d2c7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049d228(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_0049d2c7;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar3 = 0;
  puVar2 = (undefined4 *)(in_stack_00000004 + -0x40);
  do {
    local_10 = *puVar2;
    local_c = local_c & 0xffffff00;
    FUN_00417c88(L"%.6x",&local_10,0,&local_8);
    uVar4 = local_8;
    FUN_00408310(&local_18,CONCAT22((short)((uint)iVar3 >> 0x10),(short)iVar3 + 0x41));
    FUN_00408678(&local_14,L"Color",local_18);
    FUN_0043bc54(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x44) + 0x70),local_14,uVar4);
    puVar1 = puStack_28;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0x10);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0049d2ce;
  puStack_2c = (undefined1 *)0x49d2be;
  thunk_FUN_004072fc(&local_18,2,puVar1);
  puStack_2c = (undefined1 *)0x49d2c6;
  thunk_FUN_004072d8(&local_8);
  return;
}
