// rea decompile_all
// name: FUN_0052882c
// address: 0x52882c
// body: available
// range: 0x52882c-0x528954 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052882c(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *in_stack_0000eff0;
  undefined1 *puStack_1044;
  int iStack_1040;
  undefined1 *puStack_1038;
  int iStack_1034;
  undefined1 auStack_100c [4092];
  int iStack_10;

  iVar1 = 0x10;
  do {
    iStack_10 = iVar1;
    iVar1 = iStack_10 + -1;
  } while (iStack_10 + -1 != 0);
  FUN_00404f08(&puStack_1044,0x38,0);
  FUN_005286d4(&puStack_1044);
  FUN_005286f0();
  iVar1 = (**(code **)(*in_stack_0000eff0 + 0xc))(in_stack_0000eff0,auStack_100c,0x8000);
  while (0 < iVar1) {
    puStack_1044 = auStack_100c;
    iStack_1040 = iVar1;
    do {
      do {
        puStack_1038 = &stack0x00006ff4;
        iStack_1034 = 0x8000;
        FUN_00529ff0(&puStack_1044,0);
        FUN_005286f0();
        (**(code **)(*param_2 + 0x10))(param_2,&stack0x00006ff4,0x8000 - iStack_1034);
      } while (iStack_1040 != 0);
    } while (iStack_1034 < 1);
    iVar1 = (**(code **)(*in_stack_0000eff0 + 0xc))(in_stack_0000eff0,auStack_100c,0x8000);
  }
  do {
    do {
      puStack_1038 = &stack0x00006ff4;
      iStack_1034 = 0x8000;
      FUN_00529ff0(&puStack_1044,4);
      iVar1 = FUN_005286f0();
      (**(code **)(*param_2 + 0x10))(param_2,&stack0x00006ff4,0x8000 - iStack_1034);
    } while (iVar1 != 1);
  } while (iStack_1034 < 1);
  FUN_00529e94(&puStack_1044);
  FUN_005286f0();
  return;
}
