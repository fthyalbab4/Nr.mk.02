// rea decompile_all
// name: FUN_00525f84
// address: 0x525f84
// body: available
// range: 0x525f84-0x526079 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00525f84(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;

  FUN_004f1040(param_1,param_2,param_3);
  cVar1 = FUN_00405c98(param_2,&PTR_FUN_00509914);
  if (cVar1 != '\0') {
    piVar4 = *(int **)(param_1 + 0x68);
    cVar1 = (char)param_3;
    if ((cVar1 != '\0') && (cVar2 = (**(code **)(*piVar4 + 0x94))(piVar4,piVar4[9]), cVar2 == '\0'))
    {
      piVar3 = (int *)FUN_00525a4c(param_1);
      cVar2 = (**(code **)(*piVar3 + 0x20))();
      if (cVar2 == '\0') {
        return;
      }
    }
    if ((((cVar1 != '\0') || (piVar4[9] != -1)) || (piVar4[9] != *(int *)(param_2 + 0x80))) &&
       (piVar4[9] = *(int *)(param_2 + 0x80), *(int *)(param_2 + 0x80) != -1)) {
      FUN_00525a58(param_1,0);
    }
    if ((cVar1 != '\0') || (*(int *)(param_1 + 0x1b0) == 0)) {
      FUN_00525c30(param_1,*(undefined4 *)(param_2 + 0x6c));
    }
    piVar4 = (int *)FUN_00525a4c(param_1);
    cVar1 = (**(code **)(*piVar4 + 0x20))();
    if (((cVar1 != '\0') && (*(int *)(param_2 + 0x5c) != 0)) &&
       ((*(int *)(*(int *)(param_2 + 0x5c) + 0x3c) != 0 &&
        ((-1 < *(int *)(param_2 + 0x80) &&
         (iVar5 = FUN_00507098(*(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x3c)),
         *(int *)(param_2 + 0x80) < iVar5)))))) {
      FUN_00525f64(param_1,*(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x3c),
                   *(undefined4 *)(param_2 + 0x80));
    }
  }
  return;
}
