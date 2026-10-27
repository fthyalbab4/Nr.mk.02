// rea decompile_all
// name: FUN_00660720
// address: 0x660720
// body: available
// range: 0x660720-0x6607b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00660720(void)

{
  int iVar1;
  char cVar2;
  int in_stack_00000004;
  WPARAM in_stack_00000008;
  int in_stack_0000000c;

  if (in_stack_00000004 != 0) goto LAB_006607a0;
  iVar1 = *(int *)(in_stack_0000000c + 8);
  if (iVar1 < 0x1b) {
    if (iVar1 == 0x1a) {
      if (DAT_0078a1d4 != (code *)0x0) {
        (*DAT_0078a1d4)();
      }
      goto LAB_006607a0;
    }
    if (iVar1 != 5) {
      if ((((iVar1 == 6) && (cVar2 = FUN_00405c98(DAT_0078a1e4,&PTR_LAB_0065edf8), cVar2 != '\0'))
          && (DAT_0078a1e4 != (int *)0x0)) && ((char)DAT_0078a1e4[0xe4] == '\0')) {
        (**(code **)(*DAT_0078a1e4 + 0x1bc))();
      }
      goto LAB_006607a0;
    }
  }
  else if ((iVar1 != 0x221) && (iVar1 != 0x229)) goto LAB_006607a0;
  FUN_00660650();
LAB_006607a0:
  CallNextHookEx(DAT_0078a1dc,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}
