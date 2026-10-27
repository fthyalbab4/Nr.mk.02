// rea decompile_all
// name: FUN_00524ed0
// address: 0x524ed0
// body: available
// range: 0x524ed0-0x524f7e inclusive
// range: 0x524f86-0x524f90 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x524f43 (push 0x524f7f followed by fs-segment stack chaining); handler 0x524f7f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00524ed0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x5c) + 0x3c);
  if (iVar1 != 0) {
    puStack_1c = (undefined1 *)0x524ef2;
    iVar4 = FUN_00525a4c(*(undefined4 *)(param_1 + 0x20));
    if (iVar4 != 0) {
      puStack_1c = (undefined1 *)0x524efe;
      piVar5 = (int *)FUN_00525a4c(*(undefined4 *)(param_1 + 0x20));
      puStack_1c = (undefined1 *)0x524f03;
      iVar4 = (**(code **)(*piVar5 + 0x30))();
      if (iVar4 == *(int *)(iVar1 + 0x38)) {
        puStack_1c = (undefined1 *)0x524f10;
        piVar5 = (int *)FUN_00525a4c(*(undefined4 *)(param_1 + 0x20));
        puStack_1c = (undefined1 *)0x524f15;
        iVar4 = (**(code **)(*piVar5 + 0x24))();
        if (iVar4 == *(int *)(iVar1 + 0x34)) {
          bVar3 = true;
          goto LAB_00524f20;
        }
      }
    }
  }
  bVar3 = false;
LAB_00524f20:
  if (bVar3) {
    puStack_1c = (undefined1 *)0x524f35;
    piVar5 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
    puStack_20 = &LAB_00524f7f;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_00525ae8(*(undefined4 *)(param_1 + 0x20),piVar5,iVar1,param_2);
    uVar6 = FUN_00525a4c(*(undefined4 *)(param_1 + 0x20));
    (**(code **)(*piVar5 + -0x2c))(piVar5,uVar6);
    puVar2 = puStack_1c;
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x524f86;
    puStack_20 = (undefined1 *)0x524f7e;
    uVar6 = FUN_00405a7c(piVar5,uStack_24,puVar2);
    return uVar6;
  }
  return 0;
}
