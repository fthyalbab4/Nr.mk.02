// rea decompile_all
// name: FUN_004aa738
// address: 0x4aa738
// body: available
// range: 0x4aa738-0x4aa801 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004aa738(int param_1,int param_2)

{
  char cVar1;
  HWND hWnd;
  undefined4 uVar2;
  undefined1 *puVar3;
  LPRECT lpRect;
  undefined4 local_38;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [12];
  int local_18;
  undefined1 local_14 [8];

  if ((*(int *)(param_1 + 0x274) != 0) && (*(char *)(*(int *)(param_1 + 0x274) + 0x28d) == '\0')) {
    FUN_00503a6c();
    cVar1 = FUN_00503b78();
    if (cVar1 != '\0') {
      lpRect = (LPRECT)(local_34 + 4);
      hWnd = (HWND)FUN_004f76a8(param_1);
      GetWindowRect(hWnd,lpRect);
      FUN_0040c268(local_34 + 4,-local_34._4_4_,-local_2c);
      local_38 = 0;
      local_34._0_4_ = 0;
      FUN_004f1670(param_1,&local_38,0,local_14);
      InflateRect((LPRECT)local_34,local_18,local_18);
      uVar2 = FUN_00503a6c();
      FUN_00504764(uVar2,0x2a,local_24);
      puVar3 = local_34;
      uVar2 = FUN_00503a6c();
      FUN_00503d0c(uVar2,*(undefined4 *)(param_2 + 4),local_24,puVar3);
      *(undefined4 *)(param_2 + 0xc) = 1;
      return;
    }
  }
  FUN_004f559c(param_1,param_2);
  return;
}
