// rea decompile_all
// name: FUN_005f9784
// address: 0x5f9784
// body: available
// range: 0x5f9784-0x5f9840 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f9784(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;

  uVar2 = 0;
  cVar1 = FUN_005f9690(DAT_0068862c,param_2,param_3,param_3);
  if (cVar1 == '\0') {
    uVar2 = FUN_0061ff5c();
  }
  else {
    FUN_0056b800();
    if (-1 < DAT_00688630) {
      iVar3 = DAT_00688630 + 1;
      do {
        FUN_0061ff3c();
        cVar1 = FUN_005f9388(DAT_0068862c);
        if (cVar1 == '\0') {
          FUN_005f8fd0(DAT_0068862c);
        }
        else {
          FUN_005f93b0(DAT_0068862c);
        }
        FUN_00563758();
        FUN_0061ff5c();
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0056b4f4(DAT_00688624);
    FUN_0056b4f4(DAT_00688628);
    DAT_00688624 = 0xffffffff;
    DAT_00688628 = 0xffffffff;
  }
  return uVar2;
}
