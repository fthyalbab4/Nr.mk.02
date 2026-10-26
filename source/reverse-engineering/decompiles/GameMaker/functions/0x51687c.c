// rea decompile_all
// name: FUN_0051687c
// address: 0x51687c
// body: available
// range: 0x51687c-0x516936 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051687c(int param_1,undefined4 param_2,int *param_3)

{
  BOOL BVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  tagRECT tStack_2c;
  undefined1 local_1c [16];

  FUN_005144ec(param_1,param_2,param_3);
  if (*(HWND *)(param_1 + 0x37c) != (HWND)0x0) {
    SetWindowPos(*(HWND *)(param_1 + 0x37c),(HWND)0x1,*param_3,param_3[1],param_3[2] - *param_3,
                 param_3[3] - param_3[1],0x14);
    if (*(char *)(param_1 + 0x29e) == '\x02') {
      BVar1 = GetClientRect(*(HWND *)(param_1 + 0x37c),&tStack_2c);
      if (BVar1 != 0) {
        InvalidateRect(*(HWND *)(param_1 + 0x37c),(RECT *)0x0,-1);
      }
    }
  }
  if (((*(byte *)(param_1 + 0x55) & 0x80) != 0) && ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    iVar2 = FUN_004edfcc(param_1);
    iVar2 = iVar2 - *(int *)(*(int *)(param_1 + 0x374) + 0x18);
    puVar4 = local_1c;
    iVar3 = FUN_004edf8c(param_1);
    FUN_0040c114(*(undefined4 *)(*(int *)(param_1 + 0x374) + 0xc),
                 *(undefined4 *)(*(int *)(param_1 + 0x374) + 0x10),
                 iVar3 - *(int *)(*(int *)(param_1 + 0x374) + 0x14),puVar4,iVar2);
    FUN_0051bb54(param_1,local_1c);
  }
  return;
}
