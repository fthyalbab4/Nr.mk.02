// rea decompile_all
// name: FUN_005f6bf4
// address: 0x5f6bf4
// body: available
// range: 0x5f6bf4-0x5f6c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f6bf4(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;

  if (param_2 == -1) {
    param_2 = -2;
  }
  cVar1 = FUN_005f58b0(&PTR_FUN_005f54dc);
  if (cVar1 != '\0') {
    if (param_2 == -2) {
      do {
        uVar2 = FUN_005f6b84(*(undefined4 *)(*(int *)PTR_DAT_00782954 + 0x38));
      } while ((char)uVar2 == '\0');
      return uVar2;
    }
    while (*(int *)(*(int *)PTR_DAT_00782954 + 0x38) < param_2) {
      uVar2 = FUN_005f6b84(*(int *)(*(int *)PTR_DAT_00782954 + 0x38));
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
      bVar3 = SBORROW4(param_2,*(int *)(*(int *)PTR_DAT_00782954 + 0x38));
      param_2 = param_2 - *(int *)(*(int *)PTR_DAT_00782954 + 0x38);
      if (bVar3) {
        FUN_00405944();
      }
    }
  }
  uVar2 = FUN_005f6b84(param_2);
  return uVar2;
}
