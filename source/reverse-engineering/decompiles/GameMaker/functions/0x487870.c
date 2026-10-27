// rea decompile_all
// name: FUN_00487870
// address: 0x487870
// body: available
// range: 0x487870-0x4878f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00487870(int param_1)

{
  int *piVar1;
  DOCINFOW DStack_18;

  FUN_004877d0(param_1,0);
  FUN_004876a0(param_1,2);
  piVar1 = (int *)FUN_00487c20(param_1);
  (**(code **)(*piVar1 + 0x78))();
  FUN_00487c20(param_1);
  FUN_004875a0();
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  FUN_00404f08(&DStack_18,0x14,0);
  DStack_18.cbSize = 0x14;
  DStack_18.lpszDocName = (LPCWSTR)FUN_00407f44(*(undefined4 *)(param_1 + 0x18));
  SetAbortProc(*(HDC *)(param_1 + 0x20),FUN_00486ff4);
  StartDocW(*(HDC *)(param_1 + 0x20),&DStack_18);
  StartPage(*(HDC *)(param_1 + 0x20));
  return;
}
