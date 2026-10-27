// rea decompile_all
// name: FUN_005f7340
// address: 0x5f7340
// body: available
// range: 0x5f7340-0x5f7426 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f7340(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;

  bVar1 = true;
  bVar2 = false;
  iVar4 = 8;
  do {
    cVar3 = FUN_005f6a80(iVar4);
    if (cVar3 == '\0') {
      cVar3 = FUN_005f6a98(iVar4);
      if (cVar3 != '\0') goto LAB_005f7364;
    }
    else {
LAB_005f7364:
      bVar1 = false;
      bVar2 = true;
      FUN_005f7124(iVar4);
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == 0x100) {
      if (bVar1) {
        FUN_005f7124(0);
      }
      if (bVar2) {
        FUN_005f7124(1);
      }
      bVar1 = true;
      bVar2 = false;
      iVar4 = 8;
      do {
        cVar3 = FUN_005f6a98(iVar4);
        if (cVar3 != '\0') {
          bVar1 = false;
          bVar2 = true;
          FUN_005f71d8(iVar4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x100);
      if (bVar1) {
        FUN_005f71d8(0);
      }
      if (bVar2) {
        FUN_005f71d8(1);
      }
      bVar1 = true;
      bVar2 = false;
      iVar4 = 8;
      do {
        cVar3 = FUN_005f6ab0(iVar4);
        if (cVar3 != '\0') {
          bVar1 = false;
          bVar2 = true;
          FUN_005f728c(iVar4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x100);
      if (bVar1) {
        FUN_005f728c(0);
      }
      if (bVar2) {
        FUN_005f728c(1);
      }
      return;
    }
  } while( true );
}
