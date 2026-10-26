// rea decompile_all
// name: FUN_0052e874
// address: 0x52e874
// body: available
// range: 0x52e874-0x52ea0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52e8a4 (push 0x52ea0e followed by fs-segment stack chaining); handler 0x52ea0e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052e874(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  int local_c;

  FUN_00530d20(*(undefined4 *)(param_1 + 4));
  FUN_004399ac(*(undefined4 *)(*(int *)(param_1 + 4) + 0x38));
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_0052e468(param_1);
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (-1 < iVar3 + -1) {
    iVar5 = 0;
    do {
      FUN_00438ec4(*(undefined4 *)(param_1 + 8),iVar5);
      iVar1 = FUN_0052e224();
      iVar4 = iVar4 + iVar1;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  FUN_00439168(*(undefined4 *)(param_1 + 0xc),iVar4);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar1 = FUN_00438ec4(*(undefined4 *)(param_1 + 8),iVar4);
      iVar5 = *(int *)(iVar1 + 8);
      if (-1 < iVar5 + -1) {
        local_c = 0;
        do {
          uVar2 = FUN_00438ec4(*(undefined4 *)(iVar1 + 0x10),local_c);
          FUN_00438d04(*(undefined4 *)(param_1 + 0xc),uVar2);
          local_c = local_c + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0052e5e0(param_1);
  FUN_0052e63c(param_1);
  FUN_0052e808(param_1);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      uVar2 = FUN_00438ec4(*(undefined4 *)(param_1 + 8),iVar4);
      FUN_0052e290(uVar2,*(undefined1 *)(param_1 + 0x314),*(undefined1 *)(param_1 + 0x315));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_00524d94(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c));
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      uVar2 = FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar4);
      FUN_00528124(uVar2,0);
      uVar2 = FUN_0052c584(*(undefined4 *)(*(int *)(param_1 + 4) + 0x2c),iVar4);
      FUN_00527ff8(uVar2,0);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = uStackY_2c;
  uStackY_2c = 0x52ea0d;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(*(int *)(param_1 + 4) + 0x38) + 8));
  return;
}
