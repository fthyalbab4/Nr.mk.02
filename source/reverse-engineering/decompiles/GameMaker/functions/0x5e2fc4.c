// rea decompile_all
// name: FUN_005e2fc4
// address: 0x5e2fc4
// body: available
// range: 0x5e2fc4-0x5e300f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e2fc4(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 extraout_EDX;

  iVar1 = FUN_00409a18(param_1);
  if (iVar1 < (int)(param_3 + 0x10)) {
    iVar1 = FUN_00406d88(L"Assertion failure",
                         L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",0x142b);
  }
  if ((param_1 == 0) || (*(uint *)(param_1 + -4) <= param_3)) {
    thunk_FUN_00404478(iVar1,param_2);
    param_2 = extraout_EDX;
  }
  FUN_0040450c(param_1 + param_3,param_2,0x10);
  return;
}
