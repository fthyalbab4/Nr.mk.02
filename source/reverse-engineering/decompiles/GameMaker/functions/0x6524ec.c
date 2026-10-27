// rea decompile_all
// name: FUN_006524ec
// address: 0x6524ec
// body: available
// range: 0x6524ec-0x652544 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006524ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if (((-1 < param_1) && (param_1 < DAT_0077f2c8)) && (*(int *)(DAT_0077f2b8 + param_1 * 4) != 0)) {
    iVar1 = *(int *)(*(int *)(DAT_0077f2b8 + param_1 * 4) + 4);
    if (iVar1 == 0) {
      uVar2 = 0xe;
    }
    else if (iVar1 == 1) {
      uVar2 = 0xf;
    }
    else if (iVar1 == 2) {
      uVar2 = 0x10;
    }
    else if (iVar1 == 3) {
      uVar2 = 0x11;
    }
    else {
      uVar2 = 4;
    }
  }
  return uVar2;
}
