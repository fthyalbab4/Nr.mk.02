// rea decompile_all
// name: FUN_0059f2e4
// address: 0x59f2e4
// body: available
// range: 0x59f2e4-0x59f322 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059f2e4(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;

  piVar1 = (int *)FUN_0059ee98(*(undefined4 *)(param_1 + 0x1c),param_2);
  if (piVar1 == (int *)0x0) {
    if (param_3 != 0) {
      uVar2 = FUN_0059e058(0,param_3);
      FUN_0059effc(*(undefined4 *)(param_1 + 0x1c),param_2,uVar2);
    }
  }
  else {
    *piVar1 = param_3;
  }
  FUN_0059f324(param_1);
  return;
}
