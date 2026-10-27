// rea decompile_all
// name: FUN_004effa4
// address: 0x4effa4
// body: available
// range: 0x4effa4-0x4f0030 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004effa4(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;

  iVar1 = *param_2;
  if (iVar1 == 0xc) {
    uVar2 = FUN_00417bd4(param_2[2]);
    FUN_00417c10(*(undefined4 *)(param_1 + 0x174));
    *(undefined4 *)(param_1 + 0x174) = uVar2;
    FUN_004ee22c(param_1,*param_2,param_2[1],param_2[2]);
  }
  else if (iVar1 == 0xd) {
    puVar3 = *(undefined **)(param_1 + 0x174);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = &DAT_004f0034;
    }
    FUN_00417754(param_2[2],puVar3,param_2[1] + -1);
    iVar1 = FUN_00417670();
    param_2[3] = iVar1;
  }
  else if (iVar1 == 0xe) {
    if (*(int *)(param_1 + 0x174) == 0) {
      param_2[3] = 0;
    }
    else {
      iVar1 = FUN_00417670(*(int *)(param_1 + 0x174));
      param_2[3] = iVar1;
    }
  }
  return;
}
