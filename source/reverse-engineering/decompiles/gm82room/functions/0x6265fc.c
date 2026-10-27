// rea decompile_all
// name: FUN_006265fc
// address: 0x6265fc
// body: available
// range: 0x6265fc-0x626722 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x626614 (push 0x626723 followed by fs-segment stack chaining); handler 0x626723 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006265fc(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  LPCWSTR pWVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  LPCWSTR in_stack_ffffffd4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  LPCWSTR local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = (LPCWSTR)0x0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_00626723;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x26) == '\0') goto LAB_00626700;
  puVar1 = &stack0xfffffffc;
  if (*PTR_PTR_0068909c != '\0') {
    in_stack_ffffffd4 = L"삅蔏»";
    iVar2 = FUN_00408d44(&DAT_00626740,*(undefined4 *)(param_1 + 4));
    puVar1 = puStack_20;
    if (iVar2 != 0) goto LAB_00626700;
    in_stack_ffffffd4 = L"삅蔏¦";
    iVar2 = FUN_00408d44(&LAB_00626750,*(undefined4 *)(param_1 + 4));
    puVar1 = puStack_20;
    if (iVar2 != 0) goto LAB_00626700;
  }
  puStack_20 = puVar1;
  iVar2 = *(int *)(param_1 + 0x1c);
  puVar1 = puStack_20;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      FUN_0050d110(&local_c);
      uStack_34 = *(undefined4 *)(param_1 + 4);
      in_stack_ffffffd4 = local_c;
      FUN_0040875c(&local_8,3);
      local_10 = local_8;
      pWVar3 = (LPCWSTR)FUN_00408220(local_8);
      DeleteFileW(pWVar3);
      puVar1 = puStack_20;
    }
    else if (iVar2 == 2) {
      in_stack_ffffffd4 = (LPCWSTR)FUN_00408220(*(undefined4 *)(param_1 + 4));
      DeleteFileW(in_stack_ffffffd4);
      puVar1 = puStack_20;
    }
    else if ((iVar2 == 3) && (*PTR_PTR_0068909c == '\0')) {
      in_stack_ffffffd4 = *(LPCWSTR *)(param_1 + 0x20);
      uStack_34 = *(undefined4 *)(param_1 + 4);
      FUN_0040875c(&local_14,3);
      pWVar3 = (LPCWSTR)FUN_00408220(local_14);
      DeleteFileW(pWVar3);
      puVar1 = puStack_20;
    }
  }
LAB_00626700:
  puStack_20 = puVar1;
  *in_FS_OFFSET = uStack_34;
  thunk_FUN_004072d8(&local_14,uStack_34,in_stack_ffffffd4,&LAB_0062672a);
  thunk_FUN_004072fc(&local_c,2);
  return;
}
