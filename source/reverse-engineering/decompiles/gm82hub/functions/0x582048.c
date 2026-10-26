// rea decompile_all
// name: FUN_00582048
// address: 0x582048
// body: available
// range: 0x582048-0x582101 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00582048(undefined4 param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;

  uVar1 = 0;
  FUN_00582004();
  iVar3 = FUN_0050bbe0(param_1);
  if (iVar3 == 800) {
    DAT_00686b00 = FUN_0050bbe0(param_1);
    FUN_00409dfc(&DAT_00686afc,&DAT_00581fdc,1,DAT_00686b00);
    if (-1 < DAT_00686b00 + -1) {
      iVar6 = 0;
      iVar3 = DAT_00686b00;
      do {
        uVar4 = FUN_0050be9c(param_1);
        cVar2 = FUN_0050bcd0(uVar4);
        *(undefined4 *)(DAT_00686afc + iVar6 * 4) = 0;
        if (cVar2 != '\0') {
          uVar5 = FUN_005848c8(&DAT_00584634,1);
          *(undefined4 *)(DAT_00686afc + iVar6 * 4) = uVar5;
          cVar2 = FUN_0058493c(*(undefined4 *)(DAT_00686afc + iVar6 * 4),uVar4);
          if (cVar2 == '\0') {
            return 0;
          }
        }
        FUN_00405fdc(uVar4);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}
