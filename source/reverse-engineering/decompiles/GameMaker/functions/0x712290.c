// rea decompile_all
// name: FUN_00712290
// address: 0x712290
// body: available
// range: 0x712290-0x71232c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7122a4 (push 0x71232d followed by fs-segment stack chaining); handler 0x71232d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00712290(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0071232d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x39c) + 0xec))();
  if (-1 < iVar3) {
    piVar1 = *(int **)(param_1 + 0x39c);
    uVar4 = (**(code **)(*piVar1 + 0xec))();
    piVar1 = (int *)piVar1[0xa0];
    (**(code **)(*piVar1 + 0xc))(piVar1,uVar4,&local_8);
    piVar1 = *(int **)(*(int *)(param_1 + 0x394) + 0x280);
    (**(code **)(*piVar1 + 0x38))(piVar1,local_8);
    piVar1 = *(int **)(param_1 + 0x39c);
    uVar4 = (**(code **)(*piVar1 + 0xec))();
    piVar1 = (int *)piVar1[0xa0];
    (**(code **)(*piVar1 + 0x48))(piVar1,uVar4);
    FUN_007121c4();
    *PTR_DAT_0078214c = 1;
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00712334;
  puStack_18 = (undefined1 *)0x71232c;
  thunk_FUN_00406e5c(&local_8,uStack_1c,puVar2);
  return;
}
