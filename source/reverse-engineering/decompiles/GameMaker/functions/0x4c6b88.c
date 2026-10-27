// rea decompile_all
// name: FUN_004c6b88
// address: 0x4c6b88
// body: available
// range: 0x4c6b88-0x4c6dba inclusive
// range: 0x4c6dc2-0x4c6eb7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c6ba3 (push 0x4c6eb8 followed by fs-segment stack chaining); handler 0x4c6eb8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c6d19 (push 0x4c6dbb followed by fs-segment stack chaining); handler 0x4c6dbb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c6b88(int *param_1)

{
  HWND pHVar1;
  LONG LVar2;
  LPARAM LVar3;
  LPVOID *ppv;
  LRESULT LVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  WPARAM WVar8;
  UINT UVar9;
  UINT uCmd;
  undefined1 *puVar10;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  puVar10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004c6eb8;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0047ff4c(param_1);
  UVar9 = 5;
  pHVar1 = (HWND)FUN_004f76a8(param_1);
  pHVar1 = GetWindow(pHVar1,UVar9);
  param_1[0xae] = (int)pHVar1;
  param_1[0xb8] = (int)pHVar1;
  LVar2 = GetWindowLongW(pHVar1,-4);
  param_1[0xb9] = LVar2;
  SetWindowLongW((HWND)param_1[0xb8],-4,param_1[0xba]);
  if (*(byte *)(param_1 + 0xc0) < 2) {
    uCmd = 5;
    UVar9 = 5;
    pHVar1 = (HWND)FUN_004f76a8(param_1);
    pHVar1 = GetWindow(pHVar1,UVar9);
    pHVar1 = GetWindow(pHVar1,uCmd);
    if (pHVar1 != (HWND)0x0) {
      if ((char)param_1[0xc0] == '\x01') {
        param_1[0xad] = (int)pHVar1;
        LVar2 = GetWindowLongW(pHVar1,-4);
        param_1[0xb0] = LVar2;
        SetWindowLongW((HWND)param_1[0xad],-4,param_1[0xb4]);
        pHVar1 = GetWindow(pHVar1,2);
      }
      param_1[0xac] = (int)pHVar1;
      LVar2 = GetWindowLongW(pHVar1,-4);
      param_1[0xaf] = LVar2;
      SetWindowLongW((HWND)param_1[0xac],-4,param_1[0xb3]);
    }
  }
  if ((*PTR_DAT_00781e70 != '\0') && (param_1[0xac] != 0)) {
    SendMessageW((HWND)param_1[0xac],0xd3,3,0);
  }
  if (param_1[0xbd] != 0) {
    (**(code **)(*(int *)param_1[0xc1] + 0x20))();
    *(undefined1 *)(param_1 + 0xbe) = 1;
    uVar7 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffd4;
    (**(code **)(*(int *)param_1[0xc1] + 8))((int *)param_1[0xc1],param_1[0xbd]);
    iVar5 = *(int *)(*(int *)(param_1[0xc1] + 8) + 8);
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      do {
        (**(code **)(*(int *)param_1[0xc1] + 0x30))((int *)param_1[0xc1],iVar6);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = param_1[0xbd];
    param_1[0xbd] = 0;
    FUN_00405a7c(iVar5);
    FUN_004ee79c(param_1,param_1[0x19]);
    (**(code **)(*param_1 + 0xf0))(param_1,param_1[0xbf]);
    *in_FS_OFFSET = uVar7;
    iVar5 = *(int *)param_1[0xc1];
    (**(code **)(iVar5 + 0x24))((int *)param_1[0xc1],iVar5,puVar10);
    *(undefined1 *)(param_1 + 0xbe) = 0;
    return;
  }
  if (param_1[0xbc] != 0) {
    LVar3 = FUN_00506bcc(param_1[0xbc]);
    WVar8 = 0;
    UVar9 = 0x402;
    pHVar1 = (HWND)FUN_004f76a8(param_1);
    PostMessageW(pHVar1,UVar9,WVar8,LVar3);
  }
  FUN_004c6f7c(param_1,*(undefined1 *)((int)param_1 + 0x301));
  FUN_0040b140(param_1 + 0xb6);
  ppv = (LPVOID *)FUN_0040b140(param_1 + 0xb6);
  CoCreateInstance((IID *)PTR_DAT_00781d88,(LPUNKNOWN)0x0,1,(IID *)&LAB_004c6ec8,ppv);
  if (param_1[0xb6] != 0) {
    LVar3 = 0;
    WVar8 = 0;
    UVar9 = 0x407;
    pHVar1 = (HWND)FUN_004f76a8(param_1);
    LVar4 = SendMessageW(pHVar1,UVar9,WVar8,LVar3);
    if (LVar4 != 0) {
      iVar5 = FUN_004c7954(&DAT_004c6608,1,param_1[0xc1]);
      if (iVar5 != 0) {
        iVar5 = iVar5 + 0x14;
      }
      FUN_0040b158(&local_8,iVar5);
      (**(code **)(*(int *)param_1[0xb6] + 0xc))();
      FUN_004c71ac(param_1);
    }
  }
  puVar10 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004c6ebf;
  puStack_1c = (undefined1 *)0x4c6eb7;
  FUN_0040b140(&local_8,uStack_20,puVar10);
  return;
}
