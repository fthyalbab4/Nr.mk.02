// rea decompile_all
// name: FUN_0049d308
// address: 0x49d308
// body: available
// range: 0x49d308-0x49d3a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x49d31e (push 0x49d3a7 followed by fs-segment stack chaining); handler 0x49d3a7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049d308(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_0049d3a7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar4 = 0;
  puVar3 = (undefined4 *)(in_stack_00000004 + -0x40);
  do {
    FUN_00408310(&local_10,CONCAT22((short)((uint)iVar4 >> 0x10),(short)iVar4 + 0x41));
    FUN_00408678(&local_c,L"Color",local_10);
    FUN_0043b2fc(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x44) + 0x70),local_c,&local_8);
    if (local_8 == 0) {
      *puVar3 = 0xffffffff;
    }
    else {
      FUN_00408678(&local_14,&DAT_0049d3d8,local_8);
      uVar2 = FUN_00416600(local_14);
      *puVar3 = uVar2;
    }
    puVar1 = puStack_20;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 0x10);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0049d3ae;
  puStack_24 = (undefined1 *)0x49d3a6;
  thunk_FUN_004072fc(&local_14,4,puVar1);
  return;
}
