// rea decompile_all
// name: FUN_004c066c
// address: 0x4c066c
// body: available
// range: 0x4c066c-0x4c0723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c066c(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;

  FUN_004f1040(param_1,param_2,param_3);
  cVar1 = FUN_00405c98(param_2,&PTR_FUN_00509914);
  cVar2 = (char)param_3;
  if (cVar1 != '\0') {
    if ((cVar2 == '\0') || (*(char *)(param_1 + 0x1b2) == '\0')) {
      FUN_004c0238(param_1,*(undefined1 *)(param_2 + 0x69));
    }
    if ((cVar2 == '\0') || (*(int *)(param_1 + 0x1b4) == -1)) {
      FUN_004c02d0(param_1,*(undefined4 *)(param_2 + 0x80));
    }
  }
  cVar1 = FUN_00405c98(param_2,DAT_00773a1c);
  if (cVar1 != '\0') {
    if ((cVar2 == '\0') || (*(int *)(param_1 + 0x7c) == 0)) {
      FUN_004ee67c(param_1,*(undefined4 *)(param_2 + 0xa4));
    }
    if ((cVar2 == '\0') || (*(int *)(param_1 + 0x1c0) == 0)) {
      FUN_004c0294(param_1,*(undefined4 *)(param_2 + 0xa0));
    }
    if ((cVar2 == '\0') || (*(char *)(param_1 + 0x1c4) == '\0')) {
      FUN_004c07cc(param_1,*(undefined1 *)(param_2 + 0xa8));
    }
  }
  return;
}
