// rea decompile_all
// name: FUN_0074e824
// address: 0x74e824
// body: available
// range: 0x74e824-0x74e89e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0074e824(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_c;

  iVar1 = FUN_00732bc8();
  if ((iVar1 == 0) && (iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(), -1 < iVar2 + -1))
  {
    iStack_c = 0;
    do {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x18))(*(int **)(param_1 + 0x18),iStack_c);
      iVar4 = *(int *)(iVar3 + 0x10);
      if (iVar4 == 0) {
        iVar4 = *(int *)(iVar3 + 8);
      }
      if ((*(uint *)(iVar3 + 0xc) <= param_2) && (param_2 <= (uint)(iVar4 + *(int *)(iVar3 + 0xc))))
      {
        return iVar3;
      }
      iStack_c = iStack_c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}
