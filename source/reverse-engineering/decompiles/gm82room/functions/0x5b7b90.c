// rea decompile_all
// name: FUN_005b7b90
// address: 0x5b7b90
// body: available
// range: 0x5b7b90-0x5b7c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b7b90(int param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar2;

  if (0.0 < param_4) {
    iVar2 = FUN_004048b8();
  }
  else {
    iVar2 = 1000;
  }
  FUN_00404864();
  FUN_00404874();
  cVar1 = FUN_005b7a6c(param_1,param_2,extraout_ECX,*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                       (short)*(undefined4 *)(param_1 + 0x54));
  if ((cVar1 == '\0') && (0 < iVar2)) {
    do {
      FUN_0060ddec(param_1);
      cVar1 = FUN_005b7a6c(param_1,param_2,extraout_ECX_00,*(undefined4 *)(param_1 + 0x58),
                           *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x50),
                           (short)*(undefined4 *)(param_1 + 0x54));
      if (cVar1 != '\0') {
        return;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
                    /* WARNING: Read-only address (ram,0x005b7c64) is written */
  return;
}
