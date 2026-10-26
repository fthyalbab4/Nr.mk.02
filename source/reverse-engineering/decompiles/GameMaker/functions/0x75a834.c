// rea decompile_all
// name: FUN_0075a834
// address: 0x75a834
// body: available
// range: 0x75a834-0x75a8ad inclusive
// range: 0x75a8c5-0x75a8d2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75a87e (push 0x75a8ae followed by fs-segment stack chaining); handler 0x75a8ae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0075a834(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = (undefined1 *)0x75a847;
  FUN_0075a9b8(*param_1);
  iVar4 = *(int *)(DAT_00781504 + 8);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      puStack_1c = (undefined1 *)0x75a868;
      iVar2 = FUN_0043b048(DAT_00781504,iVar5);
      puStack_1c = (undefined1 *)0x75a870;
      piVar3 = (int *)(**(code **)(iVar2 + 4))(iVar2,1,param_2);
      puStack_20 = &LAB_0075a8ae;
      uStack_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_24;
      puStack_1c = &stack0xfffffffc;
      cVar1 = (**(code **)(*piVar3 + 8))();
      if (cVar1 != '\0') {
        *in_FS_OFFSET = uStack_24;
        return piVar3;
      }
      FUN_00405a7c(piVar3);
      *in_FS_OFFSET = uStack_24;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return (int *)0x0;
}
