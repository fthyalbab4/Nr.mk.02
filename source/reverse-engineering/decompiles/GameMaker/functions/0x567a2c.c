// rea decompile_all
// name: FUN_00567a2c
// address: 0x567a2c
// body: available
// range: 0x567a2c-0x567af4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00567a2c(int param_1,int param_2)

{
  char cVar1;
  HWND pHVar2;
  HWND pHVar3;
  bool bVar4;
  undefined4 local_10;
  undefined1 local_c [4];

  bVar4 = &stack0x00000000 == &DAT_00000010;
  FUN_00408640(param_2,*(undefined4 *)(param_1 + 0x2a0));
  if (!bVar4) {
    if ((((*(byte *)(param_1 + 0x1c) & 0x10) != 0) && (param_2 != 0)) &&
       ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
      FUN_00567510(param_1,0);
    }
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      FUN_00567b30(param_1,&local_10,local_c);
    }
    FUN_0056793c(param_1,param_2);
    *(byte *)(param_1 + 0x2ad) = *(byte *)(param_1 + 0x2ad) & 0xfe;
    if (*(int *)(param_1 + 0x2a0) != 0) {
      *(byte *)(param_1 + 0x2ad) = *(byte *)(param_1 + 0x2ad) | 1;
    }
    FUN_0047d91c(param_1,0);
    cVar1 = FUN_0056792c(param_1);
    if ((cVar1 != '\0') && (0 < *(int *)(param_1 + 0x2a8))) {
      FUN_0047d91c(param_1,*(undefined4 *)(param_1 + 0x2a8));
    }
    cVar1 = FUN_004f7a54(param_1);
    if (cVar1 != '\0') {
      pHVar2 = (HWND)FUN_004f76a8(param_1);
      pHVar3 = GetFocus();
      if ((pHVar2 == pHVar3) && ((*(byte *)(param_1 + 0x1c) & 0x10) == 0)) {
        FUN_00567b78(param_1,local_10);
      }
    }
  }
  return;
}
