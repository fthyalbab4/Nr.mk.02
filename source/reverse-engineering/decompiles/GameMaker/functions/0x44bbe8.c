// rea decompile_all
// name: FUN_0044bbe8
// address: 0x44bbe8
// body: available
// range: 0x44bbe8-0x44bc4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0044bbe8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint Comperand;
  int iVar3;

  iVar1 = *(int *)PTR_DAT_0078275c;
  if (iVar1 < 2) {
    iVar3 = -1;
  }
  else {
    iVar3 = 4000;
  }
  while( true ) {
    Comperand = *param_1 & 0xfffffffe;
    uVar2 = InterlockedCompareExchange((LONG *)param_1,Comperand | 1,Comperand);
    if (uVar2 == Comperand) break;
    if (iVar3 < 0) {
      SwitchToThread();
      if (iVar1 < 2) {
        iVar3 = 0;
      }
      else {
        iVar3 = 4000;
      }
    }
    iVar3 = iVar3 + -1;
  }
  return Comperand;
}
