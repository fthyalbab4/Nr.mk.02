// rea decompile_all
// name: FUN_004c2798
// address: 0x4c2798
// body: available
// range: 0x4c2798-0x4c289c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c2798(int *param_1,int param_2)

{
  int iVar1;
  HCURSOR hCursor;
  HWND pHVar2;
  HWND pHVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  tagPOINT local_1c;
  undefined1 local_14 [8];

  if (*(int *)(param_2 + 4) == param_1[0x96]) {
    if (*(short *)(param_2 + 8) == -2) {
      if ((*(short *)(param_2 + 10) == 0x201) && (*(int *)(*(int *)PTR_DAT_0068917c + 0x170) != 0))
      {
        pHVar2 = GetLastActivePopup(*(HWND *)(*(int *)PTR_DAT_0068917c + 0x170));
        pHVar3 = GetForegroundWindow();
        if (pHVar2 != pHVar3) {
          FUN_004eb10c(*(undefined4 *)PTR_DAT_0068917c);
        }
      }
    }
    else if (*(short *)(param_2 + 8) == 1) {
      sVar4 = *(short *)(*(int *)PTR_DAT_00689620 + 0x48);
      if (sVar4 == 0) {
        GetCursorPos(&local_1c);
        uVar6 = 0;
        uVar5 = 0;
        FUN_004bb188(param_1,&local_1c,local_14,0,0);
        iVar1 = FUN_004c0fcc(param_1,local_14,0,uVar5,uVar6);
        if (iVar1 != 0) {
          if ((*(byte *)(iVar1 + 0x1c) & 0x10) == 0) {
            sVar4 = *(short *)(iVar1 + 0x78);
          }
          else {
            sVar4 = -2;
          }
        }
        if (sVar4 == 0) {
          if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
            sVar4 = (short)param_1[0x1e];
          }
          else {
            sVar4 = -2;
          }
        }
      }
      if (sVar4 != 0) {
        hCursor = (HCURSOR)FUN_004e8c78(*(undefined4 *)PTR_DAT_00689620,(int)sVar4);
        SetCursor(hCursor);
        *(undefined4 *)(param_2 + 0xc) = 1;
        return;
      }
    }
  }
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  return;
}
