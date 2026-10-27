// rea decompile_all
// name: FUN_004fefac
// address: 0x4fefac
// body: available
// range: 0x4fefac-0x4ff061 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fefd4 (push 0x4ff0ac followed by fs-segment stack chaining); handler 0x4ff0ac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4feff2 (push 0x4ff062 followed by fs-segment stack chaining); handler 0x4ff062 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fefac(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStackY_38;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;

  puStack_24 = (undefined1 *)0x4fefc6;
  uVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStack_28 = &LAB_004ff0ac;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar3 = FUN_0043bb30(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x40));
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  iVar1 = *(int *)(iVar3 + 8);
  if (-1 < iVar1 + -1) {
    iVar6 = 0;
    iVar5 = iVar1;
    do {
      if (iVar6 == iVar1 + -1) {
        FUN_0043b048(iVar3,0);
      }
      else {
        uVar4 = FUN_0043b048(iVar3,0);
        FUN_0043ae88(uVar2,uVar4);
        FUN_0043aee0(iVar3,0);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *in_FS_OFFSET = uStackY_38;
  uStackY_38 = 0x4ff061;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x40) + 8));
  return;
}
