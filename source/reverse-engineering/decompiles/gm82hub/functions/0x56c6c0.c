// rea decompile_all
// name: FUN_0056c6c0
// address: 0x56c6c0
// body: available
// range: 0x56c6c0-0x56c729 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56c6e6 (push 0x56c72a followed by fs-segment stack chaining); handler 0x56c72a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056c6c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x56c6d8;
  piVar2 = (int *)FUN_0056c0e8(param_3);
  puStack_20 = &LAB_0056c72a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  while( true ) {
    cVar1 = FUN_0056c0f0(piVar2);
    if (cVar1 == '\0') break;
    uVar3 = (**(code **)*piVar2)();
    FUN_0056c4dc(param_1,param_2,uVar3);
    param_2 = param_2 + 1;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0056c731;
  if (piVar2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x56c729;
    (**(code **)(*piVar2 + -4))(piVar2,1);
  }
  return;
}
