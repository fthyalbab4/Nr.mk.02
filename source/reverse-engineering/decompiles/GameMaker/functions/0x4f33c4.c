// rea decompile_all
// name: FUN_004f33c4
// address: 0x4f33c4
// body: available
// range: 0x4f33c4-0x4f35bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f33e5 (push 0x4f35be followed by fs-segment stack chaining); handler 0x4f35be lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f33c4(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  ATOM AVar4;
  BOOL BVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 uVar8;
  undefined4 *in_FS_OFFSET;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  undefined4 local_104;
  int local_100;
  undefined1 local_fc;
  tagWNDCLASSW local_f8;
  undefined1 local_d0 [7];
  byte local_c9;
  int local_b4;
  WNDCLASSW local_ac;
  WCHAR local_84 [64];

  puStack_114 = &stack0xfffffffc;
  local_104 = 0;
  puStack_118 = &LAB_004f35be;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  (**(code **)(*param_1 + 0xac))(param_1,local_d0);
  if ((local_b4 == 0) && ((local_c9 & 0x40) != 0)) {
    iVar1 = param_1[1];
    if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x1c) & 2) != 0)) {
      cVar3 = FUN_00405c98(iVar1,&PTR_LAB_004e61b8);
      if (cVar3 != '\0') {
        local_b4 = FUN_004f76a8(iVar1);
        goto LAB_004f3477;
      }
    }
    local_100 = param_1[2];
    local_fc = 0x11;
    piVar9 = &local_100;
    uVar8 = 0;
    FUN_0040b75c(PTR_PTR_007823d8,&local_104);
    FUN_0041bef4(&PTR_LAB_0042f068,1,local_104,uVar8,piVar9);
    FUN_00406618();
  }
LAB_004f3477:
  param_1[0x95] = (int)local_ac.lpfnWndProc;
  BVar5 = GetClassInfoW(local_ac.hInstance,local_84,&local_f8);
  if ((BVar5 == 0) || (local_f8.lpfnWndProc != FUN_004eaa58)) {
    if (BVar5 != 0) {
      UnregisterClassW(local_84,local_ac.hInstance);
    }
    local_ac.lpfnWndProc = FUN_004eaa58;
    local_ac.lpszClassName = local_84;
    AVar4 = RegisterClassW(&local_ac);
    if (AVar4 == 0) {
      FUN_0041e9c8();
    }
  }
  DAT_00778aa8 = param_1;
  (**(code **)(*param_1 + 0xb0))(param_1,local_d0);
  if (param_1[0x96] == 0) {
    FUN_0041e9c8();
  }
  uVar6 = GetWindowLongW((HWND)param_1[0x96],-0x10);
  if ((uVar6 & 0x40000000) != 0) {
    LVar7 = GetWindowLongW((HWND)param_1[0x96],-0xc);
    if (LVar7 == 0) {
      SetWindowLongW((HWND)param_1[0x96],-0xc,(LONG)param_1[0x96]);
    }
  }
  FUN_00417c10(param_1[0x5d]);
  param_1[0x5d] = 0;
  FUN_004f7a60(param_1);
  uVar10 = 1;
  uVar8 = FUN_0045b10c(param_1[0x19]);
  FUN_004efb90(param_1,0x30,uVar8,uVar10);
  if (*(char *)((int)param_1 + 0x5e) != '\0') {
    FUN_00405d08(param_1);
  }
  piVar9 = *(int **)(param_1[0x2b] + 8);
  if ((piVar9 != (int *)0x0) && ((*(byte *)((int)param_1 + 0x52) & 0x20) != 0)) {
    (**(code **)(*piVar9 + 8))(piVar9,1);
  }
  puVar2 = puStack_114;
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004f35c5;
  puStack_118 = (undefined1 *)0x4f35bd;
  thunk_FUN_00406e5c(&local_104,uStack_11c,puVar2);
  return;
}
