// rea decompile_all
// name: FUN_005b6238
// address: 0x5b6238
// body: available
// range: 0x5b6238-0x5b6290 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b6238(undefined4 param_1,undefined4 *param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;

  FUN_00407eb8(param_2,param_1);
  puVar1 = (ushort *)FUN_00417110(*param_2);
  while( true ) {
    iVar2 = FUN_00408238(*param_2);
    if ((iVar2 < 1) || ((0x20 < *puVar1 && (*puVar1 != 0x2e)))) break;
    iVar2 = FUN_00407f44(*param_2);
    iVar3 = (int)puVar1 - iVar2 >> 1;
    if (iVar3 < 0) {
      iVar3 = iVar3 + (uint)(((int)puVar1 - iVar2 & 1U) != 0);
    }
    FUN_00408244(param_2,iVar3);
    puVar1 = (ushort *)FUN_00417110(*param_2);
  }
  return;
}
