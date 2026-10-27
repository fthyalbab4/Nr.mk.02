// rea decompile_all
// name: FUN_004f4880
// address: 0x4f4880
// body: available
// range: 0x4f4880-0x4f4986 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f4880(UINT param_1,UINT *param_2)

{
  UINT UVar1;
  COLORREF CVar2;

  if (*(int *)(param_1 + 600) == 0) {
    FUN_004effa4(param_1,param_2);
  }
  else {
    if ((*param_2 == 0x7b) && (*(int *)(param_1 + 0x34) != 0)) {
      UVar1 = FUN_004efb90(*(undefined4 *)(param_1 + 0x34),0x7b,param_2[1],param_2[2]);
      param_2[3] = UVar1;
      if (UVar1 != 0) {
        return;
      }
    }
    UVar1 = *param_2;
    if (UVar1 - 0x132 < 7) {
      UVar1 = SendMessageW((HWND)param_2[2],UVar1 + 0xbc00,param_2[1],(LPARAM)param_2[2]);
      param_2[3] = UVar1;
    }
    else if (UVar1 - 0xbd32 < 7) {
      CVar2 = FUN_0045aa34(*(undefined4 *)(*(int *)(param_1 + 100) + 0x18));
      SetTextColor((HDC)param_2[1],CVar2);
      CVar2 = FUN_0045aa34(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c0) + 0x10) + 0x14));
      SetBkColor((HDC)param_2[1],CVar2);
      UVar1 = FUN_0045bc84(*(undefined4 *)(param_1 + 0x1c0));
      param_2[3] = UVar1;
    }
    else if (UVar1 == DAT_00788268) {
      param_2[3] = param_1;
    }
    else {
      UVar1 = CallWindowProcW(*(WNDPROC *)(param_1 + 0x254),*(HWND *)(param_1 + 600),UVar1,
                              param_2[1],param_2[2]);
      param_2[3] = UVar1;
    }
    if (*param_2 == 0xc) {
      FUN_004ee22c(param_1,0xc,param_2[1],param_2[2]);
    }
  }
  return;
}
