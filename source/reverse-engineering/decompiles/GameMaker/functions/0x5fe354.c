// rea decompile_all
// name: FUN_005fe354
// address: 0x5fe354
// body: available
// range: 0x5fe354-0x5fe3e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fe377 (push 0x5fe3ea followed by fs-segment stack chaining); handler 0x5fe3ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fe354(int param_1,int *param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  int local_10;
  int *local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_14 = 0;
  puStack_24 = &LAB_005fe3ea;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_2;
  local_8 = param_1;
  if (param_4 == 0) {
    local_10 = *(int *)(param_1 + 0xd4);
    FUN_005e02b4(&local_10);
  }
  else {
    local_10 = param_4;
    puStack_20 = &stack0xfffffffc;
  }
  iVar2 = local_10;
  if (param_3 < 0) {
    param_3 = FUN_005fe6bc(local_8,1);
  }
  if (SBORROW4(param_3,1)) {
    FUN_00405944();
  }
  if (-1 < param_3 + -1) {
    do {
      FUN_005fe830(local_8,iVar2,&local_14);
      (**(code **)(*local_c + 0x38))(local_c,local_14);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005fe3f1;
  puStack_24 = (undefined1 *)0x5fe3e9;
  thunk_FUN_00406e5c(&local_14,uStack_28,puVar1);
  return;
}
