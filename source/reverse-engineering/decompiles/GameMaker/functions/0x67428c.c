// rea decompile_all
// name: FUN_0067428c
// address: 0x67428c
// body: available
// range: 0x67428c-0x67433c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067428c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;

  if (*(int *)(param_1 + 0x48) != -1) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  FUN_00673fc4(param_1);
  iVar2 = FUN_00671654();
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(iVar2 + 0x6c) + 0x28);
  iVar2 = FUN_00673fc4(param_1);
  iVar2 = *(int *)(iVar2 + 0x20);
  if (iVar2 != 0) {
    iVar3 = FUN_00673fc4(param_1);
    iVar3 = FUN_00672408(*(undefined4 *)(iVar3 + 0x20));
    while ((iVar3 != 0 && (cVar1 = FUN_00405c98(iVar3,&LAB_0066aad4), cVar1 == '\0'))) {
      iVar3 = FUN_00672408(*(undefined4 *)(iVar3 + 0x20));
    }
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar3 + 0x28);
    }
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
      cVar1 = FUN_00405c98(iVar2,&PTR_FUN_0066c650);
      if (cVar1 != '\0') {
        *(undefined1 *)(iVar2 + 0x40) = 1;
        if (*(int *)(iVar2 + 0x48) != -1) {
          *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
        }
        FUN_006745e4(iVar2,*(undefined4 *)(param_1 + 0x60));
      }
      iVar2 = FUN_00672408(iVar2);
    }
  }
  return;
}
