// rea decompile_all
// name: FUN_005ca8d4
// address: 0x5ca8d4
// body: available
// range: 0x5ca8d4-0x5caa07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ca8ee (push 0x5caa08 followed by fs-segment stack chaining); handler 0x5caa08 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ca8d4(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  local_1c = (int *)0x0;
  local_20 = 0;
  puStack_2c = &LAB_005caa08;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_005ca774(param_1,&local_8);
  if (local_8 == 0) {
    if (*(char *)(param_1 + 0x5c) != '\0') {
      FUN_0040b75c(PTR_PTR_00782748,&local_20);
      FUN_005c4098(local_20);
    }
  }
  else {
    FUN_005ca774(param_1,&local_c);
    (**(code **)(*local_c + 0x20))();
    FUN_0040b250();
    FUN_005ca774(param_1,&local_10);
    (**(code **)(*local_10 + 0x24))();
    FUN_0040b250();
    FUN_005ca774(param_1,&local_14);
    (**(code **)(*local_14 + 0x28))();
    FUN_0040b250();
    FUN_005ca774(param_1,&local_18);
    (**(code **)(*local_18 + 0x1c))();
    FUN_0040b250();
    if (*(short *)(param_1 + 0xc2) != 0) {
      FUN_005ca7bc(param_1,&local_1c);
      (**(code **)(*local_1c + 0x28))();
      FUN_0040b250();
    }
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_005caa0f;
  puStack_2c = (undefined1 *)0x5ca9ec;
  thunk_FUN_00406e5c(&local_20,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x5ca9f4;
  FUN_0040b140(&local_1c);
  puStack_2c = (undefined1 *)0x5caa07;
  FUN_00408e44(&local_18,&DAT_005c0198,5);
  return;
}
