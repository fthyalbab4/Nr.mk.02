// rea decompile_all
// name: FUN_004fcb7c
// address: 0x4fcb7c
// body: available
// range: 0x4fcb7c-0x4fcbfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fcb7c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  cVar1 = FUN_004fa3c4(param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    iVar2 = FUN_004fa494(param_1);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20) - iVar2;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    cVar1 = FUN_004fa45c(*(int *)(param_1 + 0x14));
    if (cVar1 == '\0') {
      FUN_004fcb7c(*(undefined4 *)(param_1 + 0x14));
    }
  }
  iVar2 = FUN_004faa64(param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_004faa64(param_1);
    FUN_004fa9bc(uVar3,*(undefined4 *)(param_1 + 0x20));
  }
  FUN_004fad3c(*(undefined4 *)(param_4 + -4),*(undefined4 *)(param_1 + 0x14));
  return;
}
