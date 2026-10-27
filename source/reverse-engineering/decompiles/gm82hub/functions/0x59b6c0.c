// rea decompile_all
// name: FUN_0059b6c0
// address: 0x59b6c0
// body: available
// range: 0x59b6c0-0x59b751 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059b6c0(void)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  int in_stack_00000004;
  int nMinPos;
  BOOL bRedraw;

  if ((*(char *)(in_stack_00000004 + -0x79) == '\x01') ||
     (*(char *)(in_stack_00000004 + -0x79) == '\x03')) {
    if (*(int *)(*(int *)(in_stack_00000004 + -0x78) + 0x284) == 1) {
      iVar1 = FUN_0059cbe8(*(undefined4 *)(in_stack_00000004 + -0x78),0);
      iVar2 = FUN_004baf44(*(undefined4 *)(in_stack_00000004 + -0x78));
      iVar1 = iVar1 - iVar2;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      bRedraw = -1;
      nMinPos = 0;
      iVar2 = 0;
      hWnd = (HWND)FUN_004c45dc(*(undefined4 *)(in_stack_00000004 + -0x78));
      SetScrollRange(hWnd,iVar2,nMinPos,iVar1,bRedraw);
    }
    else {
      FUN_0059b644(in_stack_00000004 + -0x68,in_stack_00000004 + -0x70,
                   *(int *)(in_stack_00000004 + -0x78) + 0x2c8,
                   *(undefined4 *)(*(int *)(in_stack_00000004 + -0x78) + 0x29c),0);
    }
  }
  return;
}
