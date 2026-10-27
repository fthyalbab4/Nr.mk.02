// rea decompile_all
// name: FUN_005543e0
// address: 0x5543e0
// body: available
// range: 0x5543e0-0x554447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005543e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;

  iVar1 = *(int *)(param_1 + 0x1cc);
  iVar5 = 0;
  piVar6 = (int *)(iVar1 + 0x20);
  do {
    if (*(int *)(param_1 + 0x78) <= iVar5) {
      return;
    }
    iVar3 = 0;
    iVar4 = 0;
    piVar2 = (int *)(iVar1 + 0x20);
    if (0 < iVar5) {
      do {
        if (*piVar6 == *piVar2) {
          iVar3 = piVar2[5];
          break;
        }
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar4 < iVar5);
    }
    if (iVar3 == 0) {
      iVar3 = FUN_00554340(param_1,*piVar6);
    }
    piVar6[5] = iVar3;
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 1;
  } while( true );
}
