// rea decompile_all
// name: FUN_004aa1d0
// address: 0x4aa1d0
// body: available
// range: 0x4aa1d0-0x4aa2da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004aa1d0(int param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  if (param_1 != *(int *)(param_3 + 100)) {
    FUN_004a5024(PTR_LAB_0068942c);
  }
  if (param_2 == '\0') {
    iVar2 = FUN_004a8f20(param_3);
    iVar3 = FUN_004a8eb8(param_1);
    if (iVar2 < iVar3 + -1) {
      iVar2 = FUN_004a8f20(param_3);
      FUN_004a8ec8(param_1,iVar2 + 1);
      cVar1 = FUN_004aa0dc();
      if (cVar1 != '\0') {
        iVar2 = FUN_004a8f20(param_3);
        iVar3 = FUN_004a8f20(param_3);
        uVar4 = FUN_004a8ec8(param_1,iVar3 + 1);
        FUN_004a8f00(uVar4,1);
        return iVar2 + 2;
      }
    }
    iVar2 = FUN_004a8f20(param_3);
    iVar2 = iVar2 + 2;
    iVar3 = FUN_004a8f20(param_3);
    uVar4 = FUN_004ac14c();
    FUN_004a9044(param_1,iVar3 + 1,uVar4);
  }
  else {
    iVar2 = FUN_004a8f20(param_3);
    if (0 < iVar2) {
      iVar2 = FUN_004a8f20(param_3);
      FUN_004a8ec8(param_1,iVar2 + -1);
      cVar1 = FUN_004aa0dc();
      if (cVar1 != '\0') {
        iVar2 = FUN_004a8f20(param_3);
        iVar3 = FUN_004a8f20(param_3);
        uVar4 = FUN_004a8ec8(param_1,iVar3 + -1);
        FUN_004a8f00(uVar4,1);
        return iVar2 + -1;
      }
    }
    iVar2 = FUN_004a8f20(param_3);
    uVar4 = FUN_004a8f20(param_3);
    uVar5 = FUN_004ac14c();
    FUN_004a9044(param_1,uVar4,uVar5);
  }
  return iVar2;
}
