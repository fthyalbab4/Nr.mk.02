// rea decompile_all
// name: FUN_004ed4dc
// address: 0x4ed4dc
// body: available
// range: 0x4ed4dc-0x4ed560 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ed4dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  HWND hWnd;

  *(undefined1 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x44);
  if (((*(int *)(DAT_0068f2ec + 0x68) != iVar1) && (iVar1 != 0)) &&
     (*(char *)(iVar1 + 0x29e) != '\x02')) {
    uVar2 = FUN_004c45dc(iVar1);
    FUN_004e9804(uVar2,9);
  }
  SetActiveWindow(*(HWND *)(param_1 + 0x170));
  FUN_004ea250(param_1);
  FUN_004ea3b0(param_1,1);
  if (*(int *)(DAT_0068f2ec + 0x60) != 0) {
    hWnd = (HWND)FUN_004c45dc(*(int *)(DAT_0068f2ec + 0x60));
    SetFocus(hWnd);
  }
  if (*(short *)(param_1 + 0x152) != 0) {
    (**(code **)(param_1 + 0x150))(*(undefined4 *)(param_1 + 0x154),param_1);
  }
  return;
}
