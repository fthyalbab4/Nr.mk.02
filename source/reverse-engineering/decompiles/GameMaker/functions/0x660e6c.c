// rea decompile_all
// name: FUN_00660e6c
// address: 0x660e6c
// body: available
// range: 0x660e6c-0x660edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00660e6c(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;

  piVar2 = (int *)FUN_0067552c(param_1,param_2);
  FUN_004ee7f8(piVar2,0);
  FUN_00674750(param_2,1);
  cVar1 = (**(code **)(*piVar2 + 0xe4))();
  if (cVar1 != '\0') {
    return piVar2;
  }
  cVar1 = (**(code **)(*piVar2 + 0x5c))();
  if (cVar1 != '\0') {
    iVar3 = FUN_00673fd0(param_2);
    if (iVar3 != 0) {
LAB_00660ece:
      uVar4 = 1;
      goto LAB_00660ed0;
    }
    cVar1 = FUN_00672334(param_2);
    if (cVar1 != '\0') {
      FUN_0067236c(param_2);
      iVar3 = FUN_00673010();
      if (0 < iVar3) goto LAB_00660ece;
    }
  }
  uVar4 = 0;
LAB_00660ed0:
  (**(code **)(*piVar2 + 0x74))(piVar2,uVar4);
  return piVar2;
}
