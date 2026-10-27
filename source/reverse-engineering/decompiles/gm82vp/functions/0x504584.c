// rea decompile_all
// name: FUN_00504584
// address: 0x504584
// body: available
// range: 0x504584-0x50460f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00504584(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  HMODULE pHStackY_28;

  pHStackY_28 = (HMODULE)0x504597;
  pHStackY_28 = GetModuleHandleW(L"user32.dll");
  pcVar1 = (code *)FUN_0040deb0();
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(0xffff);
    if ((HMODULE)(uVar2 & 0xffff) != (HMODULE)0x0) {
      pHStackY_28 = (HMODULE)(uVar2 & 0xffff);
      iVar3 = FUN_0040deb0();
      *(int *)(param_1 + 0x3b0) = iVar3;
      FUN_004bb578(*(undefined4 *)(param_1 + 0x3a4),iVar3 != 0);
    }
  }
  *(undefined1 *)(param_1 + 0x3ac) = 0;
  FUN_004baee8(*(undefined4 *)(param_1 + 0x38c),&pHStackY_28);
  FUN_004baf08(*(undefined4 *)(param_1 + 0x394),&pHStackY_28);
  FUN_005044d8(param_1,param_1);
  return;
}
