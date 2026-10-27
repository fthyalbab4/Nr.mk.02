// rea decompile_all
// name: FUN_00500508
// address: 0x500508
// body: available
// range: 0x500508-0x5005aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00500508(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined1 in_ZF;

  FUN_0040891c(*param_1,&DAT_005005b8);
  if (!(bool)in_ZF) {
    sVar1 = *(short *)*param_1;
    if (sVar1 == 0x5c) {
      FUN_00408a54(param_1,1,1);
    }
    if (*(short *)*param_1 == 0x2e) {
      FUN_00408a54(param_1,1,4);
    }
    iVar2 = FUN_0041d99c(&DAT_005005b8,*param_1);
    if (iVar2 == 0) {
      FUN_00408194(param_1,0);
    }
    else {
      FUN_00408a54(param_1,1,iVar2);
      FUN_00408678(param_1,L"...\\",*param_1);
    }
    if (sVar1 == 0x5c) {
      FUN_00408678(param_1,&DAT_005005b8,*param_1);
    }
    return;
  }
  FUN_00408194(param_1,0);
  return;
}
