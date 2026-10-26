// rea decompile_all
// name: FUN_00741318
// address: 0x741318
// body: available
// range: 0x741318-0x74141b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x741348 (push 0x74141c followed by fs-segment stack chaining); handler 0x74141c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00741318(int *param_1,int param_2,char param_3,int *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_1c;
  int local_18;
  int local_14;
  char local_d;
  int *local_c;
  int local_8;

  local_1c = 0;
  local_18 = 0;
  puStack_30 = (undefined1 *)0x74133d;
  local_d = param_3;
  local_c = param_1;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_34 = &LAB_0074141c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00407eb8(param_4,0);
  iVar2 = (**(code **)(*local_c + 0x14))();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    local_14 = iVar2;
    do {
      (**(code **)(*local_c + 0xc))(local_c,iVar3,&local_18);
      if (local_18 != 0 || local_d != '\0') {
        (**(code **)(*local_c + 0xc))(local_c,iVar3,&local_1c);
        FUN_004082dc(param_4,local_1c);
        FUN_004082dc(param_4,local_8);
      }
      iVar3 = iVar3 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  iVar2 = (**(code **)(*local_c + 0x14))();
  if (iVar2 != 0) {
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar2 = FUN_00407048(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    iVar2 = 0;
    if (*param_4 != 0) {
      iVar2 = *(int *)(*param_4 + -4);
    }
    FUN_00408778(param_4,(iVar2 - iVar3) + 1,iVar3);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00741423;
  puStack_34 = (undefined1 *)0x741413;
  thunk_FUN_00406e80(&local_1c,2,puVar1);
  puStack_34 = (undefined1 *)0x74141b;
  thunk_FUN_00406e5c(&local_8);
  return;
}
