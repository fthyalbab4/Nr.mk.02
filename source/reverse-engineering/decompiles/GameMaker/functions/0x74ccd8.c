// rea decompile_all
// name: FUN_0074ccd8
// address: 0x74ccd8
// body: available
// range: 0x74ccd8-0x74cd7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0074ccd8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_14;

  local_14 = 0;
  iVar6 = 0;
  iVar3 = *(int *)(param_1 + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      uVar2 = FUN_0074cbac(param_1,iVar4);
      cVar1 = FUN_0074c710(uVar2,param_2);
      if (cVar1 != '\0') {
        iVar6 = FUN_0074cbac(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = local_14;
  if ((iVar6 != 0) && (iVar3 = iVar6, param_3 != 0)) {
    iVar4 = FUN_0074c858(iVar6);
    iVar6 = *(int *)(iVar4 + 8);
    iVar3 = local_14;
    if (-1 < iVar6 + -1) {
      iVar5 = 0;
      do {
        uVar2 = FUN_0074cbac(iVar4,iVar5);
        cVar1 = FUN_0074c710(uVar2,param_3);
        if (cVar1 != '\0') {
          iVar3 = FUN_0074cbac(iVar4,iVar5);
          return iVar3;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  local_14 = iVar3;
  return local_14;
}
