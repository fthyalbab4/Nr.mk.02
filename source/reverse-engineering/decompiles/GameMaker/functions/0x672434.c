// rea decompile_all
// name: FUN_00672434
// address: 0x672434
// body: available
// range: 0x672434-0x6724a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00672434(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;

  uVar5 = 0;
  iVar2 = FUN_0067236c(param_1);
  iVar2 = *(int *)(*(int *)(iVar2 + 8) + 8);
  if (-1 < iVar2 + -1) {
    iVar6 = 0;
    do {
      uVar3 = FUN_0067236c(param_1);
      FUN_00672cc0(uVar3,iVar6);
      cVar1 = FUN_00674b10();
      if (cVar1 == '\0') {
        uVar3 = FUN_0067236c(param_1);
        iVar4 = FUN_00672cc0(uVar3,iVar6);
        if (*(char *)(iVar4 + 0x30) == '\0') goto LAB_00672482;
        uVar5 = 1;
      }
      else {
LAB_00672482:
        uVar3 = FUN_0067236c(param_1);
        FUN_00672cc0(uVar3,iVar6);
        cVar1 = FUN_00672434();
        if (cVar1 != '\0') {
          uVar5 = 1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar5;
}
