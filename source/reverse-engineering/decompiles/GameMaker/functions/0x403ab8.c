// rea decompile_all
// name: FUN_00403ab8
// address: 0x403ab8
// body: available
// range: 0x403ab8-0x403b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00403ab8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  uVar4 = 0;
  if (DAT_00785ae0 != (int *)0x0) {
    cVar1 = FUN_00403a04();
    if (cVar1 != '\0') {
      iVar3 = *DAT_00785ae0;
      if (-1 < iVar3 + -1) {
        iVar2 = 0;
        do {
          if (param_1 == DAT_00785ae0[iVar2 + 1]) {
            DAT_00785ae0[iVar2 + 1] = DAT_00785ae0[*DAT_00785ae0];
            *DAT_00785ae0 = *DAT_00785ae0 + -1;
            uVar4 = 1;
            break;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      DAT_00785ae4 = 0;
    }
  }
  return uVar4;
}
