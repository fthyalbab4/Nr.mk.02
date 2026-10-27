// rea decompile_all
// name: FUN_004c006c
// address: 0x4c006c
// body: available
// range: 0x4c006c-0x4c00d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c006c(int *param_1,char param_2)

{
  int iVar1;

  if (param_2 != *(char *)((int)param_1 + 0x1b1)) {
    *(char *)((int)param_1 + 0x1b1) = param_2;
    (**(code **)(*param_1 + 0xb0))();
    if ((((*(byte *)(param_1 + 7) & 1) == 0) && (param_1[0x73] != 0)) &&
       ((*(char *)(param_1[0x73] + 0x2a8) != '\0' ||
        ((*(char *)(param_1[0x73] + 0x27c) != '\0' && (*(char *)((int)param_1 + 0x1c6) == '\x05'))))
       )) {
      iVar1 = param_1[0x73];
      *(undefined4 *)(iVar1 + 0x280) = 0;
      *(undefined4 *)(iVar1 + 0x284) = 0;
      FUN_004c2410();
    }
  }
  return;
}
