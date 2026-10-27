// rea decompile_all
// name: FUN_0047a238
// address: 0x47a238
// body: available
// range: 0x47a238-0x47a38b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a238(int *param_1)

{
  int iVar1;
  HWND pHVar2;
  LONG LVar3;
  UINT UVar4;
  WPARAM wParam;
  LPARAM lParam;

  FUN_00479cec(param_1);
  iVar1 = FUN_004c45dc(param_1);
  param_1[0xae] = iVar1;
  if (param_1[0xba] != 0) {
    (**(code **)(*(int *)param_1[0xab] + 8))((int *)param_1[0xab],param_1[0xba]);
    FUN_00405fdc(param_1[0xba]);
    param_1[0xba] = 0;
    if (param_1[0xb2] != -1) {
      iVar1 = (**(code **)(*(int *)param_1[0xab] + 0x14))();
      if (iVar1 < param_1[0xb2]) {
        iVar1 = (**(code **)(*(int *)param_1[0xab] + 0x14))();
        param_1[0xb2] = iVar1;
      }
      lParam = 0;
      wParam = param_1[0xb2];
      UVar4 = 0x14e;
      pHVar2 = (HWND)FUN_004c45dc(param_1);
      SendMessageW(pHVar2,UVar4,wParam,lParam);
      param_1[0xb2] = -1;
    }
  }
  if (*(byte *)((int)param_1 + 0x2e6) < 2) {
    UVar4 = 5;
    pHVar2 = (HWND)FUN_004c45dc(param_1);
    pHVar2 = GetWindow(pHVar2,UVar4);
    if (pHVar2 != (HWND)0x0) {
      if (*(char *)((int)param_1 + 0x2e6) == '\x01') {
        param_1[0xad] = (int)pHVar2;
        LVar3 = GetWindowLongW(pHVar2,-4);
        param_1[0xb0] = LVar3;
        SetWindowLongW((HWND)param_1[0xad],-4,param_1[0xb4]);
        pHVar2 = GetWindow(pHVar2,2);
      }
      param_1[0xac] = (int)pHVar2;
      LVar3 = GetWindowLongW(pHVar2,-4);
      param_1[0xaf] = LVar3;
      SetWindowLongW((HWND)param_1[0xac],-4,param_1[0xb3]);
    }
  }
  if ((*PTR_DAT_00688e94 != '\0') && (param_1[0xac] != 0)) {
    SendMessageW((HWND)param_1[0xac],0xd3,3,0);
  }
  (**(code **)(*param_1 + 0x13c))();
  return;
}
