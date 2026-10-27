// rea decompile_all
// name: FUN_0048f20c
// address: 0x48f20c
// body: available
// range: 0x48f20c-0x48f2f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48f227 (push 0x48f2f1 followed by fs-segment stack chaining); handler 0x48f2f1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f20c(int *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0048f2f1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = (**(code **)(*(int *)param_1[0x9f] + 0x14))();
  FUN_0048f0ec(param_1,uVar2);
  if (-1 < *(int *)(param_1[0x9e] + 8) + -1) {
    iVar5 = 0;
    local_8 = *(int *)(param_1[0x9e] + 8);
    do {
      (**(code **)(*(int *)param_1[0x9f] + 0xc))((int *)param_1[0x9f],iVar5,&local_c);
      uVar2 = local_c;
      uVar3 = FUN_0043b048(param_1[0x9e],iVar5);
      FUN_004ee6d8(uVar3,uVar2);
      uVar2 = FUN_0043b048(param_1[0x9e],iVar5);
      FUN_0048154c(uVar2,*(undefined1 *)((int)param_1 + 0x28a));
      iVar5 = iVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  if (-1 < param_1[0xa0]) {
    *(undefined1 *)((int)param_1 + 0x289) = 1;
    piVar4 = (int *)FUN_0043b048(param_1[0x9e],param_1[0xa0]);
    (**(code **)(*piVar4 + 0xf0))(piVar4,1);
    *(undefined1 *)((int)param_1 + 0x289) = 0;
  }
  FUN_0048ee88(param_1);
  (**(code **)(*param_1 + 0x90))();
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0048f2f8;
  puStack_20 = (undefined1 *)0x48f2f0;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar1);
  return;
}
