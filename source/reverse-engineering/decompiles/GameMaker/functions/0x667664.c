// rea decompile_all
// name: FUN_00667664
// address: 0x667664
// body: available
// range: 0x667664-0x6677ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00667664(int *param_1,undefined1 param_2,undefined2 param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;

  FUN_004f08c0(param_1,param_2,param_3,param_4,param_5);
  if (*(char *)((int)param_1 + 0x1f2) == '\0') {
    return;
  }
  *(undefined1 *)((int)param_1 + 0x1f2) = 0;
  if ((((param_5 < 0) || (iVar3 = FUN_004edf8c(param_1), iVar3 <= param_5)) || (param_4 < 0)) ||
     (iVar3 = FUN_004edfcc(param_1), iVar3 < param_4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (param_1[0x6d] != 0) {
    uVar4 = FUN_00673fd0(param_1[0x6d]);
    cVar2 = FUN_00405c98(uVar4,&PTR_FUN_00509914);
    if ((cVar2 != '\0') &&
       ((iVar3 = FUN_00673fd0(param_1[0x6d]), *(int *)(iVar3 + 0x6c) == 0 ||
        ((iVar3 = FUN_00673fd0(param_1[0x6d]), *(char *)(iVar3 + 0x95) != '\0' &&
         (iVar3 = FUN_00673fd0(param_1[0x6d]), *(char *)(iVar3 + 0x69) != '\0')))))) {
      *(undefined1 *)((int)param_1 + 0x1f6) = 0;
      *(undefined1 *)((int)param_1 + 499) = 0;
      if ((bVar1) && (1 < (byte)(*(char *)((int)param_1 + 0x1f6) - 2U))) {
        (**(code **)(*param_1 + 0x90))();
      }
      goto LAB_0066778f;
    }
  }
  if (bVar1) {
    FUN_00667864(param_1,*(byte *)((int)param_1 + 0x1f1) ^ 1);
    if (*(char *)((int)param_1 + 0x1f1) != '\0') {
      (**(code **)(*param_1 + 0x94))();
    }
  }
  else {
    if (*(char *)((int)param_1 + 0x1f1) != '\0') {
      *(undefined1 *)((int)param_1 + 0x1f6) = 3;
    }
    (**(code **)(*param_1 + 0x94))();
  }
LAB_0066778f:
  if (bVar1) {
    FUN_00405d08(param_1);
  }
  FUN_00667938(param_1);
  return;
}
