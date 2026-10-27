// rea decompile_all
// name: FUN_0062f1b4
// address: 0x62f1b4
// body: available
// range: 0x62f1b4-0x62f544 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062f1b4(void)

{
  undefined *puVar1;
  HINSTANCE pHVar2;
  LPCWSTR pWVar3;
  HCURSOR pHVar4;

  pHVar2 = DAT_00785c40;
  puVar1 = PTR_DAT_007828e0;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"PAINT_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,5,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"TEXT_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,6,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"PICK_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,7,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"SPRAY_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,8,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"RECT_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,9,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"RRECT_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,10,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"CIRC_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0xb,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"LINE_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0xc,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"FILL_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0xd,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"MOVE_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0xe,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"POLYLINE_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0xf,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"POLYGON_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x10,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"ERASE_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x11,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"SRECT_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x12,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"SRECT_CURSOR_P");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x13,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"SRECT_CURSOR_M");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x14,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"SWAND_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x15,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"SWAND_CURSOR_P");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x16,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"SWAND_CURSOR_M");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x17,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"SSPRAY_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x18,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"SSPRAY_CURSOR_P");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x19,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"SSPRAY_CURSOR_M");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x1a,pHVar4);
  pHVar2 = DAT_00785c40;
  pWVar3 = (LPCWSTR)FUN_00407f44(L"CHANGE_CURSOR");
  pHVar4 = LoadCursorW(pHVar2,pWVar3);
  FUN_0051cd0c(*(undefined4 *)puVar1,0x1b,pHVar4);
  return;
}
