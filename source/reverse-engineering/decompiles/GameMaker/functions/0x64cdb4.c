// rea decompile_all
// name: FUN_0064cdb4
// address: 0x64cdb4
// body: available
// range: 0x64cdb4-0x64cf9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x64cdce (push 0x64cf9e followed by fs-segment stack chaining); handler 0x64cf9e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064cdb4(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  puStack_2c = &LAB_0064cf9e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  FUN_0064de38(*(undefined4 *)(param_1 + 0x400),&local_8);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x398),local_8);
  FUN_004ee6a0(*(undefined4 *)(param_1 + 0x398),&local_10);
  FUN_0040839c(&local_c,L"Background Properties: ",local_10);
  FUN_004ee6d8(param_1,local_c);
  uVar2 = FUN_0062db94(*(undefined4 *)(param_1 + 0x3f0));
  FUN_0041666c(uVar2,&local_18);
  FUN_0040839c(&local_14,L"Width: ",local_18);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3a0),local_14);
  uVar2 = FUN_0062db9c(*(undefined4 *)(param_1 + 0x3f0));
  FUN_0041666c(uVar2,&local_20);
  FUN_0040839c(&local_1c,L"Height: ",local_20);
  FUN_004ee6d8(*(undefined4 *)(param_1 + 0x3a4),local_1c);
  FUN_0064cbf8(param_1);
  (**(code **)(**(int **)(param_1 + 0x3e4) + 0xf0))
            (*(int **)(param_1 + 0x3e4),*(undefined1 *)(*(int *)(param_1 + 0x3f0) + 8));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3d0),*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0xc));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3cc),*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x10));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3e0),*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x14));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3dc),*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x18));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3d8),*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x1c));
  FUN_00530760(*(undefined4 *)(param_1 + 0x3d4),*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x20));
  if ((*PTR_DAT_0078258c == '\0') || (*(char *)(*(int *)(param_1 + 0x3f0) + 8) == '\0')) {
    FUN_004edce0(*(undefined4 *)(param_1 + 0x388),*(undefined4 *)(*(int *)(param_1 + 0x3b0) + 0x40))
    ;
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3b0),0);
  }
  else {
    FUN_004edce0(*(undefined4 *)(param_1 + 0x388),
                 *(int *)(*(int *)(param_1 + 0x3b0) + 0x40) +
                 *(int *)(*(int *)(param_1 + 0x3b0) + 0x48) + 8);
    FUN_004ee5c0(*(undefined4 *)(param_1 + 0x3b0),1);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0064cfa5;
  puStack_2c = (undefined1 *)0x64cf88;
  thunk_FUN_00406e80(&local_20,4,puVar1);
  puStack_2c = (undefined1 *)0x64cf90;
  thunk_FUN_00406e5c(&local_10);
  puStack_2c = (undefined1 *)0x64cf9d;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
