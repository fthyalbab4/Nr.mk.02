// rea decompile_all
// name: FUN_0043aae8
// address: 0x43aae8
// body: available
// range: 0x43aae8-0x43ab7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ab0a (push 0x43ab7d followed by fs-segment stack chaining); handler 0x43ab7d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043aae8(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_d;
  int *local_c;
  int *local_8;

  puStack_28 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_0043ab7d;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_d = 0;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = (**(code **)(*param_1 + 0x14))();
  iVar4 = (**(code **)(*local_c + 0x14))();
  if (iVar3 == iVar4) {
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      uVar5 = true;
      do {
        (**(code **)(*local_8 + 0xc))(local_8,iVar4,&local_14);
        uVar2 = local_14;
        (**(code **)(*local_c + 0xc))(local_c,iVar4,&local_18);
        FUN_0040891c(uVar2,local_18);
        if (!(bool)uVar5) goto LAB_0043ab62;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
        uVar5 = iVar3 == 0;
      } while (!(bool)uVar5);
    }
    local_d = 1;
  }
LAB_0043ab62:
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0043ab84;
  puStack_2c = (undefined1 *)0x43ab7c;
  thunk_FUN_004072fc(&local_18,2,puVar1);
  return;
}
