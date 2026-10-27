// rea decompile_all
// name: FUN_005d84c8
// address: 0x5d84c8
// body: available
// range: 0x5d84c8-0x5d8519 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d84c8(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  iVar2 = FUN_00513780(param_1,1);
  if (iVar2 != 0) {
    cVar1 = FUN_00405c98(iVar2,&PTR_LAB_0050eaf4);
    if ((cVar1 == '\0') || (*(char *)(iVar2 + 0x29e) == '\x01')) {
      if (*(int *)(*(int *)PTR_DAT_00782280 + 0x44) != 0) {
        uVar3 = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00782280 + 0x44) + 0x2b4);
      }
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x2b4);
    }
  }
  return uVar3;
}
