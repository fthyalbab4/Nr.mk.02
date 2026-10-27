// rea decompile_all
// name: FUN_00444cb8
// address: 0x444cb8
// body: available
// range: 0x444cb8-0x444d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00444cb8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;

  cVar1 = FUN_00415a34(param_2,L"False");
  if (cVar1 != '\0') {
    FUN_0044699c(param_1,8);
    return;
  }
  cVar1 = FUN_00415a34(param_2,L"True");
  if (cVar1 == '\0') {
    cVar1 = FUN_00415a34(param_2,L"Null");
    if (cVar1 == '\0') {
      cVar1 = FUN_00415a34(param_2,&DAT_00444d94);
      if (cVar1 == '\0') {
        FUN_0044699c(param_1,7);
        FUN_004468c0(param_1,param_2);
      }
      else {
        FUN_0044699c(param_1,0xd);
      }
    }
    else {
      FUN_0044699c(param_1,0);
    }
  }
  else {
    FUN_0044699c(param_1,9);
  }
  return;
}
