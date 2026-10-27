// rea decompile_all
// name: FUN_0068a180
// address: 0x68a180
// body: available
// range: 0x68a180-0x68a1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068a180(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  iVar1 = param_3[1];
  iVar2 = param_3[2];
  iVar3 = param_3[3];
  iVar6 = param_2[1];
  iVar5 = param_2[2];
  iVar7 = param_2[3];
  iVar4 = *param_2;
  if (*param_3 <= *param_2) {
    iVar4 = *param_3;
  }
  *param_4 = iVar4;
  if (iVar5 <= iVar2) {
    iVar5 = iVar2;
  }
  param_4[2] = iVar5;
  if (iVar1 <= iVar6) {
    iVar6 = iVar1;
  }
  param_4[1] = iVar6;
  if (iVar7 <= iVar3) {
    iVar7 = iVar3;
  }
  param_4[3] = iVar7;
  return;
}
