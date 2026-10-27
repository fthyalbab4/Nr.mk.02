// rea decompile_all
// name: FUN_00622438
// address: 0x622438
// body: available
// range: 0x622438-0x622810 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00622438(undefined4 param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double in_stack_00000010;
  double in_stack_00000018;
  double in_stack_00000020;
  double in_stack_00000028;

  cVar1 = FUN_00620ff8(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_004048b8();
    iVar3 = FUN_004048b8();
    if ((0 < iVar2) && (0 < iVar3)) {
      FUN_004048b8();
      (**(code **)(**(int **)PTR_DAT_00689570 + 0xfc))();
      (**(code **)(**(int **)PTR_DAT_00689570 + 0xfc))();
      (**(code **)(**(int **)PTR_DAT_00689570 + 0xf4))();
      (**(code **)(**(int **)PTR_DAT_00689570 + 0x130))();
      iVar4 = FUN_004048b8();
      if (param_2 != '\0') {
        iVar4 = iVar4 - (iVar4 / iVar2) * iVar2;
        if (0 < iVar4) {
          iVar4 = iVar4 - iVar2;
        }
        for (; (double)(iVar2 + iVar4) < in_stack_00000028; iVar4 = iVar4 + iVar2) {
        }
      }
      for (; (double)iVar4 < in_stack_00000028 + in_stack_00000018; iVar4 = iVar4 + iVar2) {
        iVar5 = FUN_004048b8();
        if (param_3 != '\0') {
          iVar5 = iVar5 - (iVar5 / iVar3) * iVar3;
          if (0 < iVar5) {
            iVar5 = iVar5 - iVar3;
          }
          for (; (double)(iVar3 + iVar5) < in_stack_00000020; iVar5 = iVar5 + iVar3) {
          }
        }
        while (((double)iVar5 < in_stack_00000020 + in_stack_00000010 &&
               ((**(code **)(**(int **)PTR_DAT_00689570 + 0x120))(), param_3 != '\0'))) {
          iVar5 = iVar5 + iVar3;
        }
        if (param_2 == '\0') {
          return;
        }
      }
    }
  }
  return;
}
