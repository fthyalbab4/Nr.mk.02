// rea decompile_all
// name: FUN_0043dc44
// address: 0x43dc44
// body: available
// range: 0x43dc44-0x43dced inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43dc6c (push 0x43dcee followed by fs-segment stack chaining); handler 0x43dcee lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043dc44(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  puStack_20 = (undefined1 *)0x43dc61;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_24 = &LAB_0043dcee;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar2 = (**(code **)(*param_1 + 0x58))(param_1,local_8);
  if (iVar2 < 0) {
    FUN_00407eb8(param_3,0);
  }
  else {
    (**(code **)(*param_1 + 0xc))(param_1,iVar2,&local_c);
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      uStack_28 = 0x43dca8;
      iVar2 = FUN_00407048(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    uStack_28 = param_3;
    FUN_004086a8(local_c,iVar3 + 2,0x7fffffff);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0043dcf5;
  puStack_24 = (undefined1 *)0x43dced;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
