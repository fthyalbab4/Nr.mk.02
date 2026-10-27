// rea decompile_all
// name: FUN_006de548
// address: 0x6de548
// body: available
// range: 0x6de548-0x6de5aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006de548(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 1;
  cVar1 = FUN_007060e8();
  if (cVar1 != '\0') {
    if (DAT_0077f45c == 0) {
      DAT_0077f45c = 1;
      iVar2 = FUN_004d437c(L"Game has been changed. Save Changes?",3,0xb,0,0xffffffff,0xffffffff,0);
      if (iVar2 == 6) {
        FUN_006e0540(param_1,*(undefined4 *)(param_1 + 0x3bc));
      }
      else if (iVar2 == 2) {
        uVar3 = 0;
      }
      DAT_0077f45c = DAT_0077f45c + -1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
