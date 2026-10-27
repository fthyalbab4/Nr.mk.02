// rea decompile_all
// name: FUN_00465050
// address: 0x465050
// body: available
// range: 0x465050-0x4650dc inclusive
// range: 0x4650f4-0x465100 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x46508d (push 0x4650dd followed by fs-segment stack chaining); handler 0x4650dd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465050(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_e [6];
  undefined4 local_8;

  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)(iVar1 + 8) == 0) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      puStack_20 = (undefined1 *)0x465073;
      FUN_0045d7b0();
    }
    puStack_20 = (undefined1 *)0x46507f;
    local_8 = FUN_00405fac(&LAB_004319cc,1);
    puStack_24 = &LAB_004650dd;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_00464f58(param_1);
    if (iVar2 == DAT_0068f11c) {
      FUN_00404f38(local_e,6,0);
      FUN_0043cac0(local_8,local_e,6);
    }
    else {
      uVar3 = FUN_00464f58(param_1);
      FUN_0045e87c(local_8,uVar3,0);
    }
    *in_FS_OFFSET = uStack_28;
    *(undefined4 *)(iVar1 + 8) = local_8;
  }
  return;
}
