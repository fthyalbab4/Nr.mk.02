// rea decompile_all
// name: FUN_005b02b0
// address: 0x5b02b0
// body: available
// range: 0x5b02b0-0x5b036c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b02b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar1 = *(int *)(param_1 + 0x158);
  if (*(int *)(param_1 + 0xb0) == 0) {
    piVar4 = (int *)(param_1 + 0xf4);
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0xf0); iVar3 = iVar3 + 1) {
      iVar2 = *piVar4;
      if (*(int *)(param_1 + 0xe0) == 0) {
        FUN_005afd80(param_1,*(undefined4 *)(iVar2 + 0x14),0);
        FUN_005afd80(param_1,*(undefined4 *)(iVar2 + 0x18),1);
      }
      else if (*(int *)(param_1 + 0x138) == 0) {
        if (*(int *)(param_1 + 0x140) == 0) {
          FUN_005afd80(param_1,*(undefined4 *)(iVar2 + 0x14),0);
        }
      }
      else {
        FUN_005afd80(param_1,*(undefined4 *)(iVar2 + 0x18),1);
      }
      piVar4 = piVar4 + 1;
    }
  }
  else {
    FUN_005afe5c(param_1);
  }
  if (*(int *)(iVar1 + 0x1c) != *(int *)(param_1 + 0xc4)) {
    FUN_005afe60(param_1);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0xc4);
  }
  FUN_005aff30(param_1);
  return;
}
