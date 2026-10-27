// rea decompile_all
// name: FUN_00599968
// address: 0x599968
// body: available
// range: 0x599968-0x5999ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00599968(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  HWND hWnd;
  RECT *lpRect;
  BOOL bErase;
  RECT local_18;
  uint local_8;

  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)*(uint *)(param_2 + 0x10) <= (int)*(uint *)(param_1 + 0x10)) {
    uVar1 = *(uint *)(param_2 + 0x10);
  }
  local_8 = param_3;
  FUN_00597e30(*(undefined4 *)(param_4 + -4),~param_3 & uVar1,param_3 & uVar1,&local_18);
  local_18.bottom = *(LONG *)(*(int *)(param_4 + -4) + 0x4c);
  local_18.right = *(LONG *)(*(int *)(param_4 + -4) + 0x48);
  bErase = 0;
  lpRect = &local_18;
  hWnd = (HWND)FUN_004c45dc(*(undefined4 *)(param_4 + -4));
  InvalidateRect(hWnd,lpRect,bErase);
  return;
}
