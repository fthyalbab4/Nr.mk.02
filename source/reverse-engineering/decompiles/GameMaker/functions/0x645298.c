// rea decompile_all
// name: FUN_00645298
// address: 0x645298
// body: available
// range: 0x645298-0x6454fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6452b7 (push 0x6454fb followed by fs-segment stack chaining); handler 0x6454fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00645298(int param_1)

{
  longlong lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined *puStackY_60;
  undefined1 *puVar6;
  wchar_t *pwVar7;
  wchar_t *local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  wchar_t *local_8;

  local_1c = &stack0xfffffffc;
  iVar5 = 7;
  do {
    local_8 = (wchar_t *)0x0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = &LAB_006454fb;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined *)0x6452cd;
  uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x270),0);
  local_28 = (undefined *)0x6452d8;
  FUN_004ab804(uVar3,*(undefined4 *)(param_1 + 0x73c));
  local_28 = &DAT_00645518;
  local_2c = 0x6452eb;
  FUN_0041666c(*(undefined4 *)(param_1 + 0x744),&local_c);
  local_2c = local_c;
  local_30 = &DAT_0064552c;
  local_34 = 0x645301;
  FUN_0041666c(*(undefined4 *)(param_1 + 0x748),&stack0xfffffff0);
  local_38 = &DAT_0064553c;
  local_3c = L"䖋僼莋ϰ";
  FUN_00408480(&local_8,5);
  local_3c = local_8;
  uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x270),1);
  pwVar7 = local_3c;
  local_3c = L"䱨摕贀\xec55莋ܐ";
  FUN_004ab804(uVar3,pwVar7);
  local_3c = L" Zoom: ";
  FUN_0041666c(*(undefined4 *)(param_1 + 0x710),&stack0xffffffe8);
  FUN_00408480(&stack0xffffffec,3);
  uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x270),2);
  FUN_004ab804(uVar3,unaff_ESI);
  FUN_0041666c(*(undefined4 *)(*(int *)(param_1 + 0x704) + 4),&local_20);
  FUN_0041666c(*(undefined4 *)(*(int *)(param_1 + 0x704) + 8),&local_24);
  uVar3 = local_24;
  FUN_00408480(&local_1c,4);
  puVar6 = local_1c;
  uVar4 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x270),3);
  FUN_004ab804(uVar4,puVar6);
  lVar1 = (longlong)*(int *)(*(int *)(param_1 + 0x704) + 4) *
          (longlong)*(int *)(*(int *)(param_1 + 0x704) + 8);
  local_28 = (undefined *)((int)lVar1 * 4);
  iVar5 = FUN_00404878(local_28,(int)((ulonglong)lVar1 >> 0x20));
  if (iVar5 < 1000000) {
    pwVar7 = L" Memory: ";
    FUN_0041666c(iVar5 / 1000,&local_3c,1000,L" Memory: ",uVar3);
    puStackY_60 = &LAB_006455ec;
    FUN_00408480(&local_38,3);
    puVar2 = local_38;
    uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x270),4);
    FUN_004ab804(uVar3,puVar2);
  }
  else {
    pwVar7 = L" Memory: ";
    FUN_0041666c(iVar5 / 1000000,&local_30,100000,L" Memory: ",uVar3);
    puStackY_60 = &DAT_006455c8;
    FUN_0041666c((iVar5 % 1000000) / 100000,&local_34);
    FUN_00408480(&local_2c,5);
    uVar3 = local_2c;
    uVar4 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x3f0) + 0x270),4);
    FUN_004ab804(uVar4,uVar3);
  }
  FUN_004eed28(*(undefined4 *)(param_1 + 0x3f0));
  *in_FS_OFFSET = puStackY_60;
  thunk_FUN_00406e80(&local_3c,5,pwVar7,&LAB_00645502);
  thunk_FUN_00406e80(&local_24,8);
  return;
}
