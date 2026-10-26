// rea decompile_all
// name: FUN_00650de8
// address: 0x650de8
// body: available
// range: 0x650de8-0x65101e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x650dff (push 0x65101f followed by fs-segment stack chaining); handler 0x65101f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650de8(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = &LAB_0065101f;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *(undefined1 *)(param_1 + 0x3fc) = 1;
  FUN_006522c0(*(undefined4 *)(param_1 + 0x3f8),&local_8);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x394),local_8);
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x394),&local_10);
  FUN_0040839c(&local_c,L"Sound Properties: ",local_10);
  FUN_004ee6d8(param_1,local_c);
  FUN_0040839c(&local_14,L"Filename: ",*(undefined4 *)(*(int *)(param_1 + 1000) + 0x10));
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3e4),local_14);
  FUN_0048f164(*(undefined4 *)(param_1 + 0x3b8),*(undefined4 *)(*(int *)(param_1 + 1000) + 4));
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3bc),*(int *)(*(int *)(param_1 + 1000) + 4) != 3);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3d4),*(int *)(*(int *)(param_1 + 1000) + 4) != 3);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3d8),*(int *)(*(int *)(param_1 + 1000) + 4) != 3);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3dc),*(int *)(*(int *)(param_1 + 1000) + 4) != 3);
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3e0),*(int *)(*(int *)(param_1 + 1000) + 4) != 3);
  (**(code **)(**(int **)(param_1 + 0x3c0) + 0xf0))
            (*(int **)(param_1 + 0x3c0),(*(uint *)(*(int *)(param_1 + 1000) + 0xc) & 1) != 0);
  (**(code **)(**(int **)(param_1 + 0x3c4) + 0xf0))
            (*(int **)(param_1 + 0x3c4),(*(uint *)(*(int *)(param_1 + 1000) + 0xc) & 2) != 0);
  (**(code **)(**(int **)(param_1 + 0x3cc) + 0xf0))
            (*(int **)(param_1 + 0x3cc),(*(uint *)(*(int *)(param_1 + 1000) + 0xc) & 4) != 0);
  (**(code **)(**(int **)(param_1 + 0x3c8) + 0xf0))
            (*(int **)(param_1 + 0x3c8),(*(uint *)(*(int *)(param_1 + 1000) + 0xc) & 8) != 0);
  (**(code **)(**(int **)(param_1 + 0x3d0) + 0xf0))
            (*(int **)(param_1 + 0x3d0),(*(uint *)(*(int *)(param_1 + 1000) + 0xc) & 0x10) != 0);
  uVar2 = FUN_00404878();
  FUN_004b3214(*(undefined4 *)(param_1 + 0x3d4),uVar2);
  uVar2 = FUN_00404878();
  FUN_004b3214(*(undefined4 *)(param_1 + 0x3dc),uVar2);
  (**(code **)(**(int **)(param_1 + 0x3a8) + 0xf0))
            (*(int **)(param_1 + 0x3a8),*(undefined1 *)(*(int *)(param_1 + 1000) + 0x28));
  puVar1 = puStack_1c;
  *(undefined1 *)(param_1 + 0x3fc) = 0;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00651026;
  puStack_20 = (undefined1 *)0x651009;
  thunk_FUN_00406e5c(&local_14,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x651011;
  thunk_FUN_00406e5c(&local_10);
  puStack_20 = (undefined1 *)0x65101e;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
