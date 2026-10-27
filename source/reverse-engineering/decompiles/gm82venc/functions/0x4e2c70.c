// rea decompile_all
// name: FUN_004e2c70
// address: 0x4e2c70
// body: available
// range: 0x4e2c70-0x4e2d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e2c70(int param_1,char param_2)

{
  char cVar1;
  HWND pHVar2;
  HWND hWndInsertAfter;
  int Y;
  int cx;
  int cy;
  int iVar3;
  LONG LVar4;
  UINT uFlags;
  LONG local_10;
  LONG local_c;

  if (param_2 != *(char *)(param_1 + 0x298)) {
    *(char *)(param_1 + 0x298) = param_2;
    cVar1 = FUN_004c4988(param_1);
    if ((cVar1 != '\0') &&
       (((*(byte *)(param_1 + 0x1c) & 0x10) == 0 ||
        (((*(byte *)(param_1 + 0x1c) & 0x10) != 0 && (*(int *)(param_1 + 0x34) != 0)))))) {
      if ((*(char *)(param_1 + 0x29e) == '\x01') && (*(char *)(param_1 + 0x29a) == '\x02')) {
        FUN_004c0aa8(param_1);
      }
      else {
        iVar3 = -0x10;
        pHVar2 = (HWND)FUN_004c45dc(param_1);
        local_10 = GetWindowLongW(pHVar2,iVar3);
        iVar3 = -0x14;
        pHVar2 = (HWND)FUN_004c45dc(param_1);
        local_c = GetWindowLongW(pHVar2,iVar3);
        FUN_00406268(param_1,&local_10,&local_c);
        iVar3 = -0x10;
        LVar4 = local_10;
        pHVar2 = (HWND)FUN_004c45dc(param_1);
        SetWindowLongW(pHVar2,iVar3,LVar4);
        iVar3 = -0x14;
        LVar4 = local_c;
        pHVar2 = (HWND)FUN_004c45dc(param_1);
        SetWindowLongW(pHVar2,iVar3,LVar4);
        uFlags = 0x37;
        cy = 0;
        cx = 0;
        Y = 0;
        iVar3 = 0;
        hWndInsertAfter = (HWND)0x0;
        pHVar2 = (HWND)FUN_004c45dc(param_1);
        SetWindowPos(pHVar2,hWndInsertAfter,iVar3,Y,cx,cy,uFlags);
      }
    }
  }
  return;
}
