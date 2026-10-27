// rea decompile_all
// name: FUN_005f96b4
// address: 0x5f96b4
// body: available
// range: 0x5f96b4-0x5f9782 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005f96b4(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 local_c;
  undefined4 local_8;

  DAT_0068862c = param_1;
  cVar2 = FUN_005f9690(param_1);
  if (cVar2 != '\0') {
    FUN_0061fc40(&local_c,&local_8);
    DAT_00688624 = FUN_0056b39c(local_c,local_8);
    if (DAT_00688624 < 0) {
      DAT_0068862c = 0xffffffff;
    }
    else {
      FUN_0056b68c(DAT_00688624);
      uVar1 = *(undefined4 *)PTR_DAT_00688c4c;
      *(undefined4 *)PTR_DAT_00688c4c = 0xffffffff;
      FUN_0058f9f8();
      *(undefined4 *)PTR_DAT_00688c4c = uVar1;
      DAT_00688628 = FUN_0056b39c(local_c,local_8);
      if (DAT_00688628 < 0) {
        DAT_0068862c = 0xffffffff;
        FUN_0056b800();
        FUN_0056b4f4(DAT_00688624);
        DAT_00688624 = -1;
      }
      else {
        FUN_0056b68c(DAT_00688628);
      }
    }
  }
  return 1;
}
