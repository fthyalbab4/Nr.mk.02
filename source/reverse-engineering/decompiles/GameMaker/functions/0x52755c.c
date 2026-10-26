// rea decompile_all
// name: FUN_0052755c
// address: 0x52755c
// body: available
// range: 0x52755c-0x527574 inclusive
// range: 0x527589-0x5275b6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** FUN_0052755c(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;

  puVar1 = (undefined1 *)FUN_0042ce64(param_1);
  switch(*puVar1) {
  case 0:
    ppuVar2 = &PTR_PTR_00779028;
    break;
  case 1:
    ppuVar2 = &PTR_PTR_00779054;
    break;
  case 2:
    ppuVar2 = &PTR_PTR_00779080;
    break;
  case 3:
    ppuVar2 = &PTR_PTR_007790ac;
    break;
  case 4:
    ppuVar2 = &PTR_PTR_007790d8;
    break;
  default:
    FUN_00404478(4);
    ppuVar2 = (undefined **)0x0;
  }
  return ppuVar2;
}
