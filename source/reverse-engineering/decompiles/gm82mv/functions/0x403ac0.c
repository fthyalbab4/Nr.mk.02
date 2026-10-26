// rea decompile_all
// name: FUN_00403ac0
// address: 0x403ac0
// body: available
// range: 0x403ac0-0x403b15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00403ac0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  uVar4 = 0;
  if (DAT_0068cae0 != (int *)0x0) {
    cVar1 = FUN_00403a0c();
    if (cVar1 != '\0') {
      iVar3 = *DAT_0068cae0;
      if (-1 < iVar3 + -1) {
        iVar2 = 0;
        do {
          if (param_1 == DAT_0068cae0[iVar2 + 1]) {
            DAT_0068cae0[iVar2 + 1] = DAT_0068cae0[*DAT_0068cae0];
            *DAT_0068cae0 = *DAT_0068cae0 + -1;
            uVar4 = 1;
            break;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      DAT_0068cae4 = 0;
    }
  }
  return uVar4;
}
