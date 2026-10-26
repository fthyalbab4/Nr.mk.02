// rea decompile_all
// name: FUN_005f7744
// address: 0x5f7744
// body: available
// range: 0x5f7744-0x5f783e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f7744(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;

  _DAT_00850e04 = DAT_00850dfc;
  _DAT_00850e08 = DAT_00850e00;
  DAT_00850dfc = FUN_00563448();
  DAT_00850e00 = FUN_0056348c();
  bVar1 = true;
  iVar3 = 1;
  do {
    cVar2 = FUN_005f6b68(iVar3);
    if (cVar2 == '\0') {
      cVar2 = FUN_005f6b80(iVar3);
      if (cVar2 != '\0') goto LAB_005f778b;
    }
    else {
LAB_005f778b:
      FUN_005f74bc(iVar3 + -1);
      FUN_005f7428(iVar3 + 0x31);
      bVar1 = false;
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 4) {
      if (bVar1) {
        FUN_005f74bc(3);
      }
      iVar3 = 1;
      do {
        cVar2 = FUN_005f6b80(iVar3);
        if (cVar2 != '\0') {
          FUN_005f74bc(iVar3 + 3);
          FUN_005f7428(0xc);
          FUN_005f7428(iVar3 + 0x34);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      iVar3 = 1;
      do {
        cVar2 = FUN_005f6b98(iVar3);
        if (cVar2 != '\0') {
          FUN_005f74bc(iVar3 + 6);
          FUN_005f7428(0xd);
          FUN_005f7428(iVar3 + 0x37);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      FUN_005f7588();
      cVar2 = FUN_005f6bb0();
      if (cVar2 != '\0') {
        FUN_005f7428(0x3c);
      }
      cVar2 = FUN_005f6bb8();
      if (cVar2 != '\0') {
        FUN_005f7428(0x3d);
      }
      return;
    }
  } while( true );
}
