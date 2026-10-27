// rea decompile_all
// name: FUN_004acf20
// address: 0x4acf20
// body: available
// range: 0x4acf20-0x4acfb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004acf20(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;

  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar2 = FUN_004ac860(param_1);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      cVar1 = FUN_004acf18(param_1);
      if (param_2 == cVar1) {
        iVar2 = FUN_004ac874(param_1);
        if (*(char *)(iVar2 + 0x2e0) != '\0') {
          iVar2 = FUN_004ac874(param_1);
          if (1 < *(int *)(*(int *)(iVar2 + 0x2e4) + 8)) {
            piVar4 = (int *)FUN_004ac874(param_1);
            (**(code **)(*piVar4 + 0x108))(piVar4,param_1,0);
          }
        }
      }
      else if (param_2 == '\0') {
        cVar1 = FUN_004acf18(param_1);
        if (cVar1 != '\0') {
          uVar3 = FUN_004ac860(param_1);
          FUN_0040fc00(uVar3,0);
        }
      }
      else {
        uVar3 = FUN_004ac860(param_1);
        FUN_0040fc00(uVar3,*(undefined4 *)(param_1 + 0x10));
      }
    }
  }
  return;
}
