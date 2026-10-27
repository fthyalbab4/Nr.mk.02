// rea decompile_all
// name: FUN_005e31ac
// address: 0x5e31ac
// body: available
// range: 0x5e31ac-0x5e3223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e31ac(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;

  if (param_2 < 0) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                 0x1120);
  }
  iVar1 = FUN_00409a18(param_1);
  iVar1 = iVar1 - param_2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if ((-1 < param_3) && (param_3 < iVar1)) {
    iVar1 = param_3;
  }
  if (iVar1 < 1) {
    FUN_00407eb8(param_4,0);
  }
  else {
    if (param_5 == 0) {
      param_5 = FUN_004213b8();
    }
    FUN_00421fbc(param_5,param_1,param_2,param_4,iVar1);
  }
  return;
}
