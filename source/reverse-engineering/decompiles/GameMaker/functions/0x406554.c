// rea decompile_all
// name: FUN_00406554
// address: 0x406554
// body: available
// range: 0x406554-0x406615 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00406554(void)

{
  int *piVar1;
  PEXCEPTION_RECORD pEVar2;
  LONG LVar3;
  int *unaff_EBP;
  undefined4 *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  PEXCEPTION_RECORD in_stack_00000004;
  PCONTEXT in_stack_00000008;
  undefined4 uVar5;

  if ((in_stack_00000004->ExceptionFlags & 6) == 0) {
    bVar4 = in_stack_00000004->ExceptionCode == 0xeedfade;
    pEVar2 = (PEXCEPTION_RECORD)FUN_00405930();
    if (((((bVar4) || (DAT_0077302c == 0)) || (DAT_00773028 != '\0')) &&
        ((DAT_0077302c < 2 || (DAT_00773028 != '\0')))) ||
       (LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&stack0x00000004),
       pEVar2 = in_stack_00000004, LVar3 != 0)) {
      pEVar2->ExceptionFlags = pEVar2->ExceptionFlags | 2;
      uVar5 = 0;
      (*DAT_00783018)();
      if (*unaff_EBP == 0xeedfade) {
        piVar1 = (int *)unaff_EDI[3];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + -0x20))(piVar1,unaff_EBP[6],unaff_EBP[5],uVar5);
        }
        FUN_00405a7c(unaff_EBP[6]);
      }
      *in_FS_OFFSET = *unaff_EDI;
                    /* WARNING: Could not recover jumptable at 0x0040660e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)(unaff_EDI[1] + 5))(0,(code *)(unaff_EDI[1] + 5),unaff_EDI[3]);
      return uVar5;
    }
  }
  return 1;
}
