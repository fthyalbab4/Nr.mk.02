// rea decompile_all
// name: FUN_0048d8ec
// address: 0x48d8ec
// body: available
// range: 0x48d8ec-0x48d977 inclusive
// range: 0x48d97f-0x48d9dd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48d906 (push 0x48d9de followed by fs-segment stack chaining); handler 0x48d9de lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48d932 (push 0x48d978 followed by fs-segment stack chaining); handler 0x48d978 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d8ec(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  int *local_c;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_0048d9de;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_1;
  if (*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) == 0) {
    puStack_24 = (undefined1 *)0x48d924;
    puStack_18 = &stack0xfffffffc;
    local_c = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
    puStack_28 = &LAB_0048d978;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    (**(code **)(*local_c + 0x44))(local_c,*(undefined4 *)(local_8 + 0x48));
    (**(code **)(*local_c + 0x38))(local_c,*(undefined4 *)(local_8 + 0x4c));
    FUN_0045f6ac(*(undefined4 *)(local_8 + 0x1b0),local_c);
    puVar2 = puStack_24;
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = (undefined1 *)0x48d97f;
    puStack_28 = (undefined1 *)0x48d977;
    FUN_00405a7c(local_c,uStack_2c,puVar2);
    return;
  }
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0xc);
  puStack_24 = (undefined1 *)0x48d998;
  cVar3 = FUN_00405c98(uVar1,&PTR_FUN_004587d4);
  if (cVar3 == '\0') {
    puStack_24 = (undefined1 *)0x48d9b4;
    FUN_0040b75c(PTR_PTR_007819d4,&local_10);
    puStack_24 = (undefined1 *)0x48d9c3;
    FUN_0041beb8(&PTR_LAB_0042f068,1,local_10);
    puStack_24 = (undefined1 *)0x48d9c8;
    FUN_00406618();
  }
  else {
    puStack_24 = (undefined1 *)0x48d9a3;
    FUN_00462a64(uVar1);
  }
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0048d9e5;
  puStack_1c = (undefined1 *)0x48d9dd;
  thunk_FUN_00406e5c(&local_10,uStack_20,puVar2);
  return;
}
