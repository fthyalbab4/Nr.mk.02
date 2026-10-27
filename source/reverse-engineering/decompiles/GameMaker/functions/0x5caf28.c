// rea decompile_all
// name: FUN_005caf28
// address: 0x5caf28
// body: available
// range: 0x5caf28-0x5cafe1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5caf42 (push 0x5cafe2 followed by fs-segment stack chaining); handler 0x5cafe2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005caf28(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  int *local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = 0;
  puStack_24 = &LAB_005cafe2;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_005ca7f8(param_1);
  FUN_0040b140(param_2);
  FUN_005cae94(param_1,&local_8);
  cVar1 = (**(code **)(*local_8 + 0x24))();
  if (cVar1 != '\0') {
    FUN_005cae94(param_1,&local_10);
    (**(code **)(*local_10 + 0x14))(local_10,&local_c);
    (**(code **)(*local_c + 0x5c))(local_c,param_2);
    while (*param_2 != 0) {
      cVar1 = (**(code **)(*(int *)*param_2 + 0x38))();
      if (cVar1 == '\x01') break;
      (**(code **)(*(int *)*param_2 + 0x98))((int *)*param_2,&local_14);
      FUN_0040b158(param_2,local_14);
    }
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005cafe9;
  puStack_24 = (undefined1 *)0x5cafd1;
  FUN_00408e44(&local_14,&DAT_005c0e3c,2);
  puStack_24 = (undefined1 *)0x5cafd9;
  FUN_0040b140(&local_c);
  puStack_24 = (undefined1 *)0x5cafe1;
  FUN_0040b140(&local_8);
  return;
}
