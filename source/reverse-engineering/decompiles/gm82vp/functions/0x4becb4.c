// rea decompile_all
// name: FUN_004becb4
// address: 0x4becb4
// body: available
// range: 0x4becb4-0x4bed77 inclusive
// range: 0x4bed7f-0x4bed84 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bece9 (push 0x4bed78 followed by fs-segment stack chaining); handler 0x4bed78 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004becb4(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  if (*(int *)(param_1 + 0x1e0) != 0) {
    puStack_1c = (undefined1 *)0x4becdb;
    uVar3 = FUN_00405fac(&PTR_LAB_0042e000,1);
    puStack_20 = &LAB_004bed78;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1e0) + 8);
    puStack_1c = &stack0xfffffffc;
    FUN_004391a4(uVar3,iVar6);
    if (-1 < iVar6 + -1) {
      iVar7 = 0;
      iVar5 = iVar6;
      do {
        iVar4 = FUN_00438ec4(*(undefined4 *)(param_1 + 0x1e0),iVar7);
        iVar1 = *(int *)(iVar4 + 0x1e4);
        if ((-1 < iVar1) && (iVar1 < iVar6)) {
          FUN_00439070(uVar3,iVar1,iVar4);
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (-1 < iVar6 + -1) {
      iVar5 = 0;
      do {
        iVar7 = FUN_00438ec4(uVar3,iVar5);
        if (iVar7 != 0) {
          FUN_004c4844(iVar7,iVar5);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    puVar2 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x4bed7f;
    puStack_20 = (undefined1 *)0x4bed77;
    FUN_00405fdc(uVar3,uStack_24,puVar2);
    return;
  }
  return;
}
