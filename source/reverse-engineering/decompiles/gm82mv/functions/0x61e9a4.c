// rea decompile_all
// name: FUN_0061e9a4
// address: 0x61e9a4
// body: available
// range: 0x61e9a4-0x61eaba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061e9a4(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 extraout_ECX;

  DAT_006886e0 = param_5;
  DAT_006886e4 = param_4;
  PTR_FUN_006886d8._0_1_ = param_1;
  DAT_006886dc = param_2;
  if (param_1 == '\0') {
    (**(code **)(*DAT_006886a8 + 200))();
  }
  else {
    (**(code **)(*DAT_006886a8 + 200))();
    iVar1 = FUN_0061e860();
    if (iVar1 == 1) {
      (**(code **)(*DAT_006886a8 + 200))();
    }
    else {
      iVar1 = FUN_0061e860();
      if (iVar1 != 2) {
        FUN_0061e9a4(0,param_2,extraout_ECX,param_4,param_5);
        return;
      }
      (**(code **)(*DAT_006886a8 + 200))();
      if ((DAT_0085aec4 & 0x10000) != 0) {
        (**(code **)(*DAT_006886a8 + 200))();
      }
    }
    FUN_0056382c(DAT_006886dc);
    (**(code **)(*DAT_006886a8 + 200))();
    (**(code **)(*DAT_006886a8 + 200))();
    (**(code **)(*DAT_006886a8 + 200))();
  }
  return;
}
