// rea decompile_all
// name: FUN_00448cbc
// address: 0x448cbc
// body: available
// range: 0x448cbc-0x448d7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DWORD FUN_00448cbc(int param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DStack_30;
  HANDLE local_2c;
  undefined4 uStack_28;
  tagMSG tStack_24;

  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_0041bfec(&PTR_LAB_00436d94,1,PTR_PTR_00781ff0);
    FUN_00406618();
  }
  local_2c = *(HANDLE *)(param_1 + 4);
  DVar1 = GetCurrentThreadId();
  if (DVar1 == *(DWORD *)PTR_DAT_0078296c) {
    DVar1 = 0;
    uStack_28 = DAT_00787f64;
    do {
      if (DVar1 == 2) {
        PeekMessageW(&tStack_24,(HWND)0x0,0,0,0);
      }
      DVar1 = MsgWaitForMultipleObjects(2,&local_2c,0,1000,0x40);
      FUN_00448268(param_1,DVar1 != 0xffffffff);
      if (DVar1 == 1) {
        FUN_00447d90(0);
      }
    } while (DVar1 != 0);
  }
  else {
    WaitForSingleObject(local_2c,0xffffffff);
  }
  BVar2 = GetExitCodeThread(local_2c,&DStack_30);
  FUN_00448268(param_1,BVar2 != 0);
  return DStack_30;
}
