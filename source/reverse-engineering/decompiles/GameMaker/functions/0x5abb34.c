// rea decompile_all
// name: FUN_005abb34
// address: 0x5abb34
// body: available
// range: 0x5abb34-0x5abb49 inclusive
// range: 0x5abb6e-0x5abd5a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005abb34(int param_1,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) & 0xff7e;
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 6;
    return;
  case 1:
    if (*(char *)(param_1 + 0x34b) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    }
    if (*(char *)(param_1 + 0x34e) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 0x80;
      return;
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x34b) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    }
    if (*(char *)(param_1 + 0x34e) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 0x80;
    }
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) & 0xfff9;
    return;
  case 3:
    if (*(char *)(param_1 + 0x34b) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    }
    if (*(char *)(param_1 + 0x34e) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 0x80;
    }
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) & 0xfff9;
    return;
  case 4:
    if (*(char *)(param_1 + 0x34b) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    }
    if (*(char *)(param_1 + 0x34e) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 0x80;
    }
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) & 0xfff9;
    return;
  case 5:
    if (*(char *)(param_1 + 0x34b) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    }
    if (*(char *)(param_1 + 0x34e) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 0x80;
    }
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) & 0xfff9;
    return;
  case 6:
    if (*(char *)(param_1 + 0x34b) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    }
    if (*(char *)(param_1 + 0x34e) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 0x80;
    }
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) & 0xfff9;
    return;
  case 7:
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) & 0xff7e;
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 6;
    return;
  case 8:
    if (*(char *)(param_1 + 0x34b) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 1;
    }
    if (*(char *)(param_1 + 0x34e) != '\0') {
      *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) | 0x80;
    }
    *(ushort *)(param_1 + 0x30e) = *(ushort *)(param_1 + 0x30e) & 0xfff9;
  }
  return;
}
