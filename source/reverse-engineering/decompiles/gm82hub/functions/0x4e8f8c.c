// rea decompile_all
// name: FUN_004e8f8c
// address: 0x4e8f8c
// body: available
// range: 0x4e8f8c-0x4e9010 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004e8f8c(int param_1,int param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  bVar1 = false;
  if (param_3 == '\x01') {
    iVar2 = FUN_004e1af4(param_1);
    iVar3 = FUN_004e1af4(param_2);
    bVar1 = iVar2 < iVar3;
  }
  else if (param_3 == '\x02') {
    iVar3 = FUN_004e1af4(param_2);
    iVar2 = *(int *)(param_2 + 0x4c);
    iVar4 = FUN_004e1af4(param_1);
    bVar1 = iVar3 + iVar2 < iVar4 + *(int *)(param_1 + 0x4c);
  }
  else if (param_3 == '\x03') {
    iVar2 = FUN_004e1ad4(param_1);
    iVar3 = FUN_004e1ad4(param_2);
    bVar1 = iVar2 < iVar3;
  }
  else if (param_3 == '\x04') {
    iVar3 = FUN_004e1ad4(param_2);
    iVar2 = *(int *)(param_2 + 0x48);
    iVar4 = FUN_004e1ad4(param_1);
    bVar1 = iVar3 + iVar2 < iVar4 + *(int *)(param_1 + 0x48);
  }
  return bVar1;
}
