// rea decompile_all
// name: FUN_006775d0
// address: 0x6775d0
// body: available
// range: 0x6775d0-0x677636 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006775d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if (param_1[0x9e] != 0) {
    iVar1 = FUN_0067236c();
    iVar1 = *(int *)(*(int *)(iVar1 + 8) + 8);
    if (-1 < iVar1 + -1) {
      iVar4 = 0;
      do {
        uVar2 = FUN_0067236c(param_1[0x9e]);
        iVar3 = FUN_00672cc0(uVar2,iVar4);
        FUN_00405a7c(*(undefined4 *)(iVar3 + 0x44));
        uVar2 = FUN_0067236c(param_1[0x9e]);
        iVar3 = FUN_00672cc0(uVar2,iVar4);
        *(undefined4 *)(iVar3 + 0x44) = 0;
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(*param_1 + 0xf8))();
  }
  return;
}
