// rea decompile_all
// name: FUN_00484f3c
// address: 0x484f3c
// body: available
// range: 0x484f3c-0x484f5f inclusive
// range: 0x484f80-0x485050 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00484f3c(int param_1,int param_2)

{
  char cVar1;
  HWND hwnd;
  int nBar;
  tagSCROLLINFO *lpsi;
  int local_2c;
  tagSCROLLINFO local_28;

  local_2c = *(int *)(param_1 + 0x274);
  switch(*(undefined1 *)(param_2 + 4)) {
  case 0:
    local_2c = local_2c - (uint)*(ushort *)(param_1 + 0x288) * *(int *)(param_1 + 0x284);
    break;
  case 1:
    local_2c = local_2c + (uint)*(ushort *)(param_1 + 0x288) * *(int *)(param_1 + 0x284);
    break;
  case 2:
    local_2c = local_2c - (uint)*(ushort *)(param_1 + 0x28a) * *(int *)(param_1 + 0x284);
    break;
  case 3:
    local_2c = local_2c + (uint)*(ushort *)(param_1 + 0x28a) * *(int *)(param_1 + 0x284);
    break;
  case 4:
  case 5:
    local_28.cbSize = 0x1c;
    local_28.fMask = 0x17;
    lpsi = &local_28;
    nBar = 2;
    hwnd = (HWND)FUN_004f76a8(param_1);
    GetScrollInfo(hwnd,nBar,lpsi);
    cVar1 = FUN_00484cbc(param_1);
    local_2c = local_28.nTrackPos;
    if (cVar1 == '\0') {
      local_2c = *(int *)(param_1 + 0x27c) - local_28.nTrackPos;
    }
    break;
  case 6:
    local_2c = *(int *)(param_1 + 0x278);
    break;
  case 7:
    local_2c = *(int *)(param_1 + 0x27c);
  }
  if (local_2c < *(int *)(param_1 + 0x278)) {
    local_2c = *(int *)(param_1 + 0x278);
  }
  if (*(int *)(param_1 + 0x27c) < local_2c) {
    local_2c = *(int *)(param_1 + 0x27c);
  }
  FUN_00405d08(param_1,*(undefined1 *)(param_2 + 4),&local_2c);
  FUN_00484e60(param_1,local_2c);
  return;
}
