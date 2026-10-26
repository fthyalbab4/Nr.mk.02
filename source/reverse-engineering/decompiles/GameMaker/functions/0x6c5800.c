// rea decompile_all
// name: FUN_006c5800
// address: 0x6c5800
// body: available
// range: 0x6c5800-0x6c58e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c5814 (push 0x6c58e6 followed by fs-segment stack chaining); handler 0x6c58e6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c5800(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_006c58e6;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar3 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x45c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x45c) + 4);
    puVar3 = &stack0xfffffffc;
    if (-1 < iVar1) {
      cVar4 = FUN_006f5900(iVar1);
      puVar3 = puStack_14;
      if (cVar4 != '\0') {
        FUN_006f5920(*(undefined4 *)(*(int *)(param_1 + 0x45c) + 4),&local_8);
        FUN_004ee6d8(*(undefined4 *)(param_1 + 0x438),local_8);
        FUN_006f5b30(*(undefined4 *)(*(int *)(param_1 + 0x45c) + 4));
        uVar5 = FUN_005b401c();
        piVar2 = *(int **)(*(int *)(param_1 + 0x43c) + 0x1b0);
        (**(code **)(*piVar2 + 8))(piVar2,uVar5);
        FUN_00405a7c(uVar5);
        FUN_004ee5c0(*(undefined4 *)(param_1 + 0x43c),1);
        FUN_004ee5c0(*(undefined4 *)(param_1 + 0x444),1);
        puVar3 = puStack_14;
        goto LAB_006c58d0;
      }
    }
    puStack_14 = puVar3;
    FUN_004ee6d8(*(undefined4 *)(param_1 + 0x438),L"<no sprite>");
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x43c),0);
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x444),0);
    puVar3 = puStack_14;
  }
LAB_006c58d0:
  puStack_14 = puVar3;
  puVar3 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_006c58ed;
  puStack_18 = (undefined1 *)0x6c58e5;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar3);
  return;
}
