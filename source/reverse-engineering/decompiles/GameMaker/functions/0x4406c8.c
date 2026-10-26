// rea decompile_all
// name: FUN_004406c8
// address: 0x4406c8
// body: available
// range: 0x4406c8-0x440733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004406c8(int param_1,HMODULE param_2,LPCWSTR param_3,undefined4 param_4,LPCWSTR param_5)

{
  HRSRC pHVar1;
  HGLOBAL pvVar2;
  DWORD DVar3;
  LPVOID pvVar4;

  pHVar1 = FindResourceW(param_2,param_3,param_5);
  *(HRSRC *)(param_1 + 0x10) = pHVar1;
  if (pHVar1 == (HRSRC)0x0) {
    FUN_00440628();
  }
  pvVar2 = LoadResource(param_2,*(HRSRC *)(param_1 + 0x10));
  *(HGLOBAL *)(param_1 + 0x14) = pvVar2;
  if (pvVar2 == (HGLOBAL)0x0) {
    FUN_00440628();
  }
  DVar3 = SizeofResource(param_2,*(HRSRC *)(param_1 + 0x10));
  pvVar4 = LockResource(*(HGLOBAL *)(param_1 + 0x14));
  FUN_0043fdf4(param_1,pvVar4,DVar3);
  return;
}
