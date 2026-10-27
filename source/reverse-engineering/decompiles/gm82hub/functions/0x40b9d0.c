// rea decompile_all
// name: FUN_0040b9d0
// address: 0x40b9d0
// body: available
// range: 0x40b9d0-0x40ba39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040b9d0(undefined4 param_1,undefined4 param_2)

{
  HINSTANCE hInstance;
  undefined4 *in_stack_00000ff4;
  UINT uID;
  WCHAR *lpBuffer;
  int iVar1;
  WCHAR aWStack_1008 [2046];
  int local_c;

  iVar1 = 2;
  do {
    local_c = iVar1;
    lpBuffer = aWStack_1008;
    iVar1 = local_c + -1;
  } while (local_c + -1 != 0);
  if (in_stack_00000ff4 != (undefined4 *)0x0) {
    if ((int)in_stack_00000ff4[1] < 0x10000) {
      iVar1 = 0x1000;
      uID = in_stack_00000ff4[1];
      hInstance = (HINSTANCE)FUN_00409ef0(*(undefined4 *)*in_stack_00000ff4);
      iVar1 = LoadStringW(hInstance,uID,lpBuffer,iVar1);
      FUN_004082d0(param_2,aWStack_1008,iVar1);
    }
    else {
      FUN_00408350(param_2,in_stack_00000ff4[1]);
    }
  }
  return;
}
