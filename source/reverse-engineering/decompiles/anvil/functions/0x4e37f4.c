// rea decompile_all
// name: FUN_004e37f4
// address: 0x4e37f4
// body: available
// range: 0x4e37f4-0x4e3857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e37f4(int param_1,int param_2)

{
  int iVar1;
  char cVar2;

  iVar1 = *(int *)(param_1 + 0x34c);
  if ((param_2 != iVar1) && (param_1 != param_2)) {
    if (iVar1 != 0) {
      FUN_00446458(iVar1,param_1);
    }
    *(int *)(param_1 + 0x34c) = param_2;
    if (param_2 != 0) {
      FUN_00446174(param_2,param_1);
      *(undefined1 *)(param_1 + 0x348) = 2;
    }
    *(undefined4 *)(param_1 + 0x358) = 0;
    *(undefined4 *)(param_1 + 0x35c) = 0;
    cVar2 = FUN_004c4988(param_1);
    if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x1c) & 0x10) == 0)) {
      FUN_004c0aa8(param_1);
    }
  }
  return;
}
