// rea decompile_all
// name: FUN_005154a0
// address: 0x5154a0
// body: available
// range: 0x5154a0-0x515521 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005154a0(int param_1)

{
  undefined4 uVar1;
  char cVar2;

  FUN_004f122c(param_1);
  if ((*(int *)(param_1 + 0x290) != 0) &&
     ((*(int *)(param_1 + 0x34) == 0 || ((*(byte *)(param_1 + 0x1c) & 0x10) == 0)))) {
    uVar1 = *(undefined4 *)(param_1 + 0x290);
    *(undefined4 *)(param_1 + 0x290) = 0;
    cVar2 = FUN_00405d08(uVar1);
    if (cVar2 != '\0') {
      FUN_00518874(param_1,uVar1);
    }
  }
  if (*(char *)(param_1 + 0x5b) != '\0') {
    (**(code **)(**(int **)(param_1 + 100) + 8))
              (*(int **)(param_1 + 100),*(undefined4 *)(DAT_007882ec + 0x3c));
    FUN_004ee7d4(param_1,1);
  }
  cVar2 = FUN_005217c0(*(undefined4 *)(param_1 + 0x374));
  if (cVar2 != '\0') {
    FUN_0051b914(param_1,0);
  }
  return;
}
