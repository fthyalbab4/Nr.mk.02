// rea decompile_all
// name: FUN_00480d50
// address: 0x480d50
// body: available
// range: 0x480d50-0x480f15 inclusive
// range: 0x480f38-0x480f60 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x480d7e (push 0x480f61 followed by fs-segment stack chaining); handler 0x480f61 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x480df2 (push 0x480f16 followed by fs-segment stack chaining); handler 0x480f16 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480d50(undefined4 param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puStack_848;
  undefined1 *puStack_844;
  undefined1 *puStack_840;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  WCHAR local_820 [1024];
  LPBYTE local_20;
  undefined4 local_1c;
  WCHAR *local_18;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  undefined4 local_8;

  puStack_840 = &stack0xfffffffc;
  puVar11 = &stack0xfffffffc;
  local_830 = 0;
  local_828 = 0;
  local_824 = 0;
  puStack_844 = &LAB_00480f61;
  puStack_848 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_848;
  local_10 = 0;
  local_14 = 0;
  local_8 = param_1;
  BVar1 = EnumPrintersW(1,(LPWSTR)0x0,5,(LPBYTE)0x0,0,&local_10,&local_14);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x7a) {
      DVar2 = GetLastError();
      if (DVar2 == 0x7b) {
        FUN_0040b9d0(PTR_LAB_00688b9c,&local_824);
        FUN_0047fa64(local_824);
      }
      else {
        FUN_0041ebf4();
      }
    }
  }
  local_20 = (LPBYTE)FUN_0040430c(local_10);
  puVar10 = &LAB_00480f16;
  uVar6 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffff7ac;
  EnumPrintersW(1,(LPWSTR)0x0,5,local_20,local_10,&local_10,&local_14);
  if (local_14 == 0) {
    local_c = 0x400;
    BVar1 = GetDefaultPrinterW(local_820,&local_c);
    if (BVar1 == 0) {
      FUN_00404f38(local_820,local_c * 2,0);
    }
    local_18 = local_820;
    local_1c = FUN_0047fa24(&local_18);
  }
  else {
    local_1c = *(undefined4 *)local_20;
  }
  piVar3 = (int *)FUN_00480b08(local_8);
  iVar4 = (**(code **)(*piVar3 + 0x14))();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      iVar5 = (**(code **)(*piVar3 + 0x18))(piVar3,local_c);
      uVar7 = *(undefined4 *)(iVar5 + 8);
      FUN_00408350(&local_828,local_1c);
      local_82c = uVar7;
      iVar5 = FUN_00415a90(uVar7,local_828);
      if (iVar5 == 0) {
        iVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,local_c);
        uVar6 = FUN_00408220(*(undefined4 *)(iVar4 + 0xc));
        uVar9 = 0;
        uVar7 = FUN_00408220(*(undefined4 *)(iVar4 + 4));
        uVar8 = FUN_00408220(*(undefined4 *)(iVar4 + 8));
        FUN_0048048c(local_8,uVar8,uVar7,uVar9,uVar6);
        FUN_00406ba8();
        puVar11 = puStack_848;
        *in_FS_OFFSET = puVar10;
        puStack_848 = &LAB_00480f68;
        thunk_FUN_004072d8(&local_830,puVar10,puVar11);
        thunk_FUN_004072fc(&local_828,2);
        return;
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *in_FS_OFFSET = uVar6;
  FUN_00404340(local_20,uVar6,puVar11);
  return;
}
