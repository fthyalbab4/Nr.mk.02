// rea decompile_all
// name: FUN_005c81a4
// address: 0x5c81a4
// body: available
// range: 0x5c81a4-0x5c8255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c81bd (push 0x5c8256 followed by fs-segment stack chaining); handler 0x5c8256 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c81a4(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  int *piStackY_40;
  int *in_stack_ffffffc8;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  int *local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  puStack_20 = &LAB_005c8256;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  (**(code **)(*param_1 + 0x10))(param_1,0,1);
  cVar1 = FUN_005c85a0(param_1);
  if (cVar1 == '\x01') {
    FUN_005c7f44(param_1);
    FUN_0040b140(&local_8);
    FUN_0040b140(&local_c);
    in_stack_ffffffc8 = (int *)param_1[8];
    (**(code **)(*in_stack_ffffffc8 + 0x20))();
    FUN_0040b250();
    (**(code **)(*local_c + 0xc))();
    FUN_0040b250();
    piStackY_40 = local_8;
    (**(code **)(*local_8 + 0x14))();
    FUN_0040b250();
  }
  else {
    (**(code **)(*(int *)param_1[8] + 0x14))();
    FUN_0040b250();
  }
  (**(code **)(*param_1 + 0x10))(param_1,0,0);
  *in_FS_OFFSET = piStackY_40;
  FUN_0040b140(&local_c,piStackY_40,in_stack_ffffffc8,&LAB_005c825d);
  FUN_0040b140(&local_8);
  return;
}
