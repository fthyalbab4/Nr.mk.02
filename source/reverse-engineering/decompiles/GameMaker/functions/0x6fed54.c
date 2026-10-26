// rea decompile_all
// name: FUN_006fed54
// address: 0x6fed54
// body: available
// range: 0x6fed54-0x6fee4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fed70 (push 0x6fee4c followed by fs-segment stack chaining); handler 0x6fee4c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fed54(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_006fee4c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004ee5c0(*(undefined4 *)(DAT_007901a0 + 0x3f8),0);
  FUN_004ee5c0(*(undefined4 *)(DAT_007901a0 + 0x40c),0);
  FUN_004ee6d8(*(undefined4 *)(DAT_007901a0 + 0x3f8),0);
  FUN_0062cabc(param_1,&local_8);
  FUN_004ee6d8(*(undefined4 *)(DAT_007901a0 + 0x3f8),local_8);
  *(int *)(*(int *)(DAT_007901a0 + 0x3f8) + 0xc) = param_1;
  FUN_004ee5c0(*(undefined4 *)(DAT_007901a0 + 0x3c8),param_2);
  if (param_1 == -1) {
    (**(code **)(**(int **)(DAT_007901a0 + 0x3cc) + 0xf0))(*(int **)(DAT_007901a0 + 0x3cc),1);
  }
  else if (param_1 == -2) {
    (**(code **)(**(int **)(DAT_007901a0 + 0x3d0) + 0xf0))(*(int **)(DAT_007901a0 + 0x3d0),1);
  }
  else {
    (**(code **)(**(int **)(DAT_007901a0 + 0x3d4) + 0xf0))(*(int **)(DAT_007901a0 + 0x3d4),1);
    FUN_004ee5c0(*(undefined4 *)(DAT_007901a0 + 0x3f8),1);
    FUN_004ee5c0(*(undefined4 *)(DAT_007901a0 + 0x40c),1);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_006fee53;
  puStack_1c = (undefined1 *)0x6fee4b;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
