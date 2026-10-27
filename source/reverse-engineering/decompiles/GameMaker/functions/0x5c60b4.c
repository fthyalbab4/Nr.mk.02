// rea decompile_all
// name: FUN_005c60b4
// address: 0x5c60b4
// body: available
// range: 0x5c60b4-0x5c614e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c60d6 (push 0x5c614f followed by fs-segment stack chaining); handler 0x5c614f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c60b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  int *piStackY_38;
  undefined4 in_stack_ffffffd0;
  undefined1 *puVar2;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_14;
  int *local_10;
  undefined1 local_c [4];
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  puStack_24 = &LAB_005c614f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_3;
  cVar1 = FUN_005c85a0(param_1);
  if (cVar1 == '\x01') {
    puVar2 = local_c;
    FUN_005c8524(param_1,&local_10);
    piStackY_38 = local_10;
    (**(code **)(*local_10 + 0xa4))();
    FUN_0040b250();
    in_stack_ffffffd0 = param_2;
  }
  else {
    FUN_005c5f58(param_1,&local_14);
    puVar2 = (undefined1 *)0x5c612b;
    (**(code **)(*local_14 + 0x54))(local_14,param_2,local_8);
  }
  *in_FS_OFFSET = piStackY_38;
  FUN_0040b140(&local_14,piStackY_38,in_stack_ffffffd0,&LAB_005c6156,puVar2);
  FUN_0040b140(&local_10);
  return;
}
