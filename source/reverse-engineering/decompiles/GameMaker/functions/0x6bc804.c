// rea decompile_all
// name: FUN_006bc804
// address: 0x6bc804
// body: available
// range: 0x6bc804-0x6bc8bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6bc81d (push 0x6bc8be followed by fs-segment stack chaining); handler 0x6bc8be lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bc804(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_10 = 0;
  puStack_24 = &LAB_006bc8be;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x388) + 0xec))();
  if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0xa020))) {
    iVar4 = FUN_006bccc8(*(undefined4 *)(param_1 + 0x3dc + iVar3 * 4));
    FUN_00407f0c(&local_8,*(undefined4 *)(iVar4 + 8));
    FUN_0040839c(&local_10,L"Trigger condition: ",*(undefined4 *)(iVar4 + 4),1,0);
    cVar2 = FUN_00681ba0(&local_8,&local_c,local_10);
    if (cVar2 != '\0') {
      FUN_00407eb8(iVar4 + 8,local_8);
      *(undefined1 *)(param_1 + 0xa026) = 1;
      FUN_006bcb60();
      FUN_006bc118(param_1,iVar3);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006bc8c5;
  puStack_24 = (undefined1 *)0x6bc8b5;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x6bc8bd;
  thunk_FUN_00406e5c(&local_8);
  return;
}
