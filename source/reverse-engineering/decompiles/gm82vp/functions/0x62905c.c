// rea decompile_all
// name: FUN_0062905c
// address: 0x62905c
// body: available
// range: 0x62905c-0x6290ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062905c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;

  iVar2 = DAT_006887d0;
  if (DAT_006887d0 <= DAT_006887cc + -1) {
    iVar4 = ((DAT_006887cc + -1) - DAT_006887d0) + 1;
    param_2 = DAT_006887d0 * 5;
    piVar1 = (int *)(&DAT_0085b47c + DAT_006887d0 * 0x28);
    puVar3 = &DAT_008825a4 + DAT_006887d0;
    do {
      if ((param_1 == 0) ||
         (iVar2 = param_1 >> 0x1f, param_2 = param_1, -1 < param_1 && *piVar1 == param_1)) {
        *puVar3 = 1;
      }
      puVar3 = puVar3 + 1;
      piVar1 = piVar1 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00628e28(iVar2,param_2);
  return;
}
