// rea decompile_all
// name: FUN_004fb544
// address: 0x4fb544
// body: available
// range: 0x4fb544-0x4fb5e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fb55c (push 0x4fb5ea followed by fs-segment stack chaining); handler 0x4fb5ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb544(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_004fb5ea;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00407eb8(param_1,0);
  (**(code **)(**(int **)(param_4 + -4) + 0xc))(*(int **)(param_4 + -4),&local_c,4);
  if (0 < local_c) {
    FUN_00409be0(&local_8,&DAT_004108f8,1,local_c);
    (**(code **)(**(int **)(param_4 + -4) + 0xc))(*(int **)(param_4 + -4),local_8,local_c);
    uVar2 = FUN_00422068();
    FUN_00421f98(uVar2,local_8,&local_10);
    FUN_00407eb8(param_1,local_10);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004fb5f1;
  puStack_20 = (undefined1 *)0x4fb5db;
  thunk_FUN_00406e5c(&local_10,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x4fb5e9;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
