// rea decompile_all
// name: FUN_00503154
// address: 0x503154
// body: available
// range: 0x503154-0x503212 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50316b (push 0x503213 followed by fs-segment stack chaining); handler 0x503213 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503154(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_00503213;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = (**(code **)(*param_1 + 0xec))();
  param_1[0xc6] = iVar2;
  if (param_1[0xbd] != 0) {
    FUN_00503268(param_1,&local_8);
    local_c = local_8;
    iVar2 = 0;
    if (local_8 != 0) {
      iVar2 = *(int *)(local_8 + -4);
    }
    if (iVar2 == 0) {
      FUN_004bb690(param_1[0xbd],param_1[0xbb]);
    }
    else {
      FUN_00503268(param_1,&local_10);
      FUN_004bb690(param_1[0xbd],local_10);
    }
    FUN_00477a54(param_1[0xbd]);
  }
  if (*(short *)((int)param_1 + 0x312) != 0) {
    (*(code *)param_1[0xc4])(param_1[0xc5],param_1);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0050321a;
  puStack_1c = (undefined1 *)0x50320a;
  thunk_FUN_004072d8(&local_10,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x503212;
  thunk_FUN_004072d8(&local_8);
  return;
}
