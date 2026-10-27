// rea decompile_all
// name: FUN_004bd824
// address: 0x4bd824
// body: available
// range: 0x4bd824-0x4bd8ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bd824(int *param_1,int *param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_004be138(param_1,param_3,param_5);
  if (iVar1 != 0) {
    iVar2 = FUN_004bdf10(param_1);
    if ((iVar2 != iVar1) || (iVar1 == param_1[0xb6])) {
      param_1[0xb6] = 0;
      (**(code **)(*param_2 + 0x18))();
      (**(code **)(*param_1 + 0x9c))();
      if (iVar2 != 0) {
        FUN_004b8f10(iVar2,1,0);
      }
      FUN_004b8f10(iVar1,1,param_4);
      (**(code **)(*param_1 + 0x9c))();
      (**(code **)(*param_2 + 0x20))();
    }
  }
  return;
}
