// rea decompile_all
// name: FUN_005c863c
// address: 0x5c863c
// body: available
// range: 0x5c863c-0x5c8707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c8654 (push 0x5c8708 followed by fs-segment stack chaining); handler 0x5c8708 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c863c(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  local_10 = 0;
  local_14 = (int *)0x0;
  local_18 = (int *)0x0;
  puStack_24 = &LAB_005c8708;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  cVar2 = FUN_005c85a0(param_1);
  if (cVar2 == '\x01') {
    FUN_0040b140(&local_c);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
    FUN_0040b250();
    (**(code **)(*local_c + 0x10))();
    FUN_0040b250();
    if (local_8 == 1) {
      FUN_0040b140(&local_14);
      FUN_0040b140(&local_18);
      (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
      FUN_0040b250();
      (**(code **)(*local_18 + 0xc))();
      FUN_0040b250();
      (**(code **)(*local_14 + 0x18))();
      FUN_0040b250();
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005c870f;
  puStack_24 = (undefined1 *)0x5c86f7;
  FUN_0040b140(&local_18,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x5c86ff;
  FUN_0040b140(&local_14);
  puStack_24 = (undefined1 *)0x5c8707;
  FUN_0040b140(&local_c);
  return;
}
