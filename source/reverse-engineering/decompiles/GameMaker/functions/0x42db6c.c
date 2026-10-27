// rea decompile_all
// name: FUN_0042db6c
// address: 0x42db6c
// body: available
// range: 0x42db6c-0x42dcb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42db98 (push 0x42dcb2 followed by fs-segment stack chaining); handler 0x42dcb2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042db6c(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined1 *puVar1;
  ushort *puVar2;
  int iVar3;
  LPCWSTR pWVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  LPSTR pCVar6;
  LPCSTR pCVar7;
  LPBOOL pBVar8;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_18 = 0;
  local_c = 0;
  puStack_28 = (undefined1 *)0x42db8d;
  local_10 = param_1;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_2c = &LAB_0042dcb2;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  puVar2 = (ushort *)FUN_0042ce64(*(undefined4 *)*param_2);
  if (*puVar2 == 0) {
    FUN_0040810c(&local_18,local_8,0);
    FUN_0042d808(local_10,param_2,local_18);
  }
  else {
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
    }
    pBVar8 = (LPBOOL)0x0;
    pCVar7 = (LPCSTR)0x0;
    iVar3 = 0;
    pCVar6 = (LPSTR)0x0;
    pWVar4 = (LPCWSTR)FUN_00407f44(local_8);
    local_14 = WideCharToMultiByte((uint)*puVar2,0,pWVar4,iVar5,pCVar6,iVar3,pCVar7,pBVar8);
    FUN_004078e4(&local_c,local_14,0);
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407048(&local_8,local_8);
    }
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
    }
    pBVar8 = (LPBOOL)0x0;
    pCVar7 = (LPCSTR)0x0;
    iVar3 = local_14;
    pCVar6 = (LPSTR)FUN_00407670(local_c);
    pWVar4 = (LPCWSTR)FUN_00407f44(local_8);
    WideCharToMultiByte((uint)*puVar2,0,pWVar4,iVar5,pCVar6,iVar3,pCVar7,pBVar8);
    FUN_00408b30(&local_c,*puVar2,0);
    FUN_0042d808(local_10,param_2,local_c);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0042dcb9;
  puStack_2c = (undefined1 *)0x42dca1;
  FUN_00406e5c(&local_18,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x42dca9;
  FUN_00406e5c(&local_c);
  puStack_2c = (undefined1 *)0x42dcb1;
  thunk_FUN_00406e5c(&local_8);
  return;
}
