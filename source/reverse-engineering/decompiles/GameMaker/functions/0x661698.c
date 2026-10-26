// rea decompile_all
// name: FUN_00661698
// address: 0x661698
// body: available
// range: 0x661698-0x66173a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00661698(int param_1)

{
  undefined4 uVar1;
  HWND hwnd;
  LONG idObject;
  LONG idChild;

  FUN_00663240(param_1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x36c);
  *(undefined4 *)(param_1 + 0x36c) = 0;
  FUN_00405a7c(uVar1);
  DAT_0078a1e4 = 0;
  if ((*(char *)(param_1 + 0x28c) != '\0') && (*(int *)PTR_DAT_007817c8 != 0)) {
    (**(code **)(**(int **)PTR_DAT_007817c8 + 0x18))(*(int **)PTR_DAT_007817c8,0);
  }
  *(undefined1 *)(param_1 + 0x30c) = 1;
  ShowCaret((HWND)0x0);
  uVar1 = *(undefined4 *)(param_1 + 0x388);
  *(undefined4 *)(param_1 + 0x388) = 0;
  FUN_00405a7c(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 900);
  *(undefined4 *)(param_1 + 900) = 0;
  FUN_00405a7c(uVar1);
  uVar1 = *(undefined4 *)(param_1 + 0x378);
  *(undefined4 *)(param_1 + 0x378) = 0;
  FUN_00405a7c(uVar1);
  idChild = 0;
  idObject = -3;
  hwnd = (HWND)FUN_004f76a8(param_1);
  NotifyWinEvent(5,hwnd,idObject,idChild);
  return;
}
