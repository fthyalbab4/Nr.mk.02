// rea decompile_all
// name: FUN_004e2e6c
// address: 0x4e2e6c
// body: available
// range: 0x4e2e6c-0x4e3008 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e2e6c(int *param_1,char param_2)

{
  char cVar1;
  HWND pHVar2;
  LPARAM LVar3;
  undefined4 uVar4;
  HWND hWndInsertAfter;
  int Y;
  UINT UVar5;
  int cx;
  WPARAM WVar6;
  int cy;
  DWORD *dwNewLong;
  LONG LVar7;
  BOOL bRevert;
  int iVar8;
  LONG local_14;
  LONG local_10;
  DWORD local_c;

  if (param_2 != *(char *)((int)param_1 + 0x299)) {
    *(char *)((int)param_1 + 0x299) = param_2;
    if (((char)param_1[0x9d] == '\0') ||
       ((*(char *)((int)param_1 + 0x299) != '\x02' && (*(char *)((int)param_1 + 0x299) != '\x05'))))
    {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    FUN_004e08a4(param_1,uVar4);
    cVar1 = FUN_004c4988(param_1);
    if ((cVar1 != '\0') &&
       (((*(byte *)(param_1 + 7) & 0x10) == 0 ||
        (((*(byte *)(param_1 + 7) & 0x10) != 0 && (param_1[0xd] != 0)))))) {
      iVar8 = -0x10;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      local_14 = GetWindowLongW(pHVar2,iVar8);
      iVar8 = -0x14;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      local_10 = GetWindowLongW(pHVar2,iVar8);
      iVar8 = -0x1a;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      local_c = GetClassLongW(pHVar2,iVar8);
      dwNewLong = &local_c;
      FUN_00406268(param_1,&local_14,&local_10);
      FUN_00406268(param_1,&stack0xffffffe8,&local_14);
      iVar8 = -0x10;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      SetWindowLongW(pHVar2,iVar8,(LONG)dwNewLong);
      iVar8 = -0x14;
      LVar7 = local_14;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      SetWindowLongW(pHVar2,iVar8,LVar7);
      iVar8 = -0x1a;
      LVar7 = local_10;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      SetClassLongW(pHVar2,iVar8,LVar7);
      cVar1 = FUN_004c4988(param_1);
      if (cVar1 != '\0') {
        if (*PTR_DAT_00688e94 != '\0') {
          if (*(char *)((int)param_1 + 0x299) == '\x03') {
            LVar3 = 0;
            WVar6 = 1;
            UVar5 = 0x80;
            pHVar2 = (HWND)FUN_004c45dc(param_1);
            SendMessageW(pHVar2,UVar5,WVar6,LVar3);
          }
          else {
            LVar3 = FUN_004e4fd8(param_1);
            WVar6 = 1;
            UVar5 = 0x80;
            pHVar2 = (HWND)FUN_004c45dc(param_1);
            SendMessageW(pHVar2,UVar5,WVar6,LVar3);
          }
        }
        bRevert = -1;
        pHVar2 = (HWND)FUN_004c45dc(param_1);
        GetSystemMenu(pHVar2,bRevert);
        FUN_004bcb48(param_1,0x81,0,0);
      }
      UVar5 = 0x37;
      cy = 0;
      cx = 0;
      Y = 0;
      iVar8 = 0;
      hWndInsertAfter = (HWND)0x0;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      SetWindowPos(pHVar2,hWndInsertAfter,iVar8,Y,cx,cy,UVar5);
      (**(code **)(*param_1 + 0x90))();
    }
  }
  return;
}
