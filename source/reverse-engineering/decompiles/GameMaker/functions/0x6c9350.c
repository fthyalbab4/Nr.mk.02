// rea decompile_all
// name: FUN_006c9350
// address: 0x6c9350
// body: available
// range: 0x6c9350-0x6c93c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c936c (push 0x6c93e7 followed by fs-segment stack chaining); handler 0x6c93e7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c9384 (push 0x6c93ca followed by fs-segment stack chaining); handler 0x6c93ca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c9350(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_006c93e7;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x6c9376;
  piVar2 = (int *)FUN_006c8c00(param_3);
  puStack_28 = &LAB_006c93ca;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  while( true ) {
    cVar1 = FUN_006c8c08(piVar2);
    if (cVar1 == '\0') break;
    (**(code **)*piVar2)(piVar2,&local_8);
    FUN_006c9164(param_1,param_2,local_8);
    param_2 = param_2 + 1;
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_006c93d1;
  if (piVar2 != (int *)0x0) {
    puStack_28 = (undefined1 *)0x6c93c9;
    (**(code **)(*piVar2 + -4))(piVar2,1);
  }
  return;
}
