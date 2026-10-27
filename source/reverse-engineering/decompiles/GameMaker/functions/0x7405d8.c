// rea decompile_all
// name: FUN_007405d8
// address: 0x7405d8
// body: available
// range: 0x7405d8-0x74065e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007405d8(void)

{
  char cVar1;
  uint uVar2;
  WCHAR *pWVar3;
  uint uVar4;
  WCHAR local_c;
  WCHAR local_a;

  if (DAT_00781324 == '\0') {
    uVar4 = 0;
    pWVar3 = &DAT_007a6448;
    do {
      local_c = (WCHAR)uVar4;
      local_a = local_c;
      CharLowerBuffW(&local_a,1);
      CharUpperBuffW(&local_c,1);
      cVar1 = FUN_00740f54(uVar4);
      if (cVar1 == '\0') {
        cVar1 = FUN_00740f30(uVar4);
        uVar2 = uVar4;
        if (cVar1 != '\0') {
          uVar2 = (uint)(ushort)local_c;
        }
      }
      else {
        uVar2 = (uint)(ushort)local_a;
      }
      *pWVar3 = local_a;
      pWVar3[0x10000] = local_c;
      pWVar3[0x20000] = (WCHAR)uVar2;
      uVar4 = uVar4 + 1;
      pWVar3 = pWVar3 + 1;
    } while ((short)uVar4 != 0);
    DAT_00781324 = '\x01';
  }
  return;
}
