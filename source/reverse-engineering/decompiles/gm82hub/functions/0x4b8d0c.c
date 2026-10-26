// rea decompile_all
// name: FUN_004b8d0c
// address: 0x4b8d0c
// body: available
// range: 0x4b8d0c-0x4b8d64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8d0c(int param_1,char param_2)

{
  int iVar1;

  if (param_1 != 0) {
    if (DAT_0068f290 == 0) {
      DAT_0068f290 = FUN_00405fac(&PTR_LAB_0042e000,1);
    }
    iVar1 = FUN_00438f2c(DAT_0068f290,param_1);
    if (param_2 == '\0') {
      if (iVar1 != -1) {
        FUN_00438d5c(DAT_0068f290,iVar1);
      }
    }
    else if (iVar1 == -1) {
      FUN_00438d04(DAT_0068f290,param_1);
    }
  }
  return;
}
