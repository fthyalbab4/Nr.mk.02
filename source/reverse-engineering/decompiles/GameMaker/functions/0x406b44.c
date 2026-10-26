// rea decompile_all
// name: FUN_00406b44
// address: 0x406b44
// body: available
// range: 0x406b44-0x406ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00406b44(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;

  uVar2 = 0x10;
  iVar1 = DAT_00773000;
  do {
    s_Runtime_error_at_00000000_007737c0[uVar2 & 0xff] = (char)(iVar1 % 10) + '0';
    iVar1 = iVar1 / 10;
    uVar2 = uVar2 - 1;
  } while (iVar1 != 0);
  uVar3 = 0x1c;
  uVar2 = DAT_00773004;
  do {
    s_Runtime_error_at_00000000_007737c0[uVar3 & 0xff] = (&DAT_007737e0)[uVar2 & 0xf];
    uVar2 = uVar2 / 0x10;
    uVar3 = uVar3 - 1;
  } while (uVar2 != 0);
  return;
}
