// rea decompile_all
// name: FUN_00506c60
// address: 0x506c60
// body: available
// range: 0x506c60-0x506cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x506c75 (push 0x506cf4 followed by fs-segment stack chaining); handler 0x506cf4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00506c60(int param_1)

{
  undefined1 *puVar1;
  HIMAGELIST p_Var2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00506cf4;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  p_Var2 = ImageList_Create(*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x34),
                            *(uint *)(&DAT_00778cdc + (uint)*(byte *)(param_1 + 0x70) * 4) |
                            *(uint *)(&DAT_00778cf8 + (uint)*(byte *)(param_1 + 0x45) * 4),
                            *(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x3c));
  *(HIMAGELIST *)(param_1 + 0x40) = p_Var2;
  if (p_Var2 == (HIMAGELIST)0x0) {
    FUN_0040b75c(PTR_PTR_007822e0,&local_8);
    FUN_0041beb8(&PTR_LAB_0042f068,1,local_8);
    FUN_00406618();
  }
  if (*(int *)(param_1 + 0x48) != 0x1fffffff) {
    FUN_00507538(param_1,*(int *)(param_1 + 0x48));
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00506cfb;
  puStack_1c = (undefined1 *)0x506cf3;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
