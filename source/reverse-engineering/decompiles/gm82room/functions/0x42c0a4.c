// rea decompile_all
// name: FUN_0042c0a4
// address: 0x42c0a4
// body: available
// range: 0x42c0a4-0x42c0e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c0a4(int *param_1,int param_2,byte *param_3)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;

  pbVar3 = *(byte **)(param_2 + 0x10);
  if (*(byte **)(param_2 + 0x10) == (byte *)0x80000000) {
    pbVar3 = param_3;
  }
  pcVar1 = *(code **)(param_2 + 4);
  if (*(byte *)(param_2 + 7) == 0xff) {
    pbVar3 = (byte *)(((uint)pcVar1 & 0xffffff) + (int)param_1);
    iVar2 = *pbVar3 + 1;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      param_3 = param_3 + 1;
    }
  }
  else if (*(byte *)(param_2 + 7) < 0xfe) {
    (*pcVar1)(param_1,pbVar3);
  }
  else {
    (**(code **)((int)(short)pcVar1 + *param_1))();
  }
  return;
}
