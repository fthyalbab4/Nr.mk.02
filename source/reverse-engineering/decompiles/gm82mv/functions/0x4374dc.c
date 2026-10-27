// rea decompile_all
// name: FUN_004374dc
// address: 0x4374dc
// body: available
// range: 0x4374dc-0x437548 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004374dc(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0043747c(param_2,param_4);
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0043747c(param_3,param_4);
  }
  if (iVar2 == 0) {
    iVar4 = param_3;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = param_2;
    if ((iVar3 != 0) && (cVar1 = thunk_FUN_0040629c(iVar2,iVar3), iVar4 = param_3, cVar1 != '\0')) {
      iVar4 = param_2;
    }
  }
  return iVar4;
}
