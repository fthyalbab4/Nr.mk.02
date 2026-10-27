// rea decompile_all
// name: FUN_00480654
// address: 0x480654
// body: available
// range: 0x480654-0x4806c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480654(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_00503a6c();
  cVar1 = FUN_00503b78();
  if (cVar1 != '\0') {
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0041d030(6,0);
      if (cVar1 == '\0') {
        cVar1 = FUN_0041d030(5,1);
        if (cVar1 != '\0') {
          FUN_0040ef5c(*(undefined4 *)(param_1 + 0x2b0),0x1501,0,*(undefined4 *)(param_1 + 0x308));
        }
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x308);
        uVar2 = FUN_004f76a8(param_1);
        FUN_0040ef5c(uVar2,0x1703,0,uVar3);
      }
    }
  }
  return;
}
