// rea decompile_all
// name: FUN_0067ef0c
// address: 0x67ef0c
// body: available
// range: 0x67ef0c-0x67ef57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067ef0c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;

  if (param_2 != 0) {
    iVar1 = FUN_0043b0b0(*(undefined4 *)(param_1 + 4),param_2);
    if (iVar1 < 0) {
      uVar2 = FUN_0067f044(&DAT_0067bbf4,1,param_2,param_3);
      FUN_0043ae88(*(undefined4 *)(param_1 + 4),uVar2);
    }
    else {
      iVar1 = FUN_0043b048(*(undefined4 *)(param_1 + 4),iVar1);
      *(undefined4 *)(iVar1 + 8) = param_3;
    }
  }
  return;
}
