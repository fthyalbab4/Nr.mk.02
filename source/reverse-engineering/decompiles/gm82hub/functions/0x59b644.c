// rea decompile_all
// name: FUN_0059b644
// address: 0x59b644
// body: available
// range: 0x59b644-0x59b6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059b644(int *param_1,int *param_2,int *param_3,int param_4,uint param_5,int param_6)

{
  HWND pHVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;

  FUN_0059b5cc();
  if (param_4 < *param_1) {
    BVar4 = -1;
    iVar3 = 0x7f;
    iVar2 = 0;
    param_5 = param_5 & 0xffff;
    pHVar1 = (HWND)FUN_004c45dc(*(undefined4 *)(param_6 + -0x78));
    SetScrollRange(pHVar1,param_5,iVar2,iVar3,BVar4);
  }
  else {
    BVar4 = -1;
    iVar3 = 0;
    iVar2 = 0;
    param_5 = param_5 & 0xffff;
    pHVar1 = (HWND)FUN_004c45dc(*(undefined4 *)(param_6 + -0x78));
    SetScrollRange(pHVar1,param_5,iVar2,iVar3,BVar4);
  }
  if (*param_1 < *param_2) {
    FUN_0059b538();
    *param_3 = *param_1;
  }
  return;
}
