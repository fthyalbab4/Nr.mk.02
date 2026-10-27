// rea decompile_all
// name: FUN_004d0e90
// address: 0x4d0e90
// body: available
// range: 0x4d0e90-0x4d0ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0e90(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;

  *param_3 = 3;
  bVar1 = (char)param_2 - 2;
  if (bVar1 < 7) {
    *(undefined4 *)(param_3 + 4) = 1;
    iVar2 = 2;
  }
  else if (bVar1 == 7) {
    *(undefined4 *)(param_3 + 4) = 2;
    iVar2 = 9;
  }
  else {
    *(undefined4 *)(param_3 + 4) = 0;
    iVar2 = 0;
  }
  *(uint *)(param_3 + 8) = ((param_2 & 0x7f) - iVar2) + 1;
  return;
}
