// rea decompile_all
// name: FUN_004e2ba4
// address: 0x4e2ba4
// body: available
// range: 0x4e2ba4-0x4e2c62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_004e2ba4(int param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;

  *param_2 = *param_2 & 0xfff4ffff;
  *param_3 = *param_3 & 0xfffffbff;
  bVar1 = *(byte *)(param_1 + 0x299);
  if ((*(char *)(param_1 + 0x29e) == '\x01') && ((bVar1 == 0 || (bVar1 == 3)))) {
    bVar1 = 2;
  }
  bVar2 = *(byte *)(param_1 + 0x298);
  if (bVar1 == 0) {
    bVar2 = 0;
  }
  else if (bVar1 == 3) {
    bVar2 = bVar2 & 9;
  }
  else if ((byte)(bVar1 - 4) < 2) {
    bVar2 = bVar2 & 1;
  }
  if ((bVar1 < 3) && ((*(char *)(param_1 + 0x29e) != '\x01' || ((bVar2 & 1) != 0)))) {
    if ((bVar2 & 2) != 0) {
      *param_2 = *param_2 | 0x20000;
    }
    if ((bVar2 & 4) != 0) {
      *param_2 = *param_2 | 0x10000;
    }
  }
  if ((bVar2 & 1) != 0) {
    *param_2 = *param_2 | 0x80000;
  }
  if ((bVar2 & 8) != 0) {
    *param_3 = *param_3 | 0x400;
  }
  return bVar1 - 3;
}
