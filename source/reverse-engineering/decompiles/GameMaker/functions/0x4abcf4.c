// rea decompile_all
// name: FUN_004abcf4
// address: 0x4abcf4
// body: available
// range: 0x4abcf4-0x4abd68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004abcf4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  FUN_004f67a4(param_1);
  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x27c) == '\0') {
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x270) + 8) + 8);
      if (-1 < iVar4 + -1) {
        iVar3 = 0;
        do {
          iVar2 = FUN_004ab8a8(*(undefined4 *)(param_1 + 0x270),iVar3);
          if (*(char *)(iVar2 + 0x17) != '\0') {
            FUN_004ab8a8(*(undefined4 *)(param_1 + 0x270),iVar3);
            FUN_004ab744();
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_004ac0f4(param_1,1,1);
    }
    else {
      FUN_004abc68(param_1);
    }
  }
  return;
}
