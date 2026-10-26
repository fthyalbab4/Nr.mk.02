// rea decompile_all
// name: FUN_004f2c44
// address: 0x4f2c44
// body: available
// range: 0x4f2c44-0x4f2d08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f2c6a (push 0x4f2d09 followed by fs-segment stack chaining); handler 0x4f2d09 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2c44(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  puStack_20 = (undefined1 *)0x4f2c5c;
  iVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStack_24 = &LAB_004f2d09;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar3 = FUN_004edf8c(param_1);
  iVar4 = FUN_004f3124(param_1);
  if (-1 < iVar4 + -1) {
    iVar7 = 0;
    do {
      iVar5 = FUN_004f30e8(param_1,iVar7);
      if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 4)) {
        uVar6 = FUN_004f30e8(param_1,iVar7);
        FUN_0043ae88(iVar2,uVar6);
        FUN_004edc78(iVar5,(iVar3 - *(int *)(iVar5 + 0x48)) - *(int *)(iVar5 + 0x40));
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar3 = *(int *)(iVar2 + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      uVar8 = 0;
      uVar6 = FUN_0043b048(iVar2,iVar4);
      FUN_004efb90(uVar6,0xb03e,0,uVar8);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004f2d10;
  puStack_24 = (undefined1 *)0x4f2d08;
  FUN_00405a7c(iVar2,uStack_28,puVar1);
  return;
}
