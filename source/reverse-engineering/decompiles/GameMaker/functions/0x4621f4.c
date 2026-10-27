// rea decompile_all
// name: FUN_004621f4
// address: 0x4621f4
// body: available
// range: 0x4621f4-0x4622ce inclusive
// range: 0x4622f6-0x462305 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x462237 (push 0x4622cf followed by fs-segment stack chaining); handler 0x4622cf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004621f4(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff84;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 local_5c [84];
  int local_8;

  local_8 = param_1;
  if (param_2 != 0) {
    cVar2 = FUN_00405c98(param_2,&PTR_FUN_004587d4);
    if (cVar2 == '\0') {
      FUN_0043c550(local_8,param_2);
      return;
    }
  }
  FUN_00462ef0(local_8);
  puStack_6c = (undefined1 *)0x46222c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00788120);
  puStack_6c = &LAB_004622cf;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  if (param_2 == 0) {
    FUN_00404f08(local_5c,0x54,0);
    in_stack_ffffff84 = 0;
    FUN_00463324(local_8,0,0,0,0,local_5c);
  }
  else {
    piVar1 = (int *)(*(int *)(param_2 + 0x28) + 4);
    *piVar1 = *piVar1 + 1;
    FUN_00461698(*(undefined4 *)(local_8 + 0x28));
    *(undefined4 *)(local_8 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined1 *)(local_8 + 0x21) = *(undefined1 *)(param_2 + 0x21);
    *(undefined4 *)(local_8 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined1 *)(local_8 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    uVar3 = FUN_00462b64(param_2);
    FUN_00463dc0(local_8,uVar3);
    *(undefined1 *)(local_8 + 0x39) = *(undefined1 *)(param_2 + 0x39);
  }
  *in_FS_OFFSET = in_stack_ffffff84;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00788120);
  return;
}
