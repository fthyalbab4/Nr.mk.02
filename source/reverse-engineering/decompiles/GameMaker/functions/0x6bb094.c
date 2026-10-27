// rea decompile_all
// name: FUN_006bb094
// address: 0x6bb094
// body: available
// range: 0x6bb094-0x6bb171 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6bb0ba (push 0x6bb172 followed by fs-segment stack chaining); handler 0x6bb172 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bb094(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar6;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = (undefined1 *)0x6bb0af;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_2c = &LAB_006bb172;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00407eb8(local_c,0);
  iVar4 = (**(code **)(*DAT_00790048 + 0x14))();
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    uVar6 = true;
    do {
      (**(code **)(*DAT_00790048 + 0xc))(DAT_00790048,iVar5,&local_10);
      FUN_00408640(local_10,local_8);
      if ((bool)uVar6) {
        (**(code **)(*DAT_0079004c + 0xc))(DAT_0079004c,iVar5,&local_14);
        uVar2 = local_14;
        (**(code **)(*DAT_00790048 + 0xc))(DAT_00790048,iVar5,&local_18);
        FUN_0040839c(local_c,local_18,uVar2);
        goto LAB_006bb14f;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
      uVar6 = iVar4 == 0;
    } while (!(bool)uVar6);
  }
  cVar3 = FUN_00713434(local_8);
  if (cVar3 != '\0') {
    iVar4 = FUN_00713534(local_8);
    if (-1 < iVar4) {
      FUN_00713614(iVar4,local_c);
    }
  }
LAB_006bb14f:
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_006bb179;
  puStack_2c = (undefined1 *)0x6bb169;
  thunk_FUN_00406e80(&local_18,3,puVar1);
  puStack_2c = (undefined1 *)0x6bb171;
  thunk_FUN_00406e5c(&local_8);
  return;
}
