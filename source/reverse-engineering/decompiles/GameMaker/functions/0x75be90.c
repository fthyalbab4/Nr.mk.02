// rea decompile_all
// name: FUN_0075be90
// address: 0x75be90
// body: available
// range: 0x75be90-0x75bfee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0075be90(void)

{
  DAT_00781510 = FUN_0041f0a0(L"imagehlp.dll",0x8000);
  if (DAT_00781510 != 0) {
    DAT_00781514 = FUN_0040dcb4();
    DAT_00781518 = FUN_0040dcb4();
    DAT_0078151c = FUN_0040dcb4();
    DAT_00781520 = FUN_0040dcb4();
    DAT_00781524 = FUN_0040dcb4();
    DAT_00781528 = FUN_0040dcb4();
    DAT_0078152c = FUN_0040dcb4();
    DAT_00781530 = FUN_0040dcb4();
    DAT_00781534 = FUN_0040dcb4();
    DAT_00781538 = FUN_0040dcb4();
    DAT_0078153c = FUN_0040dcb4();
    DAT_00781540 = FUN_0040dcb4();
  }
  if ((((((DAT_00781510 != 0) && (DAT_0078151c != 0)) && (DAT_00781520 != 0)) &&
       ((DAT_00781524 != 0 && (DAT_00781538 != 0)))) && ((DAT_00781514 != 0 || (DAT_00781518 != 0)))
      ) && (((DAT_00781528 != 0 || (DAT_0078152c != 0)) &&
            ((DAT_00781530 != 0 || (DAT_00781534 != 0)))))) {
    return 1;
  }
  return 0;
}
