// rea decompile_all
// name: FUN_00628f38
// address: 0x628f38
// body: available
// range: 0x628f38-0x629003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00628f38(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_18;
  int local_14;

  local_18 = 0;
  local_14 = -1;
  iVar1 = local_14;
  if (DAT_006887d0 <= DAT_006887cc + -1) {
    iVar5 = ((DAT_006887cc + -1) - DAT_006887d0) + 1;
    pcVar2 = &DAT_008825a4 + DAT_006887d0;
    piVar3 = (int *)(&DAT_0085b47c + DAT_006887d0 * 0x28);
    iVar4 = DAT_006887d0;
    do {
      if ((*pcVar2 == '\0') &&
         ((iVar1 = iVar4, param_1 == 0 || (-1 < param_1 && *piVar3 == param_1)))) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 10;
      pcVar2 = pcVar2 + 1;
      iVar5 = iVar5 + -1;
      iVar1 = local_14;
    } while (iVar5 != 0);
  }
  local_14 = iVar1;
  if (-1 < local_14) {
    FUN_00409360(param_2,&DAT_0085b47c + local_14 * 0x28,&DAT_00628dc0);
    (&DAT_008825a4)[local_14] = 1;
    for (; (DAT_006887d0 < DAT_006887cc && ((&DAT_008825a4)[DAT_006887d0] != '\0'));
        DAT_006887d0 = DAT_006887d0 + 1) {
    }
    local_18 = 1;
  }
  return local_18;
}
