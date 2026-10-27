// rea decompile_all
// name: FUN_005393d4
// address: 0x5393d4
// body: available
// range: 0x5393d4-0x53945a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005393d4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_stack_00000004;

  piVar4 = (int *)(in_stack_00000004 + -4);
  do {
    iVar2 = FUN_00408d44(&PTR_DAT_00539468,*piVar4);
    if (0 < iVar2) {
      FUN_00408a54(piVar4,iVar2,2);
    }
  } while (iVar2 != 0);
  iVar2 = 1;
  while( true ) {
    FUN_00407498(piVar4);
    iVar3 = FUN_00408514();
    if (iVar3 < iVar2) break;
    iVar3 = *piVar4;
    if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
      iVar3 = FUN_00407488(piVar4,*piVar4);
    }
    cVar1 = FUN_00543788(*(undefined2 *)(iVar3 + -2 + iVar2 * 2));
    if (cVar1 == '\0') {
      FUN_00408a54(piVar4,iVar2,1);
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
  return;
}
