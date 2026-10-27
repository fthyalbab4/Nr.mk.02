// rea decompile_all
// name: FUN_0050ade8
// address: 0x50ade8
// body: available
// range: 0x50ade8-0x50aedf inclusive
// range: 0x50aee7-0x50aeec inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50ae13 (push 0x50aee0 followed by fs-segment stack chaining); handler 0x50aee0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050ade8(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = &stack0xfffffffc;
  if ((char)param_1[0x1a] == '\0') {
    *(undefined1 *)(param_1 + 0x1a) = 1;
    puStack_1c = &LAB_0050aee0;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    if ((char)param_2 != *(char *)((int)param_1 + 0x69)) {
      iVar4 = *(int *)(param_1[0x14] + 8);
      if (-1 < iVar4 + -1) {
        iVar3 = 0;
        puStack_18 = &stack0xfffffffc;
        do {
          piVar2 = (int *)FUN_00405cbc(*(undefined4 *)(*(int *)(param_1[0x14] + 4) + iVar3 * 4),
                                       &LAB_0050a318);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x50))(piVar2,param_2);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(char *)((int)param_1 + 0x69) = (char)param_2;
      if ((0 < param_1[0x1b]) && (*(char *)((int)param_1 + 0x69) != '\0')) {
        iVar4 = FUN_0050a798(param_1[0x17]);
        if (-1 < iVar4 + -1) {
          iVar3 = 0;
          do {
            piVar2 = (int *)FUN_0050a784(param_1[0x17],iVar3);
            if (piVar2 != param_1) {
              cVar1 = FUN_00405c98(piVar2,&PTR_FUN_00509914);
              if ((cVar1 != '\0') && (piVar2[0x1b] == param_1[0x1b])) {
                FUN_0050ade8(piVar2,0);
              }
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      (**(code **)(*param_1 + 0x34))();
    }
    *in_FS_OFFSET = uStack_20;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    return;
  }
  return;
}
