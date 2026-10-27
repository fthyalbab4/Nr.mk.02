// rea decompile_all
// name: FUN_004fc414
// address: 0x4fc414
// body: available
// range: 0x4fc414-0x4fc51a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fc431 (push 0x4fc51b followed by fs-segment stack chaining); handler 0x4fc51b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fc414(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  iVar4 = 0;
  local_14 = 0;
  puStack_24 = &LAB_004fc51b;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_8 = param_2;
  if (((param_1 == *(int *)(*(int *)(param_4 + -8) + 100)) || (*(int *)(param_1 + 8) != 0)) ||
     (puVar2 = &stack0xfffffffc, *(int *)(param_1 + 4) != 0)) {
    (**(code **)(**(int **)(param_4 + -4) + 0x10))(*(int **)(param_4 + -4),&local_8,4);
    local_10 = (uint)*(byte *)(param_1 + 0x10);
    (**(code **)(**(int **)(param_4 + -4) + 0x10))(*(int **)(param_4 + -4),&local_10,1);
    if (*(char *)(*(int *)(param_4 + -8) + 0x74) == '\0') {
      local_c = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      uVar3 = (**(code **)(**(int **)(param_4 + -8) + 0x28))
                        (*(int **)(param_4 + -8),*(undefined1 *)(param_1 + 0x10));
      local_c = FUN_004fd084(*(undefined4 *)(param_4 + -8),*(undefined4 *)(param_1 + 0x20),uVar3);
    }
    (**(code **)(**(int **)(param_4 + -4) + 0x10))(*(int **)(param_4 + -4),&local_c,4);
    iVar4 = param_4;
    FUN_004fa708(param_1,&local_14);
    FUN_004fc38c(local_14);
    puVar2 = puStack_20;
  }
  puStack_20 = puVar2;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = param_4;
    FUN_004fc414(*(int *)(param_1 + 8),local_8 + 1,iVar4);
    iVar4 = iVar1;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_004fc414(*(int *)(param_1 + 0xc),local_8,iVar4,param_4);
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004fc522;
  puStack_24 = (undefined1 *)0x4fc51a;
  thunk_FUN_00406e5c(&local_14,uStack_28,puVar2);
  return;
}
