// rea decompile_all
// name: FUN_004e55bc
// address: 0x4e55bc
// body: available
// range: 0x4e55bc-0x4e574f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e55bc(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  HWND pHVar5;
  int iVar6;
  int iVar7;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  HMENU hMenu;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;

  uVar2 = FUN_004e3728(param_1);
  if ((*(int *)(param_1 + 0x344) != 0) &&
     (iVar7 = *(int *)(*(int *)(param_1 + 0x344) + 8), -1 < iVar7 + -1)) {
    iVar6 = 0;
    do {
      FUN_00438ec4(*(undefined4 *)(param_1 + 0x344),iVar6);
      cVar1 = FUN_004c4988();
      if (cVar1 != '\0') {
        uVar3 = FUN_00438ec4(*(undefined4 *)(param_1 + 0x344),iVar6);
        iVar4 = FUN_00438f2c(uVar2,uVar3);
        if (iVar4 < 0) {
          uVar3 = FUN_00438ec4(*(undefined4 *)(param_1 + 0x344),iVar6);
          FUN_00438d04(uVar2,uVar3);
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(int *)(param_1 + 0x358) == 0) {
    if ((*(byte *)(param_1 + 0x1c) & 8) == 0) {
      pHVar5 = (HWND)FUN_00406268(param_1);
      if ((pHVar5 != (HWND)0x0) && (pHVar5 != *(HWND *)(DAT_0068f2e8 + 0x170))) {
        uStack_1c = FUN_004ed0fc(DAT_0068f2e8,param_1);
        uStack_18 = *(undefined4 *)(param_1 + 600);
        uStack_14 = *(int *)(param_1 + 0x35c) != 0;
        SendMessageW(pHVar5,0xb048,(WPARAM)&uStack_1c,*(LPARAM *)(DAT_0068f2e8 + 0x178));
      }
    }
    *(undefined4 *)(param_1 + 0x35c) = 0;
  }
  else {
    uVar2 = FUN_004e3728(*(undefined4 *)(param_1 + 0x358));
    iVar7 = FUN_00438f2c(uVar2,param_1);
    if (iVar7 < 0) {
      uVar2 = FUN_004e3700(*(undefined4 *)(param_1 + 0x358));
      iVar7 = FUN_00438f2c(uVar2,param_1);
      if (-1 < iVar7) {
        uVar2 = FUN_004e3728(*(undefined4 *)(param_1 + 0x358));
        FUN_00438d04(uVar2,param_1);
      }
    }
  }
  if (*PTR_DAT_00688e94 != '\0') {
    lParam = 0;
    wParam = 1;
    Msg = 0x80;
    pHVar5 = (HWND)FUN_004c45dc(param_1);
    SendMessageW(pHVar5,Msg,wParam,lParam);
  }
  if ((*(int *)(param_1 + 0x2b4) != 0) && (*(char *)(param_1 + 0x29e) != '\x01')) {
    hMenu = (HMENU)0x0;
    pHVar5 = (HWND)FUN_004c45dc(param_1);
    SetMenu(pHVar5,hMenu);
    FUN_004ab0a0(*(undefined4 *)(param_1 + 0x2b4),0);
  }
  FUN_004c3578(param_1,param_2);
  return;
}
