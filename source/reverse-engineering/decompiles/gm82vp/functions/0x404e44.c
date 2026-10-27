// rea decompile_all
// name: FUN_00404e44
// address: 0x404e44
// body: available
// range: 0x404e44-0x404e9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00404e44(int param_1)

{
  undefined4 uVar1;
  char cVar2;

  if ((*(short *)(param_1 + 4) == -0x284f) && (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 0x10))
     ) {
    cVar2 = *(char *)(*(uint *)(param_1 + 0xc) + *(int *)(param_1 + 0x14));
    if ((*(ushort *)(param_1 + 6) & 1) != 0) {
      if (cVar2 == '\r') {
        return 1;
      }
      if (cVar2 == '\x1a') {
        return 1;
      }
      return 0;
    }
  }
  else {
    uVar1 = FUN_0040505c();
    if ((char)((uint)uVar1 >> 8) == '\x1a') {
      return 1;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    cVar2 = (char)uVar1;
    if ((*(ushort *)(param_1 + 4) & 1) != 0) {
      if (cVar2 == '\r') {
        return 1;
      }
      return 0;
    }
  }
  if ((cVar2 != '\n') && (cVar2 != '\x1a')) {
    return 0;
  }
  return 1;
}
