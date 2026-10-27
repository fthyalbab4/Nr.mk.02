// rea decompile_all
// name: FUN_004f2d18
// address: 0x4f2d18
// body: available
// range: 0x4f2d18-0x4f2e07 inclusive
// range: 0x4f2e59-0x4f2e5f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f2d5b (push 0x4f2e08 followed by fs-segment stack chaining); handler 0x4f2e08 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2d18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  puStack_20 = (undefined1 *)0x4f2d2f;
  iVar1 = FUN_004f3124(param_1);
  if (iVar1 != 0) {
    puStack_20 = (undefined1 *)0x4f2d43;
    iVar1 = FUN_00405a4c(&PTR_LAB_0042f444,1);
    *(short *)(param_1 + 0x1ac) = *(short *)(param_1 + 0x1ac) + 1;
    puStack_24 = &LAB_004f2e08;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_004f3124(param_1);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        iVar3 = FUN_004f30e8(param_1,iVar5);
        if ((byte)(*(char *)(iVar3 + 0x5d) - 3U) < 2) {
          uVar4 = FUN_004f30e8(param_1,iVar5);
          FUN_0043ae88(iVar1,uVar4);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00405d08(param_1);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &DAT_004f2e0f;
    while (0 < *(int *)(iVar1 + 8)) {
      puStack_24 = (undefined1 *)0x4f2dc2;
      iVar2 = FUN_0043b048(iVar1,*(int *)(iVar1 + 8) + -1);
      if (*(char *)(iVar2 + 0x5d) == '\x03') {
        puStack_24 = (undefined1 *)0x4f2dd3;
        FUN_004ed948(iVar2,4);
      }
      else {
        puStack_24 = (undefined1 *)0x4f2dde;
        FUN_004ed948(iVar2,3);
      }
      puStack_24 = (undefined1 *)0x4f2ded;
      FUN_0043aee0(iVar1,*(int *)(iVar1 + 8) + -1);
    }
    puStack_24 = (undefined1 *)0x4f2dff;
    FUN_00405a7c(iVar1);
    puStack_24 = (undefined1 *)0x4f2e07;
    FUN_004f2c1c(param_1);
    return;
  }
  return;
}
