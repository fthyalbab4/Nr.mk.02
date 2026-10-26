// rea decompile_all
// name: FUN_006bc1e4
// address: 0x6bc1e4
// body: available
// range: 0x6bc1e4-0x6bc301 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6bc1ff (push 0x6bc302 followed by fs-segment stack chaining); handler 0x6bc302 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bc1e4(int param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
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
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_006bc302;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar2 = &stack0xfffffffc;
  if (((-1 < param_2) && (puVar2 = &stack0xfffffffc, param_2 < *(int *)(param_1 + 0xa020))) &&
     (puVar2 = &stack0xfffffffc, *(char *)(param_1 + 0xa024) == '\0')) {
    iVar4 = FUN_006bccc8(*(undefined4 *)(param_1 + 0x3dc + param_2 * 4));
    FUN_004ee6a0(*(undefined4 *)(param_1 + 0x394),&local_8);
    FUN_00407eb8(iVar4 + 4,local_8);
    FUN_004ee6a0(*(undefined4 *)(param_1 + 0x39c),&local_c);
    FUN_00407eb8(iVar4 + 8,local_c);
    cVar3 = (**(code **)(**(int **)(param_1 + 0x3a4) + 0xec))();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar4 + 0x10) = 1;
    }
    cVar3 = (**(code **)(**(int **)(param_1 + 0x3a8) + 0xec))();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar4 + 0x10) = 0;
    }
    cVar3 = (**(code **)(**(int **)(param_1 + 0x3ac) + 0xec))();
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar4 + 0x10) = 2;
    }
    FUN_004ee6a0(*(undefined4 *)(param_1 + 0x3b4),&local_10);
    FUN_00407eb8(iVar4 + 0xc,local_10);
    piVar1 = *(int **)(*(int *)(param_1 + 0x388) + 0x280);
    (**(code **)(*piVar1 + 0x20))(piVar1,param_2,*(undefined4 *)(iVar4 + 4));
    *(undefined1 *)(param_1 + 0xa026) = 1;
    FUN_006bcb60();
    puVar2 = puStack_20;
  }
  puStack_20 = puVar2;
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006bc309;
  puStack_24 = (undefined1 *)0x6bc301;
  thunk_FUN_00406e80(&local_10,3,puVar2);
  return;
}
