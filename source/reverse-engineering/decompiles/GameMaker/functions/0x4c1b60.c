// rea decompile_all
// name: FUN_004c1b60
// address: 0x4c1b60
// body: available
// range: 0x4c1b60-0x4c1ba2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1b60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  iVar4 = *(int *)(*(int *)(param_1 + 0x288) + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_0043b048(*(undefined4 *)(param_1 + 0x288),iVar3);
      cVar1 = FUN_00405c98(uVar2,&PTR_LAB_004a4a78);
      if (cVar1 != '\0') {
        FUN_004c1b04(param_1,iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}
