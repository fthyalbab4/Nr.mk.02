// rea decompile_all
// name: FUN_0041b4a0
// address: 0x41b4a0
// body: available
// range: 0x41b4a0-0x41b5a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41b4bf (push 0x41b5a2 followed by fs-segment stack chaining); handler 0x41b5a2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041b4a0(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_0041b5a2;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar3 = 1;
  iVar4 = param_2 + 0x2c;
  local_c = param_2;
  local_8 = param_1;
  do {
    FUN_0041b460(iVar3 + 0x43,iVar3 + -1,&PTR_LAB_0067cc64,&local_10,0xb);
    FUN_00408194(iVar4,local_10,&stack0xfffffffc);
    FUN_0041b460(iVar3 + 0x37,iVar3 + -1,&PTR_LAB_0067cc94,&local_14,0xb);
    FUN_00408194(iVar4 + 0x30,local_14,&stack0xfffffffc);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 != 0xd);
  iVar3 = 1;
  iVar4 = local_c + 0x8c;
  do {
    iVar2 = (iVar3 + 5) % 7;
    FUN_0041b460(iVar2 + 0x31,iVar3 + -1,&PTR_LAB_0067ccc4,&local_18,6);
    FUN_00408194(iVar4,local_18,&stack0xfffffffc);
    FUN_0041b460(iVar2 + 0x2a,iVar3 + -1,&PTR_LAB_0067cce0,&local_1c,6);
    FUN_00408194(iVar4 + 0x1c,local_1c,&stack0xfffffffc);
    puVar1 = puStack_2c;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 != 8);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0041b5a9;
  puStack_30 = (undefined1 *)0x41b5a1;
  thunk_FUN_004072fc(&local_1c,4,puVar1);
  return;
}
