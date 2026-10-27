// rea decompile_all
// name: FUN_0043c098
// address: 0x43c098
// body: available
// range: 0x43c098-0x43c118 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043c098(void)

{
  int *piVar1;
  uint extraout_EDX;
  int iVar2;
  int iVar3;

  piVar1 = (int *)FUN_004065b8();
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  piVar1[0xe] = 0;
  piVar1[0xf] = 0;
  if (((char)piVar1[0x10] != '\0') && (iVar2 = piVar1[8], -1 < iVar2 + -1)) {
    iVar3 = 0;
    do {
      (**(code **)(*piVar1 + 0x18))(piVar1,iVar3);
      FUN_00405fdc();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0043a814(piVar1,extraout_EDX & 0xfffffffc);
  if (piVar1[8] != 0) {
    FUN_00409120(piVar1[7],&DAT_004305c4,piVar1[8]);
  }
  piVar1[8] = 0;
  (**(code **)(*piVar1 + 0x28))(piVar1,0);
  if ('\0' < (char)extraout_EDX) {
    FUN_00406560(piVar1);
  }
  return;
}
