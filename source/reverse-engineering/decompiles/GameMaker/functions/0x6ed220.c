// rea decompile_all
// name: FUN_006ed220
// address: 0x6ed220
// body: available
// range: 0x6ed220-0x6ed351 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ed220(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 extraout_var;

  if ((*(int *)(param_1 + 0x5e8) == 0) || (*(int *)(*(int *)(param_1 + 0x5e8) + 4) < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x530) + 0x74))(*(int **)(param_1 + 0x530),uVar2);
  (**(code **)(**(int **)(param_1 + 0x538) + 0x74))
            (*(int **)(param_1 + 0x538),*(undefined1 *)(param_1 + 0x5f4));
  (**(code **)(**(int **)(param_1 + 0x5b8) + 0x74))
            (*(int **)(param_1 + 0x5b8),*(undefined1 *)(param_1 + 0x5f5));
  if ((*(int *)(param_1 + 0x5e8) == 0) || (*(int *)(param_1 + 0x5f0) < 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x53c) + 0x74))(*(int **)(param_1 + 0x53c),uVar2);
  if ((*(int *)(param_1 + 0x5e8) == 0) || (*(int *)(param_1 + 0x5f0) < 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x540) + 0x74))(*(int **)(param_1 + 0x540),uVar2);
  if (*(int *)(param_1 + 0x5e8) != 0) {
    uVar2 = FUN_004895b4();
    cVar1 = FUN_0048957c(uVar2,CONCAT22(extraout_var,2));
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_006ed2cf;
    }
  }
  uVar2 = 0;
LAB_006ed2cf:
  (**(code **)(**(int **)(param_1 + 0x544) + 0x74))(*(int **)(param_1 + 0x544),uVar2);
  if ((*(int *)(param_1 + 0x5e8) == 0) || (*(int *)(param_1 + 0x5f0) < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x550) + 0x74))(*(int **)(param_1 + 0x550),uVar2);
  if (((*(int *)(param_1 + 0x5e8) == 0) || (*(int *)(param_1 + 0x5f0) < 0)) ||
     (*(int *)(*(int *)(param_1 + 0x5e8) + 4) + -1 <= *(int *)(param_1 + 0x5f0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x554) + 0x74))(*(int **)(param_1 + 0x554),uVar2);
  if ((*(int *)(param_1 + 0x5e8) == 0) || (*(int *)(param_1 + 0x5f0) < 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (**(code **)(**(int **)(param_1 + 0x55c) + 0x74))(*(int **)(param_1 + 0x55c),uVar2);
  return;
}
