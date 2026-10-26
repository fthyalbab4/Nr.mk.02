// rea decompile_all
// name: FUN_007203ec
// address: 0x7203ec
// body: available
// range: 0x7203ec-0x720535 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x720403 (push 0x720536 followed by fs-segment stack chaining); handler 0x720536 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007203ec(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_00720536;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  cVar3 = FUN_00692f04(*(undefined4 *)(*(int *)(param_1 + 0x444) + 0x28));
  if (cVar3 == '\0') {
    uVar5 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x408) + 0x270),3);
    FUN_004ab804(uVar5,0);
  }
  else {
    FUN_00692f24(*(undefined4 *)(*(int *)(param_1 + 0x444) + 0x28),&local_c);
    FUN_0040839c(&local_8,L"Room: ",local_c);
    uVar5 = local_8;
    uVar4 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x408) + 0x270),3);
    FUN_004ab804(uVar4,uVar5);
  }
  if (*(int *)(param_1 + 0x46c) != 0) {
    FUN_00405a7c();
  }
  *(undefined4 *)(param_1 + 0x46c) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x444) + 0x28);
  if (-1 < iVar1) {
    cVar3 = FUN_00692f04(iVar1);
    if (cVar3 != '\0') {
      uVar5 = FUN_00693134(*(undefined4 *)(*(int *)(param_1 + 0x444) + 0x28));
      uVar4 = FUN_00462144(&PTR_FUN_004587d4,1);
      *(undefined4 *)(param_1 + 0x46c) = uVar4;
      FUN_00463dc0(uVar4,7);
      (**(code **)(**(int **)(param_1 + 0x46c) + 0x44))
                (*(int **)(param_1 + 0x46c),*(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x48));
      (**(code **)(**(int **)(param_1 + 0x46c) + 0x38))
                (*(int **)(param_1 + 0x46c),*(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x4c));
      puStack_20 = *(undefined1 **)(param_1 + 0x464);
      uStack_24 = 0x3f800000;
      FUN_0065999c(uVar5,*(undefined4 *)(param_1 + 0x46c),*(undefined4 *)(param_1 + 0x460));
    }
  }
  puVar2 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0072053d;
  puStack_20 = (undefined1 *)0x720535;
  thunk_FUN_00406e80(&local_c,2,puVar2);
  return;
}
