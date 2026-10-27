// rea decompile_all
// name: FUN_00644d14
// address: 0x644d14
// body: available
// range: 0x644d14-0x644df4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644d14(int param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar1 = *(int *)(param_1 + 0x710);
  iVar3 = (param_2 * iVar1) / 100;
  iVar4 = (param_3 * iVar1) / 100;
  lVar2 = (longlong)*(int *)(*(int *)(param_1 + 0x704) + 4) * (longlong)iVar1;
  iVar5 = FUN_00404878((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
  lVar2 = (longlong)*(int *)(*(int *)(param_1 + 0x704) + 8) * (longlong)iVar1;
  iVar6 = FUN_00404878((int)lVar2,(int)((ulonglong)lVar2 >> 0x20));
  iVar1 = *(int *)(*(int *)(param_1 + 0x5dc) + 0x4c);
  DAT_0077f19c = 0;
  iVar5 = iVar5 - *(int *)(*(int *)(param_1 + 0x5dc) + 0x48);
  if (iVar3 < iVar5) {
    iVar5 = iVar3;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x6f4) = iVar5;
  FUN_00484e60(*(undefined4 *)(param_1 + 0x5e0));
  iVar6 = iVar6 - iVar1;
  if (iVar4 < iVar6) {
    iVar6 = iVar4;
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0x6f8) = iVar6;
  FUN_00484e60(*(undefined4 *)(param_1 + 0x5e4));
  DAT_0077f19c = 1;
  return;
}
