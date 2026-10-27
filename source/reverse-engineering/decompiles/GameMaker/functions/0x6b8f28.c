// rea decompile_all
// name: FUN_006b8f28
// address: 0x6b8f28
// body: available
// range: 0x6b8f28-0x6b8fbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b8f46 (push 0x6b8fbd followed by fs-segment stack chaining); handler 0x6b8fbd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b8f28(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x6b8f3b;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_18 = &LAB_006b8fbd;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  cVar3 = FUN_006b3358(param_1);
  if (cVar3 != '\0') {
    iVar1 = param_1[0xbb];
    FUN_006b1018(param_1,3,iVar1,iVar1,iVar1,iVar1);
    FUN_006b3510(param_1,local_8);
    if (*(short *)((int)param_1 + 0x2d2) != 0) {
      (*(code *)param_1[0xb4])(param_1[0xb5],param_1);
    }
    FUN_006b281c(param_1);
    (**(code **)(*param_1 + 0xe8))();
    FUN_004eed28(param_1);
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006b8fc4;
  puStack_18 = (undefined1 *)0x6b8fbc;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar2);
  return;
}
