// rea decompile_all
// name: FUN_005c6be4
// address: 0x5c6be4
// body: available
// range: 0x5c6be4-0x5c6cb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c6c0b (push 0x5c6cb7 followed by fs-segment stack chaining); handler 0x5c6cb7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c6be4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int *local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  undefined1 local_d;
  undefined4 local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = (int *)0x0;
  local_18 = (int *)0x0;
  puStack_34 = &LAB_005c6cb7;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_d = 0;
  local_c = param_3;
  local_8 = param_2;
  uVar3 = FUN_0040b140(&local_18,param_2,param_3,&local_14);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
  FUN_0040b250();
  piVar1 = local_18;
  (**(code **)(*local_18 + 0x10))();
  FUN_0040b250();
  if (-1 < local_14 + -1) {
    do {
      FUN_0040b140(&local_1c);
      FUN_0040b140(&local_20);
      (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
      FUN_0040b250();
      (**(code **)(*local_20 + 0xc))();
      FUN_0040b250();
      cVar2 = FUN_005c06ac(local_1c,local_8,local_c);
      if (cVar2 != '\0') {
        local_d = 1;
        break;
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *in_FS_OFFSET = piVar1;
  FUN_0040b140(&local_20,piVar1,uVar3,&LAB_005c6cbe);
  FUN_0040b140(&local_1c);
  FUN_0040b140(&local_18);
  return;
}
