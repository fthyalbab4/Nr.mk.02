// rea decompile_all
// name: FUN_00749c88
// address: 0x749c88
// body: available
// range: 0x749c88-0x749cce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00749c88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  short local_14;
  short sStack_12;
  short local_10;
  short sStack_e;

  sStack_e = (short)((uint)param_1 >> 0x10);
  if ((sStack_e == 0) || (sStack_12 = (short)((uint)param_2 >> 0x10), sStack_12 == 0)) {
    local_10 = (short)param_1;
    local_14 = (short)param_2;
    bVar2 = local_10 == local_14;
  }
  else {
    iVar1 = FUN_004178c4(param_1,param_2);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}
