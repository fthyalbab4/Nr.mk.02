// rea decompile_all
// name: FUN_004c4844
// address: 0x4c4844
// body: available
// range: 0x4c4844-0x4c489c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c4844(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;

  sVar3 = FUN_004c4820(param_1);
  iVar4 = (int)sVar3;
  if (-1 < iVar4) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0x1d8);
    iVar2 = *(int *)(iVar1 + 8);
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (iVar2 <= param_2) {
      param_2 = (short)iVar2 + -1;
    }
    if (iVar4 != param_2) {
      FUN_00438d5c(iVar1,iVar4);
      FUN_00438f7c(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x1d8),(int)param_2,param_1);
    }
  }
  return;
}
