// rea decompile_all
// name: FUN_00569474
// address: 0x569474
// body: available
// range: 0x569474-0x5694e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00569474(int param_1,int param_2,short param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int local_14;

  local_14 = -1;
  do {
    iVar3 = FUN_00408238(*(undefined4 *)(param_1 + 0x2a0));
    if (iVar3 <= param_2) {
      return -1;
    }
    param_2 = param_2 + 1;
    cVar1 = FUN_00565bb8(*(undefined4 *)(param_1 + 0x2a0),param_2);
  } while (1 < (byte)(cVar1 - 1U));
  sVar2 = *(short *)(*(int *)(param_1 + 0x2a0) + -2 + param_2 * 2);
  if (cVar1 == '\x02') {
    sVar2 = FUN_0056604c(sVar2);
  }
  if (sVar2 == param_3) {
    local_14 = param_2;
  }
  return local_14;
}
