// rea decompile_all
// name: FUN_0067eb8c
// address: 0x67eb8c
// body: available
// range: 0x67eb8c-0x67ec98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67eba5 (push 0x67ec99 followed by fs-segment stack chaining); handler 0x67ec99 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067eb8c(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  int *piVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0067ec99;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *(int *)(param_1 + 0x18) = param_2;
  puVar1 = &stack0xfffffffc;
  if ((param_2 != 0) && (puVar1 = &stack0xfffffffc, *(int *)(param_1 + 0xc) == 0)) {
    iVar3 = *(int *)(param_1 + 0x18);
    cVar2 = FUN_00405c98(iVar3,&PTR_FUN_00509914);
    puVar1 = puStack_1c;
    if (cVar2 != '\0') {
      FUN_00407eb8(param_1 + 0xc,*(undefined4 *)(iVar3 + 100));
      FUN_004df1b8(*(undefined4 *)(param_1 + 0xc),&local_c);
      FUN_00407eb8(param_1 + 0xc,local_c);
      FUN_00407f0c(&local_8,*(undefined4 *)(iVar3 + 0x7c));
      piVar5 = (int *)0x67ec0e;
      iVar3 = FUN_00408a68(&DAT_0067ecb4,local_8);
      if (0 < iVar3) {
        iVar3 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar3 = FUN_00407048(&local_8,local_8);
        }
        uVar4 = 0;
        if (iVar3 != 0) {
          uVar4 = *(undefined4 *)(iVar3 + -4);
        }
        piVar5 = &local_8;
        iVar3 = FUN_00408a68(&DAT_0067ecb4,local_8);
        FUN_004086a8(local_8,iVar3 + 1,uVar4,piVar5);
      }
      iVar3 = **(int **)(param_1 + 0x14);
      (**(code **)(iVar3 + 0x2c))(*(int **)(param_1 + 0x14),local_8,iVar3,piVar5);
      puVar1 = puStack_1c;
    }
  }
  puStack_1c = puVar1;
  iVar3 = FUN_0067eb08(param_1);
  if (iVar3 != 0) {
    uVar4 = FUN_0067eb08(param_1);
    FUN_0067e72c(uVar4,param_2,param_1);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0067eca0;
  puStack_20 = (undefined1 *)0x67ec98;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
