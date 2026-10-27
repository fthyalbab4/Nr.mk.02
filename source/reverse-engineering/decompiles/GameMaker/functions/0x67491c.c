// rea decompile_all
// name: FUN_0067491c
// address: 0x67491c
// body: available
// range: 0x67491c-0x6749a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x674934 (push 0x6749a1 followed by fs-segment stack chaining); handler 0x6749a1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067491c(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_006749a1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  uVar3 = param_2 == (undefined4 *)0x0;
  if ((bool)uVar3) {
    puStack_18 = &stack0xfffffffc;
    FUN_00405a7c(*(undefined4 *)(param_1 + 0x78));
    uVar2 = FUN_00673500(&LAB_0066b28c,1,param_1);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
  }
  else {
    FUN_00405954(*param_2,&local_8);
    uVar2 = local_8;
    FUN_00405954(**(undefined4 **)(param_1 + 0x78),&local_c);
    FUN_00408640(uVar2,local_c);
    if ((bool)uVar3) {
      (**(code **)(**(int **)(param_1 + 0x78) + 8))(*(int **)(param_1 + 0x78),param_2);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006749a8;
  puStack_1c = (undefined1 *)0x6749a0;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
