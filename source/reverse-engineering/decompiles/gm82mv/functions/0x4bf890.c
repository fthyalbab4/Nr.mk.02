// rea decompile_all
// name: FUN_004bf890
// address: 0x4bf890
// body: available
// range: 0x4bf890-0x4bf95b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bf890(void)

{
  HWND pHVar1;
  BOOL BVar2;
  int *piVar3;
  int in_stack_00000004;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  tagRECT *lpRect;
  UINT uFlags;
  tagRECT local_1c;
  int local_c;
  int local_8;

  piVar3 = (int *)(in_stack_00000004 + -4);
  pHVar1 = (HWND)FUN_004c45dc(*piVar3);
  BVar2 = IsZoomed(pHVar1);
  if (BVar2 != 0) {
    pHVar1 = (HWND)FUN_004c45dc(*piVar3);
    pHVar1 = GetParent(pHVar1);
    if (pHVar1 == (HWND)0x0) {
      lpRect = &local_1c;
      pHVar1 = (HWND)FUN_004c45dc(*piVar3);
      GetWindowRect(pHVar1,lpRect);
      local_8 = *(int *)(*piVar3 + 0x48);
      local_c = *(int *)(*piVar3 + 0x4c);
      FUN_004bd670(*piVar3,&local_8,&local_c);
      if ((((*(int *)(*piVar3 + 0x48) != local_1c.right - local_1c.left) ||
           (*(int *)(*piVar3 + 0x4c) != local_1c.bottom - local_1c.top)) ||
          (*(int *)(*piVar3 + 0x48) != local_8)) || (*(int *)(*piVar3 + 0x4c) != local_c)) {
        uFlags = 0x16;
        cy = *(int *)(*piVar3 + 0x4c);
        cx = *(int *)(*piVar3 + 0x48);
        Y = 0;
        X = 0;
        hWndInsertAfter = (HWND)0x0;
        pHVar1 = (HWND)FUN_004c45dc(*piVar3);
        SetWindowPos(pHVar1,hWndInsertAfter,X,Y,cx,cy,uFlags);
      }
      (**(code **)(*(int *)*piVar3 + 0x68))();
      return;
    }
  }
  FUN_00406268(*piVar3);
  return;
}
