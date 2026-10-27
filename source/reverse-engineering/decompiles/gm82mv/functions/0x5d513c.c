// rea decompile_all
// name: FUN_005d513c
// address: 0x5d513c
// body: available
// range: 0x5d513c-0x5d51c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d5164 (push 0x5d51c9 followed by fs-segment stack chaining); handler 0x5d51c9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d513c(int param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  for (iVar2 = param_3; -1 < iVar2; iVar2 = iVar2 + -1) {
  }
  puStack_1c = &LAB_005d51c9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_005d4bc4(param_1);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  if (*(int *)(param_1 + 0x138) == 0) {
    FUN_0040b9d0(PTR_LAB_00689624,&local_8);
    FUN_005d5860(param_1,local_8);
  }
  else {
    (**(code **)(param_1 + 0x138))
              (*(undefined4 *)(param_1 + 0x13c),&stack0xffffffec,param_3,param_4,param_5,param_6);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005d51d0;
  puStack_1c = (undefined1 *)0x5d51c8;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
