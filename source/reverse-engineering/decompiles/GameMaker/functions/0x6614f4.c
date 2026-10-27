// rea decompile_all
// name: FUN_006614f4
// address: 0x6614f4
// body: available
// range: 0x6614f4-0x6615b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_006614f4(int *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  HWND pHVar3;
  HWND pHVar4;

  cVar1 = (**(code **)(*param_1 + 0x120))();
  if ((cVar1 == '\0') || (cVar1 = FUN_004fd5ac(*(undefined4 *)PTR_DAT_007827e4), cVar1 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return false;
  }
  if ((param_1[0xc5] == 0) && (cVar1 = FUN_004fd5ac(*(undefined4 *)PTR_DAT_007827e4), cVar1 == '\0')
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return *(int *)(param_2 + 4) != 0x202;
  }
  if (param_1[200] != 0) {
    pHVar3 = (HWND)FUN_004f76a8(param_1[200]);
    pHVar4 = GetForegroundWindow();
    if (pHVar3 != pHVar4) {
      bVar2 = true;
      goto LAB_0066157b;
    }
  }
  bVar2 = false;
LAB_0066157b:
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    if ((param_1[0xcf] == 0) || (*(char *)(param_1[0xcf] + 0x31a) != '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else if ((bVar2) && (*(int *)(param_2 + 4) != 0xb403)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}
