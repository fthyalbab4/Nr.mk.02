// rea decompile_all
// name: FUN_0060ab60
// address: 0x60ab60
// body: available
// range: 0x60ab60-0x60abbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060ab60(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (param_1 != 0) {
    bVar2 = false;
    iVar3 = 0;
    iVar5 = *(int *)(param_1 + 0x68);
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x6c) + iVar4 * 4);
        if (*(char *)(iVar1 + 0x108) == '\0') {
          *(int *)(*(int *)(param_1 + 0x6c) + iVar3 * 4) = iVar1;
          iVar3 = iVar3 + 1;
        }
        else {
          bVar2 = true;
          FUN_00405fdc();
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(int *)(param_1 + 0x68) = iVar3;
    if (bVar2) {
      FUN_00609080(param_1);
      FUN_00609218(param_1);
    }
  }
  return;
}
