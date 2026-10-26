// rea decompile_all
// name: FUN_00445ec8
// address: 0x445ec8
// body: available
// range: 0x445ec8-0x445f86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DWORD FUN_00445ec8(int param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DStack_30;
  HANDLE local_2c;
  undefined4 uStack_28;
  tagMSG tStack_24;

  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_0041be80(&LAB_00434c40,1,PTR_LAB_00688fac);
    FUN_00406ab4();
  }
  local_2c = *(HANDLE *)(param_1 + 4);
  DVar1 = GetCurrentThreadId();
  if (DVar1 == *(DWORD *)PTR_DAT_00689680) {
    DVar1 = 0;
    uStack_28 = DAT_0068ef64;
    do {
      if (DVar1 == 2) {
        PeekMessageW(&tStack_24,(HWND)0x0,0,0,0);
      }
      DVar1 = MsgWaitForMultipleObjects(2,&local_2c,0,1000,0x40);
      FUN_00445474(param_1,DVar1 != 0xffffffff);
      if (DVar1 == 1) {
        FUN_00444f9c(0);
      }
    } while (DVar1 != 0);
  }
  else {
    WaitForSingleObject(local_2c,0xffffffff);
  }
  BVar2 = GetExitCodeThread(local_2c,&DStack_30);
  FUN_00445474(param_1,BVar2 != 0);
  return DStack_30;
}
