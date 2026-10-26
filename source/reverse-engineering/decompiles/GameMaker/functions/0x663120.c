// rea decompile_all
// name: FUN_00663120
// address: 0x663120
// body: available
// range: 0x663120-0x663189 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00663120(undefined4 param_1,LPMSG param_2)

{
  undefined4 uVar1;
  char cVar2;
  BOOL BVar3;
  undefined4 uVar4;

  uVar1 = *(undefined4 *)PTR_DAT_00782280;
  uVar4 = 0;
  BVar3 = PeekMessageW(param_2,(HWND)0x0,0,0,1);
  if ((BVar3 != 0) && (uVar4 = 1, param_2->message != 0x12)) {
    cVar2 = FUN_0051f488(uVar1,param_2);
    if (cVar2 == '\0') {
      cVar2 = FUN_0051f340(uVar1,param_2);
      if (cVar2 == '\0') {
        if ((param_2->message < 0x100) || (0x109 < param_2->message)) {
          TranslateMessage(param_2);
          DispatchMessageW(param_2);
        }
        else {
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}
