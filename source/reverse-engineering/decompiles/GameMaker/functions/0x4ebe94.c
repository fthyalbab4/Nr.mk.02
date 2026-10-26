// rea decompile_all
// name: FUN_004ebe94
// address: 0x4ebe94
// body: available
// range: 0x4ebe94-0x4ebee0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004ebe94(undefined4 param_1,undefined4 *param_2,char param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;

  if (param_3 == '\0') {
    uVar1 = FUN_004ebe68(param_1);
    *param_2 = uVar1;
    iVar2 = FUN_004ebdb0(*param_2,5,DAT_00788270,param_1,0);
  }
  else {
    iVar2 = FUN_004ebc08(param_1,param_4);
    if (iVar2 != 0) {
      uVar1 = FUN_004f76a8(iVar2);
      *param_2 = uVar1;
    }
  }
  return iVar2;
}
