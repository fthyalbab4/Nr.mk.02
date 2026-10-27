// rea decompile_all
// name: FUN_0058a4bc
// address: 0x58a4bc
// body: available
// range: 0x58a4bc-0x58a5bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0058a4bc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  *param_4 = param_1;
  for (iVar2 = FUN_00571fac(param_1); iVar2 != 0;
      iVar2 = FUN_00571fac(*(undefined4 *)(iVar2 + 0x14))) {
    iVar3 = FUN_0060f960(iVar2,param_2,param_3);
    if (iVar3 != 0) {
      return iVar3;
    }
    if ((*(int *)(iVar2 + 0x14) < 0) ||
       (cVar1 = FUN_00571eb0(*(int *)(iVar2 + 0x14)), cVar1 == '\0')) break;
    *param_4 = *(undefined4 *)(iVar2 + 0x14);
  }
  if ((param_2 == 4) && (cVar1 = FUN_00571eb0(param_3), cVar1 != '\0')) {
    iVar2 = FUN_00571fac(param_3);
    iVar2 = *(int *)(iVar2 + 0x14);
    while ((-1 < iVar2 && (cVar1 = FUN_00571eb0(iVar2), cVar1 != '\0'))) {
      *param_4 = param_1;
      for (iVar3 = FUN_00571fac(param_1); iVar3 != 0;
          iVar3 = FUN_00571fac(*(undefined4 *)(iVar3 + 0x14))) {
        iVar4 = FUN_0060f960(iVar3,4,iVar2);
        if (iVar4 != 0) {
          return iVar4;
        }
        if ((*(int *)(iVar3 + 0x14) < 0) ||
           (cVar1 = FUN_00571eb0(*(undefined4 *)(iVar3 + 0x14)), cVar1 == '\0')) break;
        *param_4 = *(undefined4 *)(iVar3 + 0x14);
      }
      iVar2 = FUN_00571fac(iVar2);
      iVar2 = *(int *)(iVar2 + 0x14);
    }
  }
  return 0;
}
