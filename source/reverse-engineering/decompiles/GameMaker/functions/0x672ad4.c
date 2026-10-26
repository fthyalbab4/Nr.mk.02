// rea decompile_all
// name: FUN_00672ad4
// address: 0x672ad4
// body: available
// range: 0x672ad4-0x672b3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00672ad4(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;

  iVar6 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (-1 < iVar6 + -1) {
    iVar5 = 0;
    do {
      iVar3 = FUN_00672aa4(param_1,iVar5);
      cVar2 = FUN_00405c98(*(undefined4 *)(iVar3 + 0xc),&PTR_LAB_00666f6c);
      if (cVar2 != '\0') {
        iVar3 = FUN_00672aa4(param_1,iVar5);
        piVar1 = *(int **)(iVar3 + 0xc);
        uVar4 = (**(code **)(*piVar1 + 0x188))();
        (**(code **)(*piVar1 + 0x98))(piVar1,piVar1[0x10],piVar1[0x11],piVar1[0x13],uVar4);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}
