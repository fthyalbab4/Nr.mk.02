// rea decompile_all
// name: FUN_005ff310
// address: 0x5ff310
// body: available
// range: 0x5ff310-0x5ff3cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ff310(int *param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  int iVar1;

  if (param_1[0x28] == 0) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\Core\\IdIOHandler.pas",
                 0x58a);
  }
  if (param_3 < 1) {
    if (param_3 < 0) {
      FUN_005fedc8(param_1,0,param_1[0x30],0);
      (**(code **)(*param_1 + 0x70))(param_1,1,1);
      FUN_005f8de0(param_1[0x28],param_2,0xffffffff,0xffffffff,param_4);
    }
  }
  else {
    while ((*(int *)(param_1[0x28] + 0x20) < param_3 &&
           ((iVar1 = FUN_005fedc8(param_1,0,0xffffffff,1), iVar1 < 1 ||
            (*(int *)(param_1[0x28] + 0x20) < param_3))))) {
      (**(code **)(*param_1 + 0x70))(param_1,1,1);
    }
    FUN_005f8de0(param_1[0x28],param_2,param_3,0xffffffff,param_4);
  }
  return;
}
