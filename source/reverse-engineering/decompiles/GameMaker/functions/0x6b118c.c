// rea decompile_all
// name: FUN_006b118c
// address: 0x6b118c
// body: available
// range: 0x6b118c-0x6b1228 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b118c(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (*(char *)(param_1 + 0x344) != '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x334) + *(int *)(param_1 + 0x33c) * 4);
    uVar2 = FUN_006b0c48(param_1,4,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x10),
                         *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x18));
    FUN_006b0d7c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x334) + *(int *)(param_1 + 0x33c) * 4))
    ;
    FUN_006b0d2c(param_1,*(undefined4 *)(*(int *)(param_1 + 0x334) + *(int *)(param_1 + 0x33c) * 4))
    ;
    *(undefined4 *)(*(int *)(param_1 + 0x334) + *(int *)(param_1 + 0x33c) * 4) = uVar2;
    *(int *)(param_1 + 0x33c) = *(int *)(param_1 + 0x33c) + 1;
    *(bool *)(param_1 + 0x344) = *(int *)(param_1 + 0x33c) <= *(int *)(param_1 + 0x340);
    *(undefined1 *)(param_1 + 0x345) = 1;
  }
  return;
}
