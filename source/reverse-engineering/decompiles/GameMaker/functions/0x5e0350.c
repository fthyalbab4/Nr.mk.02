// rea decompile_all
// name: FUN_005e0350
// address: 0x5e0350
// body: available
// range: 0x5e0350-0x5e037c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e0350(int *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 extraout_CL;
  undefined1 extraout_CL_00;
  int iVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar3;

  iVar2 = param_2 + -1;
  if (SBORROW4(param_2,1)) {
    param_1 = (int *)FUN_00405944();
    param_3 = extraout_CL;
    iVar2 = extraout_EDX;
  }
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    uVar3 = 0;
    do {
      iVar1 = *param_1;
      if ((iVar1 == 0) || (*(uint *)(iVar1 + -4) <= uVar3)) {
        param_1 = (int *)thunk_FUN_00404478();
        param_3 = extraout_CL_00;
        iVar2 = extraout_EDX_00;
      }
      *(undefined1 *)(iVar1 + uVar3) = param_3;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
