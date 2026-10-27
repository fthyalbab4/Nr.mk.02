// rea decompile_all
// name: FUN_00689e78
// address: 0x689e78
// body: available
// range: 0x689e78-0x689f81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x689e8f (push 0x689f82 followed by fs-segment stack chaining); handler 0x689f82 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00689e78(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd8;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_1c = &LAB_00689f82;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  FUN_00407f0c(&local_8,*(undefined4 *)(*(int *)(param_1 + 0x61c) + 0x2ec));
  if ((*PTR_DAT_007815f8 == '\0') && (*(int *)PTR_DAT_00782044 != 0)) {
    cVar2 = FUN_00416e40(*(undefined4 *)PTR_DAT_00782044);
    if (cVar2 != '\0') {
      FUN_0051acd0(*(undefined4 *)PTR_DAT_00781a58);
      FUN_00533aa8(local_8,*(undefined4 *)PTR_DAT_00782044,&local_10);
      FUN_00407f0c(&local_8,local_10);
      FUN_0051acd8(*(undefined4 *)PTR_DAT_00781a58);
      FUN_00407eb8(*(int *)(param_1 + 0x61c) + 0x2ec,local_8);
      FUN_006930cc(*(undefined4 *)(param_1 + 0x630));
      *(undefined1 *)(param_1 + 0x628) = 1;
      goto LAB_00689f64;
    }
  }
  in_stack_ffffffd8 = 1;
  cVar2 = FUN_00681ba0(&local_8,&local_c,L"Room Creation Code",1,0);
  if (cVar2 != '\0') {
    FUN_00407eb8(*(int *)(param_1 + 0x61c) + 0x2ec,local_8);
    FUN_006930cc(*(undefined4 *)(param_1 + 0x630));
    *(undefined1 *)(param_1 + 0x628) = 1;
  }
LAB_00689f64:
  puVar1 = puStack_20;
  *in_FS_OFFSET = in_stack_ffffffd8;
  puStack_20 = &LAB_00689f89;
  thunk_FUN_00406e5c(&local_10,in_stack_ffffffd8,puVar1);
  thunk_FUN_00406e5c(&local_8);
  return;
}
