// rea decompile_all
// name: FUN_004e4e14
// address: 0x4e4e14
// body: available
// range: 0x4e4e14-0x4e4e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e4e14(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  if ((*(char *)(param_1 + 0x29d) != '\0') && (*(int *)(param_1 + 0x290) != 0)) {
    FUN_004bcb48(*(undefined4 *)(param_1 + 0x290),0xb004,0,param_2);
  }
  if (*(char *)(param_1 + 0x29e) == '\x02') {
    iVar1 = FUN_004e30a8(param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_004e30a8(param_1);
      FUN_004e4e14(uVar2,param_2);
    }
  }
  return;
}
