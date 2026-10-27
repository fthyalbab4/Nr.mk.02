// rea decompile_all
// name: FUN_005e0648
// address: 0x5e0648
// body: available
// range: 0x5e0648-0x5e06d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e0648(int param_1,uint param_2,int *param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;

  if ((int)param_2 < 0) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                 0xafa);
  }
  iVar1 = FUN_00409a18(param_1);
  iVar2 = param_4 + param_2;
  if (SCARRY4(param_4,param_2)) {
    iVar1 = FUN_00405944();
    iVar2 = extraout_EDX;
  }
  if (iVar1 < iVar2) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdGlobal.pas",
                 0xafb);
  }
  iVar2 = *param_3;
  if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= param_5)) {
    param_5 = thunk_FUN_00404478();
    iVar2 = extraout_EDX_00;
  }
  iVar2 = iVar2 + param_5;
  if ((param_1 == 0) || (*(uint *)(param_1 + -4) <= param_2)) {
    thunk_FUN_00404478(param_5,iVar2);
    iVar2 = extraout_EDX_01;
  }
  FUN_0040450c(param_1 + param_2,iVar2,param_4);
  return;
}
