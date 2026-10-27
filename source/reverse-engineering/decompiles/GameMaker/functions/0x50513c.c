// rea decompile_all
// name: FUN_0050513c
// address: 0x50513c
// body: available
// range: 0x50513c-0x505186 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0050513c(int param_1)

{
  char cVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    FUN_00503a6c(0);
    uVar2 = FUN_00503b78();
    if ((char)uVar2 == '\0') goto LAB_00505159;
LAB_00505183:
    uVar2 = 1;
  }
  else {
LAB_00505159:
    if (((*(byte *)(param_1 + 0x1c) & 0x10) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
      FUN_00503a6c(uVar2);
      cVar1 = FUN_00503b78();
      if ((cVar1 != '\0') && (cVar1 = FUN_00503a00(*(undefined4 *)(param_1 + 0x34)), cVar1 == '\0'))
      goto LAB_00505183;
    }
    uVar2 = 0;
  }
  return uVar2;
}
