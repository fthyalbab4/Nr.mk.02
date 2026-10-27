// rea decompile_all
// name: FUN_004e152c
// address: 0x4e152c
// body: available
// range: 0x4e152c-0x4e15ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e152c(int param_1)

{
  undefined4 uVar1;
  char cVar2;

  FUN_004be1e4(param_1);
  if ((*(int *)(param_1 + 0x290) != 0) &&
     ((*(int *)(param_1 + 0x34) == 0 || ((*(byte *)(param_1 + 0x1c) & 0x10) == 0)))) {
    uVar1 = *(undefined4 *)(param_1 + 0x290);
    *(undefined4 *)(param_1 + 0x290) = 0;
    cVar2 = FUN_00406268(uVar1);
    if (cVar2 != '\0') {
      FUN_004e4900(param_1,uVar1);
    }
  }
  if (*(char *)(param_1 + 0x5b) != '\0') {
    (**(code **)(**(int **)(param_1 + 100) + 8))
              (*(int **)(param_1 + 100),*(undefined4 *)(DAT_0068f2e8 + 0x3c));
    FUN_004bb78c(param_1,1);
  }
  cVar2 = FUN_004ed7b0(*(undefined4 *)(param_1 + 0x374));
  if (cVar2 != '\0') {
    FUN_004e79a0(param_1,0);
  }
  return;
}
