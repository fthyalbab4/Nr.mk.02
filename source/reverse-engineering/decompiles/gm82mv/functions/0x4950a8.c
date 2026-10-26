// rea decompile_all
// name: FUN_004950a8
// address: 0x4950a8
// body: available
// range: 0x4950a8-0x495152 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004950a8(char param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;

  iVar2 = DAT_0068f1ac;
  iVar1 = DAT_0068f1a4;
  if (DAT_0068f1a4 != 0) {
    iVar4 = FUN_00491c34(DAT_0068f1a4);
    iVar6 = iVar2;
    if (param_1 == '\0') {
      do {
        if (iVar6 == 0) {
          iVar6 = iVar4;
        }
        iVar6 = iVar6 + -1;
        piVar5 = (int *)FUN_00491c1c(iVar1,iVar6);
        if (((*(char *)((int)piVar5 + 0x59) != '\0') &&
            (cVar3 = (**(code **)(*piVar5 + 0x5c))(), cVar3 != '\0')) &&
           (*(char *)((int)piVar5 + 0x1b3) != '\0')) {
          return piVar5;
        }
      } while (iVar6 != iVar2);
    }
    else {
      do {
        if (iVar6 == iVar4 + -1) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        piVar5 = (int *)FUN_00491c1c(iVar1,iVar6);
        if (((*(char *)((int)piVar5 + 0x59) != '\0') &&
            (cVar3 = (**(code **)(*piVar5 + 0x5c))(), cVar3 != '\0')) &&
           (*(char *)((int)piVar5 + 0x1b3) != '\0')) {
          return piVar5;
        }
      } while (iVar6 != iVar2);
    }
  }
  return (int *)0x0;
}
