// rea decompile_all
// name: FUN_0052b66c
// address: 0x52b66c
// body: available
// range: 0x52b66c-0x52b6d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52b682 (push 0x52b6d9 followed by fs-segment stack chaining); handler 0x52b6d9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052b66c(int *param_1,byte param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0052b6d9;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar2 = FUN_00528d78(param_1[2]);
  if (*(int *)(iVar2 + 8) <= (int)(uint)param_2) {
    iVar2 = FUN_00528d78(param_1[2]);
    if (0 < *(int *)(iVar2 + 8)) {
      FUN_0040b9d0(&LAB_0051eb0c,&local_8);
      (**(code **)(*param_1 + 0x10))(param_1,1,local_8);
      param_2 = 0;
    }
  }
  puVar1 = puStack_14;
  *(byte *)(param_1 + 4) = param_2;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0052b6e0;
  puStack_18 = (undefined1 *)0x52b6d8;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
