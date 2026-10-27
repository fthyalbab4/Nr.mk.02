// rea decompile_all
// name: FUN_004ab108
// address: 0x4ab108
// body: available
// range: 0x4ab108-0x4ab20c inclusive
// range: 0x4ab22a-0x4ab278 inclusive
// range: 0x4ab280-0x4ab295 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ab126 (push 0x4ab296 followed by fs-segment stack chaining); handler 0x4ab296 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ab1a5 (push 0x4ab279 followed by fs-segment stack chaining); handler 0x4ab279 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ab1b3 (push 0x4ab20d followed by fs-segment stack chaining); handler 0x4ab20d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ab108(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  int local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_004ab296;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *(undefined4 *)(param_2 + 0xc) = 0;
  local_c = *(int *)(*(int *)(param_2 + 4) + 0x40);
  puStack_2c = (undefined1 *)0x4ab13f;
  local_8 = param_1;
  iVar3 = FUN_004aad24(param_1);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      puStack_2c = (undefined1 *)0x4ab153;
      iVar4 = FUN_004aad0c(local_8,iVar6);
      if (iVar4 == *(int *)(local_c + 0x34)) {
        puStack_2c = (undefined1 *)0x4ab165;
        puStack_2c = (undefined1 *)FUN_004aad0c(local_8,iVar6);
        puStack_30 = (undefined1 *)0x4ab16e;
        iVar3 = FUN_004aad24(local_8);
        puVar1 = puStack_2c;
        puStack_2c = (undefined1 *)0x4ab177;
        FUN_004aa388(puVar1,iVar3 + -1);
        puVar1 = puStack_20;
        *in_FS_OFFSET = uStack_28;
        puStack_20 = &LAB_004ab29d;
        puStack_24 = (undefined1 *)0x4ab295;
        thunk_FUN_00406e5c(&local_10,uStack_28,puVar1);
        return;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puStack_2c = (undefined1 *)0x4ab18f;
  uVar5 = FUN_004aa17c(&PTR_LAB_00492fac,1,local_8);
  *(undefined4 *)(local_8 + 0x2d8) = uVar5;
  puStack_30 = &LAB_004ab279;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_3c = &LAB_004ab20d;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  cVar2 = FUN_00405c98(local_c,&PTR_LAB_0050d694);
  if (cVar2 != '\0') {
    FUN_004ee6a0(local_c,&local_10);
    FUN_004ee6d8(uVar5,local_10);
  }
  FUN_004aa354(*(undefined4 *)(local_8 + 0x2d8),local_8);
  FUN_00405d08(local_c,local_8,*(int *)(param_2 + 4) + 0x4c);
  puVar1 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  cVar2 = *(char *)(local_c + 0x59);
  puStack_38 = (undefined1 *)0x4ab241;
  FUN_004aa460(*(undefined4 *)(local_8 + 0x2d8),cVar2,puVar1);
  if (cVar2 != '\0') {
    puStack_38 = (undefined1 *)0x4ab256;
    FUN_004aaec4(local_8,*(undefined4 *)(local_8 + 0x2d8));
  }
  puStack_38 = (undefined1 *)0x4ab260;
  FUN_004ed948(local_c,5);
  *in_FS_OFFSET = uStack_34;
  *(undefined4 *)(local_8 + 0x2d8) = 0;
  return;
}
