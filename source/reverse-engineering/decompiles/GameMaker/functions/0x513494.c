// rea decompile_all
// name: FUN_00513494
// address: 0x513494
// body: available
// range: 0x513494-0x5134cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00513494(undefined4 param_1,undefined4 param_2,DWORD param_3,HWND param_4,int *param_5)

{
  DWORD DVar1;
  undefined4 uVar2;
  DWORD local_8;

  uVar2 = 0xffffffff;
  local_8 = param_3;
  GetWindowThreadProcessId(param_4,&local_8);
  if (param_4 == (HWND)*param_5) {
    DVar1 = GetCurrentProcessId();
    if (DVar1 == local_8) {
      uVar2 = 0;
      *(undefined1 *)(param_5 + 1) = 1;
    }
  }
  return uVar2;
}
