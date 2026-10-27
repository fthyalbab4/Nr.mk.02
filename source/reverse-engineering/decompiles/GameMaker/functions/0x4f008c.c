// rea decompile_all
// name: FUN_004f008c
// address: 0x4f008c
// body: available
// range: 0x4f008c-0x4f0295 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f008c(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;

  if (param_1 == '\0') {
    iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x20);
    if (((iVar1 != 0) &&
        (iVar1 = *(int *)(iVar1 + 0x194), iVar1 != *(int *)(*(int *)(param_4 + -8) + 0x194))) ||
       ((*(int *)(*(int *)(param_4 + -4) + 0x20) == 0 &&
        (((*(char *)(*(int *)(param_4 + -8) + 0x5d) != '\0' ||
          ((*(byte *)(*(int *)(param_4 + -8) + 99) & 1) == 0)) &&
         (iVar1 = *(int *)(*(int *)(param_4 + -8) + 0x194),
         iVar1 != *(int *)(*(int *)(param_4 + -8) + 0x40))))))) {
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  else if (param_1 == '\x01') {
    iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x20);
    if (((iVar1 != 0) &&
        (iVar1 = *(int *)(iVar1 + 0x198), iVar1 != *(int *)(*(int *)(param_4 + -8) + 0x198))) ||
       (((*(int *)(*(int *)(param_4 + -4) + 0x20) == 0 &&
         ((*(char *)(*(int *)(param_4 + -8) + 0x5d) != '\0' ||
          ((*(byte *)(*(int *)(param_4 + -8) + 99) & 2) == 0)))) &&
        (iVar1 = *(int *)(*(int *)(param_4 + -8) + 0x198),
        iVar1 != *(int *)(*(int *)(param_4 + -8) + 0x44))))) {
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  else if (param_1 == '\x02') {
    iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x20);
    if (((iVar1 != 0) &&
        (iVar1 = *(int *)(iVar1 + 0x19c), iVar1 != *(int *)(*(int *)(param_4 + -8) + 0x19c))) ||
       ((*(int *)(*(int *)(param_4 + -4) + 0x20) == 0 &&
        (((*(char *)(*(int *)(param_4 + -8) + 0x5d) != '\0' ||
          ((*(byte *)(*(int *)(param_4 + -8) + 99) & 5) == 5)) &&
         (iVar1 = *(int *)(*(int *)(param_4 + -8) + 0x19c),
         iVar1 != *(int *)(*(int *)(param_4 + -8) + 0x48))))))) {
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  else if ((param_1 == '\x03') &&
          (((iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x20), iVar1 != 0 &&
            (iVar1 = *(int *)(iVar1 + 0x1a0), iVar1 != *(int *)(*(int *)(param_4 + -8) + 0x1a0))) ||
           (((*(int *)(*(int *)(param_4 + -4) + 0x20) == 0 &&
             ((*(char *)(*(int *)(param_4 + -8) + 0x5d) != '\0' ||
              ((*(byte *)(*(int *)(param_4 + -8) + 99) & 10) == 10)))) &&
            (iVar1 = *(int *)(*(int *)(param_4 + -8) + 0x1a0),
            iVar1 != *(int *)(*(int *)(param_4 + -8) + 0x4c))))))) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}
