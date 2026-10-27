// rea decompile_all
// name: FUN_004844cc
// address: 0x4844cc
// body: available
// range: 0x4844cc-0x4845f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004844cc(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;

  if (*(char *)((int)param_1 + 0x5e) != '\0') {
    iVar3 = FUN_004604a4(param_1[0x6c]);
    if (0 < iVar3) {
      iVar3 = FUN_004604bc(param_1[0x6c]);
      if (0 < iVar3) {
        uVar4 = FUN_004604a4(param_1[0x6c]);
        uVar5 = FUN_004604bc(param_1[0x6c]);
        (**(code **)(*param_1 + 0x98))(param_1,param_1[0x10],param_1[0x11],uVar5,uVar4);
      }
    }
  }
  piVar1 = *(int **)(param_1[0x6c] + 0xc);
  if (piVar1 == (int *)0x0) {
    param_1[0x14] = param_1[0x14] & 0xffffffbf;
  }
  else {
    cVar2 = FUN_004061f8(piVar1,&PTR_FUN_00458658);
    if (cVar2 == '\0') {
      cVar2 = FUN_004061f8(piVar1,&PTR_LAB_004597c0);
      if (cVar2 == '\0') {
        (**(code **)(*piVar1 + 0x40))(piVar1,*(undefined1 *)((int)param_1 + 0x1c3));
      }
    }
    FUN_00483f78(param_1,&iStack_18);
    cVar2 = (**(code **)(*piVar1 + 0x2c))();
    if ((((cVar2 == '\0') && (iStack_18 < 1)) && (iStack_14 < 1)) &&
       ((param_1[0x12] <= iStack_10 && (param_1[0x13] <= iStack_c)))) {
      param_1[0x14] = param_1[0x14] | 0x40;
    }
    else {
      param_1[0x14] = param_1[0x14] & 0xffffffbf;
    }
    cVar2 = FUN_00484254(param_1);
    if ((cVar2 != '\0') && ((char)param_1[0x71] != '\0')) {
      (**(code **)(*param_1 + 0x9c))();
    }
  }
  if ((char)param_1[0x71] == '\0') {
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}
