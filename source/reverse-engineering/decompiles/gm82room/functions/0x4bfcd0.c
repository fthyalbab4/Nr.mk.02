// rea decompile_all
// name: FUN_004bfcd0
// address: 0x4bfcd0
// body: available
// range: 0x4bfcd0-0x4bfdbf inclusive
// range: 0x4bfe11-0x4bfe17 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bfd13 (push 0x4bfdc0 followed by fs-segment stack chaining); handler 0x4bfdc0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bfcd0(int param_1)

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

  puStack_20 = (undefined1 *)0x4bfce7;
  iVar1 = FUN_004c00dc(param_1);
  if (iVar1 != 0) {
    puStack_20 = (undefined1 *)0x4bfcfb;
    iVar1 = FUN_00405fac(&PTR_LAB_0042e000,1);
    *(short *)(param_1 + 0x1ac) = *(short *)(param_1 + 0x1ac) + 1;
    puStack_24 = &LAB_004bfdc0;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_004c00dc(param_1);
    if (-1 < iVar2 + -1) {
      iVar5 = 0;
      do {
        iVar3 = FUN_004c00a0(param_1,iVar5);
        if ((byte)(*(char *)(iVar3 + 0x5d) - 3U) < 2) {
          uVar4 = FUN_004c00a0(param_1,iVar5);
          FUN_00438d04(iVar1,uVar4);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00406268(param_1);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &DAT_004bfdc7;
    while (0 < *(int *)(iVar1 + 8)) {
      puStack_24 = (undefined1 *)0x4bfd7a;
      iVar2 = FUN_00438ec4(iVar1,*(int *)(iVar1 + 8) + -1);
      if (*(char *)(iVar2 + 0x5d) == '\x03') {
        puStack_24 = (undefined1 *)0x4bfd8b;
        FUN_004ba900(iVar2,4);
      }
      else {
        puStack_24 = (undefined1 *)0x4bfd96;
        FUN_004ba900(iVar2,3);
      }
      puStack_24 = (undefined1 *)0x4bfda5;
      FUN_00438d5c(iVar1,*(int *)(iVar1 + 8) + -1);
    }
    puStack_24 = (undefined1 *)0x4bfdb7;
    FUN_00405fdc(iVar1);
    puStack_24 = (undefined1 *)0x4bfdbf;
    FUN_004bfbd4(param_1);
    return;
  }
  return;
}
