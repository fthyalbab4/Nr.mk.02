// rea decompile_all
// name: FUN_00561dbc
// address: 0x561dbc
// body: available
// range: 0x561dbc-0x561ef9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x561dd0 (push 0x561efa followed by fs-segment stack chaining); handler 0x561efa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00561dbc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwVar3;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00561efa;
  puStack_1c = (undefined *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c;
  FUN_00407eb8(param_1 + 4,0);
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00405a7c(*(undefined4 *)(param_1 + 0xc));
  piVar1 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
  *(int **)(param_1 + 0xc) = piVar1;
  (**(code **)(*piVar1 + 0x44))(piVar1,0x20);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x38))(*(int **)(param_1 + 0xc),0x20);
  (**(code **)(**(int **)(param_1 + 0xc) + 0x40))(*(int **)(param_1 + 0xc),1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_00407eb8(param_1 + 0x1c,0);
  FUN_00407eb8(param_1 + 0x20,0);
  FUN_00407eb8(param_1 + 0x24,0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = 0;
  do {
    pwVar3 = L"Argument ";
    FUN_0041666c(iVar2 + 1,&local_8);
    puStack_1c = &DAT_00561f34;
    FUN_00408480(param_1 + 0x38 + iVar2 * 4,3);
    *(undefined4 *)(param_1 + 0x58 + iVar2 * 4) = 0;
    FUN_00407eb8(param_1 + 0x78 + iVar2 * 4,&DAT_00561f44);
    FUN_00407eb8(param_1 + 0x98 + iVar2 * 4,L"item 1|item 2");
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  FUN_00407eb8(param_1 + 0xbc,0);
  FUN_00407eb8(param_1 + 0xc0,0);
  *in_FS_OFFSET = puStack_1c;
  thunk_FUN_00406e5c(&local_8,puStack_1c,pwVar3,&LAB_00561f01);
  return;
}
