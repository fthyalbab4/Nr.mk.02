// rea decompile_all
// name: FUN_00678df4
// address: 0x678df4
// body: available
// range: 0x678df4-0x678f12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x678e1e (push 0x678f13 followed by fs-segment stack chaining); handler 0x678f13 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00678df4(int param_1,LONG *param_2,UINT param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  undefined1 *puVar1;
  HDC pHVar2;
  int iVar3;
  LPCWSTR pWVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  tagRECT *ptVar6;
  UINT UVar7;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  tagRECT local_18;
  UINT local_8;

  local_18.left = *param_2;
  local_18.top = param_2[1];
  local_18.right = param_2[2];
  local_18.bottom = param_2[3];
  puStack_28 = (undefined1 *)0x678e13;
  local_8 = param_3;
  thunk_FUN_00407660(param_6);
  puStack_2c = &LAB_00678f13;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0040c268(&local_18,1,1);
  FUN_0045b0d0(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x40),param_4);
  pHVar2 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
  iVar3 = param_6;
  if ((param_6 != 0) && (*(short *)(param_6 + -10) != 2)) {
    iVar3 = FUN_00407048(&param_6,param_6);
  }
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + -4);
  }
  ptVar6 = &local_18;
  UVar7 = local_8;
  pWVar4 = (LPCWSTR)FUN_00407f44(param_6);
  DrawTextW(pHVar2,pWVar4,iVar5,ptVar6,UVar7);
  FUN_0040c268(&local_18,0xffffffff,0xffffffff);
  FUN_0045b0d0(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x40),param_5);
  pHVar2 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x1a8));
  iVar3 = param_6;
  if ((param_6 != 0) && (*(short *)(param_6 + -10) != 2)) {
    iVar3 = FUN_00407048(&param_6,param_6);
  }
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + -4);
  }
  ptVar6 = &local_18;
  UVar7 = local_8;
  pWVar4 = (LPCWSTR)FUN_00407f44(param_6);
  DrawTextW(pHVar2,pWVar4,iVar5,ptVar6,UVar7);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00678f1a;
  puStack_2c = (undefined1 *)0x678f12;
  thunk_FUN_00406e5c(&param_6,uStack_30,puVar1);
  return;
}
