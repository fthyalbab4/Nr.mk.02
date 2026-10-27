// rea decompile_all
// name: FUN_0058f93c
// address: 0x58f93c
// body: available
// range: 0x58f93c-0x58f9f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058f93c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (*(char *)(*(int *)PTR_DAT_0068939c + 0x40) == '\0') {
    iVar3 = *(int *)(*(int *)PTR_DAT_0068939c + 0xc);
    iVar4 = *(int *)(*(int *)PTR_DAT_0068939c + 0x10);
  }
  else {
    iVar6 = 0;
    iVar2 = 8;
    iVar5 = 8;
    do {
      iVar1 = FUN_00608fd8(*(undefined4 *)PTR_DAT_0068939c,iVar6);
      iVar3 = iVar2;
      iVar4 = iVar5;
      if (*(char *)(iVar1 + 4) != '\0') {
        iVar3 = *(int *)(iVar1 + 0x20) + *(int *)(iVar1 + 0x18);
        if (iVar3 < iVar2) {
          iVar3 = iVar2;
        }
        iVar4 = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x1c);
        if (iVar4 < iVar5) {
          iVar4 = iVar5;
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar3;
      iVar5 = iVar4;
    } while (iVar6 != 8);
  }
  iVar2 = FUN_0056195c();
  if (iVar2 < iVar3) {
    iVar3 = FUN_0056195c();
  }
  iVar2 = FUN_0056196c();
  if (iVar2 < iVar4) {
    iVar4 = FUN_0056196c();
  }
  iVar2 = FUN_00562554();
  if ((iVar3 != iVar2) || (iVar2 = FUN_0056255c(), iVar4 != iVar2)) {
    FUN_005624ac(iVar3,iVar4,1);
    FUN_005621a8();
    FUN_0061fbc0(iVar3,iVar4);
  }
  return;
}
