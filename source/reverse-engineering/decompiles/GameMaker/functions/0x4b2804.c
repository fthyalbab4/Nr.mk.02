// rea decompile_all
// name: FUN_004b2804
// address: 0x4b2804
// body: available
// range: 0x4b2804-0x4b28ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b2804(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (0 < *(int *)(*(int *)(param_1 + 0x2e4) + 8)) {
    uVar2 = FUN_004b2368(param_1,0);
    iVar6 = *(int *)(*(int *)(param_1 + 0x2e4) + 8) + -1;
    if (-1 < iVar6) {
      do {
        iVar3 = FUN_004b2368(param_1,iVar6);
        if ((*(char *)(iVar3 + 0x24) == '\0') &&
           ((iVar6 == 0 || (*(char *)(param_1 + 0x2e0) != '\0')))) {
          if ((*(byte *)(param_1 + 0x2e1) & 4) != 0) {
            cVar1 = FUN_004ad880(iVar3);
            if (cVar1 == '\0') goto LAB_004b2883;
          }
          if ((*(byte *)(param_1 + 0x2e1) & 8) != 0) {
            iVar4 = FUN_004ad0f0(iVar3);
            iVar5 = FUN_004ad0f0(uVar2);
            if (iVar4 != iVar5) goto LAB_004b2883;
          }
          cVar1 = FUN_004acf18(iVar3);
          if (cVar1 == '\0') {
            FUN_004acfc0(iVar3,1);
          }
        }
        else {
LAB_004b2883:
          FUN_004b243c(param_1,iVar6);
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != -1);
    }
  }
  return;
}
