// rea decompile_all
// name: FUN_004f6474
// address: 0x4f6474
// body: available
// range: 0x4f6474-0x4f6521 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004f6474(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;

  if ((*(char *)(param_1 + 0x1ea) != '\0') && (iVar2 = FUN_004f3124(param_1), -1 < iVar2 + -1)) {
    iVar5 = 0;
    do {
      piVar3 = (int *)FUN_004f30e8(param_1,iVar5);
      if (((*(char *)((int)piVar3 + 0x59) != '\0') &&
          (cVar1 = (**(code **)(*piVar3 + 0x5c))(), cVar1 != '\0')) &&
         ((((*(byte *)((int)piVar3 + 0x52) & 1) != 0 &&
           (iVar4 = FUN_004efb90(piVar3,0x112,*(undefined4 *)(*(int *)(param_4 + -8) + 4),
                                 *(undefined4 *)(*(int *)(param_4 + -8) + 8)), iVar4 != 0)) ||
          ((cVar1 = FUN_00405c98(piVar3,&PTR_LAB_004e61b8), cVar1 != '\0' &&
           (cVar1 = FUN_004f6474(piVar3), cVar1 != '\0')))))) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}
