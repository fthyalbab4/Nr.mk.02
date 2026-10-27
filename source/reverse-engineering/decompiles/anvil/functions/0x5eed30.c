// rea decompile_all
// name: FUN_005eed30
// address: 0x5eed30
// body: available
// range: 0x5eed30-0x5eedbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005eed30(int param_1)

{
  LONG LVar1;
  HWND hWnd;
  undefined4 *puVar2;
  undefined4 local_c;

  puVar2 = &local_c;
  if ((*(int *)(param_1 + 0x294) != 0) && (*(int *)(param_1 + 600) == 0)) {
    local_c = 0;
    hWnd = *(HWND *)(param_1 + 0x294);
    (**(code **)(hWnd->unused + 0xc))();
    if (hWnd == (HWND)0x0) {
      FUN_0041be80(&LAB_00536060,1,PTR_LAB_00689694,0,puVar2);
      FUN_00406ab4();
    }
    *(HWND *)(param_1 + 600) = hWnd;
    LVar1 = GetWindowLongW(hWnd,-4);
    *(LONG *)(param_1 + 0x254) = LVar1;
    *(int *)PTR_DAT_00689030 = param_1;
    SetWindowLongW(*(HWND *)(param_1 + 600),-4,0x4b7a14);
    SendMessageW(*(HWND *)(param_1 + 600),0,0,0);
  }
  return;
}
