// rea decompile_all
// name: FUN_004fb22c
// address: 0x4fb22c
// body: available
// range: 0x4fb22c-0x4fb40c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4fb255 (push 0x4fb40d followed by fs-segment stack chaining); handler 0x4fb40d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb22c(HDC param_1,int param_2,LPRECT param_3,DWORD param_4,int param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  HTHEME hTheme;
  int iVar3;
  LPCWSTR pWVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  DTTOPTS *pOptions;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_58;
  DTTOPTS local_54;
  int local_14;
  int local_10;
  HDC local_c;
  int local_8;

  local_58 = 0;
  puStack_68 = (undefined1 *)0x4fb24a;
  local_c = param_1;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_6c = &LAB_004fb40d;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  if (*(char *)(*(int *)(param_5 + -4) + 0x31) == '\0') {
    iVar3 = local_8;
    puStack_68 = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_68 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
      puStack_68 = &stack0xfffffffc;
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + -4);
    }
    pWVar4 = (LPCWSTR)FUN_00408220(local_8);
    DrawTextW(local_c,pWVar4,iVar6,param_3,param_4);
  }
  else if (*(char *)(*(int *)(param_5 + -4) + 0x21) == '\0') {
    if (*(char *)(param_5 + 0xc) == '\x01') {
      puStack_68 = &stack0xfffffffc;
      FUN_00408420(&local_58,local_8);
      uStack_70 = local_58;
      uVar7 = 0;
      uVar2 = FUN_0045d4ec(*(undefined4 *)(param_5 + -8));
      uVar5 = FUN_004d08e8();
      FUN_004d0d48(uVar5,uVar2,*(int *)(param_5 + -4) + 0x24,uVar7,param_4,param_3);
    }
    else {
      iVar3 = local_8;
      puStack_68 = &stack0xfffffffc;
      if ((local_8 != 0) && (puStack_68 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
        puStack_68 = &stack0xfffffffc;
        iVar3 = FUN_00407488(&local_8,local_8);
      }
      iVar6 = 0;
      if (iVar3 != 0) {
        iVar6 = *(int *)(iVar3 + -4);
      }
      pWVar4 = (LPCWSTR)FUN_00408220(local_8);
      DrawTextW(local_c,pWVar4,iVar6,param_3,param_4);
    }
  }
  else {
    puStack_68 = &stack0xfffffffc;
    FUN_00404f38(&local_54,0x40,0);
    local_54.dwSize = 0x40;
    local_54.dwFlags = 0x2001;
    local_54.crText = FUN_0045b0f4(*(undefined4 *)(*(int *)(*(int *)(param_5 + -8) + 0x40) + 0x18));
    uVar2 = FUN_004d08e8();
    hTheme = (HTHEME)FUN_004d09b4(uVar2,*(undefined1 *)(*(int *)(param_5 + -4) + 0x30));
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + -4);
    }
    local_10 = *(int *)(*(int *)(param_5 + -4) + 0x28);
    local_14 = *(int *)(*(int *)(param_5 + -4) + 0x2c);
    pOptions = &local_54;
    pWVar4 = (LPCWSTR)FUN_00408220(local_8);
    DrawThemeTextEx(hTheme,local_c,local_10,local_14,pWVar4,iVar6,param_4,param_3,pOptions);
  }
  puVar1 = puStack_68;
  *in_FS_OFFSET = uStack_70;
  puStack_68 = &LAB_004fb414;
  puStack_6c = (undefined1 *)0x4fb404;
  FUN_00407dd0(&local_58,uStack_70,puVar1);
  puStack_6c = (undefined1 *)0x4fb40c;
  thunk_FUN_004072d8(&local_8);
  return;
}
