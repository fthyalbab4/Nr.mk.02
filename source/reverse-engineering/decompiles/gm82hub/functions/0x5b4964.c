// rea decompile_all
// name: FUN_005b4964
// address: 0x5b4964
// body: available
// range: 0x5b4964-0x5b49d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b4964(int *param_1,char param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;

  iVar3 = FUN_005b47a0(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  puVar1 = (undefined1 *)*param_1;
  *param_1 = *param_1 + 1;
  *puVar1 = 0xff;
  piVar4 = param_1 + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    iVar3 = FUN_005b46d0(param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  pcVar2 = (char *)*param_1;
  *param_1 = *param_1 + 1;
  *pcVar2 = param_2 + -0x30;
  piVar4 = param_1 + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    iVar3 = FUN_005b46d0(param_1);
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar4 = param_1 + 4;
  for (iVar3 = 0; iVar3 < *(int *)(param_1[8] + 0xf0); iVar3 = iVar3 + 1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  return 1;
}
