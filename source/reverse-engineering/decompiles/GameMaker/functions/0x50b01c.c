// rea decompile_all
// name: FUN_0050b01c
// address: 0x50b01c
// body: available
// range: 0x50b01c-0x50b081 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050b01c(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 in_ZF;

  FUN_00408640(param_2,param_1[0x1e]);
  if (!(bool)in_ZF) {
    iVar5 = *(int *)(param_1[0x14] + 8);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        uVar2 = FUN_0043b048(param_1[0x14],iVar4);
        cVar1 = FUN_00405c98(uVar2,&LAB_0050a318);
        if (cVar1 != '\0') {
          piVar3 = (int *)FUN_0043b048(param_1[0x14],iVar4);
          (**(code **)(*piVar3 + 0x60))(piVar3,param_2);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00407eb8(param_1 + 0x1e,param_2);
    (**(code **)(*param_1 + 0x34))();
  }
  return;
}
