// rea decompile_all
// name: FUN_0051fbdc
// address: 0x51fbdc
// body: available
// range: 0x51fbdc-0x51fd52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51fcd7 (push 0x51fd53 followed by fs-segment stack chaining); handler 0x51fd53 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051fbdc(int param_1,LPCWSTR param_2,LPCWSTR param_3,UINT param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  tagRECT local_5c;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  HWND local_14;
  int local_10;
  LPCWSTR local_c;
  int local_8;

  local_c = param_3;
  local_8 = param_1;
  local_14 = (HWND)FUN_00521264(param_1);
  hWnd = local_14;
  if (local_14 == (HWND)0x0) {
    hWnd = *(HWND *)(local_8 + 0x170);
  }
  local_18 = (**(code **)PTR_DAT_00781ee0)();
  local_1c = (**(code **)PTR_DAT_00781ee0)();
  if (local_18 != local_1c) {
    local_4c = 0x28;
    (**(code **)PTR_DAT_00781bd4)();
    GetWindowRect(*(HWND *)(local_8 + 0x170),&local_5c);
    iVar2 = local_3c - local_44 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((local_3c - local_44 & 1U) != 0);
    }
    iVar3 = local_40 - local_48 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((local_40 - local_48 & 1U) != 0);
    }
    SetWindowPos(*(HWND *)(local_8 + 0x170),(HWND)0x0,iVar3 + local_48,iVar2 + local_44,0,0,0x1d);
  }
  local_24 = FUN_005132b4(local_14);
  local_20 = FUN_00513108();
  cVar1 = FUN_0051e544(local_8);
  if (cVar1 != '\0') {
    param_4 = param_4 | 0x100000;
  }
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffff7c;
  local_10 = MessageBoxW(hWnd,param_2,local_c,param_4);
  *in_FS_OFFSET = uVar4;
  if (local_18 != local_1c) {
    iVar2 = local_5c.bottom - local_5c.top >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((local_5c.bottom - local_5c.top & 1U) != 0);
    }
    iVar3 = local_5c.right - local_5c.left >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)((local_5c.right - local_5c.left & 1U) != 0);
    }
    SetWindowPos(*(HWND *)(local_8 + 0x170),(HWND)0x0,iVar3 + local_5c.left,iVar2 + local_5c.top,0,0
                 ,0x1d);
  }
  FUN_00513378(local_24);
  SetActiveWindow(local_14);
  FUN_00513110(local_20);
  return;
}
