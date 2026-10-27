// rea decompile_all
// name: FUN_004941a4
// address: 0x4941a4
// body: available
// range: 0x4941a4-0x494261 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004941a4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  HWND pHVar2;
  HWND pHVar3;
  undefined4 uVar4;
  int local_10;
  int local_c;
  undefined4 local_8;

  pHVar2 = (HWND)FUN_004c45dc(*(undefined4 *)(param_4 + -4));
  pHVar3 = GetCapture();
  if (pHVar2 == pHVar3) {
    uVar4 = FUN_004b807c();
    *(undefined4 *)(param_4 + -8) = uVar4;
    if ((*(int *)(param_4 + -8) != 0) &&
       (*(int *)(*(int *)(param_4 + -8) + 0x34) != *(int *)(param_4 + -4))) {
      *(undefined4 *)(param_4 + -8) = 0;
    }
  }
  else {
    *(undefined4 *)(param_4 + -8) = 0;
  }
  uVar4 = *(undefined4 *)(param_1 + 8);
  local_8._0_2_ = (short)uVar4;
  local_10 = (int)(short)local_8;
  local_8._2_2_ = (short)((uint)uVar4 >> 0x10);
  local_c = (int)local_8._2_2_;
  local_8 = uVar4;
  uVar4 = FUN_004c0fcc(*(undefined4 *)(param_4 + -4),&local_10,0,0,0);
  *(undefined4 *)(param_4 + -0xc) = uVar4;
  if (((*(int *)(param_4 + -0xc) != 0) &&
      (cVar1 = FUN_004061f8(*(undefined4 *)(param_4 + -0xc),&PTR_LAB_00488b04), cVar1 != '\0')) &&
     (cVar1 = FUN_004bbf84(*(undefined4 *)(param_4 + -0xc)), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}
