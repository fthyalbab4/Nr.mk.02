// rea decompile_all
// name: FUN_00672ecc
// address: 0x672ecc
// body: available
// range: 0x672ecc-0x672ef4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00672ecc(int param_1,char param_2)

{
  int iVar1;
  undefined4 extraout_ECX;

  if (param_2 != *(char *)(param_1 + 0x2a)) {
    *(char *)(param_1 + 0x2a) = param_2;
    iVar1 = FUN_00671654(param_1);
    if ((*(byte *)(iVar1 + 0x1c) & 1) == 0) {
      FUN_00671f24(param_1,param_1,extraout_ECX,&LAB_00672c60,param_1);
    }
  }
  return;
}
