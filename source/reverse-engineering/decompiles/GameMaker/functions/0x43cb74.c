// rea decompile_all
// name: FUN_0043cb74
// address: 0x43cb74
// body: available
// range: 0x43cb74-0x43cc02 inclusive
// range: 0x43cc0a-0x43cc19 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43cba4 (push 0x43cc03 followed by fs-segment stack chaining); handler 0x43cc03 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043cb74(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = (undefined1 *)0x43cb8d;
  cVar2 = FUN_00405c98(param_2,&LAB_00430eb4);
  if (cVar2 != '\0') {
    puStack_18 = (undefined1 *)0x43cb99;
    (**(code **)(*param_1 + 0x20))();
    puStack_1c = &LAB_0043cc03;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    while( true ) {
      iVar5 = *(int *)(param_1[2] + 8);
      if (iVar5 < 1) break;
      FUN_00405a7c(*(undefined4 *)(*(int *)(param_1[2] + 4) + -4 + iVar5 * 4));
    }
    iVar5 = *(int *)(*(int *)(param_2 + 8) + 8);
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      do {
        uVar3 = FUN_0043b048(*(undefined4 *)(param_2 + 8),iVar6);
        piVar4 = (int *)FUN_0043cb54(param_1);
        (**(code **)(*piVar4 + 8))(piVar4,uVar3);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar1 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x43cc14;
    puStack_1c = (undefined1 *)0x43cc02;
    (**(code **)(*param_1 + 0x24))(param_1,*param_1,puVar1);
    return;
  }
  puStack_18 = (undefined1 *)0x43cc14;
  FUN_0043c550(param_1,param_2);
  return;
}
