// rea decompile_all
// name: FUN_0056bf80
// address: 0x56bf80
// body: available
// range: 0x56bf80-0x56bffa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056bf80(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  LONG LVar4;
  UINT UVar5;

  if (*param_2 == 7) {
    iVar2 = FUN_00513780(param_1,1);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00513780(param_1,1);
      cVar1 = (**(code **)(*piVar3 + 0x10c))(piVar3,param_1[0xb0]);
      if (cVar1 == '\0') {
        return;
      }
    }
    (**(code **)(*param_1 + -0x14))(param_1,param_2);
  }
  else {
    if (*param_2 == 0x201) {
      LVar4 = GetMessageTime();
      iVar2 = param_1[0xb1];
      UVar5 = GetDoubleClickTime();
      if ((uint)(LVar4 - iVar2) < UVar5) {
        *param_2 = 0x203;
      }
      param_1[0xb1] = 0;
    }
    FUN_004f42f0(param_1,param_2);
  }
  return;
}
