// rea decompile_all
// name: FUN_004f1264
// address: 0x4f1264
// body: available
// range: 0x4f1264-0x4f1300 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f127b (push 0x4f1301 followed by fs-segment stack chaining); handler 0x4f1301 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f1264(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004f1301;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar2 = FUN_00405c98(param_2,&PTR_FUN_00509914);
  if (cVar2 == '\0') {
    FUN_0043c620(param_1,param_2);
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x5c))();
    FUN_0050aef0(param_2,uVar3);
    FUN_0050b0dc(param_2,param_1[0x20]);
    FUN_004ee6a0(param_1,&local_8);
    FUN_0050ad88(param_2,local_8);
    FUN_0050b1fc(param_2,*(undefined1 *)((int)param_1 + 0x59));
    (**(code **)(*param_2 + 0x38))();
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004f1308;
  puStack_1c = (undefined1 *)0x4f1300;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
