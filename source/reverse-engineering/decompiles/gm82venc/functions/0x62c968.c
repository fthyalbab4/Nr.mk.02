// rea decompile_all
// name: FUN_0062c968
// address: 0x62c968
// body: available
// range: 0x62c968-0x62cad0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0062c968(void)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  int in_stack_0000000c;
  undefined4 local_c;

  piVar4 = (int *)(in_stack_0000000c + -4);
  uVar3 = 0;
  FUN_0062c578();
  if (in_ST0 <= (float10)_DAT_006887f4) {
    FUN_00404864();
    dVar1 = (double)((float10)*(double *)(in_stack_0000000c + 8) * (float10)_DAT_00688804 * in_ST1 +
                    (float10)*(double *)(*piVar4 + 0x50));
    FUN_00404874();
    local_c = SUB84(dVar1,0);
    cVar2 = FUN_0062c43c(*piVar4,*(undefined4 *)(in_stack_0000000c + -8),
                         *(undefined1 *)(in_stack_0000000c + -9),
                         (double)((float10)*(double *)(*piVar4 + 0x58) -
                                 (float10)*(double *)(in_stack_0000000c + 8) *
                                 (float10)_DAT_00688804 * in_ST2),local_c,
                         (short)((ulonglong)dVar1 >> 0x20));
    if (cVar2 != '\0') {
      FUN_00404864();
      dVar1 = (double)(in_ST3 * (float10)*(double *)(in_stack_0000000c + 8) +
                      (float10)*(double *)(*piVar4 + 0x50));
      FUN_00404874();
      local_c = SUB84(dVar1,0);
      cVar2 = FUN_0062c43c(*piVar4,*(undefined4 *)(in_stack_0000000c + -8),
                           *(undefined1 *)(in_stack_0000000c + -9),
                           (double)((float10)*(double *)(*piVar4 + 0x58) -
                                   in_ST4 * (float10)*(double *)(in_stack_0000000c + 8)),local_c,
                           (short)((ulonglong)dVar1 >> 0x20));
      if (cVar2 != '\0') {
        FUN_0060d0ac(*piVar4);
        FUN_0060ddec(*piVar4);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}
