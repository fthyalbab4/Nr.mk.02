// rea decompile_all
// name: FUN_005692fc
// address: 0x5692fc
// body: available
// range: 0x5692fc-0x569314 inclusive
// range: 0x569329-0x569356 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** FUN_005692fc(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;

  puVar1 = (undefined1 *)FUN_0042ba48(param_1);
  switch(*puVar1) {
  case 0:
    ppuVar2 = &PTR_PTR_0068658c;
    break;
  case 1:
    ppuVar2 = &PTR_PTR_006865b8;
    break;
  case 2:
    ppuVar2 = &PTR_PTR_006865e4;
    break;
  case 3:
    ppuVar2 = &PTR_PTR_00686610;
    break;
  case 4:
    ppuVar2 = &PTR_PTR_0068663c;
    break;
  default:
    FUN_00404480(4);
    ppuVar2 = (undefined **)0x0;
  }
  return ppuVar2;
}
