// rea decompile_all
// name: FUN_00758f28
// address: 0x758f28
// body: available
// range: 0x758f28-0x758f69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00758f28(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;

  piVar3 = (int *)(param_4 + -4);
  iVar1 = *piVar3;
  while (*(char *)*piVar3 != '\0') {
    cVar2 = FUN_00740f40(*(char *)*piVar3);
    if (cVar2 != '\0') break;
    *piVar3 = *piVar3 + 1;
  }
  FUN_00407fe4(param_1,iVar1,*piVar3 - iVar1);
  return;
}
