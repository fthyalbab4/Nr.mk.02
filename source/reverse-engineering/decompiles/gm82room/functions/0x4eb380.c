// rea decompile_all
// name: FUN_004eb380
// address: 0x4eb380
// body: available
// range: 0x4eb380-0x4eb476 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004eb380(int param_1,int *param_2)

{
  char cVar1;
  HWND pHVar2;
  BOOL BVar3;
  LRESULT LVar4;
  undefined4 uVar5;
  DWORD local_18;
  DWORD local_14;

  uVar5 = 0;
  if ((0xff < (uint)param_2[1]) && ((uint)param_2[1] < 0x10a)) {
    pHVar2 = GetCapture();
    if (pHVar2 == (HWND)0x0) {
      pHVar2 = (HWND)*param_2;
      if ((*(int *)(param_1 + 0x44) == 0) || (pHVar2 != *(HWND *)(*(int *)(param_1 + 0x44) + 0x37c))
         ) {
        while( true ) {
          cVar1 = FUN_004b7bb4(pHVar2);
          if ((cVar1 != '\0') || (pHVar2 == (HWND)0x0)) break;
          pHVar2 = GetParent(pHVar2);
        }
        if (pHVar2 == (HWND)0x0) {
          pHVar2 = (HWND)*param_2;
        }
      }
      else {
        pHVar2 = (HWND)FUN_004c45dc();
      }
      BVar3 = IsWindowUnicode(pHVar2);
      if (BVar3 == 0) {
        LVar4 = SendMessageA(pHVar2,param_2[1] + 0xbc00,param_2[2],param_2[3]);
        if (LVar4 != 0) {
          uVar5 = 1;
        }
      }
      else {
        LVar4 = SendMessageW(pHVar2,param_2[1] + 0xbc00,param_2[2],param_2[3]);
        if (LVar4 != 0) {
          uVar5 = 1;
        }
      }
    }
    else {
      GetWindowThreadProcessId(pHVar2,&local_18);
      GetWindowThreadProcessId(*(HWND *)(param_1 + 0x170),&local_14);
      if (local_18 == local_14) {
        LVar4 = SendMessageW(pHVar2,param_2[1] + 0xbc00,param_2[2],param_2[3]);
        if (LVar4 != 0) {
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}
