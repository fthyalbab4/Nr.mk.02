// rea decompile_all
// name: FUN_005292ec
// address: 0x5292ec
// body: available
// range: 0x5292ec-0x529336 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005292ec(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;

  uVar1 = param_1[1];
  if (param_3 < (uint)param_1[1]) {
    uVar1 = param_3;
  }
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    param_1[1] = param_1[1] - uVar1;
    if (*(int *)(param_1[7] + 0x18) == 0) {
      iVar2 = FUN_0052e778(param_1[0xc],*param_1,uVar1);
      param_1[0xc] = iVar2;
    }
    FUN_005286a4();
    *param_1 = *param_1 + uVar1;
    param_1[2] = param_1[2] + uVar1;
  }
  return uVar1;
}
