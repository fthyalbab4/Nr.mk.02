// rea decompile_all
// name: FUN_004b89e0
// address: 0x4b89e0
// body: available
// range: 0x4b89e0-0x4b8b78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004b89e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  HWND pHVar2;
  int iVar3;
  DWORD dwThreadId;
  int iVar4;
  WNDENUMPROC lpfn;
  undefined4 *lParam;
  undefined1 local_40 [16];
  tagRECT local_30;
  undefined4 local_20;
  HWND local_1c;
  HWND local_18;
  undefined4 local_14;
  undefined4 local_10;
  char local_c;
  undefined1 local_5;

  local_5 = 1;
  local_18 = (HWND)FUN_004b8e20(param_4 + -0xc);
  pHVar2 = GetWindow(local_18,4);
  if (pHVar2 != *(HWND *)(*(int *)PTR_DAT_0068917c + 0x170)) {
    iVar3 = FUN_004b7b58(local_18);
    if (iVar3 == 0) {
      return local_5;
    }
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar4 + 0x34);
    } while (iVar3 != 0);
    local_18 = (HWND)FUN_004c45dc(iVar4);
  }
  iVar3 = param_1;
  if (local_18 != (HWND)0x0) {
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar4 + 0x34);
    } while (iVar3 != 0);
    local_1c = (HWND)FUN_004c45dc(iVar4);
    if (local_1c != local_18) {
      iVar3 = *(int *)(*(int *)(param_4 + -0x10) + 0x34);
      if (iVar3 == 0) {
        cVar1 = FUN_004061f8(*(undefined4 *)(param_4 + -0x10),&PTR_LAB_004b3174);
        if (cVar1 == '\0') {
          local_20 = 0;
        }
        else {
          local_20 = FUN_004c45dc(*(undefined4 *)(param_4 + -0x10));
        }
      }
      else {
        do {
          iVar4 = iVar3;
          iVar3 = *(int *)(iVar4 + 0x34);
        } while (iVar3 != 0);
        local_20 = FUN_004c45dc(iVar4,param_4);
      }
      local_c = '\0';
      local_14 = *(undefined4 *)(param_4 + -0xc);
      local_10 = *(undefined4 *)(param_4 + -8);
      lParam = &local_20;
      lpfn = (WNDENUMPROC)&LAB_004b8980;
      dwThreadId = GetCurrentThreadId();
      EnumThreadWindows(dwThreadId,lpfn,(LPARAM)lParam);
      if (local_c != '\0') {
        GetWindowRect(local_18,&local_30);
        FUN_00406268(param_1,*(undefined4 *)(param_4 + -0x10),local_40,param_4 + -1,param_4 + -0xc);
        cVar1 = FUN_004061f8(DAT_0068f26c,&LAB_004ad37c);
        if ((((cVar1 == '\0') || (*(int *)(*(int *)(DAT_0068f26c + 0x40) + 0x90) == 0)) ||
            (pHVar2 = (HWND)FUN_004c45dc(*(undefined4 *)(*(int *)(DAT_0068f26c + 0x40) + 0x90)),
            pHVar2 != local_18)) &&
           (cVar1 = FUN_0040c3c0(&local_30,&local_30,local_40), cVar1 != '\0')) {
          local_5 = 0;
        }
      }
    }
  }
  return local_5;
}
