// rea decompile_all
// name: FUN_004b90c0
// address: 0x4b90c0
// body: available
// range: 0x4b90c0-0x4b9136 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b90c0(int param_1,int param_2)

{
  HWND hWnd;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_20;

  if ((param_2 != *(int *)(param_1 + 0x10)) &&
     (*(int *)(param_1 + 0x10) = param_2,
     *(char *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x2b4) == '\0')) {
    local_44 = 0x10;
    local_20 = param_2;
    local_40 = FUN_004b920c(param_1);
    local_3c = 0;
    hWnd = (HWND)FUN_004b8b7c(param_1);
    SendMessageW(hWnd,0x104c,0,(LPARAM)&local_44);
    uVar1 = FUN_004b920c(param_1);
    uVar2 = FUN_004b920c(param_1);
    uVar3 = FUN_004b8b50(param_1);
    FUN_004bb61c(uVar3,uVar2,uVar1);
  }
  return;
}
