// rea decompile_all
// name: FUN_0060f9dc
// address: 0x60f9dc
// body: available
// range: 0x60f9dc-0x60faa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0060f9dc(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  for (iVar3 = param_1; iVar3 != 0; iVar3 = FUN_00571fac(*(undefined4 *)(iVar3 + 0x14))) {
    iVar2 = FUN_0060f960(iVar3,param_2,param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((*(int *)(iVar3 + 0x14) < 0) ||
       (cVar1 = FUN_00571eb0(*(int *)(iVar3 + 0x14)), cVar1 == '\0')) break;
  }
  if ((param_2 == 4) && (cVar1 = FUN_00571eb0(param_3), cVar1 != '\0')) {
    iVar3 = FUN_00571fac(param_3);
    iVar3 = *(int *)(iVar3 + 0x14);
    while ((-1 < iVar3 && (cVar1 = FUN_00571eb0(iVar3), iVar2 = param_1, cVar1 != '\0'))) {
      for (; iVar2 != 0; iVar2 = FUN_00571fac(*(undefined4 *)(iVar2 + 0x14))) {
        iVar4 = FUN_0060f960(iVar2,4,iVar3);
        if (iVar4 != 0) {
          return iVar4;
        }
        if ((*(int *)(iVar2 + 0x14) < 0) ||
           (cVar1 = FUN_00571eb0(*(int *)(iVar2 + 0x14)), cVar1 == '\0')) break;
      }
      iVar3 = FUN_00571fac(iVar3);
      iVar3 = *(int *)(iVar3 + 0x14);
    }
  }
  return 0;
}
