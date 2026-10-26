// rea decompile_all
// name: FUN_006609c0
// address: 0x6609c0
// body: available
// range: 0x6609c0-0x660afe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006609c0(void)

{
  int iVar1;
  int in_stack_00000004;
  undefined1 local_1c [16];
  undefined4 local_c;
  undefined4 local_8;

  SystemParametersInfoW(0x1002,0,(PVOID)(in_stack_00000004 + -4),0);
  if ((*(int *)PTR_DAT_00782230 != 0) &&
     (((*(char *)(*(int *)(*(int *)(in_stack_00000004 + -8) + 0x324) + 0x30c) != '\0' ||
       (*(char *)(in_stack_00000004 + -9) == '\0')) && (*(int *)(in_stack_00000004 + -4) != 0)))) {
    SystemParametersInfoW(0x1012,0,(PVOID)(in_stack_00000004 + -4),0);
    if (*(int *)(in_stack_00000004 + -4) == 0) {
      iVar1 = *(int *)(*(int *)(in_stack_00000004 + -8) + 0x328);
      FUN_004edf30(iVar1,local_1c);
      FUN_004ee09c(*(undefined4 *)(iVar1 + 0x34),local_1c,&local_c);
      *(undefined4 *)(in_stack_00000004 + -0x14) = local_c;
      *(undefined4 *)(in_stack_00000004 + -0x10) = local_8;
      FUN_004f76a8(*(undefined4 *)(in_stack_00000004 + -8));
      (**(code **)PTR_DAT_00782230)();
    }
    else {
      FUN_004f76a8(*(undefined4 *)(in_stack_00000004 + -8));
      (**(code **)PTR_DAT_00782230)();
    }
  }
  return;
}
