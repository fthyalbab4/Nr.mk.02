// rea decompile_all
// name: FUN_0066ff78
// address: 0x66ff78
// body: available
// range: 0x66ff78-0x67001b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0066ff78(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar5 = 0;
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x6c);
  }
  iVar6 = *(int *)(*(int *)(param_3 + 8) + 8);
  if (-1 < iVar6 + -1) {
    iVar4 = 0;
    do {
      uVar2 = FUN_00671640(param_3,iVar4);
      cVar1 = FUN_00405c98(uVar2,&PTR_FUN_0066c650);
      if (cVar1 != '\0') {
        FUN_00671640(param_3,iVar4);
        iVar3 = FUN_00673fd0();
        if (iVar3 == param_2) {
          iVar5 = FUN_00671640(param_3,iVar4);
          return iVar5;
        }
      }
      FUN_00671640(param_3,iVar4);
      cVar1 = FUN_00672334();
      if (cVar1 != '\0') {
        FUN_00671640(param_3,iVar4);
        uVar2 = FUN_0067236c();
        iVar5 = FUN_0066ff78(param_1,param_2,uVar2);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return iVar5;
}
