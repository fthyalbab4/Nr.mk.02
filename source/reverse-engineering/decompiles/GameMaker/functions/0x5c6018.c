// rea decompile_all
// name: FUN_005c6018
// address: 0x5c6018
// body: available
// range: 0x5c6018-0x5c60a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c6032 (push 0x5c60a4 followed by fs-segment stack chaining); handler 0x5c60a4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c6018(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  int *piStackY_30;
  undefined4 *puVar2;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_10;
  int *local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  puStack_20 = &LAB_005c60a4;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar1 = FUN_005c85a0(param_1);
  if (cVar1 == '\x01') {
    puVar2 = &local_8;
    FUN_005c8524(param_1,&local_c);
    piStackY_30 = local_c;
    (**(code **)(*local_c + 0xa0))();
    FUN_0040b250();
  }
  else {
    FUN_005c5f58(param_1,&local_10);
    puVar2 = (undefined4 *)0x5c6080;
    (**(code **)(*local_10 + 0x50))(local_10,param_2);
  }
  *in_FS_OFFSET = piStackY_30;
  FUN_0040b140(&local_10,piStackY_30,puVar2,&LAB_005c60ab);
  FUN_0040b140(&local_c);
  return;
}
