// rea decompile_all
// name: FUN_005df9bc
// address: 0x5df9bc
// body: available
// range: 0x5df9bc-0x5dfa21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005df9bc(undefined4 param_1,int *param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  uint extraout_EDX;
  undefined4 local_8;

  local_8 = 0;
  if (param_2 == (int *)0x0) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdStreamVCL.pas",
                 0x5b);
  }
  if (param_3 != 0) {
    iVar1 = FUN_005e1ab0(param_3,param_5,param_4);
    if (0 < iVar1) {
      if ((param_3 == 0) || (*(uint *)(param_3 + -4) <= param_4)) {
        iVar1 = thunk_FUN_00404478();
        param_4 = extraout_EDX;
      }
      local_8 = (**(code **)(*param_2 + 0x10))(param_2,param_3 + param_4,iVar1);
    }
  }
  return local_8;
}
