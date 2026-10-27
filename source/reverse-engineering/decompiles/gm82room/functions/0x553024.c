// rea decompile_all
// name: FUN_00553024
// address: 0x553024
// body: available
// range: 0x553024-0x5531d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x553056 (push 0x5531d5 followed by fs-segment stack chaining); handler 0x5531d5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00553024(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  HMODULE pHVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uVar6;
  HMODULE pHStack_48;
  HMODULE in_stack_ffffffc0;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  uStack_10 = 0;
  local_1c = 0;
  local_20 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  puStack_34 = &LAB_005531d5;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_18 = param_3;
  local_14 = param_2;
  if (((DAT_006862e4 == (code *)0x0) && ((char)PTR_FUN_006862e8 == '\0')) ||
     ((puVar1 = &stack0xfffffffc, DAT_006862ec == (code *)0x0 &&
      (puVar1 = &stack0xfffffffc, (char)PTR_FUN_006862f0 == '\0')))) {
    in_stack_ffffffc0 = (HMODULE)0x553089;
    pHVar2 = GetModuleHandleW((LPCWSTR)&PTR_DAT_005531e8);
    if (pHVar2 == (HMODULE)0x0) {
      pHVar2 = (HMODULE)FUN_0041f278(&PTR_DAT_00553210,0x8000);
      if (pHVar2 == (HMODULE)0x0) goto LAB_005531a7;
    }
    in_stack_ffffffc0 = pHVar2;
    DAT_006862e4 = (code *)FUN_0040deb0();
    PTR_FUN_006862e8._0_1_ = DAT_006862e4 == (code *)0x0;
    DAT_006862ec = (code *)FUN_0040deb0();
    PTR_FUN_006862f0._0_1_ = DAT_006862ec == (code *)0x0;
    pHStack_48 = pHVar2;
    puVar1 = puStack_30;
  }
  puStack_30 = puVar1;
  if (DAT_006862ec == (code *)0x0) {
    if (DAT_006862e4 != (code *)0x0) {
      FUN_00407c34(&local_c,0x200,0);
      uVar5 = 0x200;
      uVar6 = local_18;
      uVar4 = FUN_00407ae0(local_c);
      FUN_004083e8(&local_20,param_1,0,uVar4,uVar5,uVar6);
      FUN_00407ae0(local_20);
      iVar3 = (*DAT_006862e4)();
      if (iVar3 != 0) {
        FUN_00543258(&local_c);
        FUN_004083c0(local_14,local_c);
      }
    }
  }
  else {
    FUN_004080e0(&local_8,0x200);
    FUN_00407fb8(local_8);
    FUN_00408420(&local_1c,param_1);
    FUN_00407fb8(local_1c);
    iVar3 = (*DAT_006862ec)();
    if (iVar3 != 0) {
      FUN_00543220(&local_8);
      FUN_0040840c(local_14,local_8);
    }
  }
LAB_005531a7:
  *in_FS_OFFSET = pHStack_48;
  FUN_004072d8(&local_20,pHStack_48,in_stack_ffffffc0,&LAB_005531dc);
  FUN_00407dd0(&local_1c);
  FUN_004072d8(&local_c);
  FUN_00407dd0(&local_8);
  return;
}
