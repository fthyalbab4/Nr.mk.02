// rea decompile_all
// name: FUN_006ed354
// address: 0x6ed354
// body: available
// range: 0x6ed354-0x6ed54e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ed374 (push 0x6ed54f followed by fs-segment stack chaining); handler 0x6ed54f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ed354(int param_1)

{
  wchar_t *pwVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined *puStackY_44;
  wchar_t *in_stack_ffffffc4;
  undefined4 local_30;
  wchar_t *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  wchar_t *local_8;

  local_20 = &stack0xfffffffc;
  local_10 = 5;
  do {
    local_8 = (wchar_t *)0x0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_006ed54f;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x5e8) != 0) {
    local_2c = L"䶋跸ﱅ沺滕\xe800꿷￑䖋僼莋δ";
    FUN_0041666c(*(undefined4 *)(*(int *)(param_1 + 0x5e8) + 4),&local_c);
    local_2c = L"䖋僼莋δ";
    FUN_0040839c(&local_8,L" Frames: ",local_c);
    local_2c = local_8;
    local_30 = 0x6ed3bc;
    uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x3b4) + 0x270),0);
    pwVar1 = local_2c;
    local_2c = L"豨滕謀\xe883\x05\xe800鈺\xffff喍\xe8f0銒ￒ痿棰햨n莋ר";
    FUN_004ab804(uVar3,pwVar1);
    local_2c = L" Size: ";
    local_30 = 0x6ed3d2;
    uVar3 = FUN_006e660c(*(undefined4 *)(param_1 + 0x5e8));
    local_30 = 0x6ed3da;
    FUN_0041666c(uVar3,&stack0xffffffec);
    uVar3 = FUN_006e6624(*(undefined4 *)(param_1 + 0x5e8));
    FUN_0041666c(uVar3,&stack0xffffffe8);
    FUN_00408480(&local_10,4);
    iVar4 = local_10;
    uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x3b4) + 0x270),1);
    FUN_004ab804(uVar3,iVar4);
    FUN_006e660c(*(undefined4 *)(param_1 + 0x5e8));
    FUN_006e6624(*(undefined4 *)(param_1 + 0x5e8));
    iVar4 = FUN_00404878();
    if (iVar4 < 1000000) {
      in_stack_ffffffc4 = L" Memory: ";
      FUN_0041666c(iVar4 / 1000,&local_30);
      puStackY_44 = &DAT_006ed600;
      FUN_00408480(&local_2c,3);
      pwVar1 = local_2c;
      uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x3b4) + 0x270),2);
      FUN_004ab804(uVar3,pwVar1);
      puVar2 = local_20;
    }
    else {
      in_stack_ffffffc4 = L" Memory: ";
      FUN_0041666c(iVar4 / 1000000,&local_24);
      puStackY_44 = &DAT_006ed5dc;
      FUN_0041666c((iVar4 % 1000000) / 100000,&local_28);
      FUN_00408480(&local_20,5);
      puVar2 = local_20;
      uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x3b4) + 0x270),2);
      FUN_004ab804(uVar3,puVar2);
      puVar2 = local_20;
    }
  }
  local_20 = puVar2;
  *in_FS_OFFSET = puStackY_44;
  thunk_FUN_00406e80(&local_30,5,in_stack_ffffffc4,&LAB_006ed556);
  thunk_FUN_00406e80(&stack0xffffffe8,5);
  return;
}
