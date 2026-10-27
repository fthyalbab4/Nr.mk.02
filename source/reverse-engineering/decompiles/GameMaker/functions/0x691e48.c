// rea decompile_all
// name: FUN_00691e48
// address: 0x691e48
// body: available
// range: 0x691e48-0x691eb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x691e6e (push 0x691eb2 followed by fs-segment stack chaining); handler 0x691eb2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00691e48(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x691e60;
  piVar2 = (int *)FUN_00691870(param_3);
  puStack_20 = &LAB_00691eb2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  while( true ) {
    cVar1 = FUN_00691878(piVar2);
    if (cVar1 == '\0') break;
    uVar3 = (**(code **)*piVar2)();
    FUN_00691c64(param_1,param_2,uVar3);
    param_2 = param_2 + 1;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00691eb9;
  if (piVar2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x691eb1;
    (**(code **)(*piVar2 + -4))(piVar2,1);
  }
  return;
}
