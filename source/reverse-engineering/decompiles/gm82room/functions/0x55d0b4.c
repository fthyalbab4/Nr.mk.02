// rea decompile_all
// name: FUN_0055d0b4
// address: 0x55d0b4
// body: available
// range: 0x55d0b4-0x55d12d inclusive
// range: 0x55d145-0x55d152 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x55d0fe (push 0x55d12e followed by fs-segment stack chaining); handler 0x55d12e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0055d0b4(undefined4 *param_1,undefined4 param_2)

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

  puStack_1c = (undefined1 *)0x55d0c7;
  FUN_0055d238(*param_1);
  iVar4 = *(int *)(DAT_0068638c + 8);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      puStack_1c = (undefined1 *)0x55d0e8;
      iVar2 = FUN_00438ec4(DAT_0068638c,iVar5);
      puStack_1c = (undefined1 *)0x55d0f0;
      piVar3 = (int *)(**(code **)(iVar2 + 4))(iVar2,1,param_2);
      puStack_20 = &LAB_0055d12e;
      uStack_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_24;
      puStack_1c = &stack0xfffffffc;
      cVar1 = (**(code **)(*piVar3 + 8))();
      if (cVar1 != '\0') {
        *in_FS_OFFSET = uStack_24;
        return piVar3;
      }
      FUN_00405fdc(piVar3);
      *in_FS_OFFSET = uStack_24;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return (int *)0x0;
}
