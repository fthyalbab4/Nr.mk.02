// rea decompile_all
// name: FUN_004b9534
// address: 0x4b9534
// body: available
// range: 0x4b9534-0x4b95bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004b9534(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  HWND hWnd;
  LRESULT LVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_28;

  iVar1 = FUN_004f76a8(*(undefined4 *)(param_1 + 4));
  uVar2 = 0;
  if (iVar1 != 0) {
    local_44 = param_2;
    if (*(char *)(*(int *)(param_1 + 4) + 0x2b4) == '\0') {
      local_48 = 4;
      local_40 = 0;
      hWnd = (HWND)FUN_004b9528(param_1);
      LVar3 = SendMessageW(hWnd,0x104b,0,(LPARAM)&local_48);
      if (LVar3 != 0) {
        uVar2 = local_28;
      }
    }
    else {
      FUN_00404f08(&local_48,0x3c,0);
      local_48 = 0;
      local_40 = 0;
      uVar2 = FUN_004bc11c(*(undefined4 *)(param_1 + 4),&local_48);
    }
  }
  return uVar2;
}
