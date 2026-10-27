// rea decompile_all
// name: FUN_00701e14
// address: 0x701e14
// body: available
// range: 0x701e14-0x701e68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00701e14(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;

  if ((0 < param_2) && (0 < param_3)) {
    if ((param_2 != *(int *)(param_1 + 4)) || (param_3 != *(int *)(param_1 + 8))) {
      FUN_00701dc0(param_1);
      *(int *)(param_1 + 4) = param_2;
      *(int *)(param_1 + 8) = param_3;
      lVar1 = (longlong)*(int *)(param_1 + 4) * (longlong)param_3;
      uVar2 = FUN_0040431c((int)lVar1 * 4,(int)((ulonglong)lVar1 >> 0x20));
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
    FUN_00404f08(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 4) * *(int *)(param_1 + 8) * 4,0)
    ;
  }
  return;
}
