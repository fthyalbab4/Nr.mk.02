// rea decompile_all
// name: FUN_0047a3e0
// address: 0x47a3e0
// body: available
// range: 0x47a3e0-0x47a455 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047a3e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_004d08e8();
  cVar1 = FUN_004d09f4();
  if (cVar1 != '\0') {
    cVar1 = FUN_004c4988(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_0041cec4(6,0);
      if (cVar1 == '\0') {
        cVar1 = FUN_0041cec4(5,1);
        if (cVar1 != '\0') {
          FUN_0040f050(*(undefined4 *)(param_1 + 0x2b0),0x1501,0,*(undefined4 *)(param_1 + 0x308));
        }
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x308);
        uVar2 = FUN_004c45dc(param_1);
        FUN_0040f050(uVar2,0x1703,0,uVar3);
      }
    }
  }
  return;
}
