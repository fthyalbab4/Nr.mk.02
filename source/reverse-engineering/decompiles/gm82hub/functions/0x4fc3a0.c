// rea decompile_all
// name: FUN_004fc3a0
// address: 0x4fc3a0
// body: available
// range: 0x4fc3a0-0x4fc47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fc3a0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;

  FUN_0047b4cc(param_1,param_2,param_3);
  cVar1 = FUN_004061f8(param_2,&PTR_FUN_004d6790);
  if (cVar1 != '\0') {
    iVar3 = *(int *)(param_1 + 0x68);
    if (((char)param_3 != '\0') &&
       (cVar1 = FUN_004fc5a0(iVar3,*(undefined4 *)(iVar3 + 0x24)), cVar1 == '\0')) {
      piVar2 = (int *)FUN_004fbff0(param_1);
      cVar1 = (**(code **)(*piVar2 + 0x20))();
      if (cVar1 == '\0') {
        return;
      }
    }
    if (((((char)param_3 != '\0') || (*(int *)(iVar3 + 0x24) != -1)) ||
        (*(int *)(iVar3 + 0x24) != *(int *)(param_2 + 0x80))) &&
       (*(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_2 + 0x80),
       *(int *)(param_2 + 0x80) != -1)) {
      FUN_004fbfcc(param_1,0);
    }
    piVar2 = (int *)FUN_004fbff0(param_1);
    cVar1 = (**(code **)(*piVar2 + 0x20))();
    if (((cVar1 != '\0') && (*(int *)(param_2 + 0x5c) != 0)) &&
       ((*(int *)(*(int *)(param_2 + 0x5c) + 0x3c) != 0 &&
        ((-1 < *(int *)(param_2 + 0x80) &&
         (iVar3 = FUN_004d3f14(*(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x3c)),
         *(int *)(param_2 + 0x80) < iVar3)))))) {
      FUN_004fc380(param_1,*(undefined4 *)(*(int *)(param_2 + 0x5c) + 0x3c),
                   *(undefined4 *)(param_2 + 0x80));
    }
  }
  return;
}
